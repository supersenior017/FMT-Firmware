/****************************************************************************
 *
 *   Copyright (c) 2013-2021 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * @file FixedwingLandDetector.cpp
 *
 * @author Johan Jansen <jnsn.johan@gmail.com>
 * @author Lorenz Meier <lorenz@px4.io>
 * @author Julian Oes <julian@oes.ch>
 */

#include "FixedwingLandDetector.h"

FixedwingLandDetector::FixedwingLandDetector()
{
    // Use Trigger time when transitioning from in-air (false) to landed (true) / ground contact (true).
    _landed_hysteresis.set_hysteresis_time_from(false, LANDED_TRIGGER_TIME_US);
    _landed_hysteresis.set_hysteresis_time_from(true, FLYING_TRIGGER_TIME_US);
}

bool FixedwingLandDetector::_get_landed_state()
{
    // Only trigger flight conditions if we are armed.
    if (!_armed) {
        return true;
    }

    bool landDetected = false;

    if ((_nowUs - _vehicle_local_position.timeStampUs) < 1_s) {

        // Horizontal velocity complimentary filter.
        float val = 0.97f * _velocity_xy_filtered + 0.03f * sqrtf(_vehicle_local_position.vx * _vehicle_local_position.vx + _vehicle_local_position.vy * _vehicle_local_position.vy);

        _velocity_xy_filtered = val;

        // Vertical velocity complimentary filter.
        val = 0.99f * _velocity_z_filtered + 0.01f * fabsf(_vehicle_local_position.vz);

        _velocity_z_filtered = val;

        bool airspeed_invalid = false;

        // set _airspeed_filtered to 0 if airspeed data is invalid
        if (_nowUs - _airspeed_validated.timeStampUs > 1_s) {
            _airspeed_filtered = 0.0f;
            airspeed_invalid = true;

        } else {
            _airspeed_filtered = 0.95f * _airspeed_filtered + 0.05f * _airspeed_validated.true_airspeed_m_s;
        }

        // A leaking lowpass prevents biases from building up, but
        // gives a mostly correct response for short impulses.
        const float acc_hor = matrix::Vector2f(_acceleration).norm();
        _xy_accel_filtered = _xy_accel_filtered * 0.8f + acc_hor * 0.18f;

        // make thresholds tighter if airspeed is invalid
        const float vel_xy_max_threshold = airspeed_invalid ? 0.7f * _param_fw.vel_xy_max : _param_fw.vel_xy_max;
        const float vel_z_max_threshold = airspeed_invalid ? 0.7f * _param_fw.vel_z_max : _param_fw.vel_z_max;

        // Crude land detector for fixedwing.
        landDetected = _airspeed_filtered < _param_fw.airspd
            && _velocity_xy_filtered < vel_xy_max_threshold
            && _velocity_z_filtered < vel_z_max_threshold
            && _xy_accel_filtered < _param_fw.xyaccel_max;

    } else {
        // Control state topic has timed out and we need to assume we're landed.
        landDetected = true;
    }

    return landDetected;
}