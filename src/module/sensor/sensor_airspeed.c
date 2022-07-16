/******************************************************************************
 * Copyright 2022 The Firmament Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/
#include "module/sensor/sensor_airspeed.h"
#include "hal/airspeed/airspeed.h"

static float diff_press_offset;

/**
 * @brief Measure airspeed data
 * 
 * @param airspeed_dev Airspeed sensor device
 * @param airspeed_report Airspeed data buffer
 * @return fmt_err_t FMT_EOK for success
 */
fmt_err_t sensor_airspeed_measure(sensor_airspeed_t airspeed_dev, airspeed_data_t* airspeed_report)
{
    rt_size_t r_size;
    float diff_pressure_pa;

    RT_ASSERT(airspeed_dev != NULL);

    airspeed_report->timestamp_ms = systime_now_ms();

    r_size = rt_device_read(airspeed_dev->dev, 0, &diff_pressure_pa, 8);

    airspeed_report->diff_pressure_pa = diff_pressure_pa - diff_press_offset;

    return r_size == 8 ? FMT_EOK : FMT_ERROR;
}

/**
 * @brief Initialize airspeed sensor device
 * 
 * @param baro_dev_name Airspeed device name
 * @return sensor_airspeed_t Airspeed sensor device
 */
sensor_airspeed_t sensor_airspeed_init(const char* airspeed_dev_name)
{
    sensor_airspeed_t airspeed_dev = (sensor_airspeed_t)rt_malloc(sizeof(struct sensor_airspeed));
    RT_ASSERT(airspeed_dev != NULL);

    /* find airspeed device */
    airspeed_dev->dev = rt_device_find(airspeed_dev_name);
    RT_ASSERT(airspeed_dev->dev != NULL);

    /* open device */
    RT_CHECK(rt_device_open(airspeed_dev->dev, RT_DEVICE_OFLAG_RDWR));

    FMT_CHECK(param_link_variable(PARAM_GET(CALIB, DIFF_PRESS_OFFSET), &diff_press_offset));

    return airspeed_dev;
}