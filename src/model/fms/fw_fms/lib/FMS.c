/*
 * File: FMS.c
 *
 * Code generated for Simulink model 'FMS'.
 *
 * Model version                  : 1.1779
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Jul 17 14:34:43 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FMS.h"
#include "FMS_private.h"

/* Named constants for Chart: '<S252>/Motion Status' */
#define FMS_IN_Brake                   ((uint8_T)1U)
#define FMS_IN_Hold                    ((uint8_T)2U)
#define FMS_IN_Move                    ((uint8_T)3U)
#define FMS_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)

/* Named constants for Chart: '<S262>/Motion State' */
#define FMS_IN_Brake_b                 ((uint8_T)1U)
#define FMS_IN_Hold_m                  ((uint8_T)2U)
#define FMS_IN_Move_c                  ((uint8_T)3U)
#define FMS_IN_NO_ACTIVE_CHILD_d       ((uint8_T)0U)

/* Named constants for Chart: '<S38>/Motion Status' */
#define FMS_IN_Brake_h                 ((uint8_T)1U)
#define FMS_IN_Hold_n                  ((uint8_T)2U)
#define FMS_IN_Move_f                  ((uint8_T)3U)
#define FMS_IN_NO_ACTIVE_CHILD_n       ((uint8_T)0U)

/* Named constants for Chart: '<S196>/Motion State' */
#define FMS_IN_Brake_o                 ((uint8_T)1U)
#define FMS_IN_Hold_d                  ((uint8_T)2U)
#define FMS_IN_Move_n                  ((uint8_T)3U)
#define FMS_IN_NO_ACTIVE_CHILD_h       ((uint8_T)0U)

/* Named constants for Chart: '<Root>/FMS State Machine' */
#define FMS_IN_Acro                    ((uint8_T)1U)
#define FMS_IN_Altitude                ((uint8_T)2U)
#define FMS_IN_Arm                     ((uint8_T)1U)
#define FMS_IN_Assist                  ((uint8_T)1U)
#define FMS_IN_Auto                    ((uint8_T)2U)
#define FMS_IN_Check                   ((uint8_T)1U)
#define FMS_IN_Disarm                  ((uint8_T)2U)
#define FMS_IN_Disarming               ((uint8_T)1U)
#define FMS_IN_Hold_h                  ((uint8_T)1U)
#define FMS_IN_Idle                    ((uint8_T)3U)
#define FMS_IN_InValidManualMode       ((uint8_T)1U)
#define FMS_IN_InvalidArmMode          ((uint8_T)3U)
#define FMS_IN_InvalidAssistMode       ((uint8_T)3U)
#define FMS_IN_InvalidAutoMode         ((uint8_T)1U)
#define FMS_IN_Land                    ((uint8_T)2U)
#define FMS_IN_Listen                  ((uint8_T)2U)
#define FMS_IN_Loiter                  ((uint8_T)3U)
#define FMS_IN_Manual                  ((uint8_T)4U)
#define FMS_IN_Manual_g                ((uint8_T)2U)
#define FMS_IN_Mission                 ((uint8_T)2U)
#define FMS_IN_NextWP                  ((uint8_T)4U)
#define FMS_IN_Offboard                ((uint8_T)3U)
#define FMS_IN_Position                ((uint8_T)4U)
#define FMS_IN_Return                  ((uint8_T)3U)
#define FMS_IN_Return_h                ((uint8_T)5U)
#define FMS_IN_Send                    ((uint8_T)3U)
#define FMS_IN_Stabilize               ((uint8_T)5U)
#define FMS_IN_Standby                 ((uint8_T)3U)
#define FMS_IN_SubMode                 ((uint8_T)5U)
#define FMS_IN_Takeoff                 ((uint8_T)4U)
#define FMS_IN_Takeoff_d               ((uint8_T)6U)
#define FMS_IN_Waypoint                ((uint8_T)7U)
#define FMS_event_DisarmEvent          (0)

/* Named constants for Chart: '<Root>/SafeMode' */
#define FMS_IN_Manual_e                ((uint8_T)3U)
#define FMS_IN_Mission_g               ((uint8_T)4U)
#define FMS_IN_Other                   ((uint8_T)5U)
#define FMS_IN_Position_f              ((uint8_T)6U)
#define FMS_IN_Stabilize_j             ((uint8_T)7U)

const FMS_Out_Bus FMS_rtZFMS_Out_Bus = {
  0U,                                  /* timestamp */
  0.0F,                                /* p_cmd */
  0.0F,                                /* q_cmd */
  0.0F,                                /* r_cmd */
  0.0F,                                /* phi_cmd */
  0.0F,                                /* theta_cmd */
  0.0F,                                /* psi_rate_cmd */
  0.0F,                                /* u_cmd */
  0.0F,                                /* v_cmd */
  0.0F,                                /* w_cmd */
  0U,                                  /* throttle_cmd */

  {
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  ,                                    /* actuator_cmd */
  0U,                                  /* status */
  0U,                                  /* state */
  0U,                                  /* ctrl_mode */
  0U,                                  /* reset */
  0U,                                  /* mode */
  0U,                                  /* reserved1 */
  0U,                                  /* wp_consume */
  0U                                   /* wp_current */
} ;                                    /* FMS_Out_Bus ground */

/* Exported block parameters */
struct_MAdQlsLl3QGNtHbmATxiyG FMS_PARAM = {
  0.15F,
  0.15F,
  0.1F,
  0.1F,
  0.95F,
  1.0F,
  5.0F,
  2.5F,
  2.5F,
  1.04719758F,
  0.52359879F,
  10.0F,
  13.0F,
  1.5F,
  0.5F,
  0.95F,
  5.0F,
  0.52359879F,
  0.52359879F,
  20.0F,

  { 1000.0F, 1000.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },

  { 1000.0F, 1000.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F }
} ;                                    /* Variable: FMS_PARAM
                                        * Referenced by:
                                        *   '<Root>/ACCEPT_R'
                                        *   '<S302>/Constant'
                                        *   '<S19>/Constant6'
                                        *   '<S20>/Constant6'
                                        *   '<S179>/L1'
                                        *   '<S33>/Gain'
                                        *   '<S35>/Gain'
                                        *   '<S36>/Gain1'
                                        *   '<S54>/Gain'
                                        *   '<S56>/Gain1'
                                        *   '<S87>/Gain'
                                        *   '<S87>/Gain1'
                                        *   '<S88>/Gain1'
                                        *   '<S103>/L1'
                                        *   '<S220>/Saturation1'
                                        *   '<S293>/Gain2'
                                        *   '<S293>/Saturation1'
                                        *   '<S37>/Saturation1'
                                        *   '<S48>/Dead Zone'
                                        *   '<S48>/Gain'
                                        *   '<S51>/Dead Zone'
                                        *   '<S51>/Gain'
                                        *   '<S58>/Saturation1'
                                        *   '<S69>/Dead Zone'
                                        *   '<S69>/Gain'
                                        *   '<S72>/Saturation1'
                                        *   '<S90>/Dead Zone'
                                        *   '<S90>/Gain'
                                        *   '<S91>/Dead Zone'
                                        *   '<S91>/Gain'
                                        *   '<S96>/Dead Zone'
                                        *   '<S96>/Gain'
                                        *   '<S185>/Saturation1'
                                        *   '<S195>/Saturation'
                                        *   '<S207>/Saturation1'
                                        *   '<S221>/Gain2'
                                        *   '<S243>/vel'
                                        *   '<S243>/Saturation'
                                        *   '<S243>/Switch'
                                        *   '<S40>/Gain2'
                                        *   '<S41>/Gain1'
                                        *   '<S46>/Constant'
                                        *   '<S61>/Gain2'
                                        *   '<S62>/Gain1'
                                        *   '<S67>/Constant'
                                        *   '<S75>/Gain2'
                                        *   '<S76>/Gain6'
                                        *   '<S83>/Constant'
                                        *   '<S122>/Gain'
                                        *   '<S122>/Saturation1'
                                        *   '<S123>/vel'
                                        *   '<S123>/Saturation'
                                        *   '<S123>/Switch'
                                        *   '<S188>/Gain2'
                                        *   '<S189>/Gain1'
                                        *   '<S198>/Gain2'
                                        *   '<S199>/Gain1'
                                        *   '<S210>/Gain2'
                                        *   '<S211>/Gain6'
                                        *   '<S230>/Gain2'
                                        *   '<S230>/Saturation'
                                        *   '<S231>/Integrator'
                                        *   '<S43>/Dead Zone'
                                        *   '<S43>/Gain'
                                        *   '<S64>/Dead Zone'
                                        *   '<S64>/Gain'
                                        *   '<S80>/Dead Zone'
                                        *   '<S80>/Gain'
                                        *   '<S109>/Gain2'
                                        *   '<S109>/Saturation'
                                        *   '<S110>/Integrator'
                                        *   '<S191>/Dead Zone'
                                        *   '<S191>/Gain'
                                        *   '<S203>/Dead Zone'
                                        *   '<S203>/Gain'
                                        *   '<S215>/Dead Zone'
                                        *   '<S215>/Gain'
                                        *   '<S216>/Dead Zone'
                                        *   '<S216>/Gain'
                                        *   '<S251>/Saturation1'
                                        *   '<S261>/Saturation1'
                                        *   '<S134>/Saturation1'
                                        *   '<S144>/Saturation1'
                                        *   '<S254>/Gain2'
                                        *   '<S255>/Gain1'
                                        *   '<S264>/Gain2'
                                        *   '<S265>/Gain6'
                                        *   '<S137>/Gain2'
                                        *   '<S138>/Gain1'
                                        *   '<S147>/Gain2'
                                        *   '<S148>/Gain6'
                                        *   '<S257>/Dead Zone'
                                        *   '<S257>/Gain'
                                        *   '<S269>/Dead Zone'
                                        *   '<S269>/Gain'
                                        *   '<S270>/Dead Zone'
                                        *   '<S270>/Gain'
                                        *   '<S140>/Dead Zone'
                                        *   '<S140>/Gain'
                                        *   '<S152>/Dead Zone'
                                        *   '<S152>/Gain'
                                        *   '<S153>/Dead Zone'
                                        *   '<S153>/Gain'
                                        */

struct_i6HyuFQRjfkj8sSCv2bg5D FMS_EXPORT = {
  4U,

  { 70, 87, 32, 70, 77, 83, 32, 118, 48, 46, 48, 46, 49, 0 }
} ;                                    /* Variable: FMS_EXPORT
                                        * Referenced by:
                                        *   '<S5>/Constant1'
                                        *   '<S300>/Constant'
                                        */

/* Block signals (default storage) */
B_FMS_T FMS_B;

/* Block states (default storage) */
DW_FMS_T FMS_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_FMS_T FMS_PrevZCX;

/* External inputs (root inport signals with default storage) */
ExtU_FMS_T FMS_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FMS_T FMS_Y;

/* Real-time model */
RT_MODEL_FMS_T FMS_M_;
RT_MODEL_FMS_T *const FMS_M = &FMS_M_;

/* Forward declaration for local functions */
static void FMS_sf_msg_send_M(void);
static boolean_T FMS_CheckCmdValid(FMS_Cmd cmd_in, PilotMode mode_in, uint32_T
  ins_flag);
static boolean_T FMS_BottomRight(real32_T pilot_cmd_stick_yaw, real32_T
  pilot_cmd_stick_throttle);
static boolean_T FMS_BottomLeft(real32_T pilot_cmd_stick_yaw, real32_T
  pilot_cmd_stick_throttle);
static boolean_T FMS_sf_msg_pop_M(void);
static real32_T FMS_norm(const real32_T x[2]);
static void FMS_exit_internal_Auto(void);
static real_T FMS_getArmMode(PilotMode pilotMode);
static void FMS_enter_internal_Arm(void);
static void FMS_SubMode(void);
static void FMS_exit_internal_Arm(void);
static void FMS_Arm(void);
static real_T FMS_ManualArmEvent(real32_T pilot_cmd_stick_throttle, uint32_T
  pilot_cmd_mode);
static void FMS_Vehicle(void);
static void FMS_c11_FMS(void);
static void FMS_sf_msg_discard_M(void);
static void initialize_msg_local_queues_for(void);

/*
 * System initialize for action system:
 *    '<S251>/Hold Control'
 *    '<S185>/Hold Control'
 *    '<S134>/Hold Control'
 *    '<S37>/Hold Control'
 *    '<S58>/Hold Control'
 */
void FMS_HoldControl_Init(DW_HoldControl_FMS_T *localDW)
{
  /* InitializeConditions for Delay: '<S254>/Delay' */
  localDW->icLoad = 1U;
}

/*
 * System reset for action system:
 *    '<S251>/Hold Control'
 *    '<S185>/Hold Control'
 *    '<S134>/Hold Control'
 *    '<S37>/Hold Control'
 *    '<S58>/Hold Control'
 */
void FMS_HoldControl_Reset(DW_HoldControl_FMS_T *localDW)
{
  /* InitializeConditions for Delay: '<S254>/Delay' */
  localDW->icLoad = 1U;
}

/*
 * Output and update for action system:
 *    '<S251>/Hold Control'
 *    '<S185>/Hold Control'
 *    '<S134>/Hold Control'
 *    '<S37>/Hold Control'
 *    '<S58>/Hold Control'
 */
void FMS_HoldControl(real32_T rtu_FMS_In, real32_T *rty_w_cmd_mPs,
                     DW_HoldControl_FMS_T *localDW)
{
  /* Delay: '<S254>/Delay' incorporates:
   *  Gain: '<S256>/Gain'
   */
  if (localDW->icLoad != 0) {
    localDW->Delay_DSTATE = -rtu_FMS_In;
  }

  /* Gain: '<S254>/Gain2' incorporates:
   *  Delay: '<S254>/Delay'
   *  Gain: '<S256>/Gain'
   *  Sum: '<S254>/Sum'
   */
  *rty_w_cmd_mPs = (localDW->Delay_DSTATE - (-rtu_FMS_In)) * FMS_PARAM.Z_P;

  /* Update for Delay: '<S254>/Delay' */
  localDW->icLoad = 0U;
}

/*
 * Output and update for action system:
 *    '<S251>/Brake Control'
 *    '<S185>/Brake Control'
 *    '<S195>/Brake Control'
 *    '<S134>/Brake Control'
 *    '<S37>/Brake Control'
 *    '<S58>/Brake Control'
 */
void FMS_BrakeControl(real32_T *rty_psi_rate_cmd_radPs)
{
  /* SignalConversion: '<S253>/OutportBuffer_InsertedFor_psi_rate_cmd_radPs_at_inport_0' incorporates:
   *  Constant: '<S253>/Brake Speed'
   */
  *rty_psi_rate_cmd_radPs = 0.0F;
}

/*
 * System initialize for action system:
 *    '<S251>/Move Control'
 *    '<S185>/Move Control'
 *    '<S134>/Move Control'
 */
void FMS_MoveControl_Init(DW_MoveControl_FMS_T *localDW)
{
  /* InitializeConditions for DiscreteIntegrator: '<S258>/Integrator1' */
  localDW->Integrator1_DSTATE = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S258>/Integrator' */
  localDW->Integrator_DSTATE = 0.0F;
}

/*
 * System reset for action system:
 *    '<S251>/Move Control'
 *    '<S185>/Move Control'
 *    '<S134>/Move Control'
 */
void FMS_MoveControl_Reset(DW_MoveControl_FMS_T *localDW)
{
  /* InitializeConditions for DiscreteIntegrator: '<S258>/Integrator1' */
  localDW->Integrator1_DSTATE = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S258>/Integrator' */
  localDW->Integrator_DSTATE = 0.0F;
}

/*
 * Output and update for action system:
 *    '<S251>/Move Control'
 *    '<S185>/Move Control'
 *    '<S134>/Move Control'
 */
void FMS_MoveControl(real32_T rtu_FMS_In, real32_T *rty_w_cmd_mPs, const
                     ConstB_MoveControl_FMS_T *localC, DW_MoveControl_FMS_T
                     *localDW)
{
  real32_T rtb_Add3_c;
  real32_T rtb_Subtract3_dn;
  real32_T rtb_a_hr;
  real32_T rtb_Add4_g;
  real32_T rtb_a_ba;

  /* Product: '<S259>/Multiply1' incorporates:
   *  Constant: '<S259>/const1'
   *  DiscreteIntegrator: '<S258>/Integrator'
   */
  rtb_Add3_c = localDW->Integrator_DSTATE * 0.05F;

  /* DeadZone: '<S257>/Dead Zone' */
  if (rtu_FMS_In > FMS_PARAM.THROTTLE_DZ) {
    rtb_a_hr = rtu_FMS_In - FMS_PARAM.THROTTLE_DZ;
  } else if (rtu_FMS_In >= -FMS_PARAM.THROTTLE_DZ) {
    rtb_a_hr = 0.0F;
  } else {
    rtb_a_hr = rtu_FMS_In - (-FMS_PARAM.THROTTLE_DZ);
  }

  /* End of DeadZone: '<S257>/Dead Zone' */

  /* Sum: '<S259>/Add' incorporates:
   *  DiscreteIntegrator: '<S258>/Integrator1'
   *  Gain: '<S255>/Gain1'
   *  Gain: '<S257>/Gain'
   *  Sum: '<S258>/Subtract'
   */
  rtb_Subtract3_dn = (localDW->Integrator1_DSTATE - 1.0F / (1.0F -
    FMS_PARAM.THROTTLE_DZ) * rtb_a_hr * -FMS_PARAM.VEL_Z_LIM) + rtb_Add3_c;

  /* Signum: '<S259>/Sign' */
  if (rtb_Subtract3_dn < 0.0F) {
    rtb_a_hr = -1.0F;
  } else if (rtb_Subtract3_dn > 0.0F) {
    rtb_a_hr = 1.0F;
  } else {
    rtb_a_hr = rtb_Subtract3_dn;
  }

  /* End of Signum: '<S259>/Sign' */

  /* Sum: '<S259>/Add2' incorporates:
   *  Abs: '<S259>/Abs'
   *  Gain: '<S259>/Gain'
   *  Gain: '<S259>/Gain1'
   *  Product: '<S259>/Multiply2'
   *  Product: '<S259>/Multiply3'
   *  Sqrt: '<S259>/Sqrt'
   *  Sum: '<S259>/Add1'
   *  Sum: '<S259>/Subtract'
   */
  rtb_a_hr = (sqrtf((8.0F * fabsf(rtb_Subtract3_dn) + localC->d) * localC->d) -
              localC->d) * 0.5F * rtb_a_hr + rtb_Add3_c;

  /* Sum: '<S259>/Add4' */
  rtb_Add4_g = (rtb_Subtract3_dn - rtb_a_hr) + rtb_Add3_c;

  /* Sum: '<S259>/Add3' */
  rtb_Add3_c = rtb_Subtract3_dn + localC->d;

  /* Sum: '<S259>/Subtract1' */
  rtb_Subtract3_dn -= localC->d;

  /* Signum: '<S259>/Sign1' */
  if (rtb_Add3_c < 0.0F) {
    rtb_Add3_c = -1.0F;
  } else {
    if (rtb_Add3_c > 0.0F) {
      rtb_Add3_c = 1.0F;
    }
  }

  /* End of Signum: '<S259>/Sign1' */

  /* Signum: '<S259>/Sign2' */
  if (rtb_Subtract3_dn < 0.0F) {
    rtb_Subtract3_dn = -1.0F;
  } else {
    if (rtb_Subtract3_dn > 0.0F) {
      rtb_Subtract3_dn = 1.0F;
    }
  }

  /* End of Signum: '<S259>/Sign2' */

  /* Sum: '<S259>/Add5' incorporates:
   *  Gain: '<S259>/Gain2'
   *  Product: '<S259>/Multiply4'
   *  Sum: '<S259>/Subtract2'
   */
  rtb_a_hr += (rtb_Add3_c - rtb_Subtract3_dn) * 0.5F * rtb_Add4_g;

  /* SignalConversion: '<S255>/OutportBufferForw_cmd_mPs' incorporates:
   *  DiscreteIntegrator: '<S258>/Integrator1'
   */
  *rty_w_cmd_mPs = localDW->Integrator1_DSTATE;

  /* Update for DiscreteIntegrator: '<S258>/Integrator1' incorporates:
   *  DiscreteIntegrator: '<S258>/Integrator'
   */
  localDW->Integrator1_DSTATE += 0.004F * localDW->Integrator_DSTATE;

  /* Sum: '<S259>/Add6' */
  rtb_Add3_c = rtb_a_hr + localC->d;

  /* Sum: '<S259>/Subtract3' */
  rtb_Subtract3_dn = rtb_a_hr - localC->d;

  /* Signum: '<S259>/Sign5' */
  if (rtb_a_hr < 0.0F) {
    rtb_Add4_g = -1.0F;
  } else if (rtb_a_hr > 0.0F) {
    rtb_Add4_g = 1.0F;
  } else {
    rtb_Add4_g = rtb_a_hr;
  }

  /* End of Signum: '<S259>/Sign5' */

  /* Signum: '<S259>/Sign3' */
  if (rtb_Add3_c < 0.0F) {
    rtb_Add3_c = -1.0F;
  } else {
    if (rtb_Add3_c > 0.0F) {
      rtb_Add3_c = 1.0F;
    }
  }

  /* End of Signum: '<S259>/Sign3' */

  /* Signum: '<S259>/Sign4' */
  if (rtb_Subtract3_dn < 0.0F) {
    rtb_Subtract3_dn = -1.0F;
  } else {
    if (rtb_Subtract3_dn > 0.0F) {
      rtb_Subtract3_dn = 1.0F;
    }
  }

  /* End of Signum: '<S259>/Sign4' */

  /* Signum: '<S259>/Sign6' */
  if (rtb_a_hr < 0.0F) {
    rtb_a_ba = -1.0F;
  } else if (rtb_a_hr > 0.0F) {
    rtb_a_ba = 1.0F;
  } else {
    rtb_a_ba = rtb_a_hr;
  }

  /* End of Signum: '<S259>/Sign6' */

  /* Update for DiscreteIntegrator: '<S258>/Integrator' incorporates:
   *  Constant: '<S259>/const'
   *  Gain: '<S259>/Gain3'
   *  Product: '<S259>/Divide'
   *  Product: '<S259>/Multiply5'
   *  Product: '<S259>/Multiply6'
   *  Sum: '<S259>/Subtract4'
   *  Sum: '<S259>/Subtract5'
   *  Sum: '<S259>/Subtract6'
   */
  localDW->Integrator_DSTATE += ((rtb_a_hr / localC->d - rtb_Add4_g) *
    localC->Gain4 * ((rtb_Add3_c - rtb_Subtract3_dn) * 0.5F) - rtb_a_ba *
    78.448F) * 0.004F;
}

/*
 * System initialize for atomic system:
 *    '<S252>/Motion Status'
 *    '<S186>/Motion Status'
 *    '<S135>/Motion Status'
 */
void FMS_MotionStatus_Init(DW_MotionStatus_FMS_T *localDW)
{
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c1_FMS = 0U;
  localDW->is_c1_FMS = FMS_IN_NO_ACTIVE_CHILD;
}

/*
 * System reset for atomic system:
 *    '<S252>/Motion Status'
 *    '<S186>/Motion Status'
 *    '<S135>/Motion Status'
 */
void FMS_MotionStatus_Reset(DW_MotionStatus_FMS_T *localDW)
{
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c1_FMS = 0U;
  localDW->is_c1_FMS = FMS_IN_NO_ACTIVE_CHILD;
}

/*
 * Output and update for atomic system:
 *    '<S252>/Motion Status'
 *    '<S186>/Motion Status'
 *    '<S135>/Motion Status'
 */
void FMS_MotionStatus(real32_T rtu_motion_req, real32_T rtu_speed, MotionState
                      *rty_state, DW_MotionStatus_FMS_T *localDW)
{
  /* Chart: '<S252>/Motion Status' */
  if (localDW->temporalCounter_i1 < 511U) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c1_FMS == 0U) {
    localDW->is_active_c1_FMS = 1U;
    localDW->is_c1_FMS = FMS_IN_Move;
    *rty_state = MotionState_Move;
  } else {
    switch (localDW->is_c1_FMS) {
     case FMS_IN_Brake:
      *rty_state = MotionState_Brake;
      if ((rtu_speed <= 0.15) || (localDW->temporalCounter_i1 >= 375U)) {
        localDW->is_c1_FMS = FMS_IN_Hold;
        *rty_state = MotionState_Hold;
      } else {
        if (rtu_motion_req == 1.0F) {
          localDW->is_c1_FMS = FMS_IN_Move;
          *rty_state = MotionState_Move;
        }
      }
      break;

     case FMS_IN_Hold:
      *rty_state = MotionState_Hold;
      if (rtu_motion_req == 1.0F) {
        localDW->is_c1_FMS = FMS_IN_Move;
        *rty_state = MotionState_Move;
      }
      break;

     default:
      *rty_state = MotionState_Move;
      if (rtu_motion_req == 0.0F) {
        localDW->is_c1_FMS = FMS_IN_Brake;
        localDW->temporalCounter_i1 = 0U;
        *rty_state = MotionState_Brake;
      }
      break;
    }
  }

  /* End of Chart: '<S252>/Motion Status' */
}

/*
 * System initialize for action system:
 *    '<S261>/Hold Control'
 *    '<S207>/Hold Control'
 *    '<S144>/Hold Control'
 */
void FMS_HoldControl_b_Init(DW_HoldControl_FMS_l_T *localDW)
{
  /* InitializeConditions for Delay: '<S264>/Delay' */
  localDW->icLoad = 1U;
}

/*
 * System reset for action system:
 *    '<S261>/Hold Control'
 *    '<S207>/Hold Control'
 *    '<S144>/Hold Control'
 */
void FMS_HoldControl_l_Reset(DW_HoldControl_FMS_l_T *localDW)
{
  /* InitializeConditions for Delay: '<S264>/Delay' */
  localDW->icLoad = 1U;
}

/*
 * Output and update for action system:
 *    '<S261>/Hold Control'
 *    '<S207>/Hold Control'
 *    '<S144>/Hold Control'
 */
void FMS_HoldControl_k(real32_T rtu_FMS_In, real32_T rtu_FMS_In_p, real32_T
  rtu_FMS_In_b, real32_T rty_uv_cmd_mPs[2], const ConstB_HoldControl_FMS_k_T
  *localC, DW_HoldControl_FMS_l_T *localDW)
{
  real32_T rtb_VectorConcatenate_k[9];
  real32_T rtb_VectorConcatenate_b[3];
  int32_T i;
  real32_T rtb_VectorConcatenate_b_tmp;
  real32_T rtb_VectorConcatenate_b_tmp_0;

  /* Delay: '<S264>/Delay' incorporates:
   *  SignalConversion: '<S264>/TmpSignal ConversionAtDelayInport2'
   */
  if (localDW->icLoad != 0) {
    localDW->Delay_DSTATE[0] = rtu_FMS_In;
    localDW->Delay_DSTATE[1] = rtu_FMS_In_p;
  }

  /* Trigonometry: '<S268>/Trigonometric Function1' incorporates:
   *  Gain: '<S267>/Gain'
   *  Trigonometry: '<S268>/Trigonometric Function3'
   */
  rtb_VectorConcatenate_b_tmp_0 = arm_cos_f32(-rtu_FMS_In_b);
  rtb_VectorConcatenate_k[0] = rtb_VectorConcatenate_b_tmp_0;

  /* Trigonometry: '<S268>/Trigonometric Function' incorporates:
   *  Gain: '<S267>/Gain'
   *  Trigonometry: '<S268>/Trigonometric Function2'
   */
  rtb_VectorConcatenate_b_tmp = arm_sin_f32(-rtu_FMS_In_b);
  rtb_VectorConcatenate_k[1] = rtb_VectorConcatenate_b_tmp;

  /* SignalConversion: '<S268>/ConcatBufferAtVector Concatenate1In3' incorporates:
   *  Constant: '<S268>/Constant3'
   */
  rtb_VectorConcatenate_k[2] = 0.0F;

  /* Gain: '<S268>/Gain' */
  rtb_VectorConcatenate_k[3] = -rtb_VectorConcatenate_b_tmp;

  /* Trigonometry: '<S268>/Trigonometric Function3' */
  rtb_VectorConcatenate_k[4] = rtb_VectorConcatenate_b_tmp_0;

  /* SignalConversion: '<S268>/ConcatBufferAtVector Concatenate2In3' incorporates:
   *  Constant: '<S268>/Constant4'
   */
  rtb_VectorConcatenate_k[5] = 0.0F;

  /* SignalConversion: '<S268>/ConcatBufferAtVector ConcatenateIn3' */
  rtb_VectorConcatenate_k[6] = localC->VectorConcatenate3[0];
  rtb_VectorConcatenate_k[7] = localC->VectorConcatenate3[1];
  rtb_VectorConcatenate_k[8] = localC->VectorConcatenate3[2];

  /* SignalConversion: '<S264>/TmpSignal ConversionAtMultiplyInport2' incorporates:
   *  Delay: '<S264>/Delay'
   *  SignalConversion: '<S264>/TmpSignal ConversionAtDelayInport2'
   *  Sum: '<S264>/Sum'
   */
  rtb_VectorConcatenate_b_tmp_0 = localDW->Delay_DSTATE[0] - rtu_FMS_In;
  rtb_VectorConcatenate_b_tmp = localDW->Delay_DSTATE[1] - rtu_FMS_In_p;

  /* Product: '<S264>/Multiply' incorporates:
   *  SignalConversion: '<S264>/TmpSignal ConversionAtMultiplyInport2'
   */
  for (i = 0; i < 3; i++) {
    rtb_VectorConcatenate_b[i] = rtb_VectorConcatenate_k[i + 3] *
      rtb_VectorConcatenate_b_tmp + rtb_VectorConcatenate_k[i] *
      rtb_VectorConcatenate_b_tmp_0;
  }

  /* End of Product: '<S264>/Multiply' */

  /* Gain: '<S264>/Gain2' */
  rty_uv_cmd_mPs[0] = FMS_PARAM.XY_P * rtb_VectorConcatenate_b[0];
  rty_uv_cmd_mPs[1] = FMS_PARAM.XY_P * rtb_VectorConcatenate_b[1];

  /* Update for Delay: '<S264>/Delay' */
  localDW->icLoad = 0U;
}

/*
 * Output and update for action system:
 *    '<S261>/Brake Control'
 *    '<S207>/Brake Control'
 *    '<S144>/Brake Control'
 */
void FMS_BrakeControl_f(real32_T rty_uv_cmd_mPs[2])
{
  /* SignalConversion: '<S263>/OutportBuffer_InsertedFor_uv_cmd_mPs_at_inport_0' */
  rty_uv_cmd_mPs[0] = 0.0F;
  rty_uv_cmd_mPs[1] = 0.0F;
}

/*
 * System initialize for action system:
 *    '<S261>/Move Control'
 *    '<S207>/Move Control'
 *    '<S144>/Move Control'
 */
void FMS_MoveControl_i_Init(DW_MoveControl_FMS_d_T *localDW)
{
  /* InitializeConditions for DiscreteIntegrator: '<S271>/Integrator1' */
  localDW->Integrator1_DSTATE[0] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S271>/Integrator' */
  localDW->Integrator_DSTATE[0] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S271>/Integrator1' */
  localDW->Integrator1_DSTATE[1] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S271>/Integrator' */
  localDW->Integrator_DSTATE[1] = 0.0F;
}

/*
 * System reset for action system:
 *    '<S261>/Move Control'
 *    '<S207>/Move Control'
 *    '<S144>/Move Control'
 */
void FMS_MoveControl_d_Reset(DW_MoveControl_FMS_d_T *localDW)
{
  /* InitializeConditions for DiscreteIntegrator: '<S271>/Integrator1' */
  localDW->Integrator1_DSTATE[0] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S271>/Integrator' */
  localDW->Integrator_DSTATE[0] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S271>/Integrator1' */
  localDW->Integrator1_DSTATE[1] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S271>/Integrator' */
  localDW->Integrator_DSTATE[1] = 0.0F;
}

/*
 * Output and update for action system:
 *    '<S261>/Move Control'
 *    '<S207>/Move Control'
 *    '<S144>/Move Control'
 */
void FMS_MoveControl_o(real32_T rtu_FMS_In, real32_T rtu_FMS_In_g, real32_T
  rty_uv_cmd_mPs[2], const ConstB_MoveControl_FMS_k_T *localC,
  DW_MoveControl_FMS_d_T *localDW)
{
  real32_T rtb_Subtract3_nv;
  real32_T rtb_Add3_e1_idx_0;
  real32_T rtb_Subtract3_h_idx_0;
  real32_T rtb_Add3_e1_idx_1;
  real32_T rtb_Subtract3_h_idx_1;
  real32_T u;
  real32_T rtb_Subtract3_h_idx_0_0;

  /* SignalConversion: '<S265>/OutportBufferForuv_cmd_mPs' incorporates:
   *  DiscreteIntegrator: '<S271>/Integrator1'
   */
  rty_uv_cmd_mPs[0] = localDW->Integrator1_DSTATE[0];

  /* Product: '<S272>/Multiply1' incorporates:
   *  Constant: '<S272>/const1'
   *  DiscreteIntegrator: '<S271>/Integrator'
   */
  rtb_Add3_e1_idx_0 = localDW->Integrator_DSTATE[0] * 0.05F;

  /* SignalConversion: '<S265>/OutportBufferForuv_cmd_mPs' incorporates:
   *  DiscreteIntegrator: '<S271>/Integrator1'
   */
  rty_uv_cmd_mPs[1] = localDW->Integrator1_DSTATE[1];

  /* Product: '<S272>/Multiply1' incorporates:
   *  Constant: '<S272>/const1'
   *  DiscreteIntegrator: '<S271>/Integrator'
   */
  rtb_Add3_e1_idx_1 = localDW->Integrator_DSTATE[1] * 0.05F;

  /* DeadZone: '<S269>/Dead Zone' */
  if (rtu_FMS_In > FMS_PARAM.PITCH_DZ) {
    rtb_Subtract3_h_idx_1 = rtu_FMS_In - FMS_PARAM.PITCH_DZ;
  } else if (rtu_FMS_In >= -FMS_PARAM.PITCH_DZ) {
    rtb_Subtract3_h_idx_1 = 0.0F;
  } else {
    rtb_Subtract3_h_idx_1 = rtu_FMS_In - (-FMS_PARAM.PITCH_DZ);
  }

  /* End of DeadZone: '<S269>/Dead Zone' */

  /* Sum: '<S272>/Add' incorporates:
   *  DiscreteIntegrator: '<S271>/Integrator1'
   *  Gain: '<S265>/Gain6'
   *  Gain: '<S269>/Gain'
   *  Sum: '<S271>/Subtract'
   */
  rtb_Subtract3_h_idx_0 = (localDW->Integrator1_DSTATE[0] - 1.0F / (1.0F -
    FMS_PARAM.PITCH_DZ) * rtb_Subtract3_h_idx_1 * FMS_PARAM.VEL_XY_LIM) +
    rtb_Add3_e1_idx_0;

  /* DeadZone: '<S270>/Dead Zone' */
  if (rtu_FMS_In_g > FMS_PARAM.ROLL_DZ) {
    rtb_Subtract3_h_idx_1 = rtu_FMS_In_g - FMS_PARAM.ROLL_DZ;
  } else if (rtu_FMS_In_g >= -FMS_PARAM.ROLL_DZ) {
    rtb_Subtract3_h_idx_1 = 0.0F;
  } else {
    rtb_Subtract3_h_idx_1 = rtu_FMS_In_g - (-FMS_PARAM.ROLL_DZ);
  }

  /* End of DeadZone: '<S270>/Dead Zone' */

  /* Sum: '<S272>/Add' incorporates:
   *  DiscreteIntegrator: '<S271>/Integrator1'
   *  Gain: '<S265>/Gain6'
   *  Gain: '<S270>/Gain'
   *  Sum: '<S271>/Subtract'
   */
  rtb_Subtract3_h_idx_1 = (localDW->Integrator1_DSTATE[1] - 1.0F / (1.0F -
    FMS_PARAM.ROLL_DZ) * rtb_Subtract3_h_idx_1 * FMS_PARAM.VEL_XY_LIM) +
    rtb_Add3_e1_idx_1;

  /* Signum: '<S272>/Sign' */
  if (rtb_Subtract3_h_idx_0 < 0.0F) {
    rtb_Subtract3_h_idx_0_0 = -1.0F;
  } else if (rtb_Subtract3_h_idx_0 > 0.0F) {
    rtb_Subtract3_h_idx_0_0 = 1.0F;
  } else {
    rtb_Subtract3_h_idx_0_0 = rtb_Subtract3_h_idx_0;
  }

  /* Sum: '<S272>/Add2' incorporates:
   *  Abs: '<S272>/Abs'
   *  Gain: '<S272>/Gain'
   *  Gain: '<S272>/Gain1'
   *  Product: '<S272>/Multiply2'
   *  Product: '<S272>/Multiply3'
   *  Signum: '<S272>/Sign'
   *  Sqrt: '<S272>/Sqrt'
   *  Sum: '<S272>/Add1'
   *  Sum: '<S272>/Subtract'
   */
  rtb_Subtract3_h_idx_0_0 = (sqrtf((8.0F * fabsf(rtb_Subtract3_h_idx_0) +
    localC->d) * localC->d) - localC->d) * 0.5F * rtb_Subtract3_h_idx_0_0 +
    rtb_Add3_e1_idx_0;

  /* Sum: '<S272>/Add3' incorporates:
   *  Signum: '<S272>/Sign'
   */
  u = rtb_Subtract3_h_idx_0 + localC->d;

  /* Sum: '<S272>/Subtract1' incorporates:
   *  Signum: '<S272>/Sign'
   */
  rtb_Subtract3_nv = rtb_Subtract3_h_idx_0 - localC->d;

  /* Signum: '<S272>/Sign1' */
  if (u < 0.0F) {
    u = -1.0F;
  } else {
    if (u > 0.0F) {
      u = 1.0F;
    }
  }

  /* Signum: '<S272>/Sign2' */
  if (rtb_Subtract3_nv < 0.0F) {
    rtb_Subtract3_nv = -1.0F;
  } else {
    if (rtb_Subtract3_nv > 0.0F) {
      rtb_Subtract3_nv = 1.0F;
    }
  }

  /* Sum: '<S272>/Add5' incorporates:
   *  Gain: '<S272>/Gain2'
   *  Product: '<S272>/Multiply4'
   *  Signum: '<S272>/Sign'
   *  Sum: '<S272>/Add2'
   *  Sum: '<S272>/Add4'
   *  Sum: '<S272>/Subtract2'
   */
  rtb_Subtract3_h_idx_0_0 += ((rtb_Subtract3_h_idx_0 - rtb_Subtract3_h_idx_0_0)
    + rtb_Add3_e1_idx_0) * ((u - rtb_Subtract3_nv) * 0.5F);

  /* Update for DiscreteIntegrator: '<S271>/Integrator1' incorporates:
   *  DiscreteIntegrator: '<S271>/Integrator'
   */
  localDW->Integrator1_DSTATE[0] += 0.004F * localDW->Integrator_DSTATE[0];

  /* Signum: '<S272>/Sign3' incorporates:
   *  Sum: '<S272>/Add6'
   */
  u = rtb_Subtract3_h_idx_0_0 + localC->d;

  /* Signum: '<S272>/Sign4' incorporates:
   *  Sum: '<S272>/Subtract3'
   */
  rtb_Add3_e1_idx_0 = rtb_Subtract3_h_idx_0_0 - localC->d;

  /* Signum: '<S272>/Sign5' */
  if (rtb_Subtract3_h_idx_0_0 < 0.0F) {
    rtb_Subtract3_h_idx_0 = -1.0F;
  } else if (rtb_Subtract3_h_idx_0_0 > 0.0F) {
    rtb_Subtract3_h_idx_0 = 1.0F;
  } else {
    rtb_Subtract3_h_idx_0 = rtb_Subtract3_h_idx_0_0;
  }

  /* Signum: '<S272>/Sign3' */
  if (u < 0.0F) {
    u = -1.0F;
  } else {
    if (u > 0.0F) {
      u = 1.0F;
    }
  }

  /* Signum: '<S272>/Sign4' */
  if (rtb_Add3_e1_idx_0 < 0.0F) {
    rtb_Add3_e1_idx_0 = -1.0F;
  } else {
    if (rtb_Add3_e1_idx_0 > 0.0F) {
      rtb_Add3_e1_idx_0 = 1.0F;
    }
  }

  /* Signum: '<S272>/Sign6' */
  if (rtb_Subtract3_h_idx_0_0 < 0.0F) {
    rtb_Subtract3_nv = -1.0F;
  } else if (rtb_Subtract3_h_idx_0_0 > 0.0F) {
    rtb_Subtract3_nv = 1.0F;
  } else {
    rtb_Subtract3_nv = rtb_Subtract3_h_idx_0_0;
  }

  /* Update for DiscreteIntegrator: '<S271>/Integrator' incorporates:
   *  Constant: '<S272>/const'
   *  Gain: '<S272>/Gain3'
   *  Product: '<S272>/Divide'
   *  Product: '<S272>/Multiply5'
   *  Product: '<S272>/Multiply6'
   *  Sum: '<S272>/Subtract4'
   *  Sum: '<S272>/Subtract5'
   *  Sum: '<S272>/Subtract6'
   */
  localDW->Integrator_DSTATE[0] += ((rtb_Subtract3_h_idx_0_0 / localC->d -
    rtb_Subtract3_h_idx_0) * localC->Gain4 * ((u - rtb_Add3_e1_idx_0) * 0.5F) -
    rtb_Subtract3_nv * 58.836F) * 0.004F;

  /* Signum: '<S272>/Sign' */
  if (rtb_Subtract3_h_idx_1 < 0.0F) {
    rtb_Add3_e1_idx_0 = -1.0F;
  } else if (rtb_Subtract3_h_idx_1 > 0.0F) {
    rtb_Add3_e1_idx_0 = 1.0F;
  } else {
    rtb_Add3_e1_idx_0 = rtb_Subtract3_h_idx_1;
  }

  /* Sum: '<S272>/Add2' incorporates:
   *  Abs: '<S272>/Abs'
   *  Gain: '<S272>/Gain'
   *  Gain: '<S272>/Gain1'
   *  Product: '<S272>/Multiply2'
   *  Product: '<S272>/Multiply3'
   *  Signum: '<S272>/Sign'
   *  Sqrt: '<S272>/Sqrt'
   *  Sum: '<S272>/Add1'
   *  Sum: '<S272>/Subtract'
   */
  rtb_Subtract3_h_idx_0_0 = (sqrtf((8.0F * fabsf(rtb_Subtract3_h_idx_1) +
    localC->d) * localC->d) - localC->d) * 0.5F * rtb_Add3_e1_idx_0 +
    rtb_Add3_e1_idx_1;

  /* Sum: '<S272>/Add3' incorporates:
   *  Signum: '<S272>/Sign'
   */
  u = rtb_Subtract3_h_idx_1 + localC->d;

  /* Sum: '<S272>/Subtract1' incorporates:
   *  Signum: '<S272>/Sign'
   */
  rtb_Subtract3_nv = rtb_Subtract3_h_idx_1 - localC->d;

  /* Signum: '<S272>/Sign1' */
  if (u < 0.0F) {
    u = -1.0F;
  } else {
    if (u > 0.0F) {
      u = 1.0F;
    }
  }

  /* Signum: '<S272>/Sign2' */
  if (rtb_Subtract3_nv < 0.0F) {
    rtb_Subtract3_nv = -1.0F;
  } else {
    if (rtb_Subtract3_nv > 0.0F) {
      rtb_Subtract3_nv = 1.0F;
    }
  }

  /* Sum: '<S272>/Add5' incorporates:
   *  Gain: '<S272>/Gain2'
   *  Product: '<S272>/Multiply4'
   *  Signum: '<S272>/Sign'
   *  Sum: '<S272>/Add2'
   *  Sum: '<S272>/Add4'
   *  Sum: '<S272>/Subtract2'
   */
  rtb_Subtract3_h_idx_0_0 += ((rtb_Subtract3_h_idx_1 - rtb_Subtract3_h_idx_0_0)
    + rtb_Add3_e1_idx_1) * ((u - rtb_Subtract3_nv) * 0.5F);

  /* Update for DiscreteIntegrator: '<S271>/Integrator1' incorporates:
   *  DiscreteIntegrator: '<S271>/Integrator'
   */
  localDW->Integrator1_DSTATE[1] += 0.004F * localDW->Integrator_DSTATE[1];

  /* Signum: '<S272>/Sign3' incorporates:
   *  Sum: '<S272>/Add6'
   */
  u = rtb_Subtract3_h_idx_0_0 + localC->d;

  /* Signum: '<S272>/Sign4' incorporates:
   *  Sum: '<S272>/Subtract3'
   */
  rtb_Add3_e1_idx_0 = rtb_Subtract3_h_idx_0_0 - localC->d;

  /* Signum: '<S272>/Sign5' */
  if (rtb_Subtract3_h_idx_0_0 < 0.0F) {
    rtb_Subtract3_h_idx_0 = -1.0F;
  } else if (rtb_Subtract3_h_idx_0_0 > 0.0F) {
    rtb_Subtract3_h_idx_0 = 1.0F;
  } else {
    rtb_Subtract3_h_idx_0 = rtb_Subtract3_h_idx_0_0;
  }

  /* Signum: '<S272>/Sign3' */
  if (u < 0.0F) {
    u = -1.0F;
  } else {
    if (u > 0.0F) {
      u = 1.0F;
    }
  }

  /* Signum: '<S272>/Sign4' */
  if (rtb_Add3_e1_idx_0 < 0.0F) {
    rtb_Add3_e1_idx_0 = -1.0F;
  } else {
    if (rtb_Add3_e1_idx_0 > 0.0F) {
      rtb_Add3_e1_idx_0 = 1.0F;
    }
  }

  /* Signum: '<S272>/Sign6' */
  if (rtb_Subtract3_h_idx_0_0 < 0.0F) {
    rtb_Subtract3_nv = -1.0F;
  } else if (rtb_Subtract3_h_idx_0_0 > 0.0F) {
    rtb_Subtract3_nv = 1.0F;
  } else {
    rtb_Subtract3_nv = rtb_Subtract3_h_idx_0_0;
  }

  /* Update for DiscreteIntegrator: '<S271>/Integrator' incorporates:
   *  Constant: '<S272>/const'
   *  Gain: '<S272>/Gain3'
   *  Product: '<S272>/Divide'
   *  Product: '<S272>/Multiply5'
   *  Product: '<S272>/Multiply6'
   *  Sum: '<S272>/Subtract4'
   *  Sum: '<S272>/Subtract5'
   *  Sum: '<S272>/Subtract6'
   */
  localDW->Integrator_DSTATE[1] += ((rtb_Subtract3_h_idx_0_0 / localC->d -
    rtb_Subtract3_h_idx_0) * localC->Gain4 * ((u - rtb_Add3_e1_idx_0) * 0.5F) -
    rtb_Subtract3_nv * 58.836F) * 0.004F;
}

/*
 * System initialize for atomic system:
 *    '<S262>/Motion State'
 *    '<S208>/Motion State'
 *    '<S145>/Motion State'
 */
void FMS_MotionState_Init(DW_MotionState_FMS_T *localDW)
{
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c2_FMS = 0U;
  localDW->is_c2_FMS = FMS_IN_NO_ACTIVE_CHILD_d;
}

/*
 * System reset for atomic system:
 *    '<S262>/Motion State'
 *    '<S208>/Motion State'
 *    '<S145>/Motion State'
 */
void FMS_MotionState_Reset(DW_MotionState_FMS_T *localDW)
{
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c2_FMS = 0U;
  localDW->is_c2_FMS = FMS_IN_NO_ACTIVE_CHILD_d;
}

/*
 * Output and update for atomic system:
 *    '<S262>/Motion State'
 *    '<S208>/Motion State'
 *    '<S145>/Motion State'
 */
void FMS_MotionState(real32_T rtu_motion_req, real32_T rtu_speed, MotionState
                     *rty_state, DW_MotionState_FMS_T *localDW)
{
  /* Chart: '<S262>/Motion State' */
  if (localDW->temporalCounter_i1 < 1023U) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c2_FMS == 0U) {
    localDW->is_active_c2_FMS = 1U;
    localDW->is_c2_FMS = FMS_IN_Move_c;
    *rty_state = MotionState_Move;
  } else {
    switch (localDW->is_c2_FMS) {
     case FMS_IN_Brake_b:
      *rty_state = MotionState_Brake;
      if ((rtu_speed <= 0.2) || (localDW->temporalCounter_i1 >= 625U)) {
        localDW->is_c2_FMS = FMS_IN_Hold_m;
        *rty_state = MotionState_Hold;
      } else {
        if (rtu_motion_req == 1.0F) {
          localDW->is_c2_FMS = FMS_IN_Move_c;
          *rty_state = MotionState_Move;
        }
      }
      break;

     case FMS_IN_Hold_m:
      *rty_state = MotionState_Hold;
      if (rtu_motion_req == 1.0F) {
        localDW->is_c2_FMS = FMS_IN_Move_c;
        *rty_state = MotionState_Move;
      }
      break;

     default:
      *rty_state = MotionState_Move;
      if (rtu_motion_req == 0.0F) {
        localDW->is_c2_FMS = FMS_IN_Brake_b;
        localDW->temporalCounter_i1 = 0U;
        *rty_state = MotionState_Brake;
      }
      break;
    }
  }

  /* End of Chart: '<S262>/Motion State' */
}

/*
 * Output and update for atomic system:
 *    '<S245>/NearbyRefWP'
 *    '<S125>/NearbyRefWP'
 */
void FMS_NearbyRefWP(const real32_T rtu_P2[2], real32_T rtu_P3, real32_T
                     rtu_P3_g, real32_T rtu_L1, real32_T rty_P[2], real32_T
                     *rty_d)
{
  real32_T P3P2_idx_0;
  real32_T P3P2_idx_1;

  /* SignalConversion: '<S276>/TmpSignal ConversionAt SFunction Inport2' */
  P3P2_idx_0 = rtu_P2[0] - rtu_P3;
  P3P2_idx_1 = rtu_P2[1] - rtu_P3_g;
  P3P2_idx_0 = sqrtf(P3P2_idx_0 * P3P2_idx_0 + P3P2_idx_1 * P3P2_idx_1);
  if (P3P2_idx_0 <= rtu_L1) {
    *rty_d = P3P2_idx_0;
    rty_P[0] = rtu_P2[0];
    rty_P[1] = rtu_P2[1];
  } else {
    *rty_d = -1.0F;
    rty_P[0] = 0.0F;
    rty_P[1] = 0.0F;
  }
}

/*
 * Output and update for action system:
 *    '<S24>/Unknown'
 *    '<S22>/Unknown'
 *    '<S21>/Unknown'
 *    '<S17>/Unknown'
 */
void FMS_Unknown(FMS_Out_Bus *rty_FMS_Out, const ConstB_Unknown_FMS_T *localC)
{
  int32_T i;

  /* BusAssignment: '<S181>/Bus Assignment' incorporates:
   *  Constant: '<S181>/Constant'
   *  Constant: '<S181>/Constant2'
   *  SignalConversion: '<S181>/TmpHiddenBufferAtBus AssignmentInport1'
   */
  *rty_FMS_Out = FMS_rtZFMS_Out_Bus;
  rty_FMS_Out->reset = 1U;
  rty_FMS_Out->status = localC->DataTypeConversion;
  rty_FMS_Out->state = localC->DataTypeConversion1;
  rty_FMS_Out->actuator_cmd[0] = 1000U;
  rty_FMS_Out->actuator_cmd[1] = 1000U;
  rty_FMS_Out->actuator_cmd[2] = 1000U;
  rty_FMS_Out->actuator_cmd[3] = 1000U;
  for (i = 0; i < 12; i++) {
    rty_FMS_Out->actuator_cmd[i + 4] = 0U;
  }

  /* End of BusAssignment: '<S181>/Bus Assignment' */
}

/*
 * System initialize for atomic system:
 *    '<S38>/Motion Status'
 *    '<S59>/Motion Status'
 */
void FMS_MotionStatus_o_Init(DW_MotionStatus_FMS_a_T *localDW)
{
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c17_FMS = 0U;
  localDW->is_c17_FMS = FMS_IN_NO_ACTIVE_CHILD_n;
}

/*
 * System reset for atomic system:
 *    '<S38>/Motion Status'
 *    '<S59>/Motion Status'
 */
void FMS_MotionStatus_n_Reset(DW_MotionStatus_FMS_a_T *localDW)
{
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c17_FMS = 0U;
  localDW->is_c17_FMS = FMS_IN_NO_ACTIVE_CHILD_n;
}

/*
 * Output and update for atomic system:
 *    '<S38>/Motion Status'
 *    '<S59>/Motion Status'
 */
void FMS_MotionStatus_b(boolean_T rtu_motion_req, real32_T rtu_speed,
  MotionState *rty_state, DW_MotionStatus_FMS_a_T *localDW)
{
  /* Chart: '<S38>/Motion Status' */
  if (localDW->temporalCounter_i1 < 511U) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c17_FMS == 0U) {
    localDW->is_active_c17_FMS = 1U;
    localDW->is_c17_FMS = FMS_IN_Move_f;
    *rty_state = MotionState_Move;
  } else {
    switch (localDW->is_c17_FMS) {
     case FMS_IN_Brake_h:
      *rty_state = MotionState_Brake;
      if ((rtu_speed <= 0.15) || (localDW->temporalCounter_i1 >= 375U)) {
        localDW->is_c17_FMS = FMS_IN_Hold_n;
        *rty_state = MotionState_Hold;
      } else {
        if (rtu_motion_req) {
          localDW->is_c17_FMS = FMS_IN_Move_f;
          *rty_state = MotionState_Move;
        }
      }
      break;

     case FMS_IN_Hold_n:
      *rty_state = MotionState_Hold;
      if (rtu_motion_req) {
        localDW->is_c17_FMS = FMS_IN_Move_f;
        *rty_state = MotionState_Move;
      }
      break;

     default:
      *rty_state = MotionState_Move;
      if (!rtu_motion_req) {
        localDW->is_c17_FMS = FMS_IN_Brake_h;
        localDW->temporalCounter_i1 = 0U;
        *rty_state = MotionState_Brake;
      }
      break;
    }
  }

  /* End of Chart: '<S38>/Motion Status' */
}

real_T rt_modd(real_T u0, real_T u1)
{
  real_T y;
  boolean_T yEq;
  real_T q;
  y = u0;
  if (u0 == 0.0) {
    y = 0.0;
  } else {
    if (u1 != 0.0) {
      y = fmod(u0, u1);
      yEq = (y == 0.0);
      if ((!yEq) && (u1 > floor(u1))) {
        q = fabs(u0 / u1);
        yEq = (fabs(q - floor(q + 0.5)) <= DBL_EPSILON * q);
      }

      if (yEq) {
        y = 0.0;
      } else {
        if ((u0 < 0.0) != (u1 < 0.0)) {
          y += u1;
        }
      }
    }
  }

  return y;
}

/* Output and update for function-call system: '<S3>/Vehicle.Arm.Auto.Mission.LLA2FLAT' */
void F_VehicleArmAutoMissionLLA2FLAT(const real_T rtu_lla[3], const real_T
  rtu_llo[2], real_T rtu_href, real_T rtu_psio, real32_T rty_pos[3], const
  ConstB_VehicleArmAutoMissionL_T *localC)
{
  real_T rtb_Sum2_m;
  real_T rtb_Gain_lq;
  real_T rtb_Sum3;
  real_T rtb_Sum_d;
  int32_T rtb_Compare_dy_0;
  real_T rtb_Sum_e_idx_0;

  /* Gain: '<S304>/deg2rad' */
  rtb_Sum_e_idx_0 = 0.017453292519943295 * rtu_llo[0];

  /* Trigonometry: '<S305>/Sin' */
  rtb_Sum2_m = sin(rtb_Sum_e_idx_0);

  /* Math: '<S305>/Square1' */
  rtb_Sum2_m *= rtb_Sum2_m;

  /* Product: '<S305>/Multiply1' incorporates:
   *  Product: '<S305>/Multiply'
   */
  rtb_Gain_lq = localC->ff * rtb_Sum2_m;

  /* Product: '<S305>/Divide' incorporates:
   *  Constant: '<S305>/Constant'
   *  Constant: '<S305>/R'
   *  Sqrt: '<S305>/Sqrt'
   *  Sum: '<S305>/Sum1'
   */
  rtb_Sum2_m = 6.378137E+6 / sqrt(1.0 - rtb_Gain_lq);

  /* Product: '<S305>/Product3' incorporates:
   *  Constant: '<S305>/Constant1'
   *  Product: '<S305>/Multiply1'
   *  Sum: '<S305>/Sum2'
   */
  rtb_Gain_lq = 1.0 / (1.0 - rtb_Gain_lq) * localC->Sum4 * rtb_Sum2_m;

  /* Product: '<S305>/Multiply2' incorporates:
   *  Trigonometry: '<S305>/Cos'
   */
  rtb_Sum2_m *= cos(rtb_Sum_e_idx_0);

  /* Sum: '<S304>/Sum' */
  rtb_Sum_e_idx_0 = rtu_lla[0] - rtu_llo[0];

  /* Abs: '<S309>/Abs' incorporates:
   *  Abs: '<S312>/Abs1'
   *  Switch: '<S309>/Switch1'
   */
  rtb_Sum_d = fabs(rtb_Sum_e_idx_0);

  /* Switch: '<S309>/Switch1' incorporates:
   *  Abs: '<S309>/Abs'
   *  Bias: '<S309>/Bias2'
   *  Bias: '<S309>/Bias3'
   *  Constant: '<S306>/Constant'
   *  Constant: '<S306>/Constant1'
   *  Constant: '<S311>/Constant'
   *  Gain: '<S309>/Gain1'
   *  Product: '<S309>/Multiply'
   *  RelationalOperator: '<S311>/Compare'
   *  Switch: '<S306>/Switch'
   */
  if (rtb_Sum_d > 90.0) {
    /* Switch: '<S312>/Switch1' incorporates:
     *  Bias: '<S312>/Bias2'
     *  Bias: '<S312>/Bias3'
     *  Constant: '<S312>/Constant'
     *  Constant: '<S313>/Constant'
     *  Math: '<S312>/Math Function'
     *  RelationalOperator: '<S313>/Compare'
     */
    if (rtb_Sum_d > 180.0) {
      rtb_Sum_e_idx_0 = rt_modd(rtb_Sum_e_idx_0 + 180.0, 360.0) + -180.0;
    }

    /* End of Switch: '<S312>/Switch1' */

    /* Signum: '<S309>/Sign' */
    if (rtb_Sum_e_idx_0 < 0.0) {
      rtb_Sum_e_idx_0 = -1.0;
    } else {
      if (rtb_Sum_e_idx_0 > 0.0) {
        rtb_Sum_e_idx_0 = 1.0;
      }
    }

    /* End of Signum: '<S309>/Sign' */
    rtb_Sum_e_idx_0 *= -(rtb_Sum_d + -90.0) + 90.0;
    rtb_Compare_dy_0 = 180;
  } else {
    rtb_Compare_dy_0 = 0;
  }

  /* Sum: '<S306>/Sum' incorporates:
   *  Sum: '<S304>/Sum'
   */
  rtb_Sum_d = (rtu_lla[1] - rtu_llo[1]) + (real_T)rtb_Compare_dy_0;

  /* Product: '<S304>/Multiply' incorporates:
   *  Gain: '<S304>/deg2rad1'
   */
  rtb_Sum_e_idx_0 = 0.017453292519943295 * rtb_Sum_e_idx_0 * rtb_Gain_lq;

  /* Switch: '<S308>/Switch1' incorporates:
   *  Abs: '<S308>/Abs1'
   *  Bias: '<S308>/Bias2'
   *  Bias: '<S308>/Bias3'
   *  Constant: '<S308>/Constant'
   *  Constant: '<S310>/Constant'
   *  Math: '<S308>/Math Function'
   *  RelationalOperator: '<S310>/Compare'
   */
  if (fabs(rtb_Sum_d) > 180.0) {
    rtb_Sum_d = rt_modd(rtb_Sum_d + 180.0, 360.0) + -180.0;
  }

  /* End of Switch: '<S308>/Switch1' */

  /* Product: '<S304>/Multiply' incorporates:
   *  Gain: '<S304>/deg2rad1'
   */
  rtb_Sum_d = 0.017453292519943295 * rtb_Sum_d * rtb_Sum2_m;

  /* Gain: '<S304>/deg2rad2' */
  rtb_Sum2_m = 0.017453292519943295 * rtu_psio;

  /* Trigonometry: '<S307>/SinCos' */
  rtb_Sum3 = sin(rtb_Sum2_m);
  rtb_Gain_lq = cos(rtb_Sum2_m);

  /* Sum: '<S307>/Sum2' incorporates:
   *  Product: '<S307>/Multiply1'
   *  Product: '<S307>/Multiply2'
   */
  rtb_Sum2_m = rtb_Sum_e_idx_0 * rtb_Gain_lq + rtb_Sum_d * rtb_Sum3;

  /* Product: '<S307>/Multiply3' */
  rtb_Sum3 *= rtb_Sum_e_idx_0;

  /* Product: '<S307>/Multiply4' */
  rtb_Gain_lq *= rtb_Sum_d;

  /* Sum: '<S307>/Sum3' */
  rtb_Sum3 = rtb_Gain_lq - rtb_Sum3;

  /* DataTypeConversion: '<S301>/Data Type Conversion' incorporates:
   *  Gain: '<S304>/Gain'
   *  Sum: '<S304>/Sum1'
   */
  rty_pos[0] = (real32_T)rtb_Sum2_m;
  rty_pos[1] = (real32_T)rtb_Sum3;
  rty_pos[2] = (real32_T)-(rtu_lla[2] + rtu_href);
}

int32_T FMS_emplace(Queue_FMS_Cmd *q, const FMS_Cmd *dataIn)
{
  int32_T isEmplaced;
  int32_T newTail;
  Msg_FMS_Cmd *msg;
  newTail = (q->fTail + 1) % q->fCapacity;
  if (q->fHead == newTail) {
    isEmplaced = 0;
  } else {
    q->fTail = newTail;
    msg = &q->fArray[newTail];
    msg->fData = *dataIn;
    if (q->fHead == -1) {
      q->fHead = q->fTail;
    }

    isEmplaced = 1;
  }

  return isEmplaced;
}

/* Function for Chart: '<Root>/FMS State Machine' */
static void FMS_sf_msg_send_M(void)
{
  FMS_emplace(&FMS_DW.Queue_FMS_Cmd_p, &FMS_DW.M_msgReservedData);
}

/* Function for Chart: '<Root>/FMS State Machine' */
static boolean_T FMS_CheckCmdValid(FMS_Cmd cmd_in, PilotMode mode_in, uint32_T
  ins_flag)
{
  boolean_T valid;
  valid = false;
  switch (cmd_in) {
   case FMS_Cmd_Takeoff:
   case FMS_Cmd_Land:
   case FMS_Cmd_Return:
   case FMS_Cmd_Pause:
    if (((ins_flag & 1U) != 0U) && ((ins_flag & 4U) != 0U) && ((ins_flag & 8U)
         != 0U) && ((ins_flag & 16U) != 0U) && ((ins_flag & 64U) != 0U) &&
        ((ins_flag & 128U) != 0U)) {
      valid = true;
    }
    break;

   case FMS_Cmd_PreArm:
    if (((ins_flag & 1U) == 0U) || ((ins_flag & 4U) == 0U) || ((ins_flag & 8U) ==
         0U)) {
    } else {
      switch (mode_in) {
       case PilotMode_Position:
       case PilotMode_Mission:
        if (((ins_flag & 16U) != 0U) && ((ins_flag & 64U) != 0U) && ((ins_flag &
              128U) != 0U)) {
          valid = true;
        }
        break;

       case PilotMode_Altitude:
        if ((ins_flag & 128U) != 0U) {
          valid = true;
        }
        break;

       case PilotMode_Stabilize:
        valid = true;
        break;
      }
    }
    break;

   case FMS_Cmd_Continue:
    if ((mode_in == PilotMode_Offboard) || (mode_in == PilotMode_Mission)) {
      valid = true;
    }
    break;

   case FMS_Cmd_Disarm:
    valid = true;
    break;
  }

  return valid;
}

/* Function for Chart: '<Root>/FMS State Machine' */
static boolean_T FMS_BottomRight(real32_T pilot_cmd_stick_yaw, real32_T
  pilot_cmd_stick_throttle)
{
  return (pilot_cmd_stick_throttle < -0.8) && (pilot_cmd_stick_yaw > 0.8);
}

/* Function for Chart: '<Root>/FMS State Machine' */
static boolean_T FMS_BottomLeft(real32_T pilot_cmd_stick_yaw, real32_T
  pilot_cmd_stick_throttle)
{
  return (pilot_cmd_stick_throttle < -0.8) && (pilot_cmd_stick_yaw < -0.8);
}

int32_T FMS_pop(Queue_FMS_Cmd *q, Msg_FMS_Cmd *elementOut)
{
  int32_T isPop;
  if (q->fHead == -1) {
    isPop = 0;
  } else {
    *elementOut = q->fArray[q->fHead];
    isPop = 1;
    if (q->fHead == q->fTail) {
      q->fHead = -1;
      q->fTail = -1;
    } else {
      q->fHead = (q->fHead + 1) % q->fCapacity;
    }
  }

  return isPop;
}

/* Function for Chart: '<Root>/FMS State Machine' */
static boolean_T FMS_sf_msg_pop_M(void)
{
  boolean_T isPresent;
  if (FMS_DW.M_isValid) {
    isPresent = true;
  } else {
    FMS_DW.M_msgHandle = FMS_pop(&FMS_DW.Queue_FMS_Cmd_p, &FMS_DW.Msg_FMS_Cmd_c
      [0]) != 0 ? (void *)&FMS_DW.Msg_FMS_Cmd_c[0] : NULL;
    if (FMS_DW.M_msgHandle != NULL) {
      FMS_DW.M_msgDataPtr = &((Msg_FMS_Cmd *)FMS_DW.M_msgHandle)->fData;
      isPresent = true;
      FMS_DW.M_msgReservedData = *(FMS_Cmd *)FMS_DW.M_msgDataPtr;
      FMS_DW.M_isValid = true;
    } else {
      isPresent = false;
      FMS_DW.M_isValid = false;
    }
  }

  return isPresent;
}

/* Function for Chart: '<Root>/FMS State Machine' */
static real32_T FMS_norm(const real32_T x[2])
{
  real32_T y;
  real32_T scale;
  real32_T absxk;
  real32_T t;
  scale = 1.29246971E-26F;
  absxk = fabsf(x[0]);
  if (absxk > 1.29246971E-26F) {
    y = 1.0F;
    scale = absxk;
  } else {
    t = absxk / 1.29246971E-26F;
    y = t * t;
  }

  absxk = fabsf(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0F;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * sqrtf(y);
}

/* Function for Chart: '<Root>/FMS State Machine' */
static void FMS_exit_internal_Auto(void)
{
  if (FMS_DW.is_Auto == FMS_IN_Mission) {
    FMS_DW.is_Mission = FMS_IN_NO_ACTIVE_CHILD_h;
    FMS_DW.is_Auto = FMS_IN_NO_ACTIVE_CHILD_h;
  } else {
    FMS_DW.is_Auto = FMS_IN_NO_ACTIVE_CHILD_h;
  }
}

/* Function for Chart: '<Root>/FMS State Machine' */
static real_T FMS_getArmMode(PilotMode pilotMode)
{
  real_T armMode;
  switch (pilotMode) {
   case PilotMode_Manual:
    armMode = 1.0;
    break;

   case PilotMode_Acro:
    armMode = 2.0;
    break;

   case PilotMode_Stabilize:
    armMode = 2.0;
    break;

   case PilotMode_Altitude:
    armMode = 2.0;
    break;

   case PilotMode_Position:
    armMode = 2.0;
    break;

   case PilotMode_Mission:
    armMode = 3.0;
    break;

   case PilotMode_Offboard:
    armMode = 3.0;
    break;

   default:
    armMode = 0.0;
    break;
  }

  return armMode;
}

/* Function for Chart: '<Root>/FMS State Machine' */
static void FMS_enter_internal_Arm(void)
{
  uint32_T qY;
  real_T tmp;
  tmp = FMS_getArmMode(FMS_B.target_mode);
  if (tmp == 3.0) {
    FMS_DW.is_Arm = FMS_IN_Auto;
    switch (FMS_B.target_mode) {
     case PilotMode_Offboard:
      FMS_DW.is_Auto = FMS_IN_Offboard;
      FMS_B.state = VehicleState_Offboard;
      break;

     case PilotMode_Mission:
      FMS_DW.is_Auto = FMS_IN_Mission;
      FMS_DW.llo[0] = FMS_B.BusConversion_InsertedFor_FMSSt.lat_0 *
        57.295779513082323;
      FMS_DW.llo[1] = FMS_B.BusConversion_InsertedFor_FMSSt.lon_0 *
        57.295779513082323;
      FMS_DW.is_Mission = FMS_IN_NextWP;

      /* Inport: '<Root>/Mission_Data' */
      if (FMS_B.wp_index <= FMS_U.Mission_Data.valid_items) {
        FMS_DW.nav_cmd = FMS_U.Mission_Data.command[FMS_B.wp_index - 1];
      } else {
        FMS_DW.nav_cmd = (uint16_T)NAV_Cmd_None;
        qY = FMS_B.wp_index - /*MW:OvSatOk*/ 1U;
        if (qY > FMS_B.wp_index) {
          qY = 0U;
        }

        FMS_B.wp_consume = (uint8_T)qY;
      }

      /* End of Inport: '<Root>/Mission_Data' */
      break;

     default:
      FMS_DW.is_Auto = FMS_IN_InvalidAutoMode;
      break;
    }
  } else if (tmp == 2.0) {
    FMS_DW.is_Arm = FMS_IN_Assist;
    switch (FMS_B.target_mode) {
     case PilotMode_Acro:
      FMS_DW.is_Assist = FMS_IN_Acro;
      FMS_B.state = VehicleState_Acro;
      break;

     case PilotMode_Stabilize:
      FMS_DW.is_Assist = FMS_IN_Stabilize;
      FMS_B.state = VehicleState_Stabilize;
      break;

     case PilotMode_Altitude:
      FMS_DW.is_Assist = FMS_IN_Altitude;
      FMS_B.state = VehicleState_Altitude;
      break;

     case PilotMode_Position:
      FMS_DW.is_Assist = FMS_IN_Position;
      FMS_B.state = VehicleState_Position;
      break;

     default:
      FMS_DW.is_Assist = FMS_IN_InvalidAssistMode;
      break;
    }
  } else if (tmp == 1.0) {
    FMS_DW.is_Arm = FMS_IN_Manual;
    if (FMS_B.target_mode == PilotMode_Manual) {
      FMS_DW.is_Manual = FMS_IN_Manual_g;
      FMS_B.state = VehicleState_Manual;
    } else {
      FMS_DW.is_Manual = FMS_IN_InValidManualMode;
    }
  } else {
    FMS_DW.is_Arm = FMS_IN_InvalidArmMode;
  }
}

/* Function for Chart: '<Root>/FMS State Machine' */
static void FMS_SubMode(void)
{
  boolean_T b_sf_internal_predicateOutput;
  real32_T y;
  real32_T scale;
  real32_T absxk;
  real32_T t;
  real_T tmp;
  uint32_T qY_tmp;
  FMS_B.stick_val[0] = FMS_DW.stick_val[0];
  FMS_B.stick_val[1] = FMS_DW.stick_val[1];
  FMS_B.stick_val[2] = FMS_DW.stick_val[2];
  FMS_B.stick_val[3] = FMS_DW.stick_val[3];
  FMS_B.pilot_cmd = FMS_B.BusConversion_InsertedFor_FMS_f;

  /* Outputs for Function Call SubSystem: '<S3>/Vehicle.StickMoved' */
  /* RelationalOperator: '<S314>/Compare' incorporates:
   *  Abs: '<S303>/Abs'
   *  Constant: '<S314>/Constant'
   *  MinMax: '<S303>/Max'
   *  Sum: '<S303>/Sum'
   */
  FMS_B.Compare = (fmax(fmax(fmax(fabs(FMS_B.stick_val[0] -
    FMS_B.pilot_cmd.stick_yaw), fabs(FMS_B.stick_val[1] -
    FMS_B.pilot_cmd.stick_throttle)), fabs(FMS_B.stick_val[2] -
    FMS_B.pilot_cmd.stick_roll)), fabs(FMS_B.stick_val[3] -
    FMS_B.pilot_cmd.stick_pitch)) >= 0.1);

  /* End of Outputs for SubSystem: '<S3>/Vehicle.StickMoved' */
  if (FMS_B.Compare && (FMS_B.target_mode != PilotMode_None)) {
    if (FMS_getArmMode(FMS_B.target_mode) == 3.0) {
      FMS_DW.is_SubMode = FMS_IN_NO_ACTIVE_CHILD_h;
      FMS_DW.is_Arm = FMS_IN_Auto;
      switch (FMS_B.target_mode) {
       case PilotMode_Offboard:
        FMS_DW.is_Auto = FMS_IN_Offboard;
        FMS_B.state = VehicleState_Offboard;
        break;

       case PilotMode_Mission:
        FMS_DW.is_Auto = FMS_IN_Mission;
        FMS_DW.llo[0] = FMS_B.BusConversion_InsertedFor_FMSSt.lat_0 *
          57.295779513082323;
        FMS_DW.llo[1] = FMS_B.BusConversion_InsertedFor_FMSSt.lon_0 *
          57.295779513082323;
        FMS_DW.is_Mission = FMS_IN_NextWP;

        /* Inport: '<Root>/Mission_Data' */
        if (FMS_B.wp_index <= FMS_U.Mission_Data.valid_items) {
          FMS_DW.nav_cmd = FMS_U.Mission_Data.command[FMS_B.wp_index - 1];
        } else {
          FMS_DW.nav_cmd = (uint16_T)NAV_Cmd_None;
          qY_tmp = FMS_B.wp_index - /*MW:OvSatOk*/ 1U;
          if (qY_tmp > FMS_B.wp_index) {
            qY_tmp = 0U;
          }

          FMS_B.wp_consume = (uint8_T)qY_tmp;
        }
        break;

       default:
        FMS_DW.is_Auto = FMS_IN_InvalidAutoMode;
        break;
      }
    } else if (FMS_getArmMode(FMS_B.target_mode) == 2.0) {
      FMS_DW.is_SubMode = FMS_IN_NO_ACTIVE_CHILD_h;
      FMS_DW.is_Arm = FMS_IN_Assist;
      switch (FMS_B.target_mode) {
       case PilotMode_Acro:
        FMS_DW.is_Assist = FMS_IN_Acro;
        FMS_B.state = VehicleState_Acro;
        break;

       case PilotMode_Stabilize:
        FMS_DW.is_Assist = FMS_IN_Stabilize;
        FMS_B.state = VehicleState_Stabilize;
        break;

       case PilotMode_Altitude:
        FMS_DW.is_Assist = FMS_IN_Altitude;
        FMS_B.state = VehicleState_Altitude;
        break;

       case PilotMode_Position:
        FMS_DW.is_Assist = FMS_IN_Position;
        FMS_B.state = VehicleState_Position;
        break;

       default:
        FMS_DW.is_Assist = FMS_IN_InvalidAssistMode;
        break;
      }
    } else if (FMS_getArmMode(FMS_B.target_mode) == 1.0) {
      FMS_DW.is_SubMode = FMS_IN_NO_ACTIVE_CHILD_h;
      FMS_DW.is_Arm = FMS_IN_Manual;
      if (FMS_B.target_mode == PilotMode_Manual) {
        FMS_DW.is_Manual = FMS_IN_Manual_g;
        FMS_B.state = VehicleState_Manual;
      } else {
        FMS_DW.is_Manual = FMS_IN_InValidManualMode;
      }
    } else {
      FMS_DW.is_SubMode = FMS_IN_NO_ACTIVE_CHILD_h;
      FMS_DW.is_Arm = FMS_IN_InvalidArmMode;
    }
  } else {
    if (FMS_sf_msg_pop_M()) {
      b_sf_internal_predicateOutput = (FMS_DW.M_msgReservedData == FMS_Cmd_Pause);
    } else {
      b_sf_internal_predicateOutput = false;
    }

    if (b_sf_internal_predicateOutput) {
      FMS_DW.is_SubMode = FMS_IN_Hold_h;
      FMS_B.state = VehicleState_Hold;
    } else {
      switch (FMS_DW.is_SubMode) {
       case FMS_IN_Hold_h:
        if (FMS_sf_msg_pop_M()) {
          b_sf_internal_predicateOutput = ((FMS_DW.M_msgReservedData ==
            FMS_Cmd_Continue) && (FMS_B.target_mode != PilotMode_None));
        } else {
          b_sf_internal_predicateOutput = false;
        }

        if (b_sf_internal_predicateOutput) {
          FMS_DW.is_SubMode = FMS_IN_NO_ACTIVE_CHILD_h;
          FMS_DW.is_Arm = FMS_IN_NO_ACTIVE_CHILD_h;
          FMS_enter_internal_Arm();
        }
        break;

       case FMS_IN_Land:
        FMS_DW.durationLastReferenceTick_1_j = FMS_DW.chartAbsoluteTimeCounter;

        /* Constant: '<Root>/Constant' */
        FMS_DW.condWasTrueAtLastTimeStep_1_d = false;
        if (FMS_DW.chartAbsoluteTimeCounter -
            FMS_DW.durationLastReferenceTick_1_j >= 500) {
          FMS_DW.is_SubMode = FMS_IN_NO_ACTIVE_CHILD_h;
          FMS_DW.is_Arm = FMS_IN_NO_ACTIVE_CHILD_h;
          FMS_DW.is_Vehicle = FMS_IN_Disarm;
          FMS_B.state = VehicleState_Disarm;
        }
        break;

       case FMS_IN_Return:
        scale = 1.29246971E-26F;
        absxk = fabsf(FMS_B.BusConversion_InsertedFor_FMSSt.x_R - FMS_DW.home[0]);
        if (absxk > 1.29246971E-26F) {
          y = 1.0F;
          scale = absxk;
        } else {
          t = absxk / 1.29246971E-26F;
          y = t * t;
        }

        absxk = fabsf(FMS_B.BusConversion_InsertedFor_FMSSt.y_R - FMS_DW.home[1]);
        if (absxk > scale) {
          t = scale / absxk;
          y = y * t * t + 1.0F;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }

        y = scale * sqrtf(y);

        /* Constant: '<Root>/ACCEPT_R' */
        if (y <= FMS_PARAM.ACCEPT_R) {
          FMS_B.Cmd_In.sp_land[0] = FMS_DW.home[0];
          FMS_B.Cmd_In.sp_land[1] = FMS_DW.home[1];
          FMS_DW.durationLastReferenceTick_1_j = FMS_DW.chartAbsoluteTimeCounter;
          FMS_DW.is_SubMode = FMS_IN_Land;
          FMS_B.state = VehicleState_Land;

          /* Constant: '<Root>/Constant' */
          FMS_DW.condWasTrueAtLastTimeStep_1_d = false;
        }

        /* End of Constant: '<Root>/ACCEPT_R' */
        break;

       case FMS_IN_Takeoff:
        if (FMS_B.BusConversion_InsertedFor_FMSSt.h_R >=
            FMS_B.Cmd_In.sp_takeoff[2]) {
          if (FMS_B.target_mode != PilotMode_None) {
            tmp = FMS_getArmMode(FMS_B.target_mode);
            if (tmp == 3.0) {
              FMS_DW.is_SubMode = FMS_IN_NO_ACTIVE_CHILD_h;
              FMS_DW.is_Arm = FMS_IN_Auto;
              switch (FMS_B.target_mode) {
               case PilotMode_Offboard:
                FMS_DW.is_Auto = FMS_IN_Offboard;
                FMS_B.state = VehicleState_Offboard;
                break;

               case PilotMode_Mission:
                FMS_DW.is_Auto = FMS_IN_Mission;
                FMS_DW.llo[0] = FMS_B.BusConversion_InsertedFor_FMSSt.lat_0 *
                  57.295779513082323;
                FMS_DW.llo[1] = FMS_B.BusConversion_InsertedFor_FMSSt.lon_0 *
                  57.295779513082323;
                FMS_DW.is_Mission = FMS_IN_NextWP;

                /* Inport: '<Root>/Mission_Data' */
                if (FMS_B.wp_index <= FMS_U.Mission_Data.valid_items) {
                  FMS_DW.nav_cmd = FMS_U.Mission_Data.command[FMS_B.wp_index - 1];
                } else {
                  FMS_DW.nav_cmd = (uint16_T)NAV_Cmd_None;
                  qY_tmp = FMS_B.wp_index - /*MW:OvSatOk*/ 1U;
                  if (qY_tmp > FMS_B.wp_index) {
                    qY_tmp = 0U;
                  }

                  FMS_B.wp_consume = (uint8_T)qY_tmp;
                }
                break;

               default:
                FMS_DW.is_Auto = FMS_IN_InvalidAutoMode;
                break;
              }
            } else if (tmp == 2.0) {
              FMS_DW.is_SubMode = FMS_IN_NO_ACTIVE_CHILD_h;
              FMS_DW.is_Arm = FMS_IN_Assist;
              switch (FMS_B.target_mode) {
               case PilotMode_Acro:
                FMS_DW.is_Assist = FMS_IN_Acro;
                FMS_B.state = VehicleState_Acro;
                break;

               case PilotMode_Stabilize:
                FMS_DW.is_Assist = FMS_IN_Stabilize;
                FMS_B.state = VehicleState_Stabilize;
                break;

               case PilotMode_Altitude:
                FMS_DW.is_Assist = FMS_IN_Altitude;
                FMS_B.state = VehicleState_Altitude;
                break;

               case PilotMode_Position:
                FMS_DW.is_Assist = FMS_IN_Position;
                FMS_B.state = VehicleState_Position;
                break;

               default:
                FMS_DW.is_Assist = FMS_IN_InvalidAssistMode;
                break;
              }
            } else if (tmp == 1.0) {
              FMS_DW.is_SubMode = FMS_IN_NO_ACTIVE_CHILD_h;
              FMS_DW.is_Arm = FMS_IN_Manual;
              if (FMS_B.target_mode == PilotMode_Manual) {
                FMS_DW.is_Manual = FMS_IN_Manual_g;
                FMS_B.state = VehicleState_Manual;
              } else {
                FMS_DW.is_Manual = FMS_IN_InValidManualMode;
              }
            } else {
              FMS_DW.is_SubMode = FMS_IN_NO_ACTIVE_CHILD_h;
              FMS_DW.is_Arm = FMS_IN_InvalidArmMode;
            }
          } else {
            FMS_DW.is_SubMode = FMS_IN_Hold_h;
            FMS_B.state = VehicleState_Hold;
          }
        }
        break;
      }
    }
  }
}

/* Function for Chart: '<Root>/FMS State Machine' */
static void FMS_exit_internal_Arm(void)
{
  if (FMS_DW.is_Arm == FMS_IN_Auto) {
    FMS_exit_internal_Auto();
    FMS_DW.is_Arm = FMS_IN_NO_ACTIVE_CHILD_h;
  } else {
    FMS_DW.is_Assist = FMS_IN_NO_ACTIVE_CHILD_h;
    FMS_DW.is_Manual = FMS_IN_NO_ACTIVE_CHILD_h;
    FMS_DW.is_SubMode = FMS_IN_NO_ACTIVE_CHILD_h;
    FMS_DW.is_Arm = FMS_IN_NO_ACTIVE_CHILD_h;
  }
}

/* Function for Chart: '<Root>/FMS State Machine' */
static void FMS_Arm(void)
{
  boolean_T c_sf_internal_predicateOutput;
  real32_T tmp[2];
  uint32_T qY;
  int32_T tmp_0;
  real_T tmp_1;
  FMS_DW.durationLastReferenceTick_1_c = FMS_DW.chartAbsoluteTimeCounter;

  /* Constant: '<Root>/Constant' */
  FMS_DW.condWasTrueAtLastTimeStep_1_d0 = false;
  if ((FMS_DW.chartAbsoluteTimeCounter - FMS_DW.durationLastReferenceTick_1_c >=
       500) && (FMS_B.target_mode != PilotMode_Mission)) {
    FMS_exit_internal_Arm();
    FMS_DW.is_Vehicle = FMS_IN_Disarm;
    FMS_B.state = VehicleState_Disarm;
  } else if ((FMS_DW.mode_prev != FMS_DW.mode_start) && (FMS_B.target_mode !=
              PilotMode_None)) {
    tmp_1 = FMS_getArmMode(FMS_B.target_mode);
    if (tmp_1 == 3.0) {
      FMS_exit_internal_Arm();
      FMS_DW.is_Arm = FMS_IN_Auto;
      switch (FMS_B.target_mode) {
       case PilotMode_Offboard:
        FMS_DW.is_Auto = FMS_IN_Offboard;
        FMS_B.state = VehicleState_Offboard;
        break;

       case PilotMode_Mission:
        FMS_DW.is_Auto = FMS_IN_Mission;
        FMS_DW.llo[0] = FMS_B.BusConversion_InsertedFor_FMSSt.lat_0 *
          57.295779513082323;
        FMS_DW.llo[1] = FMS_B.BusConversion_InsertedFor_FMSSt.lon_0 *
          57.295779513082323;
        FMS_DW.is_Mission = FMS_IN_NextWP;

        /* Inport: '<Root>/Mission_Data' */
        if (FMS_B.wp_index <= FMS_U.Mission_Data.valid_items) {
          FMS_DW.nav_cmd = FMS_U.Mission_Data.command[FMS_B.wp_index - 1];
        } else {
          FMS_DW.nav_cmd = (uint16_T)NAV_Cmd_None;
          qY = FMS_B.wp_index - /*MW:OvSatOk*/ 1U;
          if (qY > FMS_B.wp_index) {
            qY = 0U;
          }

          FMS_B.wp_consume = (uint8_T)qY;
        }
        break;

       default:
        FMS_DW.is_Auto = FMS_IN_InvalidAutoMode;
        break;
      }
    } else if (tmp_1 == 2.0) {
      FMS_exit_internal_Arm();
      FMS_DW.is_Arm = FMS_IN_Assist;
      switch (FMS_B.target_mode) {
       case PilotMode_Acro:
        FMS_DW.is_Assist = FMS_IN_Acro;
        FMS_B.state = VehicleState_Acro;
        break;

       case PilotMode_Stabilize:
        FMS_DW.is_Assist = FMS_IN_Stabilize;
        FMS_B.state = VehicleState_Stabilize;
        break;

       case PilotMode_Altitude:
        FMS_DW.is_Assist = FMS_IN_Altitude;
        FMS_B.state = VehicleState_Altitude;
        break;

       case PilotMode_Position:
        FMS_DW.is_Assist = FMS_IN_Position;
        FMS_B.state = VehicleState_Position;
        break;

       default:
        FMS_DW.is_Assist = FMS_IN_InvalidAssistMode;
        break;
      }
    } else if (tmp_1 == 1.0) {
      FMS_exit_internal_Arm();
      FMS_DW.is_Arm = FMS_IN_Manual;
      if (FMS_B.target_mode == PilotMode_Manual) {
        FMS_DW.is_Manual = FMS_IN_Manual_g;
        FMS_B.state = VehicleState_Manual;
      } else {
        FMS_DW.is_Manual = FMS_IN_InValidManualMode;
      }
    } else {
      FMS_exit_internal_Arm();
      FMS_DW.is_Arm = FMS_IN_InvalidArmMode;
    }
  } else {
    if (FMS_sf_msg_pop_M()) {
      c_sf_internal_predicateOutput = (FMS_DW.M_msgReservedData == FMS_Cmd_Land);
    } else {
      c_sf_internal_predicateOutput = false;
    }

    if (c_sf_internal_predicateOutput) {
      FMS_B.Cmd_In.sp_land[0] = FMS_B.BusConversion_InsertedFor_FMSSt.x_R;
      FMS_B.Cmd_In.sp_land[1] = FMS_B.BusConversion_InsertedFor_FMSSt.y_R;
      FMS_exit_internal_Arm();
      FMS_DW.is_Arm = FMS_IN_SubMode;
      FMS_DW.stick_val[0] = FMS_B.BusConversion_InsertedFor_FMS_f.stick_yaw;
      FMS_DW.stick_val[1] = FMS_B.BusConversion_InsertedFor_FMS_f.stick_throttle;
      FMS_DW.stick_val[2] = FMS_B.BusConversion_InsertedFor_FMS_f.stick_roll;
      FMS_DW.stick_val[3] = FMS_B.BusConversion_InsertedFor_FMS_f.stick_pitch;
      FMS_DW.durationLastReferenceTick_1_j = FMS_DW.chartAbsoluteTimeCounter;
      FMS_DW.is_SubMode = FMS_IN_Land;
      FMS_B.state = VehicleState_Land;

      /* Constant: '<Root>/Constant' */
      FMS_DW.condWasTrueAtLastTimeStep_1_d = false;
    } else {
      if (FMS_sf_msg_pop_M()) {
        c_sf_internal_predicateOutput = (FMS_DW.M_msgReservedData ==
          FMS_Cmd_Return);
      } else {
        c_sf_internal_predicateOutput = false;
      }

      if (c_sf_internal_predicateOutput) {
        FMS_B.Cmd_In.sp_return[0] = FMS_DW.home[0];
        FMS_B.Cmd_In.sp_return[1] = FMS_DW.home[1];
        FMS_exit_internal_Arm();
        FMS_DW.is_Arm = FMS_IN_SubMode;
        FMS_DW.stick_val[0] = FMS_B.BusConversion_InsertedFor_FMS_f.stick_yaw;
        FMS_DW.stick_val[1] =
          FMS_B.BusConversion_InsertedFor_FMS_f.stick_throttle;
        FMS_DW.stick_val[2] = FMS_B.BusConversion_InsertedFor_FMS_f.stick_roll;
        FMS_DW.stick_val[3] = FMS_B.BusConversion_InsertedFor_FMS_f.stick_pitch;
        FMS_DW.is_SubMode = FMS_IN_Return;
        FMS_B.state = VehicleState_Return;
      } else {
        switch (FMS_DW.is_Arm) {
         case FMS_IN_Assist:
          if (FMS_DW.is_Assist == FMS_IN_InvalidAssistMode) {
            FMS_DW.is_Assist = FMS_IN_NO_ACTIVE_CHILD_h;
            FMS_DW.is_Arm = FMS_IN_NO_ACTIVE_CHILD_h;
            FMS_DW.is_Vehicle = FMS_IN_Disarm;
            FMS_B.state = VehicleState_Disarm;
          }
          break;

         case FMS_IN_Auto:
          if (FMS_sf_msg_pop_M()) {
            c_sf_internal_predicateOutput = (FMS_DW.M_msgReservedData ==
              FMS_Cmd_Pause);
          } else {
            c_sf_internal_predicateOutput = false;
          }

          if (c_sf_internal_predicateOutput) {
            FMS_exit_internal_Auto();
            FMS_DW.is_Arm = FMS_IN_SubMode;
            FMS_DW.stick_val[0] =
              FMS_B.BusConversion_InsertedFor_FMS_f.stick_yaw;
            FMS_DW.stick_val[1] =
              FMS_B.BusConversion_InsertedFor_FMS_f.stick_throttle;
            FMS_DW.stick_val[2] =
              FMS_B.BusConversion_InsertedFor_FMS_f.stick_roll;
            FMS_DW.stick_val[3] =
              FMS_B.BusConversion_InsertedFor_FMS_f.stick_pitch;
            FMS_DW.is_SubMode = FMS_IN_Hold_h;
            FMS_B.state = VehicleState_Hold;
          } else {
            switch (FMS_DW.is_Auto) {
             case FMS_IN_InvalidAutoMode:
              FMS_DW.is_Auto = FMS_IN_NO_ACTIVE_CHILD_h;
              FMS_DW.is_Arm = FMS_IN_NO_ACTIVE_CHILD_h;
              FMS_DW.is_Vehicle = FMS_IN_Disarm;
              FMS_B.state = VehicleState_Disarm;
              break;

             case FMS_IN_Mission:
              if (FMS_DW.mission_timestamp_prev !=
                  FMS_DW.mission_timestamp_start) {
                FMS_DW.is_Mission = FMS_IN_NextWP;

                /* Inport: '<Root>/Mission_Data' */
                if (FMS_B.wp_index <= FMS_U.Mission_Data.valid_items) {
                  FMS_DW.nav_cmd = FMS_U.Mission_Data.command[FMS_B.wp_index - 1];
                } else {
                  FMS_DW.nav_cmd = (uint16_T)NAV_Cmd_None;
                  qY = FMS_B.wp_index - /*MW:OvSatOk*/ 1U;
                  if (qY > FMS_B.wp_index) {
                    qY = 0U;
                  }

                  FMS_B.wp_consume = (uint8_T)qY;
                }
              } else {
                switch (FMS_DW.is_Mission) {
                 case FMS_IN_Disarming:
                  FMS_DW.is_Mission = FMS_IN_NO_ACTIVE_CHILD_h;
                  FMS_DW.is_Auto = FMS_IN_NO_ACTIVE_CHILD_h;
                  FMS_DW.is_Arm = FMS_IN_NO_ACTIVE_CHILD_h;
                  FMS_DW.is_Vehicle = FMS_IN_Disarm;
                  FMS_B.state = VehicleState_Disarm;
                  break;

                 case FMS_IN_Land:
                  FMS_DW.durationLastReferenceTick_1 =
                    FMS_DW.chartAbsoluteTimeCounter;

                  /* Constant: '<Root>/Constant' */
                  FMS_DW.condWasTrueAtLastTimeStep_1 = false;
                  if (FMS_DW.chartAbsoluteTimeCounter -
                      FMS_DW.durationLastReferenceTick_1 >= 500) {
                    tmp_0 = (int32_T)(FMS_B.wp_index + 1U);
                    if ((uint32_T)tmp_0 > 255U) {
                      tmp_0 = 255;
                    }

                    FMS_B.wp_index = (uint8_T)tmp_0;
                    FMS_DW.is_Mission = FMS_IN_NextWP;

                    /* Inport: '<Root>/Mission_Data' */
                    if (FMS_B.wp_index <= FMS_U.Mission_Data.valid_items) {
                      FMS_DW.nav_cmd = FMS_U.Mission_Data.command[FMS_B.wp_index
                        - 1];
                    } else {
                      FMS_DW.nav_cmd = (uint16_T)NAV_Cmd_None;
                      qY = FMS_B.wp_index - /*MW:OvSatOk*/ 1U;
                      if (qY > FMS_B.wp_index) {
                        qY = 0U;
                      }

                      FMS_B.wp_consume = (uint8_T)qY;
                    }
                  }
                  break;

                 case FMS_IN_Loiter:
                  break;

                 case FMS_IN_NextWP:
                  if (FMS_DW.nav_cmd == (int32_T)NAV_Cmd_Takeoff) {
                    FMS_DW.is_Mission = FMS_IN_Takeoff_d;
                    FMS_B.Cmd_In.cur_waypoint[0] =
                      FMS_B.BusConversion_InsertedFor_FMSSt.x_R;
                    FMS_B.Cmd_In.cur_waypoint[1] =
                      FMS_B.BusConversion_InsertedFor_FMSSt.y_R;
                    FMS_B.Cmd_In.cur_waypoint[2] =
                      FMS_B.BusConversion_InsertedFor_FMSSt.h_R;

                    /* Inport: '<Root>/Mission_Data' */
                    FMS_B.lla[0] = (real_T)FMS_U.Mission_Data.x[FMS_B.wp_index -
                      1] * 1.0E-7;
                    FMS_B.lla[1] = (real_T)FMS_U.Mission_Data.y[FMS_B.wp_index -
                      1] * 1.0E-7;
                    FMS_B.lla[2] = -(FMS_U.Mission_Data.z[FMS_B.wp_index - 1] +
                                     FMS_DW.home[2]);
                    FMS_B.llo[0] = FMS_DW.llo[0];
                    FMS_B.llo[1] = FMS_DW.llo[1];
                    FMS_B.href = 0.0;
                    FMS_B.psio = 0.0;

                    /* Outputs for Function Call SubSystem: '<S3>/Vehicle.Arm.Auto.Mission.LLA2FLAT' */
                    F_VehicleArmAutoMissionLLA2FLAT(FMS_B.lla, FMS_B.llo,
                      FMS_B.href, FMS_B.psio, FMS_B.DataTypeConversion,
                      &FMS_ConstB.VehicleArmAutoMissionLLA2FLAT);

                    /* End of Outputs for SubSystem: '<S3>/Vehicle.Arm.Auto.Mission.LLA2FLAT' */
                    FMS_B.Cmd_In.sp_takeoff[0] = FMS_B.DataTypeConversion[0];
                    FMS_B.Cmd_In.sp_takeoff[1] = FMS_B.DataTypeConversion[1];
                    FMS_B.Cmd_In.sp_takeoff[2] = FMS_B.DataTypeConversion[2];
                    FMS_B.state = VehicleState_Takeoff;
                  } else if (FMS_DW.nav_cmd == (int32_T)NAV_Cmd_Waypoint) {
                    FMS_DW.is_Mission = FMS_IN_Waypoint;

                    /* Inport: '<Root>/Mission_Data' */
                    FMS_B.lla[0] = (real_T)FMS_U.Mission_Data.x[FMS_B.wp_index -
                      1] * 1.0E-7;
                    FMS_B.lla[1] = (real_T)FMS_U.Mission_Data.y[FMS_B.wp_index -
                      1] * 1.0E-7;
                    FMS_B.lla[2] = -(FMS_U.Mission_Data.z[FMS_B.wp_index - 1] +
                                     FMS_DW.home[2]);
                    FMS_B.llo[0] = FMS_DW.llo[0];
                    FMS_B.llo[1] = FMS_DW.llo[1];
                    FMS_B.href = 0.0;
                    FMS_B.psio = 0.0;

                    /* Outputs for Function Call SubSystem: '<S3>/Vehicle.Arm.Auto.Mission.LLA2FLAT' */
                    F_VehicleArmAutoMissionLLA2FLAT(FMS_B.lla, FMS_B.llo,
                      FMS_B.href, FMS_B.psio, FMS_B.DataTypeConversion,
                      &FMS_ConstB.VehicleArmAutoMissionLLA2FLAT);

                    /* End of Outputs for SubSystem: '<S3>/Vehicle.Arm.Auto.Mission.LLA2FLAT' */
                    FMS_B.Cmd_In.sp_waypoint[0] = FMS_B.DataTypeConversion[0];
                    FMS_B.Cmd_In.sp_waypoint[1] = FMS_B.DataTypeConversion[1];
                    FMS_B.Cmd_In.sp_waypoint[2] = FMS_B.DataTypeConversion[2];
                    FMS_B.state = VehicleState_Mission;
                  } else if (FMS_DW.nav_cmd == (int32_T)NAV_Cmd_Land) {
                    FMS_DW.durationLastReferenceTick_1 =
                      FMS_DW.chartAbsoluteTimeCounter;
                    FMS_DW.is_Mission = FMS_IN_Land;
                    FMS_B.Cmd_In.sp_land[0] =
                      FMS_B.BusConversion_InsertedFor_FMSSt.x_R;
                    FMS_B.Cmd_In.sp_land[1] =
                      FMS_B.BusConversion_InsertedFor_FMSSt.y_R;
                    FMS_B.state = VehicleState_Land;

                    /* Constant: '<Root>/Constant' */
                    FMS_DW.condWasTrueAtLastTimeStep_1 = false;
                  } else if (FMS_DW.nav_cmd == (int32_T)NAV_Cmd_Return) {
                    FMS_DW.is_Mission = FMS_IN_Return_h;
                    FMS_B.Cmd_In.sp_return[0] = FMS_DW.home[0];
                    FMS_B.Cmd_In.sp_return[1] = FMS_DW.home[1];
                    FMS_B.state = VehicleState_Return;
                  } else {
                    FMS_DW.is_Mission = FMS_IN_Loiter;
                    FMS_B.state = VehicleState_Hold;
                  }
                  break;

                 case FMS_IN_Return_h:
                  tmp[0] = FMS_B.BusConversion_InsertedFor_FMSSt.x_R -
                    FMS_B.Cmd_In.sp_return[0];
                  tmp[1] = FMS_B.BusConversion_InsertedFor_FMSSt.y_R -
                    FMS_B.Cmd_In.sp_return[1];
                  if (FMS_norm(tmp) < 0.5F) {
                    FMS_DW.durationLastReferenceTick_1 =
                      FMS_DW.chartAbsoluteTimeCounter;
                    FMS_DW.is_Mission = FMS_IN_Land;
                    FMS_B.Cmd_In.sp_land[0] =
                      FMS_B.BusConversion_InsertedFor_FMSSt.x_R;
                    FMS_B.Cmd_In.sp_land[1] =
                      FMS_B.BusConversion_InsertedFor_FMSSt.y_R;
                    FMS_B.state = VehicleState_Land;

                    /* Constant: '<Root>/Constant' */
                    FMS_DW.condWasTrueAtLastTimeStep_1 = false;
                  }
                  break;

                 case FMS_IN_Takeoff_d:
                  if (FMS_B.BusConversion_InsertedFor_FMSSt.h_R >=
                      FMS_B.Cmd_In.sp_takeoff[2]) {
                    FMS_B.Cmd_In.cur_waypoint[0] = FMS_B.Cmd_In.sp_takeoff[0];
                    FMS_B.Cmd_In.cur_waypoint[1] = FMS_B.Cmd_In.sp_takeoff[1];
                    FMS_B.Cmd_In.cur_waypoint[2] = FMS_B.Cmd_In.sp_takeoff[2];
                    tmp_0 = (int32_T)(FMS_B.wp_index + 1U);
                    if ((uint32_T)tmp_0 > 255U) {
                      tmp_0 = 255;
                    }

                    FMS_B.wp_index = (uint8_T)tmp_0;
                    FMS_DW.is_Mission = FMS_IN_NextWP;

                    /* Inport: '<Root>/Mission_Data' */
                    if (FMS_B.wp_index <= FMS_U.Mission_Data.valid_items) {
                      FMS_DW.nav_cmd = FMS_U.Mission_Data.command[FMS_B.wp_index
                        - 1];
                    } else {
                      FMS_DW.nav_cmd = (uint16_T)NAV_Cmd_None;
                      qY = FMS_B.wp_index - /*MW:OvSatOk*/ 1U;
                      if (qY > FMS_B.wp_index) {
                        qY = 0U;
                      }

                      FMS_B.wp_consume = (uint8_T)qY;
                    }
                  }
                  break;

                 case FMS_IN_Waypoint:
                  tmp[0] = FMS_B.BusConversion_InsertedFor_FMSSt.x_R -
                    FMS_B.Cmd_In.sp_waypoint[0];
                  tmp[1] = FMS_B.BusConversion_InsertedFor_FMSSt.y_R -
                    FMS_B.Cmd_In.sp_waypoint[1];

                  /* Constant: '<Root>/ACCEPT_R' */
                  if (FMS_norm(tmp) <= FMS_PARAM.ACCEPT_R) {
                    FMS_B.Cmd_In.cur_waypoint[0] = FMS_B.Cmd_In.sp_waypoint[0];
                    FMS_B.Cmd_In.cur_waypoint[1] = FMS_B.Cmd_In.sp_waypoint[1];
                    FMS_B.Cmd_In.cur_waypoint[2] = FMS_B.Cmd_In.sp_waypoint[2];
                    tmp_0 = (int32_T)(FMS_B.wp_index + 1U);
                    if ((uint32_T)tmp_0 > 255U) {
                      tmp_0 = 255;
                    }

                    FMS_B.wp_index = (uint8_T)tmp_0;
                    FMS_DW.is_Mission = FMS_IN_NextWP;

                    /* Inport: '<Root>/Mission_Data' */
                    if (FMS_B.wp_index <= FMS_U.Mission_Data.valid_items) {
                      FMS_DW.nav_cmd = FMS_U.Mission_Data.command[FMS_B.wp_index
                        - 1];
                    } else {
                      FMS_DW.nav_cmd = (uint16_T)NAV_Cmd_None;
                      qY = FMS_B.wp_index - /*MW:OvSatOk*/ 1U;
                      if (qY > FMS_B.wp_index) {
                        qY = 0U;
                      }

                      FMS_B.wp_consume = (uint8_T)qY;
                    }
                  }

                  /* End of Constant: '<Root>/ACCEPT_R' */
                  break;
                }
              }
              break;

             case FMS_IN_Offboard:
              break;
            }
          }
          break;

         case FMS_IN_InvalidArmMode:
          FMS_DW.is_Arm = FMS_IN_NO_ACTIVE_CHILD_h;
          FMS_DW.is_Vehicle = FMS_IN_Disarm;
          FMS_B.state = VehicleState_Disarm;
          break;

         case FMS_IN_Manual:
          if (FMS_DW.is_Manual == FMS_IN_InValidManualMode) {
            FMS_DW.is_Manual = FMS_IN_NO_ACTIVE_CHILD_h;
            FMS_DW.is_Arm = FMS_IN_NO_ACTIVE_CHILD_h;
            FMS_DW.is_Vehicle = FMS_IN_Disarm;
            FMS_B.state = VehicleState_Disarm;
          }
          break;

         case FMS_IN_SubMode:
          FMS_SubMode();
          break;
        }
      }
    }
  }
}

/* Function for Chart: '<Root>/FMS State Machine' */
static real_T FMS_ManualArmEvent(real32_T pilot_cmd_stick_throttle, uint32_T
  pilot_cmd_mode)
{
  real_T trigger;
  trigger = 0.0;
  switch (pilot_cmd_mode) {
   case PilotMode_Manual:
   case PilotMode_Acro:
   case PilotMode_Stabilize:
    if (pilot_cmd_stick_throttle > -0.7) {
      trigger = 1.0;
    }
    break;

   case PilotMode_Altitude:
   case PilotMode_Position:
    if (pilot_cmd_stick_throttle > 0.1) {
      trigger = 1.0;
    }
    break;
  }

  return trigger;
}

/* Function for Chart: '<Root>/FMS State Machine' */
static void FMS_Vehicle(void)
{
  boolean_T sf_internal_predicateOutput;
  int32_T b_previousEvent;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  if (FMS_DW.mission_timestamp_prev != FMS_DW.mission_timestamp_start) {
    FMS_B.wp_consume = 0U;
    FMS_B.wp_index = 1U;
  }

  if (FMS_sf_msg_pop_M()) {
    sf_internal_predicateOutput = (FMS_DW.M_msgReservedData == FMS_Cmd_Disarm);
  } else {
    sf_internal_predicateOutput = false;
  }

  if (sf_internal_predicateOutput) {
    switch (FMS_DW.is_Vehicle) {
     case FMS_IN_Arm:
      FMS_exit_internal_Arm();
      FMS_DW.is_Vehicle = FMS_IN_NO_ACTIVE_CHILD_h;
      break;

     case FMS_IN_Standby:
      FMS_DW.prep_takeoff = 0.0;
      sf_internal_predicateOutput = (FMS_DW.prep_takeoff == 1.0);
      if ((!sf_internal_predicateOutput) ||
          (!FMS_DW.condWasTrueAtLastTimeStep_1_k)) {
        FMS_DW.durationLastReferenceTick_1_k = FMS_DW.chartAbsoluteTimeCounter;
      }

      FMS_DW.condWasTrueAtLastTimeStep_1_k = sf_internal_predicateOutput;
      FMS_DW.prep_mission_takeoff = 0.0;
      sf_internal_predicateOutput = (FMS_DW.prep_mission_takeoff == 1.0);
      if ((!sf_internal_predicateOutput) || (!FMS_DW.condWasTrueAtLastTimeStep_2))
      {
        FMS_DW.durationLastReferenceTick_2 = FMS_DW.chartAbsoluteTimeCounter;
      }

      FMS_DW.condWasTrueAtLastTimeStep_2 = sf_internal_predicateOutput;
      FMS_DW.is_Vehicle = FMS_IN_NO_ACTIVE_CHILD_h;
      break;

     default:
      FMS_DW.is_Vehicle = FMS_IN_NO_ACTIVE_CHILD_h;
      break;
    }

    FMS_DW.is_Vehicle = FMS_IN_Disarm;
    FMS_B.state = VehicleState_Disarm;
  } else {
    guard1 = false;
    guard2 = false;
    guard3 = false;
    switch (FMS_DW.is_Vehicle) {
     case FMS_IN_Arm:
      FMS_Arm();
      break;

     case FMS_IN_Disarm:
      if (FMS_sf_msg_pop_M()) {
        sf_internal_predicateOutput = (FMS_DW.M_msgReservedData ==
          FMS_Cmd_PreArm);
      } else {
        sf_internal_predicateOutput = false;
      }

      if (sf_internal_predicateOutput) {
        guard1 = true;
      } else {
        if (FMS_sf_msg_pop_M()) {
          sf_internal_predicateOutput = (FMS_DW.M_msgReservedData ==
            FMS_Cmd_Takeoff);
        } else {
          sf_internal_predicateOutput = false;
        }

        if (sf_internal_predicateOutput) {
          FMS_DW.prep_takeoff = 1.0;
          sf_internal_predicateOutput = (FMS_DW.prep_takeoff == 1.0);
          if ((!sf_internal_predicateOutput) ||
              (!FMS_DW.condWasTrueAtLastTimeStep_1_k)) {
            FMS_DW.durationLastReferenceTick_1_k =
              FMS_DW.chartAbsoluteTimeCounter;
          }

          FMS_DW.condWasTrueAtLastTimeStep_1_k = sf_internal_predicateOutput;
          guard1 = true;
        }
      }
      break;

     case FMS_IN_Standby:
      if ((FMS_ManualArmEvent
           (FMS_B.BusConversion_InsertedFor_FMS_f.stick_throttle,
            FMS_B.BusConversion_InsertedFor_FMS_f.mode) == 1.0) &&
          (FMS_B.target_mode != PilotMode_None)) {
        guard2 = true;
      } else {
        sf_internal_predicateOutput = (FMS_DW.prep_takeoff == 1.0);
        if ((!sf_internal_predicateOutput) ||
            (!FMS_DW.condWasTrueAtLastTimeStep_1_k)) {
          FMS_DW.durationLastReferenceTick_1_k = FMS_DW.chartAbsoluteTimeCounter;
        }

        FMS_DW.condWasTrueAtLastTimeStep_1_k = sf_internal_predicateOutput;
        if (FMS_DW.chartAbsoluteTimeCounter -
            FMS_DW.durationLastReferenceTick_1_k >= 500) {
          guard3 = true;
        } else {
          if (FMS_sf_msg_pop_M()) {
            sf_internal_predicateOutput = (FMS_DW.M_msgReservedData ==
              FMS_Cmd_Takeoff);
          } else {
            sf_internal_predicateOutput = false;
          }

          if (sf_internal_predicateOutput) {
            guard3 = true;
          } else if ((FMS_DW.temporalCounter_i1 >= 2500U) || (FMS_DW.sfEvent ==
                      FMS_event_DisarmEvent)) {
            FMS_DW.prep_takeoff = 0.0;
            sf_internal_predicateOutput = (FMS_DW.prep_takeoff == 1.0);
            if ((!sf_internal_predicateOutput) ||
                (!FMS_DW.condWasTrueAtLastTimeStep_1_k)) {
              FMS_DW.durationLastReferenceTick_1_k =
                FMS_DW.chartAbsoluteTimeCounter;
            }

            FMS_DW.condWasTrueAtLastTimeStep_1_k = sf_internal_predicateOutput;
            FMS_DW.prep_mission_takeoff = 0.0;
            sf_internal_predicateOutput = (FMS_DW.prep_mission_takeoff == 1.0);
            if ((!sf_internal_predicateOutput) ||
                (!FMS_DW.condWasTrueAtLastTimeStep_2)) {
              FMS_DW.durationLastReferenceTick_2 =
                FMS_DW.chartAbsoluteTimeCounter;
            }

            FMS_DW.condWasTrueAtLastTimeStep_2 = sf_internal_predicateOutput;
            FMS_DW.is_Vehicle = FMS_IN_Disarm;
            FMS_B.state = VehicleState_Disarm;
          } else {
            sf_internal_predicateOutput = (FMS_DW.prep_mission_takeoff == 1.0);
            if ((!sf_internal_predicateOutput) ||
                (!FMS_DW.condWasTrueAtLastTimeStep_2)) {
              FMS_DW.durationLastReferenceTick_2 =
                FMS_DW.chartAbsoluteTimeCounter;
            }

            FMS_DW.condWasTrueAtLastTimeStep_2 = sf_internal_predicateOutput;
            if (FMS_DW.chartAbsoluteTimeCounter -
                FMS_DW.durationLastReferenceTick_2 >= 500) {
              guard2 = true;
            }
          }
        }
      }
      break;
    }

    if (guard3) {
      FMS_B.xy_R[0] = FMS_B.BusConversion_InsertedFor_FMSSt.x_R;
      FMS_B.xy_R[1] = FMS_B.BusConversion_InsertedFor_FMSSt.y_R;

      /* Outputs for Function Call SubSystem: '<S3>/Vehicle.PrepTakeoff' */
      /* Reshape: '<S302>/Reshape' incorporates:
       *  Constant: '<S302>/Constant'
       */
      FMS_B.Reshape[0] = FMS_B.xy_R[0];
      FMS_B.Reshape[1] = FMS_B.xy_R[1];
      FMS_B.Reshape[2] = FMS_PARAM.TAKEOFF_H;

      /* End of Outputs for SubSystem: '<S3>/Vehicle.PrepTakeoff' */
      FMS_B.Cmd_In.sp_takeoff[0] = FMS_B.Reshape[0];
      FMS_B.Cmd_In.sp_takeoff[1] = FMS_B.Reshape[1];
      FMS_B.Cmd_In.sp_takeoff[2] = FMS_B.Reshape[2];
      FMS_B.Cmd_In.sp_takeoff[2] += FMS_DW.home[2];
      FMS_DW.prep_takeoff = 0.0;
      sf_internal_predicateOutput = (FMS_DW.prep_takeoff == 1.0);
      if ((!sf_internal_predicateOutput) ||
          (!FMS_DW.condWasTrueAtLastTimeStep_1_k)) {
        FMS_DW.durationLastReferenceTick_1_k = FMS_DW.chartAbsoluteTimeCounter;
      }

      FMS_DW.condWasTrueAtLastTimeStep_1_k = sf_internal_predicateOutput;
      FMS_DW.prep_mission_takeoff = 0.0;
      sf_internal_predicateOutput = (FMS_DW.prep_mission_takeoff == 1.0);
      if ((!sf_internal_predicateOutput) || (!FMS_DW.condWasTrueAtLastTimeStep_2))
      {
        FMS_DW.durationLastReferenceTick_2 = FMS_DW.chartAbsoluteTimeCounter;
      }

      FMS_DW.condWasTrueAtLastTimeStep_2 = sf_internal_predicateOutput;
      FMS_DW.durationLastReferenceTick_1_c = FMS_DW.chartAbsoluteTimeCounter;
      FMS_DW.is_Vehicle = FMS_IN_Arm;

      /* Constant: '<Root>/Constant' */
      FMS_DW.condWasTrueAtLastTimeStep_1_d0 = false;
      FMS_DW.is_Arm = FMS_IN_SubMode;
      FMS_DW.stick_val[0] = FMS_B.BusConversion_InsertedFor_FMS_f.stick_yaw;
      FMS_DW.stick_val[1] = FMS_B.BusConversion_InsertedFor_FMS_f.stick_throttle;
      FMS_DW.stick_val[2] = FMS_B.BusConversion_InsertedFor_FMS_f.stick_roll;
      FMS_DW.stick_val[3] = FMS_B.BusConversion_InsertedFor_FMS_f.stick_pitch;
      FMS_DW.is_SubMode = FMS_IN_Takeoff;
      FMS_B.state = VehicleState_Takeoff;
    }

    if (guard2) {
      FMS_DW.prep_takeoff = 0.0;
      sf_internal_predicateOutput = (FMS_DW.prep_takeoff == 1.0);
      if ((!sf_internal_predicateOutput) ||
          (!FMS_DW.condWasTrueAtLastTimeStep_1_k)) {
        FMS_DW.durationLastReferenceTick_1_k = FMS_DW.chartAbsoluteTimeCounter;
      }

      FMS_DW.condWasTrueAtLastTimeStep_1_k = sf_internal_predicateOutput;
      FMS_DW.prep_mission_takeoff = 0.0;
      sf_internal_predicateOutput = (FMS_DW.prep_mission_takeoff == 1.0);
      if ((!sf_internal_predicateOutput) || (!FMS_DW.condWasTrueAtLastTimeStep_2))
      {
        FMS_DW.durationLastReferenceTick_2 = FMS_DW.chartAbsoluteTimeCounter;
      }

      FMS_DW.condWasTrueAtLastTimeStep_2 = sf_internal_predicateOutput;
      FMS_DW.durationLastReferenceTick_1_c = FMS_DW.chartAbsoluteTimeCounter;
      FMS_DW.is_Vehicle = FMS_IN_Arm;

      /* Constant: '<Root>/Constant' */
      FMS_DW.condWasTrueAtLastTimeStep_1_d0 = false;
      FMS_enter_internal_Arm();
    }

    if (guard1) {
      FMS_DW.condWasTrueAtLastTimeStep_2 = false;
      FMS_DW.durationLastReferenceTick_2 = FMS_DW.chartAbsoluteTimeCounter;
      FMS_DW.condWasTrueAtLastTimeStep_1_k = false;
      FMS_DW.durationLastReferenceTick_1_k = FMS_DW.chartAbsoluteTimeCounter;
      FMS_DW.is_Vehicle = FMS_IN_Standby;
      FMS_DW.temporalCounter_i1 = 0U;
      guard4 = false;
      if (FMS_B.target_mode == PilotMode_Mission) {
        if ((FMS_B.wp_index <= FMS_U.Mission_Data.valid_items) &&
            (FMS_U.Mission_Data.command[FMS_B.wp_index - 1] == (int32_T)
             NAV_Cmd_Takeoff)) {
          FMS_DW.prep_mission_takeoff = 1.0;
          FMS_DW.condWasTrueAtLastTimeStep_2 = (FMS_DW.prep_mission_takeoff ==
            1.0);
          FMS_DW.prep_takeoff = 0.0;
          FMS_DW.condWasTrueAtLastTimeStep_1_k = (FMS_DW.prep_takeoff == 1.0);
          guard4 = true;
        } else {
          b_previousEvent = FMS_DW.sfEvent;
          FMS_DW.sfEvent = FMS_event_DisarmEvent;

          /* Chart: '<Root>/FMS State Machine' */
          FMS_c11_FMS();
          FMS_DW.sfEvent = b_previousEvent;
          if (FMS_DW.is_Vehicle != FMS_IN_Standby) {
          } else {
            guard4 = true;
          }
        }
      } else {
        guard4 = true;
      }

      if (guard4) {
        FMS_DW.home[0] = FMS_B.BusConversion_InsertedFor_FMSSt.x_R;
        FMS_DW.home[1] = FMS_B.BusConversion_InsertedFor_FMSSt.y_R;
        FMS_DW.home[2] = FMS_B.BusConversion_InsertedFor_FMSSt.h_R;
        FMS_B.state = VehicleState_Standby;
      }

      if (FMS_DW.is_Vehicle == FMS_IN_Standby) {
        sf_internal_predicateOutput = (FMS_DW.prep_takeoff == 1.0);
        if ((!sf_internal_predicateOutput) ||
            (!FMS_DW.condWasTrueAtLastTimeStep_1_k)) {
          FMS_DW.durationLastReferenceTick_1_k = FMS_DW.chartAbsoluteTimeCounter;
        }

        FMS_DW.condWasTrueAtLastTimeStep_1_k = sf_internal_predicateOutput;
        sf_internal_predicateOutput = (FMS_DW.prep_mission_takeoff == 1.0);
        if ((!sf_internal_predicateOutput) ||
            (!FMS_DW.condWasTrueAtLastTimeStep_2)) {
          FMS_DW.durationLastReferenceTick_2 = FMS_DW.chartAbsoluteTimeCounter;
        }

        FMS_DW.condWasTrueAtLastTimeStep_2 = sf_internal_predicateOutput;
      }
    }
  }
}

/* Function for Chart: '<Root>/FMS State Machine' */
static void FMS_c11_FMS(void)
{
  int32_T b_previousEvent;

  /* Chart: '<Root>/FMS State Machine' incorporates:
   *  Inport: '<Root>/Mission_Data'
   */
  if (FMS_DW.is_active_c11_FMS == 0U) {
    FMS_DW.mission_timestamp_prev = FMS_U.Mission_Data.timestamp;
    FMS_DW.mission_timestamp_start = FMS_U.Mission_Data.timestamp;
    FMS_DW.cmd_prev = FMS_B.Switch1;
    FMS_DW.cmd_start = FMS_B.Switch1;
    FMS_DW.mode_prev = FMS_B.target_mode;
    FMS_DW.mode_start = FMS_B.target_mode;
    FMS_DW.chartAbsoluteTimeCounter = 0;
    FMS_DW.is_active_c11_FMS = 1U;
    FMS_DW.is_active_Command_Listener = 1U;
    FMS_DW.is_Command_Listener = FMS_IN_Listen;
    FMS_DW.is_active_Combo_Stick = 1U;
    FMS_DW.durationLastReferenceTick_2_a = FMS_DW.chartAbsoluteTimeCounter;
    FMS_DW.durationLastReferenceTick_1_n = FMS_DW.chartAbsoluteTimeCounter;
    FMS_DW.is_Combo_Stick = FMS_IN_Idle;
    FMS_DW.condWasTrueAtLastTimeStep_1_h = FMS_DW.br;
    FMS_DW.condWasTrueAtLastTimeStep_2_g = FMS_DW.bl;
    FMS_DW.is_active_Vehicle = 1U;
    FMS_DW.is_Vehicle = FMS_IN_Disarm;
    FMS_B.state = VehicleState_Disarm;
  } else {
    if (FMS_DW.is_active_Command_Listener != 0U) {
      switch (FMS_DW.is_Command_Listener) {
       case FMS_IN_Check:
        if (FMS_DW.valid_cmd) {
          FMS_DW.is_Command_Listener = FMS_IN_Send;
          FMS_DW.M_msgReservedData = FMS_DW.save_cmd;
          FMS_sf_msg_send_M();
        } else {
          FMS_DW.is_Command_Listener = FMS_IN_Listen;
        }
        break;

       case FMS_IN_Listen:
        if ((FMS_DW.cmd_prev != FMS_DW.cmd_start) && (FMS_B.Switch1 !=
             FMS_Cmd_None)) {
          FMS_DW.save_cmd = FMS_B.Switch1;
          FMS_DW.is_Command_Listener = FMS_IN_Check;
          FMS_DW.valid_cmd = FMS_CheckCmdValid(FMS_DW.save_cmd,
            FMS_B.target_mode, FMS_B.BusConversion_InsertedFor_FMSSt.flag);
        }
        break;

       case FMS_IN_Send:
        FMS_DW.is_Command_Listener = FMS_IN_Listen;
        break;
      }
    }

    if (FMS_DW.is_active_Combo_Stick != 0U) {
      switch (FMS_DW.is_Combo_Stick) {
       case FMS_IN_Arm:
        if (!FMS_BottomRight(FMS_B.BusConversion_InsertedFor_FMS_f.stick_yaw,
                             FMS_B.BusConversion_InsertedFor_FMS_f.stick_throttle))
        {
          FMS_DW.durationLastReferenceTick_2_a = FMS_DW.chartAbsoluteTimeCounter;
          FMS_DW.durationLastReferenceTick_1_n = FMS_DW.chartAbsoluteTimeCounter;
          FMS_DW.is_Combo_Stick = FMS_IN_Idle;
          FMS_DW.condWasTrueAtLastTimeStep_1_h = FMS_DW.br;
          FMS_DW.condWasTrueAtLastTimeStep_2_g = FMS_DW.bl;
        }
        break;

       case FMS_IN_Disarm:
        if (!FMS_BottomLeft(FMS_B.BusConversion_InsertedFor_FMS_f.stick_yaw,
                            FMS_B.BusConversion_InsertedFor_FMS_f.stick_throttle))
        {
          FMS_DW.durationLastReferenceTick_2_a = FMS_DW.chartAbsoluteTimeCounter;
          FMS_DW.durationLastReferenceTick_1_n = FMS_DW.chartAbsoluteTimeCounter;
          FMS_DW.is_Combo_Stick = FMS_IN_Idle;
          FMS_DW.condWasTrueAtLastTimeStep_1_h = FMS_DW.br;
          FMS_DW.condWasTrueAtLastTimeStep_2_g = FMS_DW.bl;
        }
        break;

       case FMS_IN_Idle:
        if ((!FMS_DW.br) || (!FMS_DW.condWasTrueAtLastTimeStep_1_h)) {
          FMS_DW.durationLastReferenceTick_1_n = FMS_DW.chartAbsoluteTimeCounter;
        }

        FMS_DW.condWasTrueAtLastTimeStep_1_h = FMS_DW.br;
        if (FMS_DW.chartAbsoluteTimeCounter -
            FMS_DW.durationLastReferenceTick_1_n > 375) {
          FMS_DW.is_Combo_Stick = FMS_IN_Arm;
          FMS_DW.M_msgReservedData = FMS_Cmd_PreArm;
          FMS_sf_msg_send_M();
        } else {
          if ((!FMS_DW.bl) || (!FMS_DW.condWasTrueAtLastTimeStep_2_g)) {
            FMS_DW.durationLastReferenceTick_2_a =
              FMS_DW.chartAbsoluteTimeCounter;
          }

          FMS_DW.condWasTrueAtLastTimeStep_2_g = FMS_DW.bl;
          if (FMS_DW.chartAbsoluteTimeCounter -
              FMS_DW.durationLastReferenceTick_2_a > 375) {
            FMS_DW.is_Combo_Stick = FMS_IN_Disarm;
            b_previousEvent = FMS_DW.sfEvent;
            FMS_DW.sfEvent = FMS_event_DisarmEvent;
            if (FMS_DW.is_active_Vehicle != 0U) {
              FMS_Vehicle();
            }

            FMS_DW.sfEvent = b_previousEvent;
          } else {
            FMS_DW.bl = FMS_BottomLeft
              (FMS_B.BusConversion_InsertedFor_FMS_f.stick_yaw,
               FMS_B.BusConversion_InsertedFor_FMS_f.stick_throttle);
            if ((!FMS_DW.bl) || (!FMS_DW.condWasTrueAtLastTimeStep_2_g)) {
              FMS_DW.durationLastReferenceTick_2_a =
                FMS_DW.chartAbsoluteTimeCounter;
            }

            FMS_DW.condWasTrueAtLastTimeStep_2_g = FMS_DW.bl;
            FMS_DW.br = FMS_BottomRight
              (FMS_B.BusConversion_InsertedFor_FMS_f.stick_yaw,
               FMS_B.BusConversion_InsertedFor_FMS_f.stick_throttle);
            if ((!FMS_DW.br) || (!FMS_DW.condWasTrueAtLastTimeStep_1_h)) {
              FMS_DW.durationLastReferenceTick_1_n =
                FMS_DW.chartAbsoluteTimeCounter;
            }

            FMS_DW.condWasTrueAtLastTimeStep_1_h = FMS_DW.br;
          }
        }
        break;
      }
    }

    if (FMS_DW.is_active_Vehicle != 0U) {
      FMS_Vehicle();
    }
  }

  /* End of Chart: '<Root>/FMS State Machine' */
}

/* Function for Chart: '<Root>/FMS State Machine' */
static void FMS_sf_msg_discard_M(void)
{
  if (FMS_DW.M_isValid) {
    FMS_DW.M_isValid = false;
  }
}

real32_T rt_remf(real32_T u0, real32_T u1)
{
  real32_T y;
  real32_T q;
  if ((u1 != 0.0F) && (u1 != truncf(u1))) {
    q = fabsf(u0 / u1);
    if (fabsf(q - floorf(q + 0.5F)) <= FLT_EPSILON * q) {
      y = 0.0F;
    } else {
      y = fmodf(u0, u1);
    }
  } else {
    y = fmodf(u0, u1);
  }

  return y;
}

void FMS_initQueue(Queue_FMS_Cmd *q, QueuePolicy_T policy, int32_T capacity,
                   Msg_FMS_Cmd *qPool)
{
  q->fPolicy = policy;
  q->fCapacity = capacity;
  q->fHead = -1;
  q->fTail = -1;
  q->fArray = qPool;
}

/* Function for Chart: '<Root>/FMS State Machine' */
static void initialize_msg_local_queues_for(void)
{
  FMS_initQueue((Queue_FMS_Cmd *)&FMS_DW.Queue_FMS_Cmd_p, MSG_FIFO_QUEUE, 10,
                (Msg_FMS_Cmd *)&FMS_DW.Msg_FMS_Cmd_c[1]);
}

/* Model step function */
void FMS_step(void)
{
  real32_T A;
  real32_T B;
  real32_T D;
  int8_T rtPrevAction;
  uint16_T rtb_DataTypeConversion;
  uint16_T rtb_DataTypeConversion1_l;
  real32_T rtb_Saturation_l;
  real32_T rtb_VectorConcatenate_m[9];
  real32_T rtb_Saturation1_ln[2];
  real32_T rtb_a_pr;
  real32_T rtb_Sqrt_k0;
  MotionState rtb_state_a;
  real32_T rtb_Switch_l[3];
  real32_T rtb_Divide_mx[2];
  real32_T rtb_Switch_k;
  real32_T rtb_Add4_k;
  MotionState rtb_state_l;
  MotionState rtb_state_b;
  boolean_T rtb_FixPtRelationalOperator;
  real32_T rtb_TmpSignalConversionAtDela_a[2];
  int32_T i;
  real32_T rtb_VectorConcatenate_a[3];
  boolean_T u;
  real32_T rtb_Saturation1_m;
  real32_T rtb_MathFunction_cr_idx_1;
  real32_T rtb_MathFunction_cr_idx_0;
  real32_T rtb_MathFunction_iq_idx_1;
  real32_T rtb_MathFunction_iq_idx_0;
  real32_T rtb_MathFunction_h_idx_0;
  real32_T u1_tmp;
  boolean_T guard1 = false;

  /* Outputs for Atomic SubSystem: '<Root>/CommandProcess' */
  /* DiscreteIntegrator: '<S5>/Discrete-Time Integrator1' incorporates:
   *  Inport: '<Root>/Pilot_Cmd'
   *  RelationalOperator: '<S9>/FixPt Relational Operator'
   *  UnitDelay: '<S9>/Delay Input1'
   *
   * Block description for '<S9>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (FMS_U.Pilot_Cmd.timestamp != FMS_DW.DelayInput1_DSTATE) {
    FMS_DW.DiscreteTimeIntegrator1_DSTATE = 0U;
  }

  /* Switch: '<S7>/Switch' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S13>/Constant'
   *  Constant: '<S8>/Constant'
   *  DataTypeConversion: '<S7>/Data Type Conversion2'
   *  Delay: '<S7>/Delay'
   *  DiscreteIntegrator: '<S5>/Discrete-Time Integrator1'
   *  Inport: '<Root>/GCS_Cmd'
   *  Inport: '<Root>/Pilot_Cmd'
   *  Logic: '<S7>/Logical Operator'
   *  Logic: '<S7>/Logical Operator1'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S13>/Compare'
   *  RelationalOperator: '<S14>/FixPt Relational Operator'
   *  RelationalOperator: '<S8>/Compare'
   *  Switch: '<S7>/Switch1'
   *  UnitDelay: '<S14>/Delay Input1'
   *
   * Block description for '<S14>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if ((FMS_U.Pilot_Cmd.mode != 0U) && (FMS_DW.DiscreteTimeIntegrator1_DSTATE <
       500U)) {
    FMS_DW.Delay_DSTATE_c = (PilotMode)FMS_U.Pilot_Cmd.mode;
  } else {
    if ((FMS_U.GCS_Cmd.mode != FMS_DW.DelayInput1_DSTATE_f) &&
        (FMS_U.GCS_Cmd.mode != 0U)) {
      /* Switch: '<S7>/Switch1' incorporates:
       *  DataTypeConversion: '<S7>/Data Type Conversion1'
       *  Delay: '<S7>/Delay'
       *  Inport: '<Root>/GCS_Cmd'
       */
      FMS_DW.Delay_DSTATE_c = (PilotMode)FMS_U.GCS_Cmd.mode;
    }
  }

  /* End of Switch: '<S7>/Switch' */

  /* Switch: '<S6>/Switch1' incorporates:
   *  DataTypeConversion: '<S6>/Data Type Conversion2'
   *  Inport: '<Root>/GCS_Cmd'
   *  Inport: '<Root>/Pilot_Cmd'
   *  RelationalOperator: '<S10>/FixPt Relational Operator'
   *  RelationalOperator: '<S11>/FixPt Relational Operator'
   *  Switch: '<S6>/Switch2'
   *  UnitDelay: '<S10>/Delay Input1'
   *  UnitDelay: '<S11>/Delay Input1'
   *
   * Block description for '<S10>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S11>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (FMS_U.Pilot_Cmd.cmd_1 != FMS_DW.DelayInput1_DSTATE_i) {
    FMS_B.Switch1 = (FMS_Cmd)FMS_U.Pilot_Cmd.cmd_1;
  } else if (FMS_U.GCS_Cmd.cmd_1 != FMS_DW.DelayInput1_DSTATE_p) {
    /* Switch: '<S6>/Switch2' incorporates:
     *  DataTypeConversion: '<S6>/Data Type Conversion1'
     *  Inport: '<Root>/GCS_Cmd'
     */
    FMS_B.Switch1 = (FMS_Cmd)FMS_U.GCS_Cmd.cmd_1;
  } else {
    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S6>/Constant1'
     */
    FMS_B.Switch1 = FMS_Cmd_None;
  }

  /* End of Switch: '<S6>/Switch1' */

  /* Update for UnitDelay: '<S9>/Delay Input1' incorporates:
   *  Inport: '<Root>/Pilot_Cmd'
   *
   * Block description for '<S9>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE = FMS_U.Pilot_Cmd.timestamp;

  /* Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator1' incorporates:
   *  Constant: '<S5>/Constant1'
   */
  rtb_Add4_k = (real32_T)FMS_DW.DiscreteTimeIntegrator1_DSTATE + (real32_T)
    FMS_EXPORT.period;
  if (rtb_Add4_k < 4.2949673E+9F) {
    FMS_DW.DiscreteTimeIntegrator1_DSTATE = (uint32_T)rtb_Add4_k;
  } else {
    FMS_DW.DiscreteTimeIntegrator1_DSTATE = MAX_uint32_T;
  }

  /* End of Update for DiscreteIntegrator: '<S5>/Discrete-Time Integrator1' */

  /* Update for UnitDelay: '<S14>/Delay Input1' incorporates:
   *  Inport: '<Root>/GCS_Cmd'
   *
   * Block description for '<S14>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_f = FMS_U.GCS_Cmd.mode;

  /* Update for UnitDelay: '<S11>/Delay Input1' incorporates:
   *  Inport: '<Root>/GCS_Cmd'
   *
   * Block description for '<S11>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_p = FMS_U.GCS_Cmd.cmd_1;

  /* Update for UnitDelay: '<S10>/Delay Input1' incorporates:
   *  Inport: '<Root>/Pilot_Cmd'
   *
   * Block description for '<S10>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_i = FMS_U.Pilot_Cmd.cmd_1;

  /* End of Outputs for SubSystem: '<Root>/CommandProcess' */

  /* Chart: '<Root>/SafeMode' incorporates:
   *  Delay: '<S7>/Delay'
   *  Inport: '<Root>/INS_Out'
   */
  if (FMS_DW.is_active_c3_FMS == 0U) {
    FMS_DW.is_active_c3_FMS = 1U;
    switch (FMS_DW.Delay_DSTATE_c) {
     case PilotMode_Manual:
      FMS_DW.is_c3_FMS = FMS_IN_Manual_e;
      break;

     case PilotMode_Acro:
      FMS_DW.is_c3_FMS = FMS_IN_Acro;
      break;

     case PilotMode_Stabilize:
      FMS_DW.is_c3_FMS = FMS_IN_Stabilize_j;
      break;

     case PilotMode_Altitude:
      FMS_DW.is_c3_FMS = FMS_IN_Altitude;
      break;

     case PilotMode_Position:
      FMS_DW.is_c3_FMS = FMS_IN_Position_f;
      break;

     case PilotMode_Mission:
      FMS_DW.is_c3_FMS = FMS_IN_Mission_g;
      break;

     default:
      FMS_DW.is_c3_FMS = FMS_IN_Other;
      break;
    }
  } else {
    switch (FMS_DW.is_c3_FMS) {
     case FMS_IN_Acro:
      if ((FMS_U.INS_Out.flag & 4U) != 0U) {
        FMS_B.target_mode = PilotMode_Acro;
        switch (FMS_DW.Delay_DSTATE_c) {
         case PilotMode_Manual:
          FMS_DW.is_c3_FMS = FMS_IN_Manual_e;
          break;

         case PilotMode_Acro:
          FMS_DW.is_c3_FMS = FMS_IN_Acro;
          break;

         case PilotMode_Stabilize:
          FMS_DW.is_c3_FMS = FMS_IN_Stabilize_j;
          break;

         case PilotMode_Altitude:
          FMS_DW.is_c3_FMS = FMS_IN_Altitude;
          break;

         case PilotMode_Position:
          FMS_DW.is_c3_FMS = FMS_IN_Position_f;
          break;

         case PilotMode_Mission:
          FMS_DW.is_c3_FMS = FMS_IN_Mission_g;
          break;

         default:
          FMS_DW.is_c3_FMS = FMS_IN_Other;
          break;
        }
      } else {
        FMS_DW.is_c3_FMS = FMS_IN_Manual_e;
      }
      break;

     case FMS_IN_Altitude:
      if (((FMS_U.INS_Out.flag & 4U) != 0U) && ((FMS_U.INS_Out.flag & 128U) !=
           0U)) {
        FMS_B.target_mode = PilotMode_Altitude;
        switch (FMS_DW.Delay_DSTATE_c) {
         case PilotMode_Manual:
          FMS_DW.is_c3_FMS = FMS_IN_Manual_e;
          break;

         case PilotMode_Acro:
          FMS_DW.is_c3_FMS = FMS_IN_Acro;
          break;

         case PilotMode_Stabilize:
          FMS_DW.is_c3_FMS = FMS_IN_Stabilize_j;
          break;

         case PilotMode_Altitude:
          FMS_DW.is_c3_FMS = FMS_IN_Altitude;
          break;

         case PilotMode_Position:
          FMS_DW.is_c3_FMS = FMS_IN_Position_f;
          break;

         case PilotMode_Mission:
          FMS_DW.is_c3_FMS = FMS_IN_Mission_g;
          break;

         default:
          FMS_DW.is_c3_FMS = FMS_IN_Other;
          break;
        }
      } else {
        FMS_DW.is_c3_FMS = FMS_IN_Stabilize_j;
      }
      break;

     case FMS_IN_Manual_e:
      FMS_B.target_mode = PilotMode_Manual;
      switch (FMS_DW.Delay_DSTATE_c) {
       case PilotMode_Manual:
        FMS_DW.is_c3_FMS = FMS_IN_Manual_e;
        break;

       case PilotMode_Acro:
        FMS_DW.is_c3_FMS = FMS_IN_Acro;
        break;

       case PilotMode_Stabilize:
        FMS_DW.is_c3_FMS = FMS_IN_Stabilize_j;
        break;

       case PilotMode_Altitude:
        FMS_DW.is_c3_FMS = FMS_IN_Altitude;
        break;

       case PilotMode_Position:
        FMS_DW.is_c3_FMS = FMS_IN_Position_f;
        break;

       case PilotMode_Mission:
        FMS_DW.is_c3_FMS = FMS_IN_Mission_g;
        break;

       default:
        FMS_DW.is_c3_FMS = FMS_IN_Other;
        break;
      }
      break;

     case FMS_IN_Mission_g:
      if (((FMS_U.INS_Out.flag & 4U) != 0U) && ((FMS_U.INS_Out.flag & 64U) != 0U)
          && ((FMS_U.INS_Out.flag & 128U) != 0U)) {
        FMS_B.target_mode = PilotMode_Mission;
        switch (FMS_DW.Delay_DSTATE_c) {
         case PilotMode_Manual:
          FMS_DW.is_c3_FMS = FMS_IN_Manual_e;
          break;

         case PilotMode_Acro:
          FMS_DW.is_c3_FMS = FMS_IN_Acro;
          break;

         case PilotMode_Stabilize:
          FMS_DW.is_c3_FMS = FMS_IN_Stabilize_j;
          break;

         case PilotMode_Altitude:
          FMS_DW.is_c3_FMS = FMS_IN_Altitude;
          break;

         case PilotMode_Position:
          FMS_DW.is_c3_FMS = FMS_IN_Position_f;
          break;

         case PilotMode_Mission:
          FMS_DW.is_c3_FMS = FMS_IN_Mission_g;
          break;

         default:
          FMS_DW.is_c3_FMS = FMS_IN_Other;
          break;
        }
      } else {
        FMS_DW.is_c3_FMS = FMS_IN_Position_f;
      }
      break;

     case FMS_IN_Other:
      FMS_B.target_mode = FMS_DW.Delay_DSTATE_c;
      switch (FMS_DW.Delay_DSTATE_c) {
       case PilotMode_Manual:
        FMS_DW.is_c3_FMS = FMS_IN_Manual_e;
        break;

       case PilotMode_Acro:
        FMS_DW.is_c3_FMS = FMS_IN_Acro;
        break;

       case PilotMode_Stabilize:
        FMS_DW.is_c3_FMS = FMS_IN_Stabilize_j;
        break;

       case PilotMode_Altitude:
        FMS_DW.is_c3_FMS = FMS_IN_Altitude;
        break;

       case PilotMode_Position:
        FMS_DW.is_c3_FMS = FMS_IN_Position_f;
        break;

       case PilotMode_Mission:
        FMS_DW.is_c3_FMS = FMS_IN_Mission_g;
        break;

       default:
        FMS_DW.is_c3_FMS = FMS_IN_Other;
        break;
      }
      break;

     case FMS_IN_Position_f:
      if (((FMS_U.INS_Out.flag & 4U) != 0U) && ((FMS_U.INS_Out.flag & 64U) != 0U)
          && ((FMS_U.INS_Out.flag & 128U) != 0U)) {
        FMS_B.target_mode = PilotMode_Position;
        switch (FMS_DW.Delay_DSTATE_c) {
         case PilotMode_Manual:
          FMS_DW.is_c3_FMS = FMS_IN_Manual_e;
          break;

         case PilotMode_Acro:
          FMS_DW.is_c3_FMS = FMS_IN_Acro;
          break;

         case PilotMode_Stabilize:
          FMS_DW.is_c3_FMS = FMS_IN_Stabilize_j;
          break;

         case PilotMode_Altitude:
          FMS_DW.is_c3_FMS = FMS_IN_Altitude;
          break;

         case PilotMode_Position:
          FMS_DW.is_c3_FMS = FMS_IN_Position_f;
          break;

         case PilotMode_Mission:
          FMS_DW.is_c3_FMS = FMS_IN_Mission_g;
          break;

         default:
          FMS_DW.is_c3_FMS = FMS_IN_Other;
          break;
        }
      } else {
        FMS_DW.is_c3_FMS = FMS_IN_Altitude;
      }
      break;

     default:
      if ((FMS_U.INS_Out.flag & 4U) != 0U) {
        FMS_B.target_mode = PilotMode_Stabilize;
        switch (FMS_DW.Delay_DSTATE_c) {
         case PilotMode_Manual:
          FMS_DW.is_c3_FMS = FMS_IN_Manual_e;
          break;

         case PilotMode_Acro:
          FMS_DW.is_c3_FMS = FMS_IN_Acro;
          break;

         case PilotMode_Stabilize:
          FMS_DW.is_c3_FMS = FMS_IN_Stabilize_j;
          break;

         case PilotMode_Altitude:
          FMS_DW.is_c3_FMS = FMS_IN_Altitude;
          break;

         case PilotMode_Position:
          FMS_DW.is_c3_FMS = FMS_IN_Position_f;
          break;

         case PilotMode_Mission:
          FMS_DW.is_c3_FMS = FMS_IN_Mission_g;
          break;

         default:
          FMS_DW.is_c3_FMS = FMS_IN_Other;
          break;
        }
      } else {
        FMS_DW.is_c3_FMS = FMS_IN_Acro;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/SafeMode' */

  /* BusCreator: '<Root>/BusConversion_InsertedFor_FMS State Machine_at_inport_2' incorporates:
   *  Inport: '<Root>/Pilot_Cmd'
   */
  FMS_B.BusConversion_InsertedFor_FMS_f = FMS_U.Pilot_Cmd;

  /* BusCreator: '<Root>/BusConversion_InsertedFor_FMS State Machine_at_inport_3' incorporates:
   *  Inport: '<Root>/INS_Out'
   */
  FMS_B.BusConversion_InsertedFor_FMSSt = FMS_U.INS_Out;

  /* Chart: '<Root>/FMS State Machine' incorporates:
   *  Constant: '<Root>/Constant'
   *  Inport: '<Root>/Mission_Data'
   */
  FMS_DW.chartAbsoluteTimeCounter++;
  FMS_DW.durationLastReferenceTick_1 = FMS_DW.chartAbsoluteTimeCounter;
  FMS_DW.condWasTrueAtLastTimeStep_1 = false;
  FMS_DW.durationLastReferenceTick_1_j = FMS_DW.chartAbsoluteTimeCounter;
  FMS_DW.condWasTrueAtLastTimeStep_1_d = false;
  rtb_FixPtRelationalOperator = (FMS_DW.prep_takeoff == 1.0);
  if ((!rtb_FixPtRelationalOperator) || (!FMS_DW.condWasTrueAtLastTimeStep_1_k))
  {
    FMS_DW.durationLastReferenceTick_1_k = FMS_DW.chartAbsoluteTimeCounter;
  }

  FMS_DW.condWasTrueAtLastTimeStep_1_k = rtb_FixPtRelationalOperator;
  rtb_FixPtRelationalOperator = (FMS_DW.prep_mission_takeoff == 1.0);
  if ((!rtb_FixPtRelationalOperator) || (!FMS_DW.condWasTrueAtLastTimeStep_2)) {
    FMS_DW.durationLastReferenceTick_2 = FMS_DW.chartAbsoluteTimeCounter;
  }

  FMS_DW.condWasTrueAtLastTimeStep_2 = rtb_FixPtRelationalOperator;
  FMS_DW.durationLastReferenceTick_1_c = FMS_DW.chartAbsoluteTimeCounter;
  FMS_DW.condWasTrueAtLastTimeStep_1_d0 = false;
  if ((!FMS_DW.br) || (!FMS_DW.condWasTrueAtLastTimeStep_1_h)) {
    FMS_DW.durationLastReferenceTick_1_n = FMS_DW.chartAbsoluteTimeCounter;
  }

  FMS_DW.condWasTrueAtLastTimeStep_1_h = FMS_DW.br;
  if ((!FMS_DW.bl) || (!FMS_DW.condWasTrueAtLastTimeStep_2_g)) {
    FMS_DW.durationLastReferenceTick_2_a = FMS_DW.chartAbsoluteTimeCounter;
  }

  FMS_DW.condWasTrueAtLastTimeStep_2_g = FMS_DW.bl;
  if (FMS_DW.temporalCounter_i1 < 4095U) {
    FMS_DW.temporalCounter_i1++;
  }

  FMS_DW.sfEvent = -1;
  FMS_DW.mission_timestamp_prev = FMS_DW.mission_timestamp_start;
  FMS_DW.mission_timestamp_start = FMS_U.Mission_Data.timestamp;
  FMS_DW.cmd_prev = FMS_DW.cmd_start;
  FMS_DW.cmd_start = FMS_B.Switch1;
  FMS_DW.mode_prev = FMS_DW.mode_start;
  FMS_DW.mode_start = FMS_B.target_mode;
  FMS_DW.M_isValid = false;
  FMS_c11_FMS();
  FMS_sf_msg_discard_M();

  /* End of Chart: '<Root>/FMS State Machine' */

  /* Outputs for Atomic SubSystem: '<Root>/FMS Commander' */
  /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
  /* SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1' */
  rtb_Divide_mx[0] = FMS_B.Cmd_In.sp_return[0];
  rtb_Divide_mx[1] = FMS_B.Cmd_In.sp_return[1];
  rtb_Switch_l[0] = FMS_B.Cmd_In.sp_waypoint[0];
  rtb_Switch_l[1] = FMS_B.Cmd_In.sp_waypoint[1];
  rtb_Switch_l[2] = FMS_B.Cmd_In.sp_waypoint[2];

  /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

  /* SwitchCase: '<S15>/Switch Case' incorporates:
   *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy6Inport1'
   */
  rtPrevAction = FMS_DW.SwitchCase_ActiveSubsystem;

  /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
  switch (FMS_B.state) {
   case VehicleState_Disarm:
   case VehicleState_None:
    FMS_DW.SwitchCase_ActiveSubsystem = 0;
    break;

   case VehicleState_Standby:
    FMS_DW.SwitchCase_ActiveSubsystem = 1;
    break;

   default:
    FMS_DW.SwitchCase_ActiveSubsystem = 2;
    break;
  }

  /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
  if ((rtPrevAction != FMS_DW.SwitchCase_ActiveSubsystem) && (rtPrevAction == 2))
  {
    /* Disable for SwitchCase: '<S17>/Switch Case' */
    switch (FMS_DW.SwitchCase_ActiveSubsystem_b) {
     case 0:
      /* Disable for SwitchCase: '<S24>/Switch Case' */
      switch (FMS_DW.SwitchCase_ActiveSubsystem_at) {
       case 0:
       case 1:
       case 4:
        break;

       case 2:
        /* Disable for SwitchCase: '<S261>/Switch Case' */
        FMS_DW.SwitchCase_ActiveSubsystem_k = -1;

        /* Disable for SwitchCase: '<S251>/Switch Case' */
        FMS_DW.SwitchCase_ActiveSubsystem_g = -1;
        break;

       case 3:
        /* Disable for SwitchCase: '<S207>/Switch Case' */
        FMS_DW.SwitchCase_ActiveSubsystem_p = -1;

        /* Disable for SwitchCase: '<S185>/Switch Case' */
        FMS_DW.SwitchCase_ActiveSubsystem_pp = -1;

        /* Disable for SwitchCase: '<S195>/Switch Case' */
        FMS_DW.SwitchCase_ActiveSubsystem_bn = -1;
        break;
      }

      FMS_DW.SwitchCase_ActiveSubsystem_at = -1;
      break;

     case 1:
      /* Disable for SwitchCase: '<S22>/Switch Case' */
      if (FMS_DW.SwitchCase_ActiveSubsystem_i == 1) {
        /* Disable for Resettable SubSystem: '<S99>/Mission_SubSystem' */
        /* Disable for SwitchCase: '<S144>/Switch Case' */
        FMS_DW.SwitchCase_ActiveSubsystem_a = -1;

        /* Disable for SwitchCase: '<S134>/Switch Case' */
        FMS_DW.SwitchCase_ActiveSubsystem_e = -1;

        /* End of Disable for SubSystem: '<S99>/Mission_SubSystem' */
      }

      FMS_DW.SwitchCase_ActiveSubsystem_i = -1;
      break;

     case 2:
      /* Disable for SwitchCase: '<S21>/Switch Case' */
      switch (FMS_DW.SwitchCase_ActiveSubsystem_f) {
       case 0:
       case 1:
       case 4:
        break;

       case 2:
        /* Disable for SwitchCase: '<S37>/Switch Case' */
        FMS_DW.SwitchCase_ActiveSubsystem_m = -1;
        break;

       case 3:
        /* Disable for SwitchCase: '<S72>/Switch Case' */
        FMS_DW.SwitchCase_ActiveSubsystem_l = -1;

        /* Disable for SwitchCase: '<S58>/Switch Case' */
        FMS_DW.SwitchCase_ActiveSubsystem_ba = -1;
        break;
      }

      FMS_DW.SwitchCase_ActiveSubsystem_f = -1;
      break;

     case 3:
     case 4:
      break;
    }

    FMS_DW.SwitchCase_ActiveSubsystem_b = -1;

    /* End of Disable for SwitchCase: '<S17>/Switch Case' */
  }

  switch (FMS_DW.SwitchCase_ActiveSubsystem) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S15>/Disarm' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    /* Outport: '<Root>/FMS_Out' incorporates:
     *  BusAssignment: '<S18>/Bus Assignment'
     *  BusAssignment: '<S19>/Bus Assignment'
     *  Constant: '<S19>/Constant'
     *  SignalConversion: '<S19>/TmpHiddenBufferAtBus AssignmentInport1'
     */
    FMS_Y.FMS_Out = FMS_rtZFMS_Out_Bus;

    /* BusAssignment: '<S19>/Bus Assignment' incorporates:
     *  BusAssignment: '<S18>/Bus Assignment'
     *  Constant: '<S19>/Constant2'
     *  DataTypeConversion: '<S19>/Data Type Conversion2'
     *  Outport: '<Root>/FMS_Out'
     */
    FMS_Y.FMS_Out.reset = 1U;
    FMS_Y.FMS_Out.status = FMS_ConstB.DataTypeConversion_m;
    FMS_Y.FMS_Out.state = FMS_ConstB.DataTypeConversion1_a;
    for (i = 0; i < 16; i++) {
      /* DataTypeConversion: '<S19>/Data Type Conversion2' incorporates:
       *  Constant: '<S19>/Constant6'
       */
      rtb_Add4_k = fmodf(floorf(FMS_PARAM.DISARM_OUT[i]), 65536.0F);
      FMS_Y.FMS_Out.actuator_cmd[i] = (uint16_T)(rtb_Add4_k < 0.0F ? (int32_T)
        (uint16_T)-(int16_T)(uint16_T)-rtb_Add4_k : (int32_T)(uint16_T)
        rtb_Add4_k);
    }

    /* End of Outputs for SubSystem: '<S15>/Disarm' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S15>/Standby' incorporates:
     *  ActionPort: '<S20>/Action Port'
     */
    /* Outport: '<Root>/FMS_Out' incorporates:
     *  BusAssignment: '<S18>/Bus Assignment'
     *  BusAssignment: '<S20>/Bus Assignment'
     *  Constant: '<S20>/Constant'
     *  SignalConversion: '<S20>/TmpHiddenBufferAtBus AssignmentInport1'
     */
    FMS_Y.FMS_Out = FMS_rtZFMS_Out_Bus;

    /* BusAssignment: '<S20>/Bus Assignment' incorporates:
     *  BusAssignment: '<S18>/Bus Assignment'
     *  Constant: '<S20>/Constant2'
     *  DataTypeConversion: '<S20>/Data Type Conversion3'
     *  Outport: '<Root>/FMS_Out'
     */
    FMS_Y.FMS_Out.reset = 1U;
    FMS_Y.FMS_Out.status = FMS_ConstB.DataTypeConversion2_h;
    FMS_Y.FMS_Out.state = FMS_ConstB.DataTypeConversion1_f;
    for (i = 0; i < 16; i++) {
      /* DataTypeConversion: '<S20>/Data Type Conversion3' incorporates:
       *  Constant: '<S20>/Constant6'
       */
      rtb_Add4_k = fmodf(floorf(FMS_PARAM.STANDBY_OUT[i]), 65536.0F);
      FMS_Y.FMS_Out.actuator_cmd[i] = (uint16_T)(rtb_Add4_k < 0.0F ? (int32_T)
        (uint16_T)-(int16_T)(uint16_T)-rtb_Add4_k : (int32_T)(uint16_T)
        rtb_Add4_k);
    }

    /* End of Outputs for SubSystem: '<S15>/Standby' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S15>/Arm' incorporates:
     *  ActionPort: '<S17>/Action Port'
     */
    /* SwitchCase: '<S17>/Switch Case' */
    rtPrevAction = FMS_DW.SwitchCase_ActiveSubsystem_b;

    /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
    switch (FMS_B.state) {
     case VehicleState_Land:
     case VehicleState_Return:
     case VehicleState_Takeoff:
     case VehicleState_Hold:
      FMS_DW.SwitchCase_ActiveSubsystem_b = 0;
      break;

     case VehicleState_Offboard:
     case VehicleState_Mission:
      FMS_DW.SwitchCase_ActiveSubsystem_b = 1;
      break;

     case VehicleState_Acro:
     case VehicleState_Stabilize:
     case VehicleState_Altitude:
     case VehicleState_Position:
      FMS_DW.SwitchCase_ActiveSubsystem_b = 2;
      break;

     case VehicleState_Manual:
      FMS_DW.SwitchCase_ActiveSubsystem_b = 3;
      break;

     default:
      FMS_DW.SwitchCase_ActiveSubsystem_b = 4;
      break;
    }

    /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
    if (rtPrevAction != FMS_DW.SwitchCase_ActiveSubsystem_b) {
      switch (rtPrevAction) {
       case 0:
        /* Disable for SwitchCase: '<S24>/Switch Case' */
        switch (FMS_DW.SwitchCase_ActiveSubsystem_at) {
         case 0:
         case 1:
         case 4:
          break;

         case 2:
          /* Disable for SwitchCase: '<S261>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_k = -1;

          /* Disable for SwitchCase: '<S251>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_g = -1;
          break;

         case 3:
          /* Disable for SwitchCase: '<S207>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_p = -1;

          /* Disable for SwitchCase: '<S185>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_pp = -1;

          /* Disable for SwitchCase: '<S195>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_bn = -1;
          break;
        }

        FMS_DW.SwitchCase_ActiveSubsystem_at = -1;
        break;

       case 1:
        /* Disable for SwitchCase: '<S22>/Switch Case' */
        if (FMS_DW.SwitchCase_ActiveSubsystem_i == 1) {
          /* Disable for Resettable SubSystem: '<S99>/Mission_SubSystem' */
          /* Disable for SwitchCase: '<S144>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_a = -1;

          /* Disable for SwitchCase: '<S134>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_e = -1;

          /* End of Disable for SubSystem: '<S99>/Mission_SubSystem' */
        }

        FMS_DW.SwitchCase_ActiveSubsystem_i = -1;
        break;

       case 2:
        /* Disable for SwitchCase: '<S21>/Switch Case' */
        switch (FMS_DW.SwitchCase_ActiveSubsystem_f) {
         case 0:
         case 1:
         case 4:
          break;

         case 2:
          /* Disable for SwitchCase: '<S37>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_m = -1;
          break;

         case 3:
          /* Disable for SwitchCase: '<S72>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_l = -1;

          /* Disable for SwitchCase: '<S58>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_ba = -1;
          break;
        }

        FMS_DW.SwitchCase_ActiveSubsystem_f = -1;
        break;

       case 3:
       case 4:
        break;
      }
    }

    switch (FMS_DW.SwitchCase_ActiveSubsystem_b) {
     case 0:
      /* Outputs for IfAction SubSystem: '<S17>/SubMode' incorporates:
       *  ActionPort: '<S24>/Action Port'
       */
      /* SwitchCase: '<S24>/Switch Case' incorporates:
       *  Math: '<S283>/Math Function'
       *  Product: '<S285>/Divide'
       *  Sum: '<S246>/Subtract'
       */
      rtPrevAction = FMS_DW.SwitchCase_ActiveSubsystem_at;

      /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
      switch (FMS_B.state) {
       case VehicleState_Takeoff:
        FMS_DW.SwitchCase_ActiveSubsystem_at = 0;
        break;

       case VehicleState_Land:
        FMS_DW.SwitchCase_ActiveSubsystem_at = 1;
        break;

       case VehicleState_Return:
        FMS_DW.SwitchCase_ActiveSubsystem_at = 2;
        break;

       case VehicleState_Hold:
        FMS_DW.SwitchCase_ActiveSubsystem_at = 3;
        break;

       default:
        FMS_DW.SwitchCase_ActiveSubsystem_at = 4;
        break;
      }

      /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
      if (rtPrevAction != FMS_DW.SwitchCase_ActiveSubsystem_at) {
        switch (rtPrevAction) {
         case 0:
         case 1:
         case 4:
          break;

         case 2:
          /* Disable for SwitchCase: '<S261>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_k = -1;

          /* Disable for SwitchCase: '<S251>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_g = -1;
          break;

         case 3:
          /* Disable for SwitchCase: '<S207>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_p = -1;

          /* Disable for SwitchCase: '<S185>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_pp = -1;

          /* Disable for SwitchCase: '<S195>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_bn = -1;
          break;
        }
      }

      switch (FMS_DW.SwitchCase_ActiveSubsystem_at) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S24>/Takeoff' incorporates:
         *  ActionPort: '<S180>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Sum: '<S298>/Sum2' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
         *  Sum: '<S292>/Sum'
         */
        rtb_Switch_k = FMS_U.INS_Out.h_R - FMS_B.Cmd_In.cur_waypoint[2];

        /* Product: '<S298>/Divide' incorporates:
         *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
         *  Sum: '<S298>/Sum1'
         *  Sum: '<S298>/Sum2'
         */
        rtb_Saturation_l = 1.0F / (FMS_B.Cmd_In.sp_takeoff[2] -
          FMS_B.Cmd_In.cur_waypoint[2]) * rtb_Switch_k;

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Saturate: '<S298>/Saturation' */
        if (rtb_Saturation_l > 1.0F) {
          rtb_Saturation_l = 1.0F;
        } else {
          if (rtb_Saturation_l < 0.0F) {
            rtb_Saturation_l = 0.0F;
          }
        }

        /* End of Saturate: '<S298>/Saturation' */

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Trigonometry: '<S299>/Trigonometric Function1' incorporates:
         *  Gain: '<S297>/Gain'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  Trigonometry: '<S299>/Trigonometric Function3'
         */
        rtb_Add4_k = arm_cos_f32(-FMS_U.INS_Out.psi);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        rtb_VectorConcatenate_m[0] = rtb_Add4_k;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Trigonometry: '<S299>/Trigonometric Function' incorporates:
         *  Gain: '<S297>/Gain'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  Trigonometry: '<S299>/Trigonometric Function2'
         */
        A = arm_sin_f32(-FMS_U.INS_Out.psi);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        rtb_VectorConcatenate_m[1] = A;

        /* SignalConversion: '<S299>/ConcatBufferAtVector Concatenate1In3' incorporates:
         *  Constant: '<S299>/Constant3'
         */
        rtb_VectorConcatenate_m[2] = 0.0F;

        /* Gain: '<S299>/Gain' */
        rtb_VectorConcatenate_m[3] = -A;

        /* Trigonometry: '<S299>/Trigonometric Function3' */
        rtb_VectorConcatenate_m[4] = rtb_Add4_k;

        /* SignalConversion: '<S299>/ConcatBufferAtVector Concatenate2In3' incorporates:
         *  Constant: '<S299>/Constant4'
         */
        rtb_VectorConcatenate_m[5] = 0.0F;

        /* SignalConversion: '<S299>/ConcatBufferAtVector ConcatenateIn3' */
        rtb_VectorConcatenate_m[6] = FMS_ConstB.VectorConcatenate3_fb[0];
        rtb_VectorConcatenate_m[7] = FMS_ConstB.VectorConcatenate3_fb[1];
        rtb_VectorConcatenate_m[8] = FMS_ConstB.VectorConcatenate3_fb[2];

        /* Saturate: '<S293>/Saturation1' */
        rtb_a_pr = FMS_PARAM.VEL_XY_LIM / 5.0F;
        A = -FMS_PARAM.VEL_XY_LIM / 5.0F;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* SignalConversion: '<S293>/TmpSignal ConversionAtMultiplyInport2' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  Product: '<S298>/Multiply'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
         *  Sum: '<S293>/Sum'
         *  Sum: '<S298>/Sum3'
         *  Sum: '<S298>/Sum4'
         */
        rtb_Sqrt_k0 = ((FMS_B.Cmd_In.sp_takeoff[0] - FMS_B.Cmd_In.cur_waypoint[0])
                       * rtb_Saturation_l + FMS_B.Cmd_In.cur_waypoint[0]) -
          FMS_U.INS_Out.x_R;
        rtb_Add4_k = ((FMS_B.Cmd_In.sp_takeoff[1] - FMS_B.Cmd_In.cur_waypoint[1])
                      * rtb_Saturation_l + FMS_B.Cmd_In.cur_waypoint[1]) -
          FMS_U.INS_Out.y_R;

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Product: '<S293>/Multiply' */
        for (i = 0; i < 3; i++) {
          rtb_VectorConcatenate_a[i] = rtb_VectorConcatenate_m[i + 3] *
            rtb_Add4_k + rtb_VectorConcatenate_m[i] * rtb_Sqrt_k0;
        }

        /* Saturate: '<S293>/Saturation1' incorporates:
         *  Gain: '<S293>/Gain2'
         *  Product: '<S293>/Multiply'
         */
        rtb_Sqrt_k0 = FMS_PARAM.XY_P * rtb_VectorConcatenate_a[0];
        rtb_Add4_k = FMS_PARAM.XY_P * rtb_VectorConcatenate_a[1];

        /* Outport: '<Root>/FMS_Out' incorporates:
         *  BusAssignment: '<S180>/Bus Assignment1'
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Constant: '<S180>/Constant1'
         */
        FMS_Y.FMS_Out = FMS_rtZFMS_Out_Bus;

        /* BusAssignment: '<S180>/Bus Assignment1' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Constant: '<S180>/Constant'
         *  Outport: '<Root>/FMS_Out'
         */
        FMS_Y.FMS_Out.status = FMS_ConstB.DataTypeConversion_ld;
        FMS_Y.FMS_Out.state = FMS_ConstB.DataTypeConversion1_dh;
        FMS_Y.FMS_Out.ctrl_mode = FMS_ConstB.DataTypeConversion2_d;
        FMS_Y.FMS_Out.psi_rate_cmd = 0.0F;

        /* Saturate: '<S293>/Saturation1' */
        if (rtb_Sqrt_k0 > rtb_a_pr) {
          /* BusAssignment: '<S180>/Bus Assignment1' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.u_cmd = rtb_a_pr;
        } else if (rtb_Sqrt_k0 < A) {
          /* BusAssignment: '<S180>/Bus Assignment1' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.u_cmd = A;
        } else {
          /* BusAssignment: '<S180>/Bus Assignment1' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.u_cmd = rtb_Sqrt_k0;
        }

        if (rtb_Add4_k > rtb_a_pr) {
          /* BusAssignment: '<S180>/Bus Assignment1' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.v_cmd = rtb_a_pr;
        } else if (rtb_Add4_k < A) {
          /* BusAssignment: '<S180>/Bus Assignment1' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.v_cmd = A;
        } else {
          /* BusAssignment: '<S180>/Bus Assignment1' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.v_cmd = rtb_Add4_k;
        }

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Switch: '<S292>/Switch' incorporates:
         *  Abs: '<S292>/Abs'
         *  Abs: '<S292>/Abs1'
         *  Constant: '<S294>/Constant'
         *  Constant: '<S295>/Constant'
         *  Inport: '<Root>/INS_Out'
         *  Logic: '<S292>/Logical Operator'
         *  RelationalOperator: '<S294>/Compare'
         *  RelationalOperator: '<S295>/Compare'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
         *  Sum: '<S292>/Sum1'
         */
        if ((fabsf(FMS_B.Cmd_In.sp_takeoff[2] - FMS_U.INS_Out.h_R) > 2.0F) &&
            (fabsf(rtb_Switch_k) > 2.0F)) {
          /* BusAssignment: '<S180>/Bus Assignment1' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Constant: '<S292>/Constant6'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.w_cmd = -1.0F;
        } else {
          /* BusAssignment: '<S180>/Bus Assignment1' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Constant: '<S292>/Constant4'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.w_cmd = -0.5F;
        }

        /* End of Switch: '<S292>/Switch' */
        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        /* End of Outputs for SubSystem: '<S24>/Takeoff' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S24>/Land' incorporates:
         *  ActionPort: '<S178>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Trigonometry: '<S224>/Trigonometric Function1' incorporates:
         *  Gain: '<S223>/Gain'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        rtb_VectorConcatenate_m[0] = arm_cos_f32(-FMS_U.INS_Out.psi);

        /* Trigonometry: '<S224>/Trigonometric Function' incorporates:
         *  Gain: '<S223>/Gain'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        rtb_VectorConcatenate_m[1] = arm_sin_f32(-FMS_U.INS_Out.psi);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* SignalConversion: '<S224>/ConcatBufferAtVector Concatenate1In3' incorporates:
         *  Constant: '<S224>/Constant3'
         */
        rtb_VectorConcatenate_m[2] = 0.0F;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Gain: '<S224>/Gain' incorporates:
         *  Gain: '<S223>/Gain'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  Trigonometry: '<S224>/Trigonometric Function2'
         */
        rtb_VectorConcatenate_m[3] = -arm_sin_f32(-FMS_U.INS_Out.psi);

        /* Trigonometry: '<S224>/Trigonometric Function3' incorporates:
         *  Gain: '<S223>/Gain'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        rtb_VectorConcatenate_m[4] = arm_cos_f32(-FMS_U.INS_Out.psi);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* SignalConversion: '<S224>/ConcatBufferAtVector Concatenate2In3' incorporates:
         *  Constant: '<S224>/Constant4'
         */
        rtb_VectorConcatenate_m[5] = 0.0F;

        /* SignalConversion: '<S224>/ConcatBufferAtVector ConcatenateIn3' */
        rtb_VectorConcatenate_m[6] = FMS_ConstB.VectorConcatenate3_f[0];
        rtb_VectorConcatenate_m[7] = FMS_ConstB.VectorConcatenate3_f[1];
        rtb_VectorConcatenate_m[8] = FMS_ConstB.VectorConcatenate3_f[2];

        /* Saturate: '<S220>/Saturation1' */
        rtb_Switch_k = FMS_PARAM.VEL_XY_LIM / 5.0F;
        rtb_a_pr = -FMS_PARAM.VEL_XY_LIM / 5.0F;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* SignalConversion: '<S221>/TmpSignal ConversionAtMultiplyInport2' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
         *  Sum: '<S221>/Sum'
         */
        rtb_Sqrt_k0 = FMS_B.Cmd_In.sp_land[0] - FMS_U.INS_Out.x_R;
        rtb_Add4_k = FMS_B.Cmd_In.sp_land[1] - FMS_U.INS_Out.y_R;

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Product: '<S221>/Multiply' */
        for (i = 0; i < 3; i++) {
          rtb_VectorConcatenate_a[i] = rtb_VectorConcatenate_m[i + 3] *
            rtb_Add4_k + rtb_VectorConcatenate_m[i] * rtb_Sqrt_k0;
        }

        /* Saturate: '<S220>/Saturation1' incorporates:
         *  Gain: '<S221>/Gain2'
         *  Product: '<S221>/Multiply'
         */
        rtb_Sqrt_k0 = FMS_PARAM.XY_P * rtb_VectorConcatenate_a[0];
        rtb_Add4_k = FMS_PARAM.XY_P * rtb_VectorConcatenate_a[1];

        /* Outport: '<Root>/FMS_Out' incorporates:
         *  BusAssignment: '<S178>/Bus Assignment1'
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Constant: '<S178>/Constant1'
         */
        FMS_Y.FMS_Out = FMS_rtZFMS_Out_Bus;

        /* BusAssignment: '<S178>/Bus Assignment1' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Constant: '<S178>/Constant'
         *  Outport: '<Root>/FMS_Out'
         */
        FMS_Y.FMS_Out.status = FMS_ConstB.DataTypeConversion_c;
        FMS_Y.FMS_Out.state = FMS_ConstB.DataTypeConversion1_h;
        FMS_Y.FMS_Out.ctrl_mode = FMS_ConstB.DataTypeConversion2_ml;
        FMS_Y.FMS_Out.psi_rate_cmd = 0.0F;

        /* Saturate: '<S220>/Saturation1' */
        if (rtb_Sqrt_k0 > rtb_Switch_k) {
          /* BusAssignment: '<S178>/Bus Assignment1' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.u_cmd = rtb_Switch_k;
        } else if (rtb_Sqrt_k0 < rtb_a_pr) {
          /* BusAssignment: '<S178>/Bus Assignment1' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.u_cmd = rtb_a_pr;
        } else {
          /* BusAssignment: '<S178>/Bus Assignment1' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.u_cmd = rtb_Sqrt_k0;
        }

        if (rtb_Add4_k > rtb_Switch_k) {
          /* BusAssignment: '<S178>/Bus Assignment1' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.v_cmd = rtb_Switch_k;
        } else if (rtb_Add4_k < rtb_a_pr) {
          /* BusAssignment: '<S178>/Bus Assignment1' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.v_cmd = rtb_a_pr;
        } else {
          /* BusAssignment: '<S178>/Bus Assignment1' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.v_cmd = rtb_Add4_k;
        }

        /* BusAssignment: '<S178>/Bus Assignment1' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Constant: '<S178>/Constant4'
         *  Outport: '<Root>/FMS_Out'
         */
        FMS_Y.FMS_Out.w_cmd = 0.5F;

        /* End of Outputs for SubSystem: '<S24>/Land' */
        break;

       case 2:
        if (FMS_DW.SwitchCase_ActiveSubsystem_at != rtPrevAction) {
          /* InitializeConditions for IfAction SubSystem: '<S24>/Return' incorporates:
           *  ActionPort: '<S179>/Action Port'
           */
          /* InitializeConditions for SwitchCase: '<S24>/Switch Case' incorporates:
           *  Delay: '<S227>/Delay'
           *  Delay: '<S228>/Delay'
           *  Delay: '<S247>/Delay'
           *  DiscreteIntegrator: '<S231>/Integrator'
           *  DiscreteIntegrator: '<S231>/Integrator1'
           *  DiscreteIntegrator: '<S288>/Discrete-Time Integrator'
           */
          FMS_DW.icLoad_o = 1U;
          FMS_DW.l1_heading_p = 0.0F;
          FMS_DW.icLoad_c = 1U;
          FMS_DW.icLoad_j = 1U;
          FMS_DW.Integrator1_IC_LOADING_j = 1U;
          FMS_DW.Integrator_DSTATE_b = 0.0F;

          /* End of InitializeConditions for SubSystem: '<S24>/Return' */

          /* SystemReset for IfAction SubSystem: '<S24>/Return' incorporates:
           *  ActionPort: '<S179>/Action Port'
           */
          /* SystemReset for SwitchCase: '<S24>/Switch Case' incorporates:
           *  Chart: '<S252>/Motion Status'
           *  Chart: '<S262>/Motion State'
           */
          FMS_MotionState_Reset(&FMS_DW.sf_MotionState);
          FMS_MotionStatus_Reset(&FMS_DW.sf_MotionStatus);

          /* End of SystemReset for SubSystem: '<S24>/Return' */
        }

        /* Outputs for IfAction SubSystem: '<S24>/Return' incorporates:
         *  ActionPort: '<S179>/Action Port'
         */
        /* Delay: '<S247>/Delay' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        if (FMS_DW.icLoad_o != 0) {
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_DW.Delay_DSTATE_e[0] = FMS_U.INS_Out.x_R;
          FMS_DW.Delay_DSTATE_e[1] = FMS_U.INS_Out.y_R;

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        }

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Sum: '<S243>/Sum' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  Math: '<S248>/Square'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
         */
        rtb_Saturation1_m = FMS_U.INS_Out.x_R - FMS_B.Cmd_In.sp_return[0];

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        rtb_Saturation1_ln[0] = rtb_Saturation1_m * rtb_Saturation1_m;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        rtb_Saturation1_m = FMS_U.INS_Out.y_R - FMS_B.Cmd_In.sp_return[1];

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Math: '<S248>/Square' */
        rtb_Saturation1_m *= rtb_Saturation1_m;

        /* Sqrt: '<S248>/Sqrt' incorporates:
         *  Sum: '<S248>/Sum of Elements'
         */
        rtb_Sqrt_k0 = sqrtf(rtb_Saturation1_ln[0] + rtb_Saturation1_m);

        /* Switch: '<S243>/Switch' incorporates:
         *  Constant: '<S243>/vel'
         */
        if (rtb_Sqrt_k0 > FMS_PARAM.L1) {
          rtb_Switch_k = FMS_PARAM.CRUISE_SPEED;
        } else {
          /* Gain: '<S243>/Gain' */
          rtb_Switch_k = 0.5F * rtb_Sqrt_k0;

          /* Saturate: '<S243>/Saturation' */
          if (rtb_Switch_k > FMS_PARAM.CRUISE_SPEED) {
            rtb_Switch_k = FMS_PARAM.CRUISE_SPEED;
          } else {
            if (rtb_Switch_k < 0.5F) {
              rtb_Switch_k = 0.5F;
            }
          }

          /* End of Saturate: '<S243>/Saturation' */
        }

        /* End of Switch: '<S243>/Switch' */

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Chart: '<S262>/Motion State' incorporates:
         *  Constant: '<S262>/Constant'
         *  Inport: '<Root>/INS_Out'
         *  Math: '<S262>/Square'
         *  Math: '<S262>/Square1'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  Sqrt: '<S262>/Sqrt'
         *  Sum: '<S262>/Add'
         */
        FMS_MotionState(0.0F, sqrtf(FMS_U.INS_Out.vn * FMS_U.INS_Out.vn +
          FMS_U.INS_Out.ve * FMS_U.INS_Out.ve), &rtb_state_a,
                        &FMS_DW.sf_MotionState);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* SwitchCase: '<S261>/Switch Case' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  Inport: '<Root>/Pilot_Cmd'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        rtPrevAction = FMS_DW.SwitchCase_ActiveSubsystem_k;
        FMS_DW.SwitchCase_ActiveSubsystem_k = -1;
        switch (rtb_state_a) {
         case MotionState_Hold:
          FMS_DW.SwitchCase_ActiveSubsystem_k = 0;
          break;

         case MotionState_Brake:
          FMS_DW.SwitchCase_ActiveSubsystem_k = 1;
          break;

         case MotionState_Move:
          FMS_DW.SwitchCase_ActiveSubsystem_k = 2;
          break;
        }

        switch (FMS_DW.SwitchCase_ActiveSubsystem_k) {
         case 0:
          if (FMS_DW.SwitchCase_ActiveSubsystem_k != rtPrevAction) {
            /* SystemReset for IfAction SubSystem: '<S261>/Hold Control' incorporates:
             *  ActionPort: '<S264>/Action Port'
             */
            /* SystemReset for SwitchCase: '<S261>/Switch Case' */
            FMS_HoldControl_l_Reset(&FMS_DW.HoldControl_k);

            /* End of SystemReset for SubSystem: '<S261>/Hold Control' */
          }

          /* Outputs for IfAction SubSystem: '<S261>/Hold Control' incorporates:
           *  ActionPort: '<S264>/Action Port'
           */
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_HoldControl_k(FMS_U.INS_Out.x_R, FMS_U.INS_Out.y_R,
                            FMS_U.INS_Out.psi, FMS_B.Merge_m,
                            &FMS_ConstB.HoldControl_k, &FMS_DW.HoldControl_k);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          /* End of Outputs for SubSystem: '<S261>/Hold Control' */
          break;

         case 1:
          /* Outputs for IfAction SubSystem: '<S261>/Brake Control' incorporates:
           *  ActionPort: '<S263>/Action Port'
           */
          FMS_BrakeControl_f(FMS_B.Merge_m);

          /* End of Outputs for SubSystem: '<S261>/Brake Control' */
          break;

         case 2:
          if (FMS_DW.SwitchCase_ActiveSubsystem_k != rtPrevAction) {
            /* SystemReset for IfAction SubSystem: '<S261>/Move Control' incorporates:
             *  ActionPort: '<S265>/Action Port'
             */
            /* SystemReset for SwitchCase: '<S261>/Switch Case' */
            FMS_MoveControl_d_Reset(&FMS_DW.MoveControl_o);

            /* End of SystemReset for SubSystem: '<S261>/Move Control' */
          }

          /* Outputs for IfAction SubSystem: '<S261>/Move Control' incorporates:
           *  ActionPort: '<S265>/Action Port'
           */
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_MoveControl_o(FMS_U.Pilot_Cmd.stick_pitch,
                            FMS_U.Pilot_Cmd.stick_roll, FMS_B.Merge_m,
                            &FMS_ConstB.MoveControl_o, &FMS_DW.MoveControl_o);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          /* End of Outputs for SubSystem: '<S261>/Move Control' */
          break;
        }

        /* End of SwitchCase: '<S261>/Switch Case' */

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Chart: '<S252>/Motion Status' incorporates:
         *  Abs: '<S252>/Abs'
         *  Constant: '<S252>/Constant'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        FMS_MotionStatus(0.0F, fabsf(FMS_U.INS_Out.vd), &rtb_state_a,
                         &FMS_DW.sf_MotionStatus);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* SwitchCase: '<S251>/Switch Case' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  Inport: '<Root>/Pilot_Cmd'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        rtPrevAction = FMS_DW.SwitchCase_ActiveSubsystem_g;
        FMS_DW.SwitchCase_ActiveSubsystem_g = -1;
        switch (rtb_state_a) {
         case MotionState_Hold:
          FMS_DW.SwitchCase_ActiveSubsystem_g = 0;
          break;

         case MotionState_Brake:
          FMS_DW.SwitchCase_ActiveSubsystem_g = 1;
          break;

         case MotionState_Move:
          FMS_DW.SwitchCase_ActiveSubsystem_g = 2;
          break;
        }

        switch (FMS_DW.SwitchCase_ActiveSubsystem_g) {
         case 0:
          if (FMS_DW.SwitchCase_ActiveSubsystem_g != rtPrevAction) {
            /* SystemReset for IfAction SubSystem: '<S251>/Hold Control' incorporates:
             *  ActionPort: '<S254>/Action Port'
             */
            /* SystemReset for SwitchCase: '<S251>/Switch Case' */
            FMS_HoldControl_Reset(&FMS_DW.HoldControl);

            /* End of SystemReset for SubSystem: '<S251>/Hold Control' */
          }

          /* Outputs for IfAction SubSystem: '<S251>/Hold Control' incorporates:
           *  ActionPort: '<S254>/Action Port'
           */
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_HoldControl(FMS_U.INS_Out.h_R, &FMS_B.Merge_mu,
                          &FMS_DW.HoldControl);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          /* End of Outputs for SubSystem: '<S251>/Hold Control' */
          break;

         case 1:
          /* Outputs for IfAction SubSystem: '<S251>/Brake Control' incorporates:
           *  ActionPort: '<S253>/Action Port'
           */
          FMS_BrakeControl(&FMS_B.Merge_mu);

          /* End of Outputs for SubSystem: '<S251>/Brake Control' */
          break;

         case 2:
          if (FMS_DW.SwitchCase_ActiveSubsystem_g != rtPrevAction) {
            /* SystemReset for IfAction SubSystem: '<S251>/Move Control' incorporates:
             *  ActionPort: '<S255>/Action Port'
             */
            /* SystemReset for SwitchCase: '<S251>/Switch Case' */
            FMS_MoveControl_Reset(&FMS_DW.MoveControl);

            /* End of SystemReset for SubSystem: '<S251>/Move Control' */
          }

          /* Outputs for IfAction SubSystem: '<S251>/Move Control' incorporates:
           *  ActionPort: '<S255>/Action Port'
           */
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_MoveControl(FMS_U.Pilot_Cmd.stick_throttle, &FMS_B.Merge_mu,
                          &FMS_ConstB.MoveControl, &FMS_DW.MoveControl);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          /* End of Outputs for SubSystem: '<S251>/Move Control' */
          break;
        }

        /* End of SwitchCase: '<S251>/Switch Case' */

        /* Delay: '<S227>/Delay' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        if (FMS_DW.icLoad_c != 0) {
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_DW.Delay_DSTATE_px[0] = FMS_U.INS_Out.x_R;
          FMS_DW.Delay_DSTATE_px[1] = FMS_U.INS_Out.y_R;

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        }

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Sum: '<S179>/Sum' incorporates:
         *  Delay: '<S227>/Delay'
         *  MATLAB Function: '<S245>/OutRegionRegWP'
         *  MATLAB Function: '<S245>/SearchL1RefWP'
         *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
         */
        rtb_MathFunction_h_idx_0 = FMS_B.Cmd_In.sp_return[0] -
          FMS_DW.Delay_DSTATE_px[0];
        rtb_Saturation1_m = FMS_B.Cmd_In.sp_return[1] - FMS_DW.Delay_DSTATE_px[1];

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Sum: '<S242>/Sum of Elements' incorporates:
         *  Math: '<S242>/Math Function'
         *  Sum: '<S179>/Sum'
         */
        rtb_Add4_k = rtb_Saturation1_m * rtb_Saturation1_m +
          rtb_MathFunction_h_idx_0 * rtb_MathFunction_h_idx_0;

        /* Math: '<S242>/Math Function1' incorporates:
         *  Sum: '<S242>/Sum of Elements'
         *
         * About '<S242>/Math Function1':
         *  Operator: sqrt
         */
        if (rtb_Add4_k < 0.0F) {
          rtb_a_pr = -sqrtf(fabsf(rtb_Add4_k));
        } else {
          rtb_a_pr = sqrtf(rtb_Add4_k);
        }

        /* End of Math: '<S242>/Math Function1' */

        /* Switch: '<S242>/Switch' incorporates:
         *  Constant: '<S242>/Constant'
         *  Product: '<S242>/Product'
         *  Sum: '<S179>/Sum'
         */
        if (rtb_a_pr > 0.0F) {
          rtb_Switch_l[0] = rtb_Saturation1_m;
          rtb_Switch_l[1] = rtb_MathFunction_h_idx_0;
          rtb_Switch_l[2] = rtb_a_pr;
        } else {
          rtb_Switch_l[0] = 0.0F;
          rtb_Switch_l[1] = 0.0F;
          rtb_Switch_l[2] = 1.0F;
        }

        /* End of Switch: '<S242>/Switch' */

        /* Product: '<S242>/Divide' */
        rtb_Saturation1_ln[0] = rtb_Switch_l[0] / rtb_Switch_l[2];
        rtb_Saturation1_ln[1] = rtb_Switch_l[1] / rtb_Switch_l[2];

        /* Sum: '<S240>/Subtract' incorporates:
         *  Product: '<S240>/Multiply'
         *  Product: '<S240>/Multiply1'
         */
        rtb_a_pr = rtb_Saturation1_ln[0] * FMS_ConstB.Divide_d[1] -
          rtb_Saturation1_ln[1] * FMS_ConstB.Divide_d[0];

        /* Signum: '<S229>/Sign1' */
        if (rtb_a_pr < 0.0F) {
          rtb_a_pr = -1.0F;
        } else {
          if (rtb_a_pr > 0.0F) {
            rtb_a_pr = 1.0F;
          }
        }

        /* End of Signum: '<S229>/Sign1' */

        /* Switch: '<S229>/Switch2' incorporates:
         *  Constant: '<S229>/Constant4'
         */
        if (rtb_a_pr == 0.0F) {
          rtb_a_pr = 1.0F;
        }

        /* End of Switch: '<S229>/Switch2' */

        /* DotProduct: '<S229>/Dot Product' */
        rtb_Sqrt_k0 = FMS_ConstB.Divide_d[0] * rtb_Saturation1_ln[0] +
          FMS_ConstB.Divide_d[1] * rtb_Saturation1_ln[1];

        /* Trigonometry: '<S229>/Acos' incorporates:
         *  DotProduct: '<S229>/Dot Product'
         */
        if (rtb_Sqrt_k0 > 1.0F) {
          rtb_Sqrt_k0 = 1.0F;
        } else {
          if (rtb_Sqrt_k0 < -1.0F) {
            rtb_Sqrt_k0 = -1.0F;
          }
        }

        /* Product: '<S229>/Multiply' incorporates:
         *  Trigonometry: '<S229>/Acos'
         */
        rtb_a_pr *= acosf(rtb_Sqrt_k0);

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Math: '<S233>/Rem' incorporates:
         *  Constant: '<S233>/Constant1'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  Sum: '<S228>/Sum1'
         */
        rtb_Sqrt_k0 = rt_remf(rtb_a_pr - FMS_U.INS_Out.psi, 6.28318548F);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Switch: '<S233>/Switch' incorporates:
         *  Abs: '<S233>/Abs'
         *  Constant: '<S233>/Constant'
         *  Constant: '<S239>/Constant'
         *  Product: '<S233>/Multiply'
         *  RelationalOperator: '<S239>/Compare'
         *  Sum: '<S233>/Add'
         */
        if (fabsf(rtb_Sqrt_k0) > 3.14159274F) {
          /* Signum: '<S233>/Sign' */
          if (rtb_Sqrt_k0 < 0.0F) {
            A = -1.0F;
          } else if (rtb_Sqrt_k0 > 0.0F) {
            A = 1.0F;
          } else {
            A = rtb_Sqrt_k0;
          }

          /* End of Signum: '<S233>/Sign' */
          rtb_Sqrt_k0 -= 6.28318548F * A;
        }

        /* End of Switch: '<S233>/Switch' */

        /* Abs: '<S226>/Abs' */
        rtb_Sqrt_k0 = fabsf(rtb_Sqrt_k0);

        /* Switch: '<S226>/Switch' incorporates:
         *  Product: '<S247>/Multiply'
         *  Sum: '<S247>/Sum'
         */
        if (rtb_Sqrt_k0 > 0.34906584F) {
          /* Saturate: '<S261>/Saturation1' */
          if (FMS_B.Merge_m[0] > FMS_PARAM.VEL_XY_LIM) {
            rtb_Switch_l[0] = FMS_PARAM.VEL_XY_LIM;
          } else if (FMS_B.Merge_m[0] < -FMS_PARAM.VEL_XY_LIM) {
            rtb_Switch_l[0] = -FMS_PARAM.VEL_XY_LIM;
          } else {
            rtb_Switch_l[0] = FMS_B.Merge_m[0];
          }

          if (FMS_B.Merge_m[1] > FMS_PARAM.VEL_XY_LIM) {
            rtb_Switch_l[1] = FMS_PARAM.VEL_XY_LIM;
          } else if (FMS_B.Merge_m[1] < -FMS_PARAM.VEL_XY_LIM) {
            rtb_Switch_l[1] = -FMS_PARAM.VEL_XY_LIM;
          } else {
            rtb_Switch_l[1] = FMS_B.Merge_m[1];
          }

          /* End of Saturate: '<S261>/Saturation1' */

          /* Saturate: '<S251>/Saturation1' */
          if (FMS_B.Merge_mu > FMS_PARAM.VEL_Z_LIM) {
            rtb_Switch_l[2] = FMS_PARAM.VEL_Z_LIM;
          } else if (FMS_B.Merge_mu < -FMS_PARAM.VEL_Z_LIM) {
            rtb_Switch_l[2] = -FMS_PARAM.VEL_Z_LIM;
          } else {
            rtb_Switch_l[2] = FMS_B.Merge_mu;
          }

          /* End of Saturate: '<S251>/Saturation1' */
        } else {
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          /* Sum: '<S247>/Sum' incorporates:
           *  Delay: '<S247>/Delay'
           *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
           */
          rtb_Sqrt_k0 = FMS_B.Cmd_In.sp_return[0] - FMS_DW.Delay_DSTATE_e[0];

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

          /* SignalConversion: '<S289>/TmpSignal ConversionAtMath FunctionInport1' */
          rtb_Switch_l[0] = rtb_Sqrt_k0;
          rtb_Saturation1_ln[0] = rtb_Sqrt_k0;

          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          /* Sum: '<S247>/Sum' incorporates:
           *  Delay: '<S247>/Delay'
           *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
           */
          rtb_Sqrt_k0 = FMS_B.Cmd_In.sp_return[1] - FMS_DW.Delay_DSTATE_e[1];

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

          /* SignalConversion: '<S291>/ConcatBufferAtVector Concatenate2In3' incorporates:
           *  Constant: '<S291>/Constant4'
           */
          rtb_VectorConcatenate_m[5] = 0.0F;

          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          /* Gain: '<S290>/Gain' incorporates:
           *  DiscreteIntegrator: '<S288>/Discrete-Time Integrator'
           *  Inport: '<Root>/INS_Out'
           *  SignalConversion: '<S16>/Signal Copy1'
           *  Sum: '<S288>/Add'
           */
          A = -(FMS_U.INS_Out.psi - FMS_DW.l1_heading_p);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

          /* Trigonometry: '<S291>/Trigonometric Function3' incorporates:
           *  Trigonometry: '<S291>/Trigonometric Function1'
           */
          rtb_Add4_k = arm_cos_f32(A);
          rtb_VectorConcatenate_m[4] = rtb_Add4_k;

          /* Trigonometry: '<S291>/Trigonometric Function2' incorporates:
           *  Trigonometry: '<S291>/Trigonometric Function'
           */
          A = arm_sin_f32(A);

          /* Gain: '<S291>/Gain' incorporates:
           *  Trigonometry: '<S291>/Trigonometric Function2'
           */
          rtb_VectorConcatenate_m[3] = -A;

          /* SignalConversion: '<S291>/ConcatBufferAtVector Concatenate1In3' incorporates:
           *  Constant: '<S291>/Constant3'
           */
          rtb_VectorConcatenate_m[2] = 0.0F;

          /* Trigonometry: '<S291>/Trigonometric Function' */
          rtb_VectorConcatenate_m[1] = A;

          /* Trigonometry: '<S291>/Trigonometric Function1' */
          rtb_VectorConcatenate_m[0] = rtb_Add4_k;

          /* SignalConversion: '<S291>/ConcatBufferAtVector ConcatenateIn3' */
          rtb_VectorConcatenate_m[6] = FMS_ConstB.VectorConcatenate3_k[0];
          rtb_VectorConcatenate_m[7] = FMS_ConstB.VectorConcatenate3_k[1];
          rtb_VectorConcatenate_m[8] = FMS_ConstB.VectorConcatenate3_k[2];

          /* Sum: '<S289>/Sum of Elements' incorporates:
           *  Math: '<S289>/Math Function'
           */
          rtb_Add4_k = rtb_Switch_l[0] * rtb_Switch_l[0] + rtb_Sqrt_k0 *
            rtb_Sqrt_k0;

          /* Math: '<S289>/Math Function1' incorporates:
           *  Sum: '<S289>/Sum of Elements'
           *
           * About '<S289>/Math Function1':
           *  Operator: sqrt
           */
          if (rtb_Add4_k < 0.0F) {
            A = -sqrtf(fabsf(rtb_Add4_k));
          } else {
            A = sqrtf(rtb_Add4_k);
          }

          /* End of Math: '<S289>/Math Function1' */

          /* Switch: '<S289>/Switch' incorporates:
           *  Constant: '<S289>/Constant'
           *  Product: '<S289>/Product'
           */
          if (A > 0.0F) {
            rtb_Saturation_l = rtb_Saturation1_ln[0];
          } else {
            rtb_Saturation_l = 0.0F;
            rtb_Sqrt_k0 = 0.0F;
            A = 1.0F;
          }

          /* End of Switch: '<S289>/Switch' */

          /* Product: '<S287>/Multiply2' incorporates:
           *  Product: '<S289>/Divide'
           */
          rtb_Add4_k = rtb_Saturation_l / A * rtb_Switch_k;
          rtb_Sqrt_k0 = rtb_Sqrt_k0 / A * rtb_Switch_k;
          for (i = 0; i < 3; i++) {
            rtb_Switch_l[i] = rtb_VectorConcatenate_m[i + 3] * rtb_Sqrt_k0 +
              rtb_VectorConcatenate_m[i] * rtb_Add4_k;
          }
        }

        /* End of Switch: '<S226>/Switch' */

        /* Delay: '<S228>/Delay' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        if (FMS_DW.icLoad_j != 0) {
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_DW.Delay_DSTATE_a = FMS_U.INS_Out.psi;

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        }

        /* DiscreteIntegrator: '<S231>/Integrator1' incorporates:
         *  Delay: '<S228>/Delay'
         */
        if (FMS_DW.Integrator1_IC_LOADING_j != 0) {
          FMS_DW.Integrator1_DSTATE_e = FMS_DW.Delay_DSTATE_a;
        }

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Math: '<S235>/Rem' incorporates:
         *  Constant: '<S235>/Constant1'
         *  DiscreteIntegrator: '<S231>/Integrator1'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  Sum: '<S230>/Sum'
         */
        rtb_Saturation_l = rt_remf(FMS_DW.Integrator1_DSTATE_e -
          FMS_U.INS_Out.psi, 6.28318548F);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Switch: '<S235>/Switch' incorporates:
         *  Abs: '<S235>/Abs'
         *  Constant: '<S235>/Constant'
         *  Constant: '<S236>/Constant'
         *  Product: '<S235>/Multiply'
         *  RelationalOperator: '<S236>/Compare'
         *  Sum: '<S235>/Add'
         */
        if (fabsf(rtb_Saturation_l) > 3.14159274F) {
          /* Signum: '<S235>/Sign' */
          if (rtb_Saturation_l < 0.0F) {
            rtb_Sqrt_k0 = -1.0F;
          } else if (rtb_Saturation_l > 0.0F) {
            rtb_Sqrt_k0 = 1.0F;
          } else {
            rtb_Sqrt_k0 = rtb_Saturation_l;
          }

          /* End of Signum: '<S235>/Sign' */
          rtb_Saturation_l -= 6.28318548F * rtb_Sqrt_k0;
        }

        /* End of Switch: '<S235>/Switch' */

        /* Gain: '<S230>/Gain2' */
        rtb_Saturation_l *= FMS_PARAM.YAW_P;

        /* Saturate: '<S230>/Saturation' */
        if (rtb_Saturation_l > FMS_PARAM.YAW_RATE_LIM) {
          rtb_Saturation_l = FMS_PARAM.YAW_RATE_LIM;
        } else {
          if (rtb_Saturation_l < -FMS_PARAM.YAW_RATE_LIM) {
            rtb_Saturation_l = -FMS_PARAM.YAW_RATE_LIM;
          }
        }

        /* End of Saturate: '<S230>/Saturation' */

        /* Outport: '<Root>/FMS_Out' incorporates:
         *  BusAssignment: '<S179>/Bus Assignment1'
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Constant: '<S179>/Constant2'
         */
        FMS_Y.FMS_Out = FMS_rtZFMS_Out_Bus;

        /* BusAssignment: '<S179>/Bus Assignment1' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Outport: '<Root>/FMS_Out'
         */
        FMS_Y.FMS_Out.status = FMS_ConstB.DataTypeConversion_o;
        FMS_Y.FMS_Out.state = FMS_ConstB.DataTypeConversion1_m;
        FMS_Y.FMS_Out.ctrl_mode = FMS_ConstB.DataTypeConversion2_p;
        FMS_Y.FMS_Out.u_cmd = rtb_Switch_l[0];
        FMS_Y.FMS_Out.v_cmd = rtb_Switch_l[1];
        FMS_Y.FMS_Out.w_cmd = rtb_Switch_l[2];
        FMS_Y.FMS_Out.psi_rate_cmd = rtb_Saturation_l;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Sum: '<S282>/Sum of Elements' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  Math: '<S282>/Math Function'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  Sum: '<S280>/Sum of Elements'
         */
        rtb_Add4_k = FMS_U.INS_Out.vn * FMS_U.INS_Out.vn + FMS_U.INS_Out.ve *
          FMS_U.INS_Out.ve;

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Math: '<S282>/Math Function1' incorporates:
         *  Sum: '<S282>/Sum of Elements'
         *
         * About '<S282>/Math Function1':
         *  Operator: sqrt
         */
        if (rtb_Add4_k < 0.0F) {
          rtb_Saturation_l = -sqrtf(fabsf(rtb_Add4_k));
        } else {
          rtb_Saturation_l = sqrtf(rtb_Add4_k);
        }

        /* End of Math: '<S282>/Math Function1' */

        /* Switch: '<S282>/Switch' incorporates:
         *  Constant: '<S282>/Constant'
         *  Inport: '<Root>/INS_Out'
         *  Product: '<S282>/Product'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        if (rtb_Saturation_l > 0.0F) {
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          rtb_Switch_l[0] = FMS_U.INS_Out.vn;
          rtb_Switch_l[1] = FMS_U.INS_Out.ve;

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          rtb_Switch_l[2] = rtb_Saturation_l;
        } else {
          rtb_Switch_l[0] = 0.0F;
          rtb_Switch_l[1] = 0.0F;
          rtb_Switch_l[2] = 1.0F;
        }

        /* End of Switch: '<S282>/Switch' */

        /* Product: '<S282>/Divide' */
        rtb_Saturation1_ln[0] = rtb_Switch_l[0] / rtb_Switch_l[2];
        rtb_Saturation1_ln[1] = rtb_Switch_l[1] / rtb_Switch_l[2];

        /* Sum: '<S285>/Sum of Elements' incorporates:
         *  Math: '<S285>/Math Function'
         *  SignalConversion: '<S285>/TmpSignal ConversionAtMath FunctionInport1'
         */
        rtb_Sqrt_k0 = rtb_Saturation1_ln[1] * rtb_Saturation1_ln[1] +
          rtb_Saturation1_ln[0] * rtb_Saturation1_ln[0];

        /* Math: '<S285>/Math Function1' incorporates:
         *  Sum: '<S285>/Sum of Elements'
         *
         * About '<S285>/Math Function1':
         *  Operator: sqrt
         */
        if (rtb_Sqrt_k0 < 0.0F) {
          rtb_Saturation_l = -sqrtf(fabsf(rtb_Sqrt_k0));
        } else {
          rtb_Saturation_l = sqrtf(rtb_Sqrt_k0);
        }

        /* End of Math: '<S285>/Math Function1' */

        /* Switch: '<S285>/Switch' incorporates:
         *  Constant: '<S285>/Constant'
         *  Product: '<S285>/Product'
         */
        if (rtb_Saturation_l > 0.0F) {
          rtb_Switch_l[0] = rtb_Saturation1_ln[1];
          rtb_Switch_l[1] = rtb_Saturation1_ln[0];
          rtb_Switch_l[2] = rtb_Saturation_l;
        } else {
          rtb_Switch_l[0] = 0.0F;
          rtb_Switch_l[1] = 0.0F;
          rtb_Switch_l[2] = 1.0F;
        }

        /* End of Switch: '<S285>/Switch' */

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* MATLAB Function: '<S245>/NearbyRefWP' incorporates:
         *  Constant: '<S179>/L1'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        FMS_NearbyRefWP(rtb_Divide_mx, FMS_U.INS_Out.x_R, FMS_U.INS_Out.y_R,
                        FMS_PARAM.L1, rtb_Saturation1_ln,
                        &rtb_MathFunction_cr_idx_0);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* MATLAB Function: '<S245>/SearchL1RefWP' incorporates:
         *  Constant: '<S179>/L1'
         *  Delay: '<S227>/Delay'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        A = rtb_MathFunction_h_idx_0 * rtb_MathFunction_h_idx_0 +
          rtb_Saturation1_m * rtb_Saturation1_m;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        B = (rtb_MathFunction_h_idx_0 * (FMS_DW.Delay_DSTATE_px[0] -
              FMS_U.INS_Out.x_R) + rtb_Saturation1_m * (FMS_DW.Delay_DSTATE_px[1]
              - FMS_U.INS_Out.y_R)) * 2.0F;
        D = B * B - (((((FMS_U.INS_Out.x_R * FMS_U.INS_Out.x_R +
                         FMS_U.INS_Out.y_R * FMS_U.INS_Out.y_R) +
                        FMS_DW.Delay_DSTATE_px[0] * FMS_DW.Delay_DSTATE_px[0]) +
                       FMS_DW.Delay_DSTATE_px[1] * FMS_DW.Delay_DSTATE_px[1]) -
                      (FMS_U.INS_Out.x_R * FMS_DW.Delay_DSTATE_px[0] +
                       FMS_U.INS_Out.y_R * FMS_DW.Delay_DSTATE_px[1]) * 2.0F) -
                     FMS_PARAM.L1 * FMS_PARAM.L1) * (4.0F * A);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        rtb_Sqrt_k0 = -1.0F;
        rtb_MathFunction_iq_idx_0 = 0.0F;
        rtb_MathFunction_iq_idx_1 = 0.0F;
        guard1 = false;
        if (D > 0.0F) {
          u1_tmp = sqrtf(D);
          D = (-B + u1_tmp) / (2.0F * A);
          A = (-B - u1_tmp) / (2.0F * A);
          if ((D >= 0.0F) && (D <= 1.0F) && (A >= 0.0F) && (A <= 1.0F)) {
            rtb_Sqrt_k0 = fmaxf(D, A);
            guard1 = true;
          } else if ((D >= 0.0F) && (D <= 1.0F)) {
            rtb_Sqrt_k0 = D;
            guard1 = true;
          } else {
            if ((A >= 0.0F) && (A <= 1.0F)) {
              rtb_Sqrt_k0 = A;
              guard1 = true;
            }
          }
        } else {
          if (D == 0.0F) {
            D = -B / (2.0F * A);
            if ((D >= 0.0F) && (D <= 1.0F)) {
              rtb_Sqrt_k0 = D;
              guard1 = true;
            }
          }
        }

        if (guard1) {
          rtb_MathFunction_iq_idx_0 = rtb_MathFunction_h_idx_0 * rtb_Sqrt_k0 +
            FMS_DW.Delay_DSTATE_px[0];
          rtb_MathFunction_iq_idx_1 = rtb_Saturation1_m * rtb_Sqrt_k0 +
            FMS_DW.Delay_DSTATE_px[1];
        }

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* MATLAB Function: '<S245>/OutRegionRegWP' incorporates:
         *  Delay: '<S227>/Delay'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
         */
        A = ((FMS_U.INS_Out.y_R - FMS_DW.Delay_DSTATE_px[1]) * rtb_Saturation1_m
             + (FMS_U.INS_Out.x_R - FMS_DW.Delay_DSTATE_px[0]) *
             rtb_MathFunction_h_idx_0) / (rtb_MathFunction_h_idx_0 *
          rtb_MathFunction_h_idx_0 + rtb_Saturation1_m * rtb_Saturation1_m);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        rtb_FixPtRelationalOperator = (A <= 0.0F);
        u = (A >= 1.0F);
        if (rtb_FixPtRelationalOperator) {
          rtb_MathFunction_h_idx_0 = FMS_DW.Delay_DSTATE_px[0];
        } else if (u) {
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          rtb_MathFunction_h_idx_0 = FMS_B.Cmd_In.sp_return[0];

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        } else {
          rtb_MathFunction_h_idx_0 = A * rtb_MathFunction_h_idx_0 +
            FMS_DW.Delay_DSTATE_px[0];
        }

        /* Switch: '<S245>/Switch1' incorporates:
         *  Constant: '<S275>/Constant'
         *  RelationalOperator: '<S275>/Compare'
         */
        if (rtb_MathFunction_cr_idx_0 <= 0.0F) {
          /* Switch: '<S245>/Switch' incorporates:
           *  Constant: '<S274>/Constant'
           *  MATLAB Function: '<S245>/SearchL1RefWP'
           *  RelationalOperator: '<S274>/Compare'
           */
          if (rtb_Sqrt_k0 >= 0.0F) {
            rtb_Saturation1_ln[0] = rtb_MathFunction_iq_idx_0;
            rtb_Saturation1_ln[1] = rtb_MathFunction_iq_idx_1;
          } else {
            rtb_Saturation1_ln[0] = rtb_MathFunction_h_idx_0;

            /* MATLAB Function: '<S245>/OutRegionRegWP' incorporates:
             *  Delay: '<S227>/Delay'
             *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
             */
            if (rtb_FixPtRelationalOperator) {
              rtb_Saturation1_ln[1] = FMS_DW.Delay_DSTATE_px[1];
            } else if (u) {
              /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
              rtb_Saturation1_ln[1] = FMS_B.Cmd_In.sp_return[1];

              /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
            } else {
              rtb_Saturation1_ln[1] = A * rtb_Saturation1_m +
                FMS_DW.Delay_DSTATE_px[1];
            }
          }

          /* End of Switch: '<S245>/Switch' */
        }

        /* End of Switch: '<S245>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Sum: '<S246>/Subtract' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        rtb_MathFunction_cr_idx_1 = rtb_Saturation1_ln[0] - FMS_U.INS_Out.x_R;

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        rtb_Saturation1_ln[0] = rtb_MathFunction_cr_idx_1;
        rtb_TmpSignalConversionAtDela_a[0] = rtb_MathFunction_cr_idx_1 *
          rtb_MathFunction_cr_idx_1;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Sum: '<S246>/Subtract' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  Math: '<S283>/Math Function'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        rtb_MathFunction_cr_idx_1 = rtb_Saturation1_ln[1] - FMS_U.INS_Out.y_R;

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Math: '<S283>/Math Function' incorporates:
         *  Math: '<S281>/Square'
         */
        rtb_Sqrt_k0 = rtb_MathFunction_cr_idx_1 * rtb_MathFunction_cr_idx_1;

        /* Sum: '<S283>/Sum of Elements' incorporates:
         *  Math: '<S283>/Math Function'
         */
        A = rtb_Sqrt_k0 + rtb_TmpSignalConversionAtDela_a[0];

        /* Math: '<S283>/Math Function1' incorporates:
         *  Sum: '<S283>/Sum of Elements'
         *
         * About '<S283>/Math Function1':
         *  Operator: sqrt
         */
        if (A < 0.0F) {
          rtb_Saturation_l = -sqrtf(fabsf(A));
        } else {
          rtb_Saturation_l = sqrtf(A);
        }

        /* End of Math: '<S283>/Math Function1' */

        /* Switch: '<S283>/Switch' incorporates:
         *  Constant: '<S283>/Constant'
         *  Product: '<S283>/Product'
         */
        if (rtb_Saturation_l > 0.0F) {
          rtb_MathFunction_cr_idx_0 = rtb_Saturation1_ln[0];
        } else {
          rtb_MathFunction_cr_idx_0 = 0.0F;
          rtb_MathFunction_cr_idx_1 = 0.0F;
          rtb_Saturation_l = 1.0F;
        }

        /* End of Switch: '<S283>/Switch' */

        /* Product: '<S283>/Divide' */
        rtb_Divide_mx[0] = rtb_MathFunction_cr_idx_0 / rtb_Saturation_l;
        rtb_Divide_mx[1] = rtb_MathFunction_cr_idx_1 / rtb_Saturation_l;

        /* Sum: '<S286>/Sum of Elements' incorporates:
         *  Math: '<S286>/Math Function'
         *  SignalConversion: '<S286>/TmpSignal ConversionAtMath FunctionInport1'
         */
        A = rtb_Divide_mx[1] * rtb_Divide_mx[1] + rtb_Divide_mx[0] *
          rtb_Divide_mx[0];

        /* Math: '<S286>/Math Function1' incorporates:
         *  Sum: '<S286>/Sum of Elements'
         *
         * About '<S286>/Math Function1':
         *  Operator: sqrt
         */
        if (A < 0.0F) {
          rtb_Saturation_l = -sqrtf(fabsf(A));
        } else {
          rtb_Saturation_l = sqrtf(A);
        }

        /* End of Math: '<S286>/Math Function1' */

        /* Switch: '<S286>/Switch' incorporates:
         *  Constant: '<S286>/Constant'
         *  Product: '<S286>/Product'
         */
        if (rtb_Saturation_l > 0.0F) {
          rtb_MathFunction_cr_idx_0 = rtb_Divide_mx[1];
          rtb_MathFunction_cr_idx_1 = rtb_Divide_mx[0];
        } else {
          rtb_MathFunction_cr_idx_0 = 0.0F;
          rtb_MathFunction_cr_idx_1 = 0.0F;
          rtb_Saturation_l = 1.0F;
        }

        /* End of Switch: '<S286>/Switch' */

        /* Product: '<S286>/Divide' */
        rtb_Divide_mx[0] = rtb_MathFunction_cr_idx_0 / rtb_Saturation_l;

        /* Math: '<S281>/Square' */
        rtb_TmpSignalConversionAtDela_a[0] = rtb_Saturation1_ln[0] *
          rtb_Saturation1_ln[0];
        rtb_Saturation1_ln[0] = rtb_Switch_l[0] / rtb_Switch_l[2];

        /* Product: '<S286>/Divide' incorporates:
         *  Product: '<S285>/Divide'
         */
        rtb_Divide_mx[1] = rtb_MathFunction_cr_idx_1 / rtb_Saturation_l;

        /* Product: '<S285>/Divide' */
        rtb_Saturation1_m = rtb_Switch_l[1] / rtb_Switch_l[2];

        /* Sqrt: '<S280>/Sqrt' */
        rtb_Saturation_l = sqrtf(rtb_Add4_k);

        /* Gain: '<S246>/Gain' incorporates:
         *  Math: '<S246>/Square'
         */
        A = rtb_Saturation_l * rtb_Saturation_l * 2.0F;

        /* Sum: '<S284>/Subtract' incorporates:
         *  Product: '<S284>/Multiply'
         *  Product: '<S284>/Multiply1'
         */
        rtb_Saturation_l = rtb_Divide_mx[0] * rtb_Saturation1_m - rtb_Divide_mx
          [1] * rtb_Saturation1_ln[0];

        /* Signum: '<S279>/Sign1' */
        if (rtb_Saturation_l < 0.0F) {
          rtb_Saturation_l = -1.0F;
        } else {
          if (rtb_Saturation_l > 0.0F) {
            rtb_Saturation_l = 1.0F;
          }
        }

        /* End of Signum: '<S279>/Sign1' */

        /* Switch: '<S279>/Switch2' incorporates:
         *  Constant: '<S279>/Constant4'
         */
        if (rtb_Saturation_l == 0.0F) {
          rtb_Saturation_l = 1.0F;
        }

        /* End of Switch: '<S279>/Switch2' */

        /* DotProduct: '<S279>/Dot Product' */
        rtb_Saturation1_m = rtb_Saturation1_ln[0] * rtb_Divide_mx[0] +
          rtb_Saturation1_m * rtb_Divide_mx[1];

        /* Trigonometry: '<S279>/Acos' incorporates:
         *  DotProduct: '<S279>/Dot Product'
         */
        if (rtb_Saturation1_m > 1.0F) {
          rtb_Saturation1_m = 1.0F;
        } else {
          if (rtb_Saturation1_m < -1.0F) {
            rtb_Saturation1_m = -1.0F;
          }
        }

        /* Product: '<S279>/Multiply' incorporates:
         *  Trigonometry: '<S279>/Acos'
         */
        rtb_Saturation_l *= acosf(rtb_Saturation1_m);

        /* Saturate: '<S246>/Saturation' */
        if (rtb_Saturation_l > 1.57079637F) {
          rtb_Saturation_l = 1.57079637F;
        } else {
          if (rtb_Saturation_l < -1.57079637F) {
            rtb_Saturation_l = -1.57079637F;
          }
        }

        /* End of Saturate: '<S246>/Saturation' */

        /* Product: '<S246>/Divide' incorporates:
         *  Constant: '<S179>/L1'
         *  Constant: '<S246>/Constant'
         *  MinMax: '<S246>/Max'
         *  MinMax: '<S246>/Min'
         *  Product: '<S246>/Multiply1'
         *  Sqrt: '<S281>/Sqrt'
         *  Sum: '<S281>/Sum of Elements'
         *  Trigonometry: '<S246>/Sin'
         */
        A = arm_sin_f32(rtb_Saturation_l) * A / fminf(FMS_PARAM.L1, fmaxf(sqrtf
          (rtb_Sqrt_k0 + rtb_TmpSignalConversionAtDela_a[0]), 0.5F));

        /* Sum: '<S228>/Sum2' incorporates:
         *  Delay: '<S228>/Delay'
         */
        rtb_a_pr -= FMS_DW.Delay_DSTATE_a;

        /* Math: '<S232>/Rem' incorporates:
         *  Constant: '<S232>/Constant1'
         */
        rtb_MathFunction_cr_idx_0 = rt_remf(rtb_a_pr, 6.28318548F);

        /* Switch: '<S232>/Switch' incorporates:
         *  Abs: '<S232>/Abs'
         *  Constant: '<S232>/Constant'
         *  Constant: '<S238>/Constant'
         *  Product: '<S232>/Multiply'
         *  RelationalOperator: '<S238>/Compare'
         *  Sum: '<S232>/Add'
         */
        if (fabsf(rtb_MathFunction_cr_idx_0) > 3.14159274F) {
          /* Signum: '<S232>/Sign' */
          if (rtb_MathFunction_cr_idx_0 < 0.0F) {
            rtb_Sqrt_k0 = -1.0F;
          } else if (rtb_MathFunction_cr_idx_0 > 0.0F) {
            rtb_Sqrt_k0 = 1.0F;
          } else {
            rtb_Sqrt_k0 = rtb_MathFunction_cr_idx_0;
          }

          /* End of Signum: '<S232>/Sign' */
          rtb_MathFunction_cr_idx_0 -= 6.28318548F * rtb_Sqrt_k0;
        }

        /* End of Switch: '<S232>/Switch' */

        /* Sum: '<S228>/Sum' incorporates:
         *  Delay: '<S228>/Delay'
         */
        rtb_Sqrt_k0 = rtb_MathFunction_cr_idx_0 + FMS_DW.Delay_DSTATE_a;

        /* Product: '<S237>/Multiply1' incorporates:
         *  Constant: '<S237>/const1'
         *  DiscreteIntegrator: '<S231>/Integrator'
         */
        rtb_MathFunction_cr_idx_0 = FMS_DW.Integrator_DSTATE_b * 0.785398185F;

        /* Sum: '<S237>/Add' incorporates:
         *  DiscreteIntegrator: '<S231>/Integrator1'
         *  Sum: '<S231>/Subtract'
         */
        rtb_Saturation_l = (FMS_DW.Integrator1_DSTATE_e - rtb_Sqrt_k0) +
          rtb_MathFunction_cr_idx_0;

        /* Signum: '<S237>/Sign' */
        if (rtb_Saturation_l < 0.0F) {
          rtb_Sqrt_k0 = -1.0F;
        } else if (rtb_Saturation_l > 0.0F) {
          rtb_Sqrt_k0 = 1.0F;
        } else {
          rtb_Sqrt_k0 = rtb_Saturation_l;
        }

        /* End of Signum: '<S237>/Sign' */

        /* Sum: '<S237>/Add2' incorporates:
         *  Abs: '<S237>/Abs'
         *  Gain: '<S237>/Gain'
         *  Gain: '<S237>/Gain1'
         *  Product: '<S237>/Multiply2'
         *  Product: '<S237>/Multiply3'
         *  Sqrt: '<S237>/Sqrt'
         *  Sum: '<S237>/Add1'
         *  Sum: '<S237>/Subtract'
         */
        rtb_a_pr = (sqrtf((8.0F * fabsf(rtb_Saturation_l) + FMS_ConstB.d_l) *
                          FMS_ConstB.d_l) - FMS_ConstB.d_l) * 0.5F * rtb_Sqrt_k0
          + rtb_MathFunction_cr_idx_0;

        /* Sum: '<S237>/Add4' */
        rtb_Add4_k = (rtb_Saturation_l - rtb_a_pr) + rtb_MathFunction_cr_idx_0;

        /* Sum: '<S237>/Add3' */
        rtb_Sqrt_k0 = rtb_Saturation_l + FMS_ConstB.d_l;

        /* Sum: '<S237>/Subtract1' */
        rtb_Saturation_l -= FMS_ConstB.d_l;

        /* Signum: '<S237>/Sign1' */
        if (rtb_Sqrt_k0 < 0.0F) {
          rtb_Sqrt_k0 = -1.0F;
        } else {
          if (rtb_Sqrt_k0 > 0.0F) {
            rtb_Sqrt_k0 = 1.0F;
          }
        }

        /* End of Signum: '<S237>/Sign1' */

        /* Signum: '<S237>/Sign2' */
        if (rtb_Saturation_l < 0.0F) {
          rtb_Saturation_l = -1.0F;
        } else {
          if (rtb_Saturation_l > 0.0F) {
            rtb_Saturation_l = 1.0F;
          }
        }

        /* End of Signum: '<S237>/Sign2' */

        /* Sum: '<S237>/Add5' incorporates:
         *  Gain: '<S237>/Gain2'
         *  Product: '<S237>/Multiply4'
         *  Sum: '<S237>/Subtract2'
         */
        rtb_a_pr += (rtb_Sqrt_k0 - rtb_Saturation_l) * 0.5F * rtb_Add4_k;

        /* Update for Delay: '<S247>/Delay' */
        FMS_DW.icLoad_o = 0U;

        /* Update for DiscreteIntegrator: '<S288>/Discrete-Time Integrator' incorporates:
         *  Product: '<S247>/Divide1'
         */
        FMS_DW.l1_heading_p += A / rtb_Switch_k * 0.004F;

        /* Update for Delay: '<S227>/Delay' */
        FMS_DW.icLoad_c = 0U;

        /* Update for Delay: '<S228>/Delay' */
        FMS_DW.icLoad_j = 0U;

        /* Update for DiscreteIntegrator: '<S231>/Integrator1' incorporates:
         *  DiscreteIntegrator: '<S231>/Integrator'
         */
        FMS_DW.Integrator1_IC_LOADING_j = 0U;
        FMS_DW.Integrator1_DSTATE_e += 0.004F * FMS_DW.Integrator_DSTATE_b;

        /* Sum: '<S237>/Add6' */
        rtb_Sqrt_k0 = rtb_a_pr + FMS_ConstB.d_l;

        /* Sum: '<S237>/Subtract3' */
        A = rtb_a_pr - FMS_ConstB.d_l;

        /* Signum: '<S237>/Sign5' */
        if (rtb_a_pr < 0.0F) {
          rtb_Switch_k = -1.0F;
        } else if (rtb_a_pr > 0.0F) {
          rtb_Switch_k = 1.0F;
        } else {
          rtb_Switch_k = rtb_a_pr;
        }

        /* End of Signum: '<S237>/Sign5' */

        /* Signum: '<S237>/Sign3' */
        if (rtb_Sqrt_k0 < 0.0F) {
          rtb_Sqrt_k0 = -1.0F;
        } else {
          if (rtb_Sqrt_k0 > 0.0F) {
            rtb_Sqrt_k0 = 1.0F;
          }
        }

        /* End of Signum: '<S237>/Sign3' */

        /* Signum: '<S237>/Sign4' */
        if (A < 0.0F) {
          A = -1.0F;
        } else {
          if (A > 0.0F) {
            A = 1.0F;
          }
        }

        /* End of Signum: '<S237>/Sign4' */

        /* Signum: '<S237>/Sign6' */
        if (rtb_a_pr < 0.0F) {
          rtb_Add4_k = -1.0F;
        } else if (rtb_a_pr > 0.0F) {
          rtb_Add4_k = 1.0F;
        } else {
          rtb_Add4_k = rtb_a_pr;
        }

        /* End of Signum: '<S237>/Sign6' */

        /* Update for DiscreteIntegrator: '<S231>/Integrator' incorporates:
         *  Constant: '<S237>/const'
         *  Gain: '<S237>/Gain3'
         *  Product: '<S237>/Divide'
         *  Product: '<S237>/Multiply5'
         *  Product: '<S237>/Multiply6'
         *  Sum: '<S237>/Subtract4'
         *  Sum: '<S237>/Subtract5'
         *  Sum: '<S237>/Subtract6'
         */
        FMS_DW.Integrator_DSTATE_b += ((rtb_a_pr / FMS_ConstB.d_l - rtb_Switch_k)
          * FMS_ConstB.Gain4_n * ((rtb_Sqrt_k0 - A) * 0.5F) - rtb_Add4_k *
          1.04719758F) * 0.004F;
        if (FMS_DW.Integrator_DSTATE_b >= FMS_PARAM.YAW_RATE_LIM) {
          FMS_DW.Integrator_DSTATE_b = FMS_PARAM.YAW_RATE_LIM;
        } else {
          if (FMS_DW.Integrator_DSTATE_b <= -FMS_PARAM.YAW_RATE_LIM) {
            FMS_DW.Integrator_DSTATE_b = -FMS_PARAM.YAW_RATE_LIM;
          }
        }

        /* End of Update for DiscreteIntegrator: '<S231>/Integrator' */
        /* End of Outputs for SubSystem: '<S24>/Return' */
        break;

       case 3:
        if (FMS_DW.SwitchCase_ActiveSubsystem_at != rtPrevAction) {
          /* SystemReset for IfAction SubSystem: '<S24>/Hold' incorporates:
           *  ActionPort: '<S177>/Action Port'
           */
          /* SystemReset for SwitchCase: '<S24>/Switch Case' incorporates:
           *  Chart: '<S186>/Motion Status'
           *  Chart: '<S196>/Motion State'
           *  Chart: '<S208>/Motion State'
           */
          FMS_MotionStatus_Reset(&FMS_DW.sf_MotionStatus_j);
          FMS_DW.temporalCounter_i1_a = 0U;
          FMS_DW.is_active_c15_FMS = 0U;
          FMS_DW.is_c15_FMS = FMS_IN_NO_ACTIVE_CHILD_h;
          FMS_MotionState_Reset(&FMS_DW.sf_MotionState_g);

          /* End of SystemReset for SubSystem: '<S24>/Hold' */
        }

        /* Outputs for IfAction SubSystem: '<S24>/Hold' incorporates:
         *  ActionPort: '<S177>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Chart: '<S186>/Motion Status' incorporates:
         *  Abs: '<S186>/Abs'
         *  Constant: '<S186>/Constant'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        FMS_MotionStatus(0.0F, fabsf(FMS_U.INS_Out.vd), &rtb_state_a,
                         &FMS_DW.sf_MotionStatus_j);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Chart: '<S196>/Motion State' incorporates:
         *  Abs: '<S196>/Abs'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        if (FMS_DW.temporalCounter_i1_a < 255U) {
          FMS_DW.temporalCounter_i1_a++;
        }

        if (FMS_DW.is_active_c15_FMS == 0U) {
          FMS_DW.is_active_c15_FMS = 1U;
          FMS_DW.is_c15_FMS = FMS_IN_Move_n;
          rtb_state_b = MotionState_Move;
        } else {
          switch (FMS_DW.is_c15_FMS) {
           case FMS_IN_Brake_o:
            rtb_state_b = MotionState_Brake;

            /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
            if ((fabsf(FMS_U.INS_Out.r) <= 0.1) || (FMS_DW.temporalCounter_i1_a >=
                 250U)) {
              FMS_DW.is_c15_FMS = FMS_IN_Hold_d;
              rtb_state_b = MotionState_Hold;
            }

            /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
            break;

           case FMS_IN_Hold_d:
            rtb_state_b = MotionState_Hold;
            break;

           default:
            FMS_DW.is_c15_FMS = FMS_IN_Brake_o;
            FMS_DW.temporalCounter_i1_a = 0U;
            rtb_state_b = MotionState_Brake;
            break;
          }
        }

        /* End of Chart: '<S196>/Motion State' */

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Chart: '<S208>/Motion State' incorporates:
         *  Constant: '<S208>/Constant'
         *  Inport: '<Root>/INS_Out'
         *  Math: '<S208>/Square'
         *  Math: '<S208>/Square1'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  Sqrt: '<S208>/Sqrt'
         *  Sum: '<S208>/Add'
         */
        FMS_MotionState(0.0F, sqrtf(FMS_U.INS_Out.vn * FMS_U.INS_Out.vn +
          FMS_U.INS_Out.ve * FMS_U.INS_Out.ve), &rtb_state_l,
                        &FMS_DW.sf_MotionState_g);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* SwitchCase: '<S207>/Switch Case' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  Inport: '<Root>/Pilot_Cmd'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        rtPrevAction = FMS_DW.SwitchCase_ActiveSubsystem_p;
        FMS_DW.SwitchCase_ActiveSubsystem_p = -1;
        switch (rtb_state_l) {
         case MotionState_Hold:
          FMS_DW.SwitchCase_ActiveSubsystem_p = 0;
          break;

         case MotionState_Brake:
          FMS_DW.SwitchCase_ActiveSubsystem_p = 1;
          break;

         case MotionState_Move:
          FMS_DW.SwitchCase_ActiveSubsystem_p = 2;
          break;
        }

        switch (FMS_DW.SwitchCase_ActiveSubsystem_p) {
         case 0:
          if (FMS_DW.SwitchCase_ActiveSubsystem_p != rtPrevAction) {
            /* SystemReset for IfAction SubSystem: '<S207>/Hold Control' incorporates:
             *  ActionPort: '<S210>/Action Port'
             */
            /* SystemReset for SwitchCase: '<S207>/Switch Case' */
            FMS_HoldControl_l_Reset(&FMS_DW.HoldControl_f);

            /* End of SystemReset for SubSystem: '<S207>/Hold Control' */
          }

          /* Outputs for IfAction SubSystem: '<S207>/Hold Control' incorporates:
           *  ActionPort: '<S210>/Action Port'
           */
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_HoldControl_k(FMS_U.INS_Out.x_R, FMS_U.INS_Out.y_R,
                            FMS_U.INS_Out.psi, FMS_B.Merge_o,
                            &FMS_ConstB.HoldControl_f, &FMS_DW.HoldControl_f);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          /* End of Outputs for SubSystem: '<S207>/Hold Control' */
          break;

         case 1:
          /* Outputs for IfAction SubSystem: '<S207>/Brake Control' incorporates:
           *  ActionPort: '<S209>/Action Port'
           */
          FMS_BrakeControl_f(FMS_B.Merge_o);

          /* End of Outputs for SubSystem: '<S207>/Brake Control' */
          break;

         case 2:
          if (FMS_DW.SwitchCase_ActiveSubsystem_p != rtPrevAction) {
            /* SystemReset for IfAction SubSystem: '<S207>/Move Control' incorporates:
             *  ActionPort: '<S211>/Action Port'
             */
            /* SystemReset for SwitchCase: '<S207>/Switch Case' */
            FMS_MoveControl_d_Reset(&FMS_DW.MoveControl_i);

            /* End of SystemReset for SubSystem: '<S207>/Move Control' */
          }

          /* Outputs for IfAction SubSystem: '<S207>/Move Control' incorporates:
           *  ActionPort: '<S211>/Action Port'
           */
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_MoveControl_o(FMS_U.Pilot_Cmd.stick_pitch,
                            FMS_U.Pilot_Cmd.stick_roll, FMS_B.Merge_o,
                            &FMS_ConstB.MoveControl_i, &FMS_DW.MoveControl_i);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          /* End of Outputs for SubSystem: '<S207>/Move Control' */
          break;
        }

        /* End of SwitchCase: '<S207>/Switch Case' */

        /* SwitchCase: '<S185>/Switch Case' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  Inport: '<Root>/Pilot_Cmd'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        rtPrevAction = FMS_DW.SwitchCase_ActiveSubsystem_pp;
        FMS_DW.SwitchCase_ActiveSubsystem_pp = -1;
        switch (rtb_state_a) {
         case MotionState_Hold:
          FMS_DW.SwitchCase_ActiveSubsystem_pp = 0;
          break;

         case MotionState_Brake:
          FMS_DW.SwitchCase_ActiveSubsystem_pp = 1;
          break;

         case MotionState_Move:
          FMS_DW.SwitchCase_ActiveSubsystem_pp = 2;
          break;
        }

        switch (FMS_DW.SwitchCase_ActiveSubsystem_pp) {
         case 0:
          if (FMS_DW.SwitchCase_ActiveSubsystem_pp != rtPrevAction) {
            /* SystemReset for IfAction SubSystem: '<S185>/Hold Control' incorporates:
             *  ActionPort: '<S188>/Action Port'
             */
            /* SystemReset for SwitchCase: '<S185>/Switch Case' */
            FMS_HoldControl_Reset(&FMS_DW.HoldControl_n);

            /* End of SystemReset for SubSystem: '<S185>/Hold Control' */
          }

          /* Outputs for IfAction SubSystem: '<S185>/Hold Control' incorporates:
           *  ActionPort: '<S188>/Action Port'
           */
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_HoldControl(FMS_U.INS_Out.h_R, &FMS_B.Merge_ey,
                          &FMS_DW.HoldControl_n);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          /* End of Outputs for SubSystem: '<S185>/Hold Control' */
          break;

         case 1:
          /* Outputs for IfAction SubSystem: '<S185>/Brake Control' incorporates:
           *  ActionPort: '<S187>/Action Port'
           */
          FMS_BrakeControl(&FMS_B.Merge_ey);

          /* End of Outputs for SubSystem: '<S185>/Brake Control' */
          break;

         case 2:
          if (FMS_DW.SwitchCase_ActiveSubsystem_pp != rtPrevAction) {
            /* SystemReset for IfAction SubSystem: '<S185>/Move Control' incorporates:
             *  ActionPort: '<S189>/Action Port'
             */
            /* SystemReset for SwitchCase: '<S185>/Switch Case' */
            FMS_MoveControl_Reset(&FMS_DW.MoveControl_n);

            /* End of SystemReset for SubSystem: '<S185>/Move Control' */
          }

          /* Outputs for IfAction SubSystem: '<S185>/Move Control' incorporates:
           *  ActionPort: '<S189>/Action Port'
           */
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_MoveControl(FMS_U.Pilot_Cmd.stick_throttle, &FMS_B.Merge_ey,
                          &FMS_ConstB.MoveControl_n, &FMS_DW.MoveControl_n);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          /* End of Outputs for SubSystem: '<S185>/Move Control' */
          break;
        }

        /* End of SwitchCase: '<S185>/Switch Case' */

        /* SwitchCase: '<S195>/Switch Case' */
        rtPrevAction = FMS_DW.SwitchCase_ActiveSubsystem_bn;
        FMS_DW.SwitchCase_ActiveSubsystem_bn = -1;
        switch (rtb_state_b) {
         case MotionState_Hold:
          FMS_DW.SwitchCase_ActiveSubsystem_bn = 0;
          break;

         case MotionState_Brake:
          FMS_DW.SwitchCase_ActiveSubsystem_bn = 1;
          break;

         case MotionState_Move:
          FMS_DW.SwitchCase_ActiveSubsystem_bn = 2;
          break;
        }

        switch (FMS_DW.SwitchCase_ActiveSubsystem_bn) {
         case 0:
          if (FMS_DW.SwitchCase_ActiveSubsystem_bn != rtPrevAction) {
            /* InitializeConditions for IfAction SubSystem: '<S195>/Hold Control' incorporates:
             *  ActionPort: '<S198>/Action Port'
             */
            /* InitializeConditions for SwitchCase: '<S195>/Switch Case' incorporates:
             *  Delay: '<S198>/Delay'
             */
            FMS_DW.icLoad_g = 1U;

            /* End of InitializeConditions for SubSystem: '<S195>/Hold Control' */
          }

          /* Outputs for IfAction SubSystem: '<S195>/Hold Control' incorporates:
           *  ActionPort: '<S198>/Action Port'
           */
          /* Delay: '<S198>/Delay' incorporates:
           *  Inport: '<Root>/INS_Out'
           *  SignalConversion: '<S16>/Signal Copy1'
           */
          if (FMS_DW.icLoad_g != 0) {
            /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
            FMS_DW.Delay_DSTATE_g = FMS_U.INS_Out.psi;

            /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          }

          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          /* Sum: '<S198>/Sum' incorporates:
           *  Delay: '<S198>/Delay'
           *  Inport: '<Root>/INS_Out'
           *  SignalConversion: '<S16>/Signal Copy1'
           */
          rtb_Sqrt_k0 = FMS_DW.Delay_DSTATE_g - FMS_U.INS_Out.psi;

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

          /* Abs: '<S201>/Abs' */
          rtb_Switch_k = fabsf(rtb_Sqrt_k0);

          /* Switch: '<S201>/Switch' incorporates:
           *  Constant: '<S201>/Constant'
           *  Constant: '<S202>/Constant'
           *  Product: '<S201>/Multiply'
           *  RelationalOperator: '<S202>/Compare'
           *  Sum: '<S201>/Subtract'
           */
          if (rtb_Switch_k > 3.14159274F) {
            /* Signum: '<S201>/Sign' */
            if (rtb_Sqrt_k0 < 0.0F) {
              rtb_Sqrt_k0 = -1.0F;
            } else {
              if (rtb_Sqrt_k0 > 0.0F) {
                rtb_Sqrt_k0 = 1.0F;
              }
            }

            /* End of Signum: '<S201>/Sign' */
            rtb_Sqrt_k0 *= rtb_Switch_k - 6.28318548F;
          }

          /* End of Switch: '<S201>/Switch' */

          /* Gain: '<S198>/Gain2' */
          FMS_B.Merge_n1 = FMS_PARAM.YAW_P * rtb_Sqrt_k0;

          /* Update for Delay: '<S198>/Delay' */
          FMS_DW.icLoad_g = 0U;

          /* End of Outputs for SubSystem: '<S195>/Hold Control' */
          break;

         case 1:
          /* Outputs for IfAction SubSystem: '<S195>/Brake Control' incorporates:
           *  ActionPort: '<S197>/Action Port'
           */
          FMS_BrakeControl(&FMS_B.Merge_n1);

          /* End of Outputs for SubSystem: '<S195>/Brake Control' */
          break;

         case 2:
          if (FMS_DW.SwitchCase_ActiveSubsystem_bn != rtPrevAction) {
            /* InitializeConditions for IfAction SubSystem: '<S195>/Move Control' incorporates:
             *  ActionPort: '<S199>/Action Port'
             */
            /* InitializeConditions for SwitchCase: '<S195>/Switch Case' incorporates:
             *  DiscreteIntegrator: '<S204>/Integrator'
             *  DiscreteIntegrator: '<S204>/Integrator1'
             */
            FMS_DW.Integrator1_DSTATE_k = 0.0F;
            FMS_DW.Integrator_DSTATE_h2 = 0.0F;

            /* End of InitializeConditions for SubSystem: '<S195>/Move Control' */
          }

          /* Outputs for IfAction SubSystem: '<S195>/Move Control' incorporates:
           *  ActionPort: '<S199>/Action Port'
           */
          /* Product: '<S205>/Multiply1' incorporates:
           *  Constant: '<S205>/const1'
           *  DiscreteIntegrator: '<S204>/Integrator'
           */
          rtb_Sqrt_k0 = FMS_DW.Integrator_DSTATE_h2 * 0.02F;

          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          /* DeadZone: '<S203>/Dead Zone' incorporates:
           *  Inport: '<Root>/Pilot_Cmd'
           *  SignalConversion: '<S16>/Signal Copy2'
           */
          if (FMS_U.Pilot_Cmd.stick_yaw > FMS_PARAM.YAW_DZ) {
            rtb_Add4_k = FMS_U.Pilot_Cmd.stick_yaw - FMS_PARAM.YAW_DZ;
          } else if (FMS_U.Pilot_Cmd.stick_yaw >= -FMS_PARAM.YAW_DZ) {
            rtb_Add4_k = 0.0F;
          } else {
            rtb_Add4_k = FMS_U.Pilot_Cmd.stick_yaw - (-FMS_PARAM.YAW_DZ);
          }

          /* End of DeadZone: '<S203>/Dead Zone' */
          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

          /* Sum: '<S205>/Add' incorporates:
           *  DiscreteIntegrator: '<S204>/Integrator1'
           *  Gain: '<S199>/Gain1'
           *  Gain: '<S203>/Gain'
           *  Sum: '<S204>/Subtract'
           */
          rtb_a_pr = (FMS_DW.Integrator1_DSTATE_k - 1.0F / (1.0F -
            FMS_PARAM.YAW_DZ) * rtb_Add4_k * FMS_PARAM.YAW_RATE_LIM) +
            rtb_Sqrt_k0;

          /* Signum: '<S205>/Sign' */
          if (rtb_a_pr < 0.0F) {
            rtb_Switch_k = -1.0F;
          } else if (rtb_a_pr > 0.0F) {
            rtb_Switch_k = 1.0F;
          } else {
            rtb_Switch_k = rtb_a_pr;
          }

          /* End of Signum: '<S205>/Sign' */

          /* Sum: '<S205>/Add2' incorporates:
           *  Abs: '<S205>/Abs'
           *  Gain: '<S205>/Gain'
           *  Gain: '<S205>/Gain1'
           *  Product: '<S205>/Multiply2'
           *  Product: '<S205>/Multiply3'
           *  Sqrt: '<S205>/Sqrt'
           *  Sum: '<S205>/Add1'
           *  Sum: '<S205>/Subtract'
           */
          rtb_Switch_k = (sqrtf((8.0F * fabsf(rtb_a_pr) + FMS_ConstB.d_jz) *
                                FMS_ConstB.d_jz) - FMS_ConstB.d_jz) * 0.5F *
            rtb_Switch_k + rtb_Sqrt_k0;

          /* Sum: '<S205>/Add4' */
          A = (rtb_a_pr - rtb_Switch_k) + rtb_Sqrt_k0;

          /* Sum: '<S205>/Add3' */
          rtb_Sqrt_k0 = rtb_a_pr + FMS_ConstB.d_jz;

          /* Sum: '<S205>/Subtract1' */
          rtb_a_pr -= FMS_ConstB.d_jz;

          /* Signum: '<S205>/Sign1' */
          if (rtb_Sqrt_k0 < 0.0F) {
            rtb_Sqrt_k0 = -1.0F;
          } else {
            if (rtb_Sqrt_k0 > 0.0F) {
              rtb_Sqrt_k0 = 1.0F;
            }
          }

          /* End of Signum: '<S205>/Sign1' */

          /* Signum: '<S205>/Sign2' */
          if (rtb_a_pr < 0.0F) {
            rtb_a_pr = -1.0F;
          } else {
            if (rtb_a_pr > 0.0F) {
              rtb_a_pr = 1.0F;
            }
          }

          /* End of Signum: '<S205>/Sign2' */

          /* Sum: '<S205>/Add5' incorporates:
           *  Gain: '<S205>/Gain2'
           *  Product: '<S205>/Multiply4'
           *  Sum: '<S205>/Subtract2'
           */
          rtb_Switch_k += (rtb_Sqrt_k0 - rtb_a_pr) * 0.5F * A;

          /* SignalConversion: '<S199>/OutportBufferForpsi_rate_cmd_radPs' incorporates:
           *  DiscreteIntegrator: '<S204>/Integrator1'
           */
          FMS_B.Merge_n1 = FMS_DW.Integrator1_DSTATE_k;

          /* Update for DiscreteIntegrator: '<S204>/Integrator1' incorporates:
           *  DiscreteIntegrator: '<S204>/Integrator'
           */
          FMS_DW.Integrator1_DSTATE_k += 0.004F * FMS_DW.Integrator_DSTATE_h2;

          /* Sum: '<S205>/Add6' */
          rtb_Sqrt_k0 = rtb_Switch_k + FMS_ConstB.d_jz;

          /* Sum: '<S205>/Subtract3' */
          A = rtb_Switch_k - FMS_ConstB.d_jz;

          /* Signum: '<S205>/Sign5' */
          if (rtb_Switch_k < 0.0F) {
            rtb_a_pr = -1.0F;
          } else if (rtb_Switch_k > 0.0F) {
            rtb_a_pr = 1.0F;
          } else {
            rtb_a_pr = rtb_Switch_k;
          }

          /* End of Signum: '<S205>/Sign5' */

          /* Signum: '<S205>/Sign3' */
          if (rtb_Sqrt_k0 < 0.0F) {
            rtb_Sqrt_k0 = -1.0F;
          } else {
            if (rtb_Sqrt_k0 > 0.0F) {
              rtb_Sqrt_k0 = 1.0F;
            }
          }

          /* End of Signum: '<S205>/Sign3' */

          /* Signum: '<S205>/Sign4' */
          if (A < 0.0F) {
            A = -1.0F;
          } else {
            if (A > 0.0F) {
              A = 1.0F;
            }
          }

          /* End of Signum: '<S205>/Sign4' */

          /* Signum: '<S205>/Sign6' */
          if (rtb_Switch_k < 0.0F) {
            rtb_Add4_k = -1.0F;
          } else if (rtb_Switch_k > 0.0F) {
            rtb_Add4_k = 1.0F;
          } else {
            rtb_Add4_k = rtb_Switch_k;
          }

          /* End of Signum: '<S205>/Sign6' */

          /* Update for DiscreteIntegrator: '<S204>/Integrator' incorporates:
           *  Constant: '<S205>/const'
           *  Gain: '<S205>/Gain3'
           *  Product: '<S205>/Divide'
           *  Product: '<S205>/Multiply5'
           *  Product: '<S205>/Multiply6'
           *  Sum: '<S205>/Subtract4'
           *  Sum: '<S205>/Subtract5'
           *  Sum: '<S205>/Subtract6'
           */
          FMS_DW.Integrator_DSTATE_h2 += ((rtb_Switch_k / FMS_ConstB.d_jz -
            rtb_a_pr) * FMS_ConstB.Gain4_cw * ((rtb_Sqrt_k0 - A) * 0.5F) -
            rtb_Add4_k * 15.707963F) * 0.004F;

          /* End of Outputs for SubSystem: '<S195>/Move Control' */
          break;
        }

        /* End of SwitchCase: '<S195>/Switch Case' */

        /* Outport: '<Root>/FMS_Out' incorporates:
         *  BusAssignment: '<S177>/Bus Assignment'
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Constant: '<S177>/Constant'
         */
        FMS_Y.FMS_Out = FMS_rtZFMS_Out_Bus;

        /* BusAssignment: '<S177>/Bus Assignment' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Outport: '<Root>/FMS_Out'
         */
        FMS_Y.FMS_Out.status = FMS_ConstB.DataTypeConversion_g;
        FMS_Y.FMS_Out.state = FMS_ConstB.DataTypeConversion1_i;
        FMS_Y.FMS_Out.ctrl_mode = FMS_ConstB.DataTypeConversion2_j;

        /* Saturate: '<S195>/Saturation' */
        if (FMS_B.Merge_n1 > FMS_PARAM.YAW_RATE_LIM) {
          /* BusAssignment: '<S177>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.psi_rate_cmd = FMS_PARAM.YAW_RATE_LIM;
        } else if (FMS_B.Merge_n1 < -FMS_PARAM.YAW_RATE_LIM) {
          /* BusAssignment: '<S177>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.psi_rate_cmd = -FMS_PARAM.YAW_RATE_LIM;
        } else {
          /* BusAssignment: '<S177>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.psi_rate_cmd = FMS_B.Merge_n1;
        }

        /* End of Saturate: '<S195>/Saturation' */

        /* Saturate: '<S207>/Saturation1' */
        if (FMS_B.Merge_o[0] > FMS_PARAM.VEL_XY_LIM) {
          /* BusAssignment: '<S177>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.u_cmd = FMS_PARAM.VEL_XY_LIM;
        } else if (FMS_B.Merge_o[0] < -FMS_PARAM.VEL_XY_LIM) {
          /* BusAssignment: '<S177>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.u_cmd = -FMS_PARAM.VEL_XY_LIM;
        } else {
          /* BusAssignment: '<S177>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.u_cmd = FMS_B.Merge_o[0];
        }

        if (FMS_B.Merge_o[1] > FMS_PARAM.VEL_XY_LIM) {
          /* BusAssignment: '<S177>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.v_cmd = FMS_PARAM.VEL_XY_LIM;
        } else if (FMS_B.Merge_o[1] < -FMS_PARAM.VEL_XY_LIM) {
          /* BusAssignment: '<S177>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.v_cmd = -FMS_PARAM.VEL_XY_LIM;
        } else {
          /* BusAssignment: '<S177>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.v_cmd = FMS_B.Merge_o[1];
        }

        /* End of Saturate: '<S207>/Saturation1' */

        /* Saturate: '<S185>/Saturation1' */
        if (FMS_B.Merge_ey > FMS_PARAM.VEL_Z_LIM) {
          /* BusAssignment: '<S177>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.w_cmd = FMS_PARAM.VEL_Z_LIM;
        } else if (FMS_B.Merge_ey < -FMS_PARAM.VEL_Z_LIM) {
          /* BusAssignment: '<S177>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.w_cmd = -FMS_PARAM.VEL_Z_LIM;
        } else {
          /* BusAssignment: '<S177>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.w_cmd = FMS_B.Merge_ey;
        }

        /* End of Saturate: '<S185>/Saturation1' */
        /* End of Outputs for SubSystem: '<S24>/Hold' */
        break;

       case 4:
        /* Outputs for IfAction SubSystem: '<S24>/Unknown' incorporates:
         *  ActionPort: '<S181>/Action Port'
         */
        /* Outport: '<Root>/FMS_Out' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         */
        FMS_Unknown(&FMS_Y.FMS_Out, &FMS_ConstB.Unknown_g);

        /* End of Outputs for SubSystem: '<S24>/Unknown' */
        break;
      }

      /* End of SwitchCase: '<S24>/Switch Case' */
      /* End of Outputs for SubSystem: '<S17>/SubMode' */
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S17>/Auto' incorporates:
       *  ActionPort: '<S22>/Action Port'
       */
      /* SwitchCase: '<S22>/Switch Case' incorporates:
       *  Math: '<S164>/Square'
       *  Math: '<S166>/Math Function'
       *  Sum: '<S126>/Subtract'
       */
      rtPrevAction = FMS_DW.SwitchCase_ActiveSubsystem_i;

      /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
      switch (FMS_B.state) {
       case VehicleState_Offboard:
        FMS_DW.SwitchCase_ActiveSubsystem_i = 0;
        break;

       case VehicleState_Mission:
        FMS_DW.SwitchCase_ActiveSubsystem_i = 1;
        break;

       default:
        FMS_DW.SwitchCase_ActiveSubsystem_i = 2;
        break;
      }

      /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
      if ((rtPrevAction != FMS_DW.SwitchCase_ActiveSubsystem_i) && (rtPrevAction
           == 1)) {
        /* Disable for Resettable SubSystem: '<S99>/Mission_SubSystem' */
        /* Disable for SwitchCase: '<S144>/Switch Case' */
        FMS_DW.SwitchCase_ActiveSubsystem_a = -1;

        /* Disable for SwitchCase: '<S134>/Switch Case' */
        FMS_DW.SwitchCase_ActiveSubsystem_e = -1;

        /* End of Disable for SubSystem: '<S99>/Mission_SubSystem' */
      }

      switch (FMS_DW.SwitchCase_ActiveSubsystem_i) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S22>/Offboard' incorporates:
         *  ActionPort: '<S100>/Action Port'
         */
        /* Outport: '<Root>/FMS_Out' incorporates:
         *  BusAssignment: '<S100>/Bus Assignment'
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Constant: '<S100>/Constant'
         */
        FMS_Y.FMS_Out = FMS_rtZFMS_Out_Bus;

        /* BusAssignment: '<S100>/Bus Assignment' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Outport: '<Root>/FMS_Out'
         */
        FMS_Y.FMS_Out.status = FMS_ConstB.DataTypeConversion_a;
        FMS_Y.FMS_Out.state = FMS_ConstB.DataTypeConversion1_n;

        /* End of Outputs for SubSystem: '<S22>/Offboard' */
        break;

       case 1:
        if (FMS_DW.SwitchCase_ActiveSubsystem_i != rtPrevAction) {
          /* InitializeConditions for IfAction SubSystem: '<S22>/Mission' incorporates:
           *  ActionPort: '<S99>/Action Port'
           */
          /* InitializeConditions for SwitchCase: '<S22>/Switch Case' incorporates:
           *  UnitDelay: '<S102>/Delay Input1'
           *
           * Block description for '<S102>/Delay Input1':
           *
           *  Store in Global RAM
           */
          FMS_DW.DelayInput1_DSTATE_pe = 0U;

          /* End of InitializeConditions for SubSystem: '<S22>/Mission' */

          /* SystemReset for IfAction SubSystem: '<S22>/Mission' incorporates:
           *  ActionPort: '<S99>/Action Port'
           */
          /* SystemReset for Resettable SubSystem: '<S99>/Mission_SubSystem' */
          /* SystemReset for SwitchCase: '<S22>/Switch Case' incorporates:
           *  Chart: '<S135>/Motion Status'
           *  Chart: '<S145>/Motion State'
           *  Delay: '<S107>/Delay'
           *  Delay: '<S127>/Delay'
           *  DiscreteIntegrator: '<S110>/Integrator'
           *  DiscreteIntegrator: '<S110>/Integrator1'
           *  DiscreteIntegrator: '<S171>/Discrete-Time Integrator'
           */
          FMS_DW.icLoad_i = 1U;
          FMS_DW.l1_heading = 0.0F;
          FMS_DW.icLoad_k = 1U;
          FMS_DW.Integrator1_IC_LOADING = 1U;
          FMS_DW.Integrator_DSTATE_i = 0.0F;
          FMS_MotionState_Reset(&FMS_DW.sf_MotionState_n);
          FMS_MotionStatus_Reset(&FMS_DW.sf_MotionStatus_jt);

          /* End of SystemReset for SubSystem: '<S99>/Mission_SubSystem' */
          /* End of SystemReset for SubSystem: '<S22>/Mission' */
        }

        /* Outputs for IfAction SubSystem: '<S22>/Mission' incorporates:
         *  ActionPort: '<S99>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* RelationalOperator: '<S102>/FixPt Relational Operator' incorporates:
         *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy5Inport1'
         *  UnitDelay: '<S102>/Delay Input1'
         *
         * Block description for '<S102>/Delay Input1':
         *
         *  Store in Global RAM
         */
        rtb_FixPtRelationalOperator = (FMS_B.wp_index !=
          FMS_DW.DelayInput1_DSTATE_pe);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Outputs for Resettable SubSystem: '<S99>/Mission_SubSystem' incorporates:
         *  ResetPort: '<S103>/Reset'
         */
        if (rtb_FixPtRelationalOperator &&
            (FMS_PrevZCX.Mission_SubSystem_Reset_ZCE != POS_ZCSIG)) {
          /* Disable for SwitchCase: '<S144>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_a = -1;

          /* Disable for SwitchCase: '<S134>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_e = -1;

          /* InitializeConditions for Delay: '<S127>/Delay' */
          FMS_DW.icLoad_i = 1U;

          /* InitializeConditions for DiscreteIntegrator: '<S171>/Discrete-Time Integrator' */
          FMS_DW.l1_heading = 0.0F;

          /* InitializeConditions for Delay: '<S107>/Delay' */
          FMS_DW.icLoad_k = 1U;

          /* InitializeConditions for DiscreteIntegrator: '<S110>/Integrator1' */
          FMS_DW.Integrator1_IC_LOADING = 1U;

          /* InitializeConditions for DiscreteIntegrator: '<S110>/Integrator' */
          FMS_DW.Integrator_DSTATE_i = 0.0F;

          /* SystemReset for Chart: '<S145>/Motion State' */
          FMS_MotionState_Reset(&FMS_DW.sf_MotionState_n);

          /* SystemReset for Chart: '<S135>/Motion Status' */
          FMS_MotionStatus_Reset(&FMS_DW.sf_MotionStatus_jt);
        }

        FMS_PrevZCX.Mission_SubSystem_Reset_ZCE = rtb_FixPtRelationalOperator;

        /* Delay: '<S127>/Delay' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        if (FMS_DW.icLoad_i != 0) {
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_DW.Delay_DSTATE_p[0] = FMS_U.INS_Out.x_R;
          FMS_DW.Delay_DSTATE_p[1] = FMS_U.INS_Out.y_R;

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        }

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Sum: '<S123>/Sum' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  Math: '<S131>/Square'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
         */
        rtb_Sqrt_k0 = FMS_U.INS_Out.x_R - FMS_B.Cmd_In.sp_waypoint[0];

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        rtb_TmpSignalConversionAtDela_a[0] = rtb_Sqrt_k0 * rtb_Sqrt_k0;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        rtb_Sqrt_k0 = FMS_U.INS_Out.y_R - FMS_B.Cmd_In.sp_waypoint[1];

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Math: '<S131>/Square' */
        rtb_Sqrt_k0 *= rtb_Sqrt_k0;

        /* Sqrt: '<S131>/Sqrt' incorporates:
         *  Sum: '<S131>/Sum of Elements'
         */
        rtb_Sqrt_k0 = sqrtf(rtb_TmpSignalConversionAtDela_a[0] + rtb_Sqrt_k0);

        /* Switch: '<S123>/Switch' incorporates:
         *  Constant: '<S123>/vel'
         */
        if (rtb_Sqrt_k0 > FMS_PARAM.L1) {
          rtb_Switch_k = FMS_PARAM.CRUISE_SPEED;
        } else {
          /* Gain: '<S123>/Gain' */
          rtb_Switch_k = 0.5F * rtb_Sqrt_k0;

          /* Saturate: '<S123>/Saturation' */
          if (rtb_Switch_k > FMS_PARAM.CRUISE_SPEED) {
            rtb_Switch_k = FMS_PARAM.CRUISE_SPEED;
          } else {
            if (rtb_Switch_k < 0.5F) {
              rtb_Switch_k = 0.5F;
            }
          }

          /* End of Saturate: '<S123>/Saturation' */
        }

        /* End of Switch: '<S123>/Switch' */

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Chart: '<S145>/Motion State' incorporates:
         *  Constant: '<S145>/Constant'
         *  Inport: '<Root>/INS_Out'
         *  Math: '<S145>/Square'
         *  Math: '<S145>/Square1'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  Sqrt: '<S145>/Sqrt'
         *  Sum: '<S145>/Add'
         */
        FMS_MotionState(0.0F, sqrtf(FMS_U.INS_Out.vn * FMS_U.INS_Out.vn +
          FMS_U.INS_Out.ve * FMS_U.INS_Out.ve), &rtb_state_a,
                        &FMS_DW.sf_MotionState_n);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* SwitchCase: '<S144>/Switch Case' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  Inport: '<Root>/Pilot_Cmd'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        rtPrevAction = FMS_DW.SwitchCase_ActiveSubsystem_a;
        FMS_DW.SwitchCase_ActiveSubsystem_a = -1;
        switch (rtb_state_a) {
         case MotionState_Hold:
          FMS_DW.SwitchCase_ActiveSubsystem_a = 0;
          break;

         case MotionState_Brake:
          FMS_DW.SwitchCase_ActiveSubsystem_a = 1;
          break;

         case MotionState_Move:
          FMS_DW.SwitchCase_ActiveSubsystem_a = 2;
          break;
        }

        switch (FMS_DW.SwitchCase_ActiveSubsystem_a) {
         case 0:
          if (FMS_DW.SwitchCase_ActiveSubsystem_a != rtPrevAction) {
            /* SystemReset for IfAction SubSystem: '<S144>/Hold Control' incorporates:
             *  ActionPort: '<S147>/Action Port'
             */
            /* SystemReset for SwitchCase: '<S144>/Switch Case' */
            FMS_HoldControl_l_Reset(&FMS_DW.HoldControl_d);

            /* End of SystemReset for SubSystem: '<S144>/Hold Control' */
          }

          /* Outputs for IfAction SubSystem: '<S144>/Hold Control' incorporates:
           *  ActionPort: '<S147>/Action Port'
           */
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_HoldControl_k(FMS_U.INS_Out.x_R, FMS_U.INS_Out.y_R,
                            FMS_U.INS_Out.psi, FMS_B.Merge_n,
                            &FMS_ConstB.HoldControl_d, &FMS_DW.HoldControl_d);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          /* End of Outputs for SubSystem: '<S144>/Hold Control' */
          break;

         case 1:
          /* Outputs for IfAction SubSystem: '<S144>/Brake Control' incorporates:
           *  ActionPort: '<S146>/Action Port'
           */
          FMS_BrakeControl_f(FMS_B.Merge_n);

          /* End of Outputs for SubSystem: '<S144>/Brake Control' */
          break;

         case 2:
          if (FMS_DW.SwitchCase_ActiveSubsystem_a != rtPrevAction) {
            /* SystemReset for IfAction SubSystem: '<S144>/Move Control' incorporates:
             *  ActionPort: '<S148>/Action Port'
             */
            /* SystemReset for SwitchCase: '<S144>/Switch Case' */
            FMS_MoveControl_d_Reset(&FMS_DW.MoveControl_c);

            /* End of SystemReset for SubSystem: '<S144>/Move Control' */
          }

          /* Outputs for IfAction SubSystem: '<S144>/Move Control' incorporates:
           *  ActionPort: '<S148>/Action Port'
           */
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_MoveControl_o(FMS_U.Pilot_Cmd.stick_pitch,
                            FMS_U.Pilot_Cmd.stick_roll, FMS_B.Merge_n,
                            &FMS_ConstB.MoveControl_c, &FMS_DW.MoveControl_c);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          /* End of Outputs for SubSystem: '<S144>/Move Control' */
          break;
        }

        /* End of SwitchCase: '<S144>/Switch Case' */

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Chart: '<S135>/Motion Status' incorporates:
         *  Abs: '<S135>/Abs'
         *  Constant: '<S135>/Constant'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        FMS_MotionStatus(0.0F, fabsf(FMS_U.INS_Out.vd), &rtb_state_a,
                         &FMS_DW.sf_MotionStatus_jt);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* SwitchCase: '<S134>/Switch Case' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  Inport: '<Root>/Pilot_Cmd'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        rtPrevAction = FMS_DW.SwitchCase_ActiveSubsystem_e;
        FMS_DW.SwitchCase_ActiveSubsystem_e = -1;
        switch (rtb_state_a) {
         case MotionState_Hold:
          FMS_DW.SwitchCase_ActiveSubsystem_e = 0;
          break;

         case MotionState_Brake:
          FMS_DW.SwitchCase_ActiveSubsystem_e = 1;
          break;

         case MotionState_Move:
          FMS_DW.SwitchCase_ActiveSubsystem_e = 2;
          break;
        }

        switch (FMS_DW.SwitchCase_ActiveSubsystem_e) {
         case 0:
          if (FMS_DW.SwitchCase_ActiveSubsystem_e != rtPrevAction) {
            /* SystemReset for IfAction SubSystem: '<S134>/Hold Control' incorporates:
             *  ActionPort: '<S137>/Action Port'
             */
            /* SystemReset for SwitchCase: '<S134>/Switch Case' */
            FMS_HoldControl_Reset(&FMS_DW.HoldControl_a);

            /* End of SystemReset for SubSystem: '<S134>/Hold Control' */
          }

          /* Outputs for IfAction SubSystem: '<S134>/Hold Control' incorporates:
           *  ActionPort: '<S137>/Action Port'
           */
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_HoldControl(FMS_U.INS_Out.h_R, &FMS_B.Merge_e,
                          &FMS_DW.HoldControl_a);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          /* End of Outputs for SubSystem: '<S134>/Hold Control' */
          break;

         case 1:
          /* Outputs for IfAction SubSystem: '<S134>/Brake Control' incorporates:
           *  ActionPort: '<S136>/Action Port'
           */
          FMS_BrakeControl(&FMS_B.Merge_e);

          /* End of Outputs for SubSystem: '<S134>/Brake Control' */
          break;

         case 2:
          if (FMS_DW.SwitchCase_ActiveSubsystem_e != rtPrevAction) {
            /* SystemReset for IfAction SubSystem: '<S134>/Move Control' incorporates:
             *  ActionPort: '<S138>/Action Port'
             */
            /* SystemReset for SwitchCase: '<S134>/Switch Case' */
            FMS_MoveControl_Reset(&FMS_DW.MoveControl_m);

            /* End of SystemReset for SubSystem: '<S134>/Move Control' */
          }

          /* Outputs for IfAction SubSystem: '<S134>/Move Control' incorporates:
           *  ActionPort: '<S138>/Action Port'
           */
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_MoveControl(FMS_U.Pilot_Cmd.stick_throttle, &FMS_B.Merge_e,
                          &FMS_ConstB.MoveControl_m, &FMS_DW.MoveControl_m);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          /* End of Outputs for SubSystem: '<S134>/Move Control' */
          break;
        }

        /* End of SwitchCase: '<S134>/Switch Case' */

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Sum: '<S103>/Sum' incorporates:
         *  MATLAB Function: '<S125>/OutRegionRegWP'
         *  MATLAB Function: '<S125>/SearchL1RefWP'
         *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
         *  Sum: '<S128>/Sum1'
         *  Switch: '<S105>/Switch'
         */
        rtb_MathFunction_h_idx_0 = FMS_B.Cmd_In.sp_waypoint[0] -
          FMS_B.Cmd_In.cur_waypoint[0];
        rtb_Saturation1_m = FMS_B.Cmd_In.sp_waypoint[1] -
          FMS_B.Cmd_In.cur_waypoint[1];

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Sum: '<S121>/Sum of Elements' incorporates:
         *  Math: '<S121>/Math Function'
         *  Sum: '<S103>/Sum'
         */
        rtb_Add4_k = rtb_Saturation1_m * rtb_Saturation1_m +
          rtb_MathFunction_h_idx_0 * rtb_MathFunction_h_idx_0;

        /* Math: '<S121>/Math Function1' incorporates:
         *  Sum: '<S121>/Sum of Elements'
         *
         * About '<S121>/Math Function1':
         *  Operator: sqrt
         */
        if (rtb_Add4_k < 0.0F) {
          rtb_a_pr = -sqrtf(fabsf(rtb_Add4_k));
        } else {
          rtb_a_pr = sqrtf(rtb_Add4_k);
        }

        /* End of Math: '<S121>/Math Function1' */

        /* Switch: '<S121>/Switch' incorporates:
         *  Constant: '<S121>/Constant'
         *  Product: '<S121>/Product'
         *  Sum: '<S103>/Sum'
         */
        if (rtb_a_pr > 0.0F) {
          rtb_MathFunction_cr_idx_0 = rtb_Saturation1_m;
          rtb_MathFunction_cr_idx_1 = rtb_MathFunction_h_idx_0;
          rtb_Saturation_l = rtb_a_pr;
        } else {
          rtb_MathFunction_cr_idx_0 = 0.0F;
          rtb_MathFunction_cr_idx_1 = 0.0F;
          rtb_Saturation_l = 1.0F;
        }

        /* End of Switch: '<S121>/Switch' */

        /* Product: '<S121>/Divide' */
        rtb_TmpSignalConversionAtDela_a[0] = rtb_MathFunction_cr_idx_0 /
          rtb_Saturation_l;
        rtb_TmpSignalConversionAtDela_a[1] = rtb_MathFunction_cr_idx_1 /
          rtb_Saturation_l;

        /* Sum: '<S119>/Subtract' incorporates:
         *  Product: '<S119>/Multiply'
         *  Product: '<S119>/Multiply1'
         */
        rtb_a_pr = rtb_TmpSignalConversionAtDela_a[0] * FMS_ConstB.Divide[1] -
          rtb_TmpSignalConversionAtDela_a[1] * FMS_ConstB.Divide[0];

        /* Signum: '<S108>/Sign1' */
        if (rtb_a_pr < 0.0F) {
          rtb_a_pr = -1.0F;
        } else {
          if (rtb_a_pr > 0.0F) {
            rtb_a_pr = 1.0F;
          }
        }

        /* End of Signum: '<S108>/Sign1' */

        /* Switch: '<S108>/Switch2' incorporates:
         *  Constant: '<S108>/Constant4'
         */
        if (rtb_a_pr == 0.0F) {
          rtb_a_pr = 1.0F;
        }

        /* End of Switch: '<S108>/Switch2' */

        /* DotProduct: '<S108>/Dot Product' */
        rtb_Sqrt_k0 = FMS_ConstB.Divide[0] * rtb_TmpSignalConversionAtDela_a[0]
          + FMS_ConstB.Divide[1] * rtb_TmpSignalConversionAtDela_a[1];

        /* Trigonometry: '<S108>/Acos' incorporates:
         *  DotProduct: '<S108>/Dot Product'
         */
        if (rtb_Sqrt_k0 > 1.0F) {
          rtb_Sqrt_k0 = 1.0F;
        } else {
          if (rtb_Sqrt_k0 < -1.0F) {
            rtb_Sqrt_k0 = -1.0F;
          }
        }

        /* Product: '<S108>/Multiply' incorporates:
         *  Trigonometry: '<S108>/Acos'
         */
        rtb_a_pr *= acosf(rtb_Sqrt_k0);

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Math: '<S112>/Rem' incorporates:
         *  Constant: '<S112>/Constant1'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  Sum: '<S107>/Sum1'
         */
        rtb_Sqrt_k0 = rt_remf(rtb_a_pr - FMS_U.INS_Out.psi, 6.28318548F);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Switch: '<S112>/Switch' incorporates:
         *  Abs: '<S112>/Abs'
         *  Constant: '<S112>/Constant'
         *  Constant: '<S118>/Constant'
         *  Product: '<S112>/Multiply'
         *  RelationalOperator: '<S118>/Compare'
         *  Sum: '<S112>/Add'
         */
        if (fabsf(rtb_Sqrt_k0) > 3.14159274F) {
          /* Signum: '<S112>/Sign' */
          if (rtb_Sqrt_k0 < 0.0F) {
            A = -1.0F;
          } else if (rtb_Sqrt_k0 > 0.0F) {
            A = 1.0F;
          } else {
            A = rtb_Sqrt_k0;
          }

          /* End of Signum: '<S112>/Sign' */
          rtb_Sqrt_k0 -= 6.28318548F * A;
        }

        /* End of Switch: '<S112>/Switch' */

        /* Abs: '<S105>/Abs' */
        rtb_Sqrt_k0 = fabsf(rtb_Sqrt_k0);

        /* Switch: '<S105>/Switch' incorporates:
         *  Product: '<S127>/Multiply'
         *  Sum: '<S127>/Sum'
         */
        if (rtb_Sqrt_k0 > 0.34906584F) {
          /* Saturate: '<S144>/Saturation1' */
          if (FMS_B.Merge_n[0] > FMS_PARAM.VEL_XY_LIM) {
            rtb_MathFunction_cr_idx_0 = FMS_PARAM.VEL_XY_LIM;
          } else if (FMS_B.Merge_n[0] < -FMS_PARAM.VEL_XY_LIM) {
            rtb_MathFunction_cr_idx_0 = -FMS_PARAM.VEL_XY_LIM;
          } else {
            rtb_MathFunction_cr_idx_0 = FMS_B.Merge_n[0];
          }

          if (FMS_B.Merge_n[1] > FMS_PARAM.VEL_XY_LIM) {
            rtb_MathFunction_cr_idx_1 = FMS_PARAM.VEL_XY_LIM;
          } else if (FMS_B.Merge_n[1] < -FMS_PARAM.VEL_XY_LIM) {
            rtb_MathFunction_cr_idx_1 = -FMS_PARAM.VEL_XY_LIM;
          } else {
            rtb_MathFunction_cr_idx_1 = FMS_B.Merge_n[1];
          }

          /* End of Saturate: '<S144>/Saturation1' */

          /* Saturate: '<S134>/Saturation1' */
          if (FMS_B.Merge_e > FMS_PARAM.VEL_Z_LIM) {
            rtb_Saturation_l = FMS_PARAM.VEL_Z_LIM;
          } else if (FMS_B.Merge_e < -FMS_PARAM.VEL_Z_LIM) {
            rtb_Saturation_l = -FMS_PARAM.VEL_Z_LIM;
          } else {
            rtb_Saturation_l = FMS_B.Merge_e;
          }

          /* End of Saturate: '<S134>/Saturation1' */
        } else {
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          /* Sum: '<S127>/Sum' incorporates:
           *  Delay: '<S127>/Delay'
           *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
           */
          rtb_Sqrt_k0 = FMS_B.Cmd_In.sp_waypoint[0] - FMS_DW.Delay_DSTATE_p[0];

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

          /* SignalConversion: '<S172>/TmpSignal ConversionAtMath FunctionInport1' */
          rtb_MathFunction_cr_idx_0 = rtb_Sqrt_k0;
          rtb_Saturation_l = rtb_Sqrt_k0;

          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          /* Sum: '<S127>/Sum' incorporates:
           *  Delay: '<S127>/Delay'
           *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
           */
          rtb_Sqrt_k0 = FMS_B.Cmd_In.sp_waypoint[1] - FMS_DW.Delay_DSTATE_p[1];

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

          /* SignalConversion: '<S174>/ConcatBufferAtVector Concatenate2In3' incorporates:
           *  Constant: '<S174>/Constant4'
           */
          rtb_VectorConcatenate_m[5] = 0.0F;

          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          /* Gain: '<S173>/Gain' incorporates:
           *  DiscreteIntegrator: '<S171>/Discrete-Time Integrator'
           *  Inport: '<Root>/INS_Out'
           *  SignalConversion: '<S16>/Signal Copy1'
           *  Sum: '<S171>/Add'
           */
          A = -(FMS_U.INS_Out.psi - FMS_DW.l1_heading);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

          /* Trigonometry: '<S174>/Trigonometric Function3' */
          rtb_VectorConcatenate_m[4] = arm_cos_f32(A);

          /* Gain: '<S174>/Gain' incorporates:
           *  Trigonometry: '<S174>/Trigonometric Function2'
           */
          rtb_VectorConcatenate_m[3] = -arm_sin_f32(A);

          /* SignalConversion: '<S174>/ConcatBufferAtVector Concatenate1In3' incorporates:
           *  Constant: '<S174>/Constant3'
           */
          rtb_VectorConcatenate_m[2] = 0.0F;

          /* Trigonometry: '<S174>/Trigonometric Function' */
          rtb_VectorConcatenate_m[1] = arm_sin_f32(A);

          /* Trigonometry: '<S174>/Trigonometric Function1' */
          rtb_VectorConcatenate_m[0] = arm_cos_f32(A);

          /* SignalConversion: '<S174>/ConcatBufferAtVector ConcatenateIn3' */
          rtb_VectorConcatenate_m[6] = FMS_ConstB.VectorConcatenate3_e[0];
          rtb_VectorConcatenate_m[7] = FMS_ConstB.VectorConcatenate3_e[1];
          rtb_VectorConcatenate_m[8] = FMS_ConstB.VectorConcatenate3_e[2];

          /* Sum: '<S172>/Sum of Elements' incorporates:
           *  Math: '<S172>/Math Function'
           */
          rtb_Add4_k = rtb_MathFunction_cr_idx_0 * rtb_MathFunction_cr_idx_0 +
            rtb_Sqrt_k0 * rtb_Sqrt_k0;

          /* Math: '<S172>/Math Function1' incorporates:
           *  Sum: '<S172>/Sum of Elements'
           *
           * About '<S172>/Math Function1':
           *  Operator: sqrt
           */
          if (rtb_Add4_k < 0.0F) {
            A = -sqrtf(fabsf(rtb_Add4_k));
          } else {
            A = sqrtf(rtb_Add4_k);
          }

          /* End of Math: '<S172>/Math Function1' */

          /* Switch: '<S172>/Switch' incorporates:
           *  Constant: '<S172>/Constant'
           *  Product: '<S172>/Product'
           */
          if (A <= 0.0F) {
            rtb_Saturation_l = 0.0F;
            rtb_Sqrt_k0 = 0.0F;
            A = 1.0F;
          }

          /* End of Switch: '<S172>/Switch' */

          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          /* Sum: '<S128>/Sum' incorporates:
           *  Inport: '<Root>/INS_Out'
           *  SignalConversion: '<S16>/Signal Copy1'
           *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
           */
          rtb_Add4_k = FMS_U.INS_Out.x_R - FMS_B.Cmd_In.cur_waypoint[0];
          rtb_MathFunction_cr_idx_0 = FMS_U.INS_Out.y_R -
            FMS_B.Cmd_In.cur_waypoint[1];

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

          /* Product: '<S128>/Divide' incorporates:
           *  Math: '<S129>/Square'
           *  Math: '<S130>/Square'
           *  Sqrt: '<S129>/Sqrt'
           *  Sqrt: '<S130>/Sqrt'
           *  Sum: '<S128>/Sum'
           *  Sum: '<S129>/Sum of Elements'
           *  Sum: '<S130>/Sum of Elements'
           */
          rtb_MathFunction_cr_idx_0 = sqrtf(rtb_Add4_k * rtb_Add4_k +
            rtb_MathFunction_cr_idx_0 * rtb_MathFunction_cr_idx_0) / sqrtf
            (rtb_MathFunction_h_idx_0 * rtb_MathFunction_h_idx_0 +
             rtb_Saturation1_m * rtb_Saturation1_m);

          /* Saturate: '<S128>/Saturation' */
          if (rtb_MathFunction_cr_idx_0 > 1.0F) {
            rtb_MathFunction_cr_idx_0 = 1.0F;
          } else {
            if (rtb_MathFunction_cr_idx_0 < 0.0F) {
              rtb_MathFunction_cr_idx_0 = 0.0F;
            }
          }

          /* End of Saturate: '<S128>/Saturation' */

          /* Product: '<S170>/Multiply2' incorporates:
           *  Product: '<S172>/Divide'
           */
          rtb_Add4_k = rtb_Saturation_l / A * rtb_Switch_k;
          rtb_Sqrt_k0 = rtb_Sqrt_k0 / A * rtb_Switch_k;

          /* Product: '<S127>/Multiply' */
          for (i = 0; i < 3; i++) {
            rtb_VectorConcatenate_a[i] = rtb_VectorConcatenate_m[i + 3] *
              rtb_Sqrt_k0 + rtb_VectorConcatenate_m[i] * rtb_Add4_k;
          }

          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          /* Gain: '<S122>/Gain' incorporates:
           *  Inport: '<Root>/INS_Out'
           *  Product: '<S128>/Multiply'
           *  SignalConversion: '<S16>/Signal Copy1'
           *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
           *  Sum: '<S122>/Sum2'
           *  Sum: '<S128>/Add'
           *  Sum: '<S128>/Subtract'
           */
          rtb_Saturation_l = (FMS_U.INS_Out.h_R - ((FMS_B.Cmd_In.sp_waypoint[2]
            - FMS_B.Cmd_In.cur_waypoint[2]) * rtb_MathFunction_cr_idx_0 +
            FMS_B.Cmd_In.cur_waypoint[2])) * FMS_PARAM.Z_P;

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          rtb_MathFunction_cr_idx_0 = rtb_VectorConcatenate_a[0];
          rtb_MathFunction_cr_idx_1 = rtb_VectorConcatenate_a[1];

          /* Saturate: '<S122>/Saturation1' incorporates:
           *  Product: '<S127>/Multiply'
           */
          if (rtb_Saturation_l > FMS_PARAM.VEL_Z_LIM) {
            rtb_Saturation_l = FMS_PARAM.VEL_Z_LIM;
          } else {
            if (rtb_Saturation_l < -FMS_PARAM.VEL_Z_LIM) {
              rtb_Saturation_l = -FMS_PARAM.VEL_Z_LIM;
            }
          }

          /* End of Saturate: '<S122>/Saturation1' */
        }

        /* Delay: '<S107>/Delay' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        if (FMS_DW.icLoad_k != 0) {
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_DW.Delay_DSTATE_h = FMS_U.INS_Out.psi;

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        }

        /* DiscreteIntegrator: '<S110>/Integrator1' incorporates:
         *  Delay: '<S107>/Delay'
         */
        if (FMS_DW.Integrator1_IC_LOADING != 0) {
          FMS_DW.Integrator1_DSTATE_p = FMS_DW.Delay_DSTATE_h;
        }

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Math: '<S114>/Rem' incorporates:
         *  Constant: '<S114>/Constant1'
         *  DiscreteIntegrator: '<S110>/Integrator1'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  Sum: '<S109>/Sum'
         */
        A = rt_remf(FMS_DW.Integrator1_DSTATE_p - FMS_U.INS_Out.psi, 6.28318548F);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Switch: '<S114>/Switch' incorporates:
         *  Abs: '<S114>/Abs'
         *  Constant: '<S114>/Constant'
         *  Constant: '<S115>/Constant'
         *  Product: '<S114>/Multiply'
         *  RelationalOperator: '<S115>/Compare'
         *  Sum: '<S114>/Add'
         */
        if (fabsf(A) > 3.14159274F) {
          /* Signum: '<S114>/Sign' */
          if (A < 0.0F) {
            rtb_Sqrt_k0 = -1.0F;
          } else if (A > 0.0F) {
            rtb_Sqrt_k0 = 1.0F;
          } else {
            rtb_Sqrt_k0 = A;
          }

          /* End of Signum: '<S114>/Sign' */
          A -= 6.28318548F * rtb_Sqrt_k0;
        }

        /* End of Switch: '<S114>/Switch' */

        /* Gain: '<S109>/Gain2' */
        A *= FMS_PARAM.YAW_P;

        /* Saturate: '<S109>/Saturation' */
        if (A > FMS_PARAM.YAW_RATE_LIM) {
          A = FMS_PARAM.YAW_RATE_LIM;
        } else {
          if (A < -FMS_PARAM.YAW_RATE_LIM) {
            A = -FMS_PARAM.YAW_RATE_LIM;
          }
        }

        /* End of Saturate: '<S109>/Saturation' */

        /* Outport: '<Root>/FMS_Out' incorporates:
         *  BusAssignment: '<S103>/Bus Assignment'
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Constant: '<S103>/Constant'
         */
        FMS_Y.FMS_Out = FMS_rtZFMS_Out_Bus;

        /* BusAssignment: '<S103>/Bus Assignment' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Outport: '<Root>/FMS_Out'
         */
        FMS_Y.FMS_Out.status = FMS_ConstB.DataTypeConversion_l;
        FMS_Y.FMS_Out.state = FMS_ConstB.DataTypeConversion1_b;
        FMS_Y.FMS_Out.ctrl_mode = FMS_ConstB.DataTypeConversion2_by;
        FMS_Y.FMS_Out.u_cmd = rtb_MathFunction_cr_idx_0;
        FMS_Y.FMS_Out.v_cmd = rtb_MathFunction_cr_idx_1;
        FMS_Y.FMS_Out.w_cmd = rtb_Saturation_l;
        FMS_Y.FMS_Out.psi_rate_cmd = A;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Math: '<S165>/Math Function' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        rtb_TmpSignalConversionAtDela_a[0] = FMS_U.INS_Out.vn * FMS_U.INS_Out.vn;
        rtb_TmpSignalConversionAtDela_a[1] = FMS_U.INS_Out.ve * FMS_U.INS_Out.ve;

        /* Sum: '<S165>/Sum of Elements' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  Math: '<S165>/Math Function'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        rtb_Add4_k = FMS_U.INS_Out.vn * FMS_U.INS_Out.vn + FMS_U.INS_Out.ve *
          FMS_U.INS_Out.ve;

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Math: '<S165>/Math Function1' incorporates:
         *  Sum: '<S165>/Sum of Elements'
         *
         * About '<S165>/Math Function1':
         *  Operator: sqrt
         */
        if (rtb_Add4_k < 0.0F) {
          A = -sqrtf(fabsf(rtb_Add4_k));
        } else {
          A = sqrtf(rtb_Add4_k);
        }

        /* End of Math: '<S165>/Math Function1' */

        /* Switch: '<S165>/Switch' incorporates:
         *  Constant: '<S165>/Constant'
         *  Inport: '<Root>/INS_Out'
         *  Product: '<S165>/Product'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        if (A > 0.0F) {
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          rtb_MathFunction_cr_idx_0 = FMS_U.INS_Out.vn;
          rtb_MathFunction_cr_idx_1 = FMS_U.INS_Out.ve;

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          rtb_Saturation_l = A;
        } else {
          rtb_MathFunction_cr_idx_0 = 0.0F;
          rtb_MathFunction_cr_idx_1 = 0.0F;
          rtb_Saturation_l = 1.0F;
        }

        /* End of Switch: '<S165>/Switch' */

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* MATLAB Function: '<S125>/NearbyRefWP' incorporates:
         *  Constant: '<S103>/L1'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        FMS_NearbyRefWP(&rtb_Switch_l[0], FMS_U.INS_Out.x_R, FMS_U.INS_Out.y_R,
                        FMS_PARAM.L1, rtb_TmpSignalConversionAtDela_a,
                        &rtb_Add4_k);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* MATLAB Function: '<S125>/SearchL1RefWP' incorporates:
         *  Constant: '<S103>/L1'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
         */
        A = rtb_MathFunction_h_idx_0 * rtb_MathFunction_h_idx_0 +
          rtb_Saturation1_m * rtb_Saturation1_m;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        B = (rtb_MathFunction_h_idx_0 * (FMS_B.Cmd_In.cur_waypoint[0] -
              FMS_U.INS_Out.x_R) + rtb_Saturation1_m *
             (FMS_B.Cmd_In.cur_waypoint[1] - FMS_U.INS_Out.y_R)) * 2.0F;
        D = B * B - (((((FMS_U.INS_Out.x_R * FMS_U.INS_Out.x_R +
                         FMS_U.INS_Out.y_R * FMS_U.INS_Out.y_R) +
                        FMS_B.Cmd_In.cur_waypoint[0] *
                        FMS_B.Cmd_In.cur_waypoint[0]) +
                       FMS_B.Cmd_In.cur_waypoint[1] * FMS_B.Cmd_In.cur_waypoint
                       [1]) - (FMS_U.INS_Out.x_R * FMS_B.Cmd_In.cur_waypoint[0]
          + FMS_U.INS_Out.y_R * FMS_B.Cmd_In.cur_waypoint[1]) * 2.0F) -
                     FMS_PARAM.L1 * FMS_PARAM.L1) * (4.0F * A);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        rtb_Sqrt_k0 = -1.0F;
        rtb_MathFunction_iq_idx_0 = 0.0F;
        rtb_MathFunction_iq_idx_1 = 0.0F;
        guard1 = false;
        if (D > 0.0F) {
          u1_tmp = sqrtf(D);
          D = (-B + u1_tmp) / (2.0F * A);
          A = (-B - u1_tmp) / (2.0F * A);
          if ((D >= 0.0F) && (D <= 1.0F) && (A >= 0.0F) && (A <= 1.0F)) {
            rtb_Sqrt_k0 = fmaxf(D, A);
            guard1 = true;
          } else if ((D >= 0.0F) && (D <= 1.0F)) {
            rtb_Sqrt_k0 = D;
            guard1 = true;
          } else {
            if ((A >= 0.0F) && (A <= 1.0F)) {
              rtb_Sqrt_k0 = A;
              guard1 = true;
            }
          }
        } else {
          if (D == 0.0F) {
            D = -B / (2.0F * A);
            if ((D >= 0.0F) && (D <= 1.0F)) {
              rtb_Sqrt_k0 = D;
              guard1 = true;
            }
          }
        }

        if (guard1) {
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          rtb_MathFunction_iq_idx_0 = rtb_MathFunction_h_idx_0 * rtb_Sqrt_k0 +
            FMS_B.Cmd_In.cur_waypoint[0];
          rtb_MathFunction_iq_idx_1 = rtb_Saturation1_m * rtb_Sqrt_k0 +
            FMS_B.Cmd_In.cur_waypoint[1];

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        }

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* MATLAB Function: '<S125>/OutRegionRegWP' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
         */
        A = ((FMS_U.INS_Out.y_R - FMS_B.Cmd_In.cur_waypoint[1]) *
             rtb_Saturation1_m + (FMS_U.INS_Out.x_R - FMS_B.Cmd_In.cur_waypoint
              [0]) * rtb_MathFunction_h_idx_0) / (rtb_MathFunction_h_idx_0 *
          rtb_MathFunction_h_idx_0 + rtb_Saturation1_m * rtb_Saturation1_m);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        rtb_FixPtRelationalOperator = (A <= 0.0F);
        u = (A >= 1.0F);
        if (rtb_FixPtRelationalOperator) {
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          rtb_MathFunction_h_idx_0 = FMS_B.Cmd_In.cur_waypoint[0];

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        } else if (u) {
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          rtb_MathFunction_h_idx_0 = FMS_B.Cmd_In.sp_waypoint[0];

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        } else {
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          rtb_MathFunction_h_idx_0 = A * rtb_MathFunction_h_idx_0 +
            FMS_B.Cmd_In.cur_waypoint[0];

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        }

        /* Switch: '<S125>/Switch1' incorporates:
         *  Constant: '<S158>/Constant'
         *  RelationalOperator: '<S158>/Compare'
         */
        if (rtb_Add4_k <= 0.0F) {
          /* Switch: '<S125>/Switch' incorporates:
           *  Constant: '<S157>/Constant'
           *  MATLAB Function: '<S125>/SearchL1RefWP'
           *  RelationalOperator: '<S157>/Compare'
           */
          if (rtb_Sqrt_k0 >= 0.0F) {
            rtb_TmpSignalConversionAtDela_a[0] = rtb_MathFunction_iq_idx_0;
            rtb_TmpSignalConversionAtDela_a[1] = rtb_MathFunction_iq_idx_1;
          } else {
            rtb_TmpSignalConversionAtDela_a[0] = rtb_MathFunction_h_idx_0;

            /* MATLAB Function: '<S125>/OutRegionRegWP' incorporates:
             *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy3Inport1'
             */
            if (rtb_FixPtRelationalOperator) {
              /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
              rtb_TmpSignalConversionAtDela_a[1] = FMS_B.Cmd_In.cur_waypoint[1];

              /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
            } else if (u) {
              /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
              rtb_TmpSignalConversionAtDela_a[1] = FMS_B.Cmd_In.sp_waypoint[1];

              /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
            } else {
              /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
              rtb_TmpSignalConversionAtDela_a[1] = A * rtb_Saturation1_m +
                FMS_B.Cmd_In.cur_waypoint[1];

              /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
            }
          }

          /* End of Switch: '<S125>/Switch' */
        }

        /* End of Switch: '<S125>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Sum: '<S126>/Subtract' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        rtb_Saturation1_m = rtb_TmpSignalConversionAtDela_a[0] -
          FMS_U.INS_Out.x_R;

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        rtb_TmpSignalConversionAtDela_a[0] = rtb_Saturation1_m *
          rtb_Saturation1_m;
        rtb_Saturation1_ln[0] = rtb_Saturation1_m;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Sum: '<S126>/Subtract' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  Math: '<S166>/Math Function'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        rtb_Saturation1_m = rtb_TmpSignalConversionAtDela_a[1] -
          FMS_U.INS_Out.y_R;

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Math: '<S166>/Math Function' incorporates:
         *  Math: '<S164>/Square'
         */
        rtb_Add4_k = rtb_Saturation1_m * rtb_Saturation1_m;

        /* Sum: '<S166>/Sum of Elements' incorporates:
         *  Math: '<S166>/Math Function'
         */
        rtb_Sqrt_k0 = rtb_Add4_k + rtb_TmpSignalConversionAtDela_a[0];

        /* Math: '<S166>/Math Function1' incorporates:
         *  Sum: '<S166>/Sum of Elements'
         *
         * About '<S166>/Math Function1':
         *  Operator: sqrt
         */
        if (rtb_Sqrt_k0 < 0.0F) {
          A = -sqrtf(fabsf(rtb_Sqrt_k0));
        } else {
          A = sqrtf(rtb_Sqrt_k0);
        }

        /* End of Math: '<S166>/Math Function1' */

        /* Switch: '<S166>/Switch' incorporates:
         *  Constant: '<S166>/Constant'
         *  Product: '<S166>/Product'
         */
        if (A > 0.0F) {
          rtb_Switch_l[0] = rtb_Saturation1_ln[0];
          rtb_Switch_l[1] = rtb_Saturation1_m;
          rtb_Switch_l[2] = A;
        } else {
          rtb_Switch_l[0] = 0.0F;
          rtb_Switch_l[1] = 0.0F;
          rtb_Switch_l[2] = 1.0F;
        }

        /* End of Switch: '<S166>/Switch' */

        /* Product: '<S165>/Divide' */
        rtb_Divide_mx[0] = rtb_MathFunction_cr_idx_0 / rtb_Saturation_l;
        rtb_Divide_mx[1] = rtb_MathFunction_cr_idx_1 / rtb_Saturation_l;

        /* Sum: '<S168>/Sum of Elements' incorporates:
         *  Math: '<S168>/Math Function'
         *  SignalConversion: '<S168>/TmpSignal ConversionAtMath FunctionInport1'
         */
        rtb_Sqrt_k0 = rtb_Divide_mx[1] * rtb_Divide_mx[1] + rtb_Divide_mx[0] *
          rtb_Divide_mx[0];

        /* Math: '<S168>/Math Function1' incorporates:
         *  Sum: '<S168>/Sum of Elements'
         *
         * About '<S168>/Math Function1':
         *  Operator: sqrt
         */
        if (rtb_Sqrt_k0 < 0.0F) {
          A = -sqrtf(fabsf(rtb_Sqrt_k0));
        } else {
          A = sqrtf(rtb_Sqrt_k0);
        }

        /* End of Math: '<S168>/Math Function1' */

        /* Switch: '<S168>/Switch' incorporates:
         *  Constant: '<S168>/Constant'
         *  Product: '<S168>/Product'
         */
        if (A > 0.0F) {
          rtb_MathFunction_cr_idx_0 = rtb_Divide_mx[1];
          rtb_MathFunction_cr_idx_1 = rtb_Divide_mx[0];
          rtb_Saturation_l = A;
        } else {
          rtb_MathFunction_cr_idx_0 = 0.0F;
          rtb_MathFunction_cr_idx_1 = 0.0F;
          rtb_Saturation_l = 1.0F;
        }

        /* End of Switch: '<S168>/Switch' */

        /* Product: '<S166>/Divide' */
        rtb_Divide_mx[0] = rtb_Switch_l[0] / rtb_Switch_l[2];
        rtb_Divide_mx[1] = rtb_Switch_l[1] / rtb_Switch_l[2];

        /* Sum: '<S169>/Sum of Elements' incorporates:
         *  Math: '<S169>/Math Function'
         *  SignalConversion: '<S169>/TmpSignal ConversionAtMath FunctionInport1'
         */
        rtb_Sqrt_k0 = rtb_Divide_mx[1] * rtb_Divide_mx[1] + rtb_Divide_mx[0] *
          rtb_Divide_mx[0];

        /* Math: '<S169>/Math Function1' incorporates:
         *  Sum: '<S169>/Sum of Elements'
         *
         * About '<S169>/Math Function1':
         *  Operator: sqrt
         */
        if (rtb_Sqrt_k0 < 0.0F) {
          A = -sqrtf(fabsf(rtb_Sqrt_k0));
        } else {
          A = sqrtf(rtb_Sqrt_k0);
        }

        /* End of Math: '<S169>/Math Function1' */

        /* Switch: '<S169>/Switch' incorporates:
         *  Constant: '<S169>/Constant'
         *  Product: '<S169>/Product'
         */
        if (A > 0.0F) {
          rtb_Switch_l[0] = rtb_Divide_mx[1];
          rtb_Switch_l[1] = rtb_Divide_mx[0];
          rtb_Switch_l[2] = A;
        } else {
          rtb_Switch_l[0] = 0.0F;
          rtb_Switch_l[1] = 0.0F;
          rtb_Switch_l[2] = 1.0F;
        }

        /* End of Switch: '<S169>/Switch' */

        /* Product: '<S169>/Divide' */
        rtb_Divide_mx[0] = rtb_Switch_l[0] / rtb_Switch_l[2];

        /* Product: '<S168>/Divide' */
        rtb_TmpSignalConversionAtDela_a[0] = rtb_MathFunction_cr_idx_0 /
          rtb_Saturation_l;
        rtb_Saturation1_ln[0] *= rtb_Saturation1_ln[0];

        /* Product: '<S169>/Divide' incorporates:
         *  Math: '<S164>/Square'
         */
        rtb_Divide_mx[1] = rtb_Switch_l[1] / rtb_Switch_l[2];

        /* Product: '<S168>/Divide' */
        rtb_TmpSignalConversionAtDela_a[1] = rtb_MathFunction_cr_idx_1 /
          rtb_Saturation_l;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Sqrt: '<S163>/Sqrt' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  Math: '<S163>/Square'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  Sum: '<S163>/Sum of Elements'
         */
        A = sqrtf(FMS_U.INS_Out.vn * FMS_U.INS_Out.vn + FMS_U.INS_Out.ve *
                  FMS_U.INS_Out.ve);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Gain: '<S126>/Gain' incorporates:
         *  Math: '<S126>/Square'
         */
        rtb_Saturation_l = A * A * 2.0F;

        /* Sum: '<S167>/Subtract' incorporates:
         *  Product: '<S167>/Multiply'
         *  Product: '<S167>/Multiply1'
         */
        A = rtb_Divide_mx[0] * rtb_TmpSignalConversionAtDela_a[1] -
          rtb_Divide_mx[1] * rtb_TmpSignalConversionAtDela_a[0];

        /* Signum: '<S162>/Sign1' */
        if (A < 0.0F) {
          A = -1.0F;
        } else {
          if (A > 0.0F) {
            A = 1.0F;
          }
        }

        /* End of Signum: '<S162>/Sign1' */

        /* Switch: '<S162>/Switch2' incorporates:
         *  Constant: '<S162>/Constant4'
         */
        if (A == 0.0F) {
          A = 1.0F;
        }

        /* End of Switch: '<S162>/Switch2' */

        /* DotProduct: '<S162>/Dot Product' */
        rtb_Sqrt_k0 = rtb_TmpSignalConversionAtDela_a[0] * rtb_Divide_mx[0] +
          rtb_TmpSignalConversionAtDela_a[1] * rtb_Divide_mx[1];

        /* Trigonometry: '<S162>/Acos' incorporates:
         *  DotProduct: '<S162>/Dot Product'
         */
        if (rtb_Sqrt_k0 > 1.0F) {
          rtb_Sqrt_k0 = 1.0F;
        } else {
          if (rtb_Sqrt_k0 < -1.0F) {
            rtb_Sqrt_k0 = -1.0F;
          }
        }

        /* Product: '<S162>/Multiply' incorporates:
         *  Trigonometry: '<S162>/Acos'
         */
        A *= acosf(rtb_Sqrt_k0);

        /* Saturate: '<S126>/Saturation' */
        if (A > 1.57079637F) {
          A = 1.57079637F;
        } else {
          if (A < -1.57079637F) {
            A = -1.57079637F;
          }
        }

        /* End of Saturate: '<S126>/Saturation' */

        /* Product: '<S126>/Divide' incorporates:
         *  Constant: '<S103>/L1'
         *  Constant: '<S126>/Constant'
         *  MinMax: '<S126>/Max'
         *  MinMax: '<S126>/Min'
         *  Product: '<S126>/Multiply1'
         *  Sqrt: '<S164>/Sqrt'
         *  Sum: '<S164>/Sum of Elements'
         *  Trigonometry: '<S126>/Sin'
         */
        rtb_Saturation_l = arm_sin_f32(A) * rtb_Saturation_l / fminf
          (FMS_PARAM.L1, fmaxf(sqrtf(rtb_Add4_k + rtb_Saturation1_ln[0]), 0.5F));

        /* Sum: '<S107>/Sum2' incorporates:
         *  Delay: '<S107>/Delay'
         */
        rtb_a_pr -= FMS_DW.Delay_DSTATE_h;

        /* Math: '<S111>/Rem' incorporates:
         *  Constant: '<S111>/Constant1'
         */
        rtb_Add4_k = rt_remf(rtb_a_pr, 6.28318548F);

        /* Switch: '<S111>/Switch' incorporates:
         *  Abs: '<S111>/Abs'
         *  Constant: '<S111>/Constant'
         *  Constant: '<S117>/Constant'
         *  Product: '<S111>/Multiply'
         *  RelationalOperator: '<S117>/Compare'
         *  Sum: '<S111>/Add'
         */
        if (fabsf(rtb_Add4_k) > 3.14159274F) {
          /* Signum: '<S111>/Sign' */
          if (rtb_Add4_k < 0.0F) {
            rtb_Sqrt_k0 = -1.0F;
          } else if (rtb_Add4_k > 0.0F) {
            rtb_Sqrt_k0 = 1.0F;
          } else {
            rtb_Sqrt_k0 = rtb_Add4_k;
          }

          /* End of Signum: '<S111>/Sign' */
          rtb_Add4_k -= 6.28318548F * rtb_Sqrt_k0;
        }

        /* End of Switch: '<S111>/Switch' */

        /* Sum: '<S107>/Sum' incorporates:
         *  Delay: '<S107>/Delay'
         */
        rtb_Sqrt_k0 = rtb_Add4_k + FMS_DW.Delay_DSTATE_h;

        /* Product: '<S116>/Multiply1' incorporates:
         *  Constant: '<S116>/const1'
         *  DiscreteIntegrator: '<S110>/Integrator'
         */
        rtb_Add4_k = FMS_DW.Integrator_DSTATE_i * 0.785398185F;

        /* Sum: '<S116>/Add' incorporates:
         *  DiscreteIntegrator: '<S110>/Integrator1'
         *  Sum: '<S110>/Subtract'
         */
        A = (FMS_DW.Integrator1_DSTATE_p - rtb_Sqrt_k0) + rtb_Add4_k;

        /* Signum: '<S116>/Sign' */
        if (A < 0.0F) {
          rtb_Sqrt_k0 = -1.0F;
        } else if (A > 0.0F) {
          rtb_Sqrt_k0 = 1.0F;
        } else {
          rtb_Sqrt_k0 = A;
        }

        /* End of Signum: '<S116>/Sign' */

        /* Sum: '<S116>/Add2' incorporates:
         *  Abs: '<S116>/Abs'
         *  Gain: '<S116>/Gain'
         *  Gain: '<S116>/Gain1'
         *  Product: '<S116>/Multiply2'
         *  Product: '<S116>/Multiply3'
         *  Sqrt: '<S116>/Sqrt'
         *  Sum: '<S116>/Add1'
         *  Sum: '<S116>/Subtract'
         */
        rtb_a_pr = (sqrtf((8.0F * fabsf(A) + FMS_ConstB.d_jk) * FMS_ConstB.d_jk)
                    - FMS_ConstB.d_jk) * 0.5F * rtb_Sqrt_k0 + rtb_Add4_k;

        /* Sum: '<S116>/Add4' */
        rtb_Add4_k += A - rtb_a_pr;

        /* Sum: '<S116>/Add3' */
        rtb_Sqrt_k0 = A + FMS_ConstB.d_jk;

        /* Sum: '<S116>/Subtract1' */
        A -= FMS_ConstB.d_jk;

        /* Signum: '<S116>/Sign1' */
        if (rtb_Sqrt_k0 < 0.0F) {
          rtb_Sqrt_k0 = -1.0F;
        } else {
          if (rtb_Sqrt_k0 > 0.0F) {
            rtb_Sqrt_k0 = 1.0F;
          }
        }

        /* End of Signum: '<S116>/Sign1' */

        /* Signum: '<S116>/Sign2' */
        if (A < 0.0F) {
          A = -1.0F;
        } else {
          if (A > 0.0F) {
            A = 1.0F;
          }
        }

        /* End of Signum: '<S116>/Sign2' */

        /* Sum: '<S116>/Add5' incorporates:
         *  Gain: '<S116>/Gain2'
         *  Product: '<S116>/Multiply4'
         *  Sum: '<S116>/Subtract2'
         */
        rtb_a_pr += (rtb_Sqrt_k0 - A) * 0.5F * rtb_Add4_k;

        /* Update for Delay: '<S127>/Delay' */
        FMS_DW.icLoad_i = 0U;

        /* Update for DiscreteIntegrator: '<S171>/Discrete-Time Integrator' incorporates:
         *  Product: '<S127>/Divide1'
         */
        FMS_DW.l1_heading += rtb_Saturation_l / rtb_Switch_k * 0.004F;

        /* Update for Delay: '<S107>/Delay' */
        FMS_DW.icLoad_k = 0U;

        /* Update for DiscreteIntegrator: '<S110>/Integrator1' incorporates:
         *  DiscreteIntegrator: '<S110>/Integrator'
         */
        FMS_DW.Integrator1_IC_LOADING = 0U;
        FMS_DW.Integrator1_DSTATE_p += 0.004F * FMS_DW.Integrator_DSTATE_i;

        /* Sum: '<S116>/Add6' */
        rtb_Sqrt_k0 = rtb_a_pr + FMS_ConstB.d_jk;

        /* Sum: '<S116>/Subtract3' */
        A = rtb_a_pr - FMS_ConstB.d_jk;

        /* Signum: '<S116>/Sign5' */
        if (rtb_a_pr < 0.0F) {
          rtb_Switch_k = -1.0F;
        } else if (rtb_a_pr > 0.0F) {
          rtb_Switch_k = 1.0F;
        } else {
          rtb_Switch_k = rtb_a_pr;
        }

        /* End of Signum: '<S116>/Sign5' */

        /* Signum: '<S116>/Sign3' */
        if (rtb_Sqrt_k0 < 0.0F) {
          rtb_Sqrt_k0 = -1.0F;
        } else {
          if (rtb_Sqrt_k0 > 0.0F) {
            rtb_Sqrt_k0 = 1.0F;
          }
        }

        /* End of Signum: '<S116>/Sign3' */

        /* Signum: '<S116>/Sign4' */
        if (A < 0.0F) {
          A = -1.0F;
        } else {
          if (A > 0.0F) {
            A = 1.0F;
          }
        }

        /* End of Signum: '<S116>/Sign4' */

        /* Signum: '<S116>/Sign6' */
        if (rtb_a_pr < 0.0F) {
          rtb_Add4_k = -1.0F;
        } else if (rtb_a_pr > 0.0F) {
          rtb_Add4_k = 1.0F;
        } else {
          rtb_Add4_k = rtb_a_pr;
        }

        /* End of Signum: '<S116>/Sign6' */

        /* Update for DiscreteIntegrator: '<S110>/Integrator' incorporates:
         *  Constant: '<S116>/const'
         *  Gain: '<S116>/Gain3'
         *  Product: '<S116>/Divide'
         *  Product: '<S116>/Multiply5'
         *  Product: '<S116>/Multiply6'
         *  Sum: '<S116>/Subtract4'
         *  Sum: '<S116>/Subtract5'
         *  Sum: '<S116>/Subtract6'
         */
        FMS_DW.Integrator_DSTATE_i += ((rtb_a_pr / FMS_ConstB.d_jk -
          rtb_Switch_k) * FMS_ConstB.Gain4_c * ((rtb_Sqrt_k0 - A) * 0.5F) -
          rtb_Add4_k * 1.04719758F) * 0.004F;
        if (FMS_DW.Integrator_DSTATE_i >= FMS_PARAM.YAW_RATE_LIM) {
          FMS_DW.Integrator_DSTATE_i = FMS_PARAM.YAW_RATE_LIM;
        } else {
          if (FMS_DW.Integrator_DSTATE_i <= -FMS_PARAM.YAW_RATE_LIM) {
            FMS_DW.Integrator_DSTATE_i = -FMS_PARAM.YAW_RATE_LIM;
          }
        }

        /* End of Update for DiscreteIntegrator: '<S110>/Integrator' */
        /* End of Outputs for SubSystem: '<S99>/Mission_SubSystem' */

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Update for UnitDelay: '<S102>/Delay Input1' incorporates:
         *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy5Inport1'
         *
         * Block description for '<S102>/Delay Input1':
         *
         *  Store in Global RAM
         */
        FMS_DW.DelayInput1_DSTATE_pe = FMS_B.wp_index;

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
        /* End of Outputs for SubSystem: '<S22>/Mission' */
        break;

       case 2:
        /* Outputs for IfAction SubSystem: '<S22>/Unknown' incorporates:
         *  ActionPort: '<S101>/Action Port'
         */
        /* Outport: '<Root>/FMS_Out' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         */
        FMS_Unknown(&FMS_Y.FMS_Out, &FMS_ConstB.Unknown_d);

        /* End of Outputs for SubSystem: '<S22>/Unknown' */
        break;
      }

      /* End of SwitchCase: '<S22>/Switch Case' */
      /* End of Outputs for SubSystem: '<S17>/Auto' */
      break;

     case 2:
      /* Outputs for IfAction SubSystem: '<S17>/Assist' incorporates:
       *  ActionPort: '<S21>/Action Port'
       */
      /* SwitchCase: '<S21>/Switch Case' */
      rtPrevAction = FMS_DW.SwitchCase_ActiveSubsystem_f;

      /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
      switch (FMS_B.state) {
       case VehicleState_Acro:
        FMS_DW.SwitchCase_ActiveSubsystem_f = 0;
        break;

       case VehicleState_Stabilize:
        FMS_DW.SwitchCase_ActiveSubsystem_f = 1;
        break;

       case VehicleState_Altitude:
        FMS_DW.SwitchCase_ActiveSubsystem_f = 2;
        break;

       case VehicleState_Position:
        FMS_DW.SwitchCase_ActiveSubsystem_f = 3;
        break;

       default:
        FMS_DW.SwitchCase_ActiveSubsystem_f = 4;
        break;
      }

      /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
      if (rtPrevAction != FMS_DW.SwitchCase_ActiveSubsystem_f) {
        switch (rtPrevAction) {
         case 0:
         case 1:
         case 4:
          break;

         case 2:
          /* Disable for SwitchCase: '<S37>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_m = -1;
          break;

         case 3:
          /* Disable for SwitchCase: '<S72>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_l = -1;

          /* Disable for SwitchCase: '<S58>/Switch Case' */
          FMS_DW.SwitchCase_ActiveSubsystem_ba = -1;
          break;
        }
      }

      switch (FMS_DW.SwitchCase_ActiveSubsystem_f) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S21>/Acro' incorporates:
         *  ActionPort: '<S26>/Action Port'
         */
        /* Outport: '<Root>/FMS_Out' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  BusAssignment: '<S26>/Bus Assignment'
         *  Constant: '<S26>/Constant'
         */
        FMS_Y.FMS_Out = FMS_rtZFMS_Out_Bus;

        /* BusAssignment: '<S26>/Bus Assignment' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Gain: '<S31>/Gain'
         *  Gain: '<S31>/Gain1'
         *  Gain: '<S31>/Gain2'
         *  Inport: '<Root>/Pilot_Cmd'
         *  Outport: '<Root>/FMS_Out'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        FMS_Y.FMS_Out.status = FMS_ConstB.DataTypeConversion_j;
        FMS_Y.FMS_Out.state = FMS_ConstB.DataTypeConversion1_do;
        FMS_Y.FMS_Out.ctrl_mode = FMS_ConstB.DataTypeConversion2_b;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        FMS_Y.FMS_Out.p_cmd = 3.14159274F * FMS_U.Pilot_Cmd.stick_roll;
        FMS_Y.FMS_Out.q_cmd = -3.14159274F * FMS_U.Pilot_Cmd.stick_pitch;
        FMS_Y.FMS_Out.r_cmd = 1.57079637F * FMS_U.Pilot_Cmd.stick_yaw;

        /* Saturate: '<S32>/Saturation' incorporates:
         *  Constant: '<S32>/Constant4'
         *  Inport: '<Root>/Pilot_Cmd'
         *  SignalConversion: '<S16>/Signal Copy2'
         *  Sum: '<S32>/Sum'
         */
        if (FMS_U.Pilot_Cmd.stick_throttle + 1.0F > 2.0F) {
          rtb_Add4_k = 2.0F;
        } else if (FMS_U.Pilot_Cmd.stick_throttle + 1.0F < 0.0F) {
          rtb_Add4_k = 0.0F;
        } else {
          rtb_Add4_k = FMS_U.Pilot_Cmd.stick_throttle + 1.0F;
        }

        /* End of Saturate: '<S32>/Saturation' */
        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* BusAssignment: '<S26>/Bus Assignment' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Constant: '<S32>/Constant5'
         *  Gain: '<S32>/Gain2'
         *  Outport: '<Root>/FMS_Out'
         *  Sum: '<S32>/Add'
         */
        FMS_Y.FMS_Out.throttle_cmd = (uint32_T)fmodf(floorf(500.0F * rtb_Add4_k),
          4.2949673E+9F) + 1000U;

        /* End of Outputs for SubSystem: '<S21>/Acro' */
        break;

       case 1:
        if (FMS_DW.SwitchCase_ActiveSubsystem_f != rtPrevAction) {
          /* InitializeConditions for IfAction SubSystem: '<S21>/Stabilize' incorporates:
           *  ActionPort: '<S29>/Action Port'
           */
          /* InitializeConditions for SwitchCase: '<S21>/Switch Case' incorporates:
           *  DiscreteIntegrator: '<S97>/Integrator'
           *  DiscreteIntegrator: '<S97>/Integrator1'
           */
          FMS_DW.Integrator1_DSTATE_m = 0.0F;
          FMS_DW.Integrator_DSTATE_f = 0.0F;

          /* End of InitializeConditions for SubSystem: '<S21>/Stabilize' */
        }

        /* Outputs for IfAction SubSystem: '<S21>/Stabilize' incorporates:
         *  ActionPort: '<S29>/Action Port'
         */
        /* Outport: '<Root>/FMS_Out' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  BusAssignment: '<S29>/Bus Assignment'
         *  Constant: '<S29>/Constant'
         */
        FMS_Y.FMS_Out = FMS_rtZFMS_Out_Bus;

        /* BusAssignment: '<S29>/Bus Assignment' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Outport: '<Root>/FMS_Out'
         */
        FMS_Y.FMS_Out.status = FMS_ConstB.DataTypeConversion_ba;
        FMS_Y.FMS_Out.state = FMS_ConstB.DataTypeConversion1_k;
        FMS_Y.FMS_Out.ctrl_mode = FMS_ConstB.DataTypeConversion2_o;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* DeadZone: '<S90>/Dead Zone' incorporates:
         *  Inport: '<Root>/Pilot_Cmd'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        if (FMS_U.Pilot_Cmd.stick_roll > FMS_PARAM.ROLL_DZ) {
          rtb_Add4_k = FMS_U.Pilot_Cmd.stick_roll - FMS_PARAM.ROLL_DZ;
        } else if (FMS_U.Pilot_Cmd.stick_roll >= -FMS_PARAM.ROLL_DZ) {
          rtb_Add4_k = 0.0F;
        } else {
          rtb_Add4_k = FMS_U.Pilot_Cmd.stick_roll - (-FMS_PARAM.ROLL_DZ);
        }

        /* End of DeadZone: '<S90>/Dead Zone' */
        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* BusAssignment: '<S29>/Bus Assignment' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Gain: '<S87>/Gain'
         *  Gain: '<S90>/Gain'
         *  Outport: '<Root>/FMS_Out'
         */
        FMS_Y.FMS_Out.phi_cmd = 1.0F / (1.0F - FMS_PARAM.ROLL_DZ) * rtb_Add4_k *
          FMS_PARAM.ROLL_LIM;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* DeadZone: '<S91>/Dead Zone' incorporates:
         *  Inport: '<Root>/Pilot_Cmd'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        if (FMS_U.Pilot_Cmd.stick_pitch > FMS_PARAM.PITCH_DZ) {
          rtb_Add4_k = FMS_U.Pilot_Cmd.stick_pitch - FMS_PARAM.PITCH_DZ;
        } else if (FMS_U.Pilot_Cmd.stick_pitch >= -FMS_PARAM.PITCH_DZ) {
          rtb_Add4_k = 0.0F;
        } else {
          rtb_Add4_k = FMS_U.Pilot_Cmd.stick_pitch - (-FMS_PARAM.PITCH_DZ);
        }

        /* End of DeadZone: '<S91>/Dead Zone' */
        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* BusAssignment: '<S29>/Bus Assignment' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  DiscreteIntegrator: '<S97>/Integrator1'
         *  Gain: '<S87>/Gain1'
         *  Gain: '<S91>/Gain'
         *  Outport: '<Root>/FMS_Out'
         */
        FMS_Y.FMS_Out.theta_cmd = 1.0F / (1.0F - FMS_PARAM.PITCH_DZ) *
          rtb_Add4_k * -FMS_PARAM.PITCH_LIM;
        FMS_Y.FMS_Out.psi_rate_cmd = FMS_DW.Integrator1_DSTATE_m;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Saturate: '<S89>/Saturation' incorporates:
         *  Constant: '<S89>/Constant4'
         *  Inport: '<Root>/Pilot_Cmd'
         *  SignalConversion: '<S16>/Signal Copy2'
         *  Sum: '<S89>/Sum'
         */
        if (FMS_U.Pilot_Cmd.stick_throttle + 1.0F > 2.0F) {
          rtb_Add4_k = 2.0F;
        } else if (FMS_U.Pilot_Cmd.stick_throttle + 1.0F < 0.0F) {
          rtb_Add4_k = 0.0F;
        } else {
          rtb_Add4_k = FMS_U.Pilot_Cmd.stick_throttle + 1.0F;
        }

        /* End of Saturate: '<S89>/Saturation' */
        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* BusAssignment: '<S29>/Bus Assignment' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Constant: '<S89>/Constant5'
         *  Gain: '<S89>/Gain2'
         *  Outport: '<Root>/FMS_Out'
         *  Sum: '<S89>/Add'
         */
        FMS_Y.FMS_Out.throttle_cmd = (uint32_T)fmodf(floorf(500.0F * rtb_Add4_k),
          4.2949673E+9F) + 1000U;

        /* Product: '<S98>/Multiply1' incorporates:
         *  Constant: '<S98>/const1'
         *  DiscreteIntegrator: '<S97>/Integrator'
         */
        rtb_Sqrt_k0 = FMS_DW.Integrator_DSTATE_f * 0.02F;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* DeadZone: '<S96>/Dead Zone' incorporates:
         *  Inport: '<Root>/Pilot_Cmd'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        if (FMS_U.Pilot_Cmd.stick_yaw > FMS_PARAM.YAW_DZ) {
          rtb_Add4_k = FMS_U.Pilot_Cmd.stick_yaw - FMS_PARAM.YAW_DZ;
        } else if (FMS_U.Pilot_Cmd.stick_yaw >= -FMS_PARAM.YAW_DZ) {
          rtb_Add4_k = 0.0F;
        } else {
          rtb_Add4_k = FMS_U.Pilot_Cmd.stick_yaw - (-FMS_PARAM.YAW_DZ);
        }

        /* End of DeadZone: '<S96>/Dead Zone' */
        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Sum: '<S98>/Add' incorporates:
         *  DiscreteIntegrator: '<S97>/Integrator1'
         *  Gain: '<S88>/Gain1'
         *  Gain: '<S96>/Gain'
         *  Sum: '<S97>/Subtract'
         */
        rtb_a_pr = (FMS_DW.Integrator1_DSTATE_m - 1.0F / (1.0F -
          FMS_PARAM.YAW_DZ) * rtb_Add4_k * FMS_PARAM.YAW_RATE_LIM) + rtb_Sqrt_k0;

        /* Signum: '<S98>/Sign' */
        if (rtb_a_pr < 0.0F) {
          rtb_Switch_k = -1.0F;
        } else if (rtb_a_pr > 0.0F) {
          rtb_Switch_k = 1.0F;
        } else {
          rtb_Switch_k = rtb_a_pr;
        }

        /* End of Signum: '<S98>/Sign' */

        /* Sum: '<S98>/Add2' incorporates:
         *  Abs: '<S98>/Abs'
         *  Gain: '<S98>/Gain'
         *  Gain: '<S98>/Gain1'
         *  Product: '<S98>/Multiply2'
         *  Product: '<S98>/Multiply3'
         *  Sqrt: '<S98>/Sqrt'
         *  Sum: '<S98>/Add1'
         *  Sum: '<S98>/Subtract'
         */
        rtb_Switch_k = (sqrtf((8.0F * fabsf(rtb_a_pr) + FMS_ConstB.d_d) *
                              FMS_ConstB.d_d) - FMS_ConstB.d_d) * 0.5F *
          rtb_Switch_k + rtb_Sqrt_k0;

        /* Sum: '<S98>/Add4' */
        A = (rtb_a_pr - rtb_Switch_k) + rtb_Sqrt_k0;

        /* Sum: '<S98>/Add3' */
        rtb_Sqrt_k0 = rtb_a_pr + FMS_ConstB.d_d;

        /* Sum: '<S98>/Subtract1' */
        rtb_a_pr -= FMS_ConstB.d_d;

        /* Signum: '<S98>/Sign1' */
        if (rtb_Sqrt_k0 < 0.0F) {
          rtb_Sqrt_k0 = -1.0F;
        } else {
          if (rtb_Sqrt_k0 > 0.0F) {
            rtb_Sqrt_k0 = 1.0F;
          }
        }

        /* End of Signum: '<S98>/Sign1' */

        /* Signum: '<S98>/Sign2' */
        if (rtb_a_pr < 0.0F) {
          rtb_a_pr = -1.0F;
        } else {
          if (rtb_a_pr > 0.0F) {
            rtb_a_pr = 1.0F;
          }
        }

        /* End of Signum: '<S98>/Sign2' */

        /* Sum: '<S98>/Add5' incorporates:
         *  Gain: '<S98>/Gain2'
         *  Product: '<S98>/Multiply4'
         *  Sum: '<S98>/Subtract2'
         */
        rtb_Switch_k += (rtb_Sqrt_k0 - rtb_a_pr) * 0.5F * A;

        /* Update for DiscreteIntegrator: '<S97>/Integrator1' incorporates:
         *  DiscreteIntegrator: '<S97>/Integrator'
         */
        FMS_DW.Integrator1_DSTATE_m += 0.004F * FMS_DW.Integrator_DSTATE_f;

        /* Sum: '<S98>/Add6' */
        rtb_Sqrt_k0 = rtb_Switch_k + FMS_ConstB.d_d;

        /* Sum: '<S98>/Subtract3' */
        A = rtb_Switch_k - FMS_ConstB.d_d;

        /* Signum: '<S98>/Sign5' */
        if (rtb_Switch_k < 0.0F) {
          rtb_a_pr = -1.0F;
        } else if (rtb_Switch_k > 0.0F) {
          rtb_a_pr = 1.0F;
        } else {
          rtb_a_pr = rtb_Switch_k;
        }

        /* End of Signum: '<S98>/Sign5' */

        /* Signum: '<S98>/Sign3' */
        if (rtb_Sqrt_k0 < 0.0F) {
          rtb_Sqrt_k0 = -1.0F;
        } else {
          if (rtb_Sqrt_k0 > 0.0F) {
            rtb_Sqrt_k0 = 1.0F;
          }
        }

        /* End of Signum: '<S98>/Sign3' */

        /* Signum: '<S98>/Sign4' */
        if (A < 0.0F) {
          A = -1.0F;
        } else {
          if (A > 0.0F) {
            A = 1.0F;
          }
        }

        /* End of Signum: '<S98>/Sign4' */

        /* Signum: '<S98>/Sign6' */
        if (rtb_Switch_k < 0.0F) {
          rtb_Add4_k = -1.0F;
        } else if (rtb_Switch_k > 0.0F) {
          rtb_Add4_k = 1.0F;
        } else {
          rtb_Add4_k = rtb_Switch_k;
        }

        /* End of Signum: '<S98>/Sign6' */

        /* Update for DiscreteIntegrator: '<S97>/Integrator' incorporates:
         *  Constant: '<S98>/const'
         *  Gain: '<S98>/Gain3'
         *  Product: '<S98>/Divide'
         *  Product: '<S98>/Multiply5'
         *  Product: '<S98>/Multiply6'
         *  Sum: '<S98>/Subtract4'
         *  Sum: '<S98>/Subtract5'
         *  Sum: '<S98>/Subtract6'
         */
        FMS_DW.Integrator_DSTATE_f += ((rtb_Switch_k / FMS_ConstB.d_d - rtb_a_pr)
          * FMS_ConstB.Gain4_d * ((rtb_Sqrt_k0 - A) * 0.5F) - rtb_Add4_k *
          15.707963F) * 0.004F;

        /* End of Outputs for SubSystem: '<S21>/Stabilize' */
        break;

       case 2:
        if (FMS_DW.SwitchCase_ActiveSubsystem_f != rtPrevAction) {
          /* SystemReset for IfAction SubSystem: '<S21>/Altitude' incorporates:
           *  ActionPort: '<S27>/Action Port'
           */
          /* SystemReset for SwitchCase: '<S21>/Switch Case' incorporates:
           *  Chart: '<S38>/Motion Status'
           */
          FMS_MotionStatus_n_Reset(&FMS_DW.sf_MotionStatus_b);

          /* End of SystemReset for SubSystem: '<S21>/Altitude' */
        }

        /* Outputs for IfAction SubSystem: '<S21>/Altitude' incorporates:
         *  ActionPort: '<S27>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Chart: '<S38>/Motion Status' incorporates:
         *  Abs: '<S38>/Abs'
         *  Abs: '<S38>/Abs1'
         *  Constant: '<S46>/Constant'
         *  Inport: '<Root>/INS_Out'
         *  Inport: '<Root>/Pilot_Cmd'
         *  RelationalOperator: '<S46>/Compare'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        FMS_MotionStatus_b(fabsf(FMS_U.Pilot_Cmd.stick_pitch) >
                           FMS_PARAM.PITCH_DZ, fabsf(FMS_U.INS_Out.vd),
                           &rtb_state_a, &FMS_DW.sf_MotionStatus_b);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* SwitchCase: '<S37>/Switch Case' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        rtPrevAction = FMS_DW.SwitchCase_ActiveSubsystem_m;
        FMS_DW.SwitchCase_ActiveSubsystem_m = -1;
        switch (rtb_state_a) {
         case MotionState_Hold:
          FMS_DW.SwitchCase_ActiveSubsystem_m = 0;
          break;

         case MotionState_Brake:
          FMS_DW.SwitchCase_ActiveSubsystem_m = 1;
          break;

         case MotionState_Move:
          FMS_DW.SwitchCase_ActiveSubsystem_m = 2;
          break;
        }

        switch (FMS_DW.SwitchCase_ActiveSubsystem_m) {
         case 0:
          if (FMS_DW.SwitchCase_ActiveSubsystem_m != rtPrevAction) {
            /* SystemReset for IfAction SubSystem: '<S37>/Hold Control' incorporates:
             *  ActionPort: '<S40>/Action Port'
             */
            /* SystemReset for SwitchCase: '<S37>/Switch Case' */
            FMS_HoldControl_Reset(&FMS_DW.HoldControl_k2);

            /* End of SystemReset for SubSystem: '<S37>/Hold Control' */
          }

          /* Outputs for IfAction SubSystem: '<S37>/Hold Control' incorporates:
           *  ActionPort: '<S40>/Action Port'
           */
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_HoldControl(FMS_U.INS_Out.h_R, &FMS_B.Merge_l,
                          &FMS_DW.HoldControl_k2);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          /* End of Outputs for SubSystem: '<S37>/Hold Control' */
          break;

         case 1:
          /* Outputs for IfAction SubSystem: '<S37>/Brake Control' incorporates:
           *  ActionPort: '<S39>/Action Port'
           */
          FMS_BrakeControl(&FMS_B.Merge_l);

          /* End of Outputs for SubSystem: '<S37>/Brake Control' */
          break;

         case 2:
          /* Outputs for IfAction SubSystem: '<S37>/Move Control' incorporates:
           *  ActionPort: '<S41>/Action Port'
           */
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          /* DeadZone: '<S43>/Dead Zone' incorporates:
           *  Inport: '<Root>/Pilot_Cmd'
           *  SignalConversion: '<S16>/Signal Copy2'
           */
          if (FMS_U.Pilot_Cmd.stick_pitch > FMS_PARAM.PITCH_DZ) {
            rtb_Add4_k = FMS_U.Pilot_Cmd.stick_pitch - FMS_PARAM.PITCH_DZ;
          } else if (FMS_U.Pilot_Cmd.stick_pitch >= -FMS_PARAM.PITCH_DZ) {
            rtb_Add4_k = 0.0F;
          } else {
            rtb_Add4_k = FMS_U.Pilot_Cmd.stick_pitch - (-FMS_PARAM.PITCH_DZ);
          }

          /* End of DeadZone: '<S43>/Dead Zone' */
          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

          /* Gain: '<S41>/Gain1' incorporates:
           *  Gain: '<S43>/Gain'
           */
          FMS_B.Merge_l = 1.0F / (1.0F - FMS_PARAM.PITCH_DZ) * rtb_Add4_k *
            FMS_PARAM.VEL_Z_LIM;

          /* End of Outputs for SubSystem: '<S37>/Move Control' */
          break;
        }

        /* End of SwitchCase: '<S37>/Switch Case' */

        /* Outport: '<Root>/FMS_Out' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  BusAssignment: '<S27>/Bus Assignment'
         *  Constant: '<S27>/Constant'
         */
        FMS_Y.FMS_Out = FMS_rtZFMS_Out_Bus;

        /* BusAssignment: '<S27>/Bus Assignment' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Outport: '<Root>/FMS_Out'
         */
        FMS_Y.FMS_Out.status = FMS_ConstB.DataTypeConversion1_d;
        FMS_Y.FMS_Out.state = FMS_ConstB.DataTypeConversion2_n;
        FMS_Y.FMS_Out.ctrl_mode = FMS_ConstB.DataTypeConversion3;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* DeadZone: '<S48>/Dead Zone' incorporates:
         *  Inport: '<Root>/Pilot_Cmd'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        if (FMS_U.Pilot_Cmd.stick_roll > FMS_PARAM.ROLL_DZ) {
          rtb_Add4_k = FMS_U.Pilot_Cmd.stick_roll - FMS_PARAM.ROLL_DZ;
        } else if (FMS_U.Pilot_Cmd.stick_roll >= -FMS_PARAM.ROLL_DZ) {
          rtb_Add4_k = 0.0F;
        } else {
          rtb_Add4_k = FMS_U.Pilot_Cmd.stick_roll - (-FMS_PARAM.ROLL_DZ);
        }

        /* End of DeadZone: '<S48>/Dead Zone' */
        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* BusAssignment: '<S27>/Bus Assignment' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Gain: '<S35>/Gain'
         *  Gain: '<S48>/Gain'
         *  Outport: '<Root>/FMS_Out'
         */
        FMS_Y.FMS_Out.phi_cmd = 1.0F / (1.0F - FMS_PARAM.ROLL_DZ) * rtb_Add4_k *
          FMS_PARAM.ROLL_LIM;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* DeadZone: '<S51>/Dead Zone' incorporates:
         *  Inport: '<Root>/Pilot_Cmd'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        if (FMS_U.Pilot_Cmd.stick_yaw > FMS_PARAM.YAW_DZ) {
          rtb_Add4_k = FMS_U.Pilot_Cmd.stick_yaw - FMS_PARAM.YAW_DZ;
        } else if (FMS_U.Pilot_Cmd.stick_yaw >= -FMS_PARAM.YAW_DZ) {
          rtb_Add4_k = 0.0F;
        } else {
          rtb_Add4_k = FMS_U.Pilot_Cmd.stick_yaw - (-FMS_PARAM.YAW_DZ);
        }

        /* End of DeadZone: '<S51>/Dead Zone' */
        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* BusAssignment: '<S27>/Bus Assignment' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Gain: '<S36>/Gain1'
         *  Gain: '<S51>/Gain'
         *  Outport: '<Root>/FMS_Out'
         */
        FMS_Y.FMS_Out.psi_rate_cmd = 1.0F / (1.0F - FMS_PARAM.YAW_DZ) *
          rtb_Add4_k * FMS_PARAM.YAW_RATE_LIM;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Gain: '<S33>/Gain1' incorporates:
         *  Bias: '<S33>/Bias'
         *  Inport: '<Root>/Pilot_Cmd'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        rtb_Switch_k = (FMS_U.Pilot_Cmd.stick_throttle + 1.0F) * 0.5F;

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Saturate: '<S33>/Saturation' incorporates:
         *  Gain: '<S33>/Gain1'
         */
        if (rtb_Switch_k > 1.0F) {
          rtb_Switch_k = 1.0F;
        } else {
          if (rtb_Switch_k < 0.0F) {
            rtb_Switch_k = 0.0F;
          }
        }

        /* End of Saturate: '<S33>/Saturation' */

        /* BusAssignment: '<S27>/Bus Assignment' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Gain: '<S33>/Gain'
         *  Outport: '<Root>/FMS_Out'
         */
        FMS_Y.FMS_Out.u_cmd = FMS_PARAM.FW_AIRSPD_MAX * rtb_Switch_k;

        /* Saturate: '<S37>/Saturation1' */
        if (FMS_B.Merge_l > FMS_PARAM.VEL_Z_LIM) {
          /* BusAssignment: '<S27>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.w_cmd = FMS_PARAM.VEL_Z_LIM;
        } else if (FMS_B.Merge_l < -FMS_PARAM.VEL_Z_LIM) {
          /* BusAssignment: '<S27>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.w_cmd = -FMS_PARAM.VEL_Z_LIM;
        } else {
          /* BusAssignment: '<S27>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.w_cmd = FMS_B.Merge_l;
        }

        /* End of Saturate: '<S37>/Saturation1' */
        /* End of Outputs for SubSystem: '<S21>/Altitude' */
        break;

       case 3:
        if (FMS_DW.SwitchCase_ActiveSubsystem_f != rtPrevAction) {
          /* InitializeConditions for IfAction SubSystem: '<S21>/Position' incorporates:
           *  ActionPort: '<S28>/Action Port'
           */
          /* InitializeConditions for SwitchCase: '<S21>/Switch Case' incorporates:
           *  DiscreteIntegrator: '<S70>/Integrator'
           *  DiscreteIntegrator: '<S70>/Integrator1'
           */
          FMS_DW.Integrator1_DSTATE = 0.0F;
          FMS_DW.Integrator_DSTATE = 0.0F;

          /* End of InitializeConditions for SubSystem: '<S21>/Position' */

          /* SystemReset for IfAction SubSystem: '<S21>/Position' incorporates:
           *  ActionPort: '<S28>/Action Port'
           */
          /* SystemReset for SwitchCase: '<S21>/Switch Case' incorporates:
           *  Chart: '<S59>/Motion Status'
           *  Chart: '<S73>/Motion State'
           */
          FMS_MotionStatus_n_Reset(&FMS_DW.sf_MotionStatus_jn);
          FMS_DW.temporalCounter_i1_i = 0U;
          FMS_DW.is_active_c16_FMS = 0U;
          FMS_DW.is_c16_FMS = FMS_IN_NO_ACTIVE_CHILD_h;

          /* End of SystemReset for SubSystem: '<S21>/Position' */
        }

        /* Outputs for IfAction SubSystem: '<S21>/Position' incorporates:
         *  ActionPort: '<S28>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Trigonometry: '<S86>/Trigonometric Function1' incorporates:
         *  Gain: '<S85>/Gain'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        rtb_VectorConcatenate_m[0] = arm_cos_f32(-FMS_U.INS_Out.psi);

        /* Trigonometry: '<S86>/Trigonometric Function' incorporates:
         *  Gain: '<S85>/Gain'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        rtb_VectorConcatenate_m[1] = arm_sin_f32(-FMS_U.INS_Out.psi);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* SignalConversion: '<S86>/ConcatBufferAtVector Concatenate1In3' incorporates:
         *  Constant: '<S86>/Constant3'
         */
        rtb_VectorConcatenate_m[2] = 0.0F;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Gain: '<S86>/Gain' incorporates:
         *  Gain: '<S85>/Gain'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  Trigonometry: '<S86>/Trigonometric Function2'
         */
        rtb_VectorConcatenate_m[3] = -arm_sin_f32(-FMS_U.INS_Out.psi);

        /* Trigonometry: '<S86>/Trigonometric Function3' incorporates:
         *  Gain: '<S85>/Gain'
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        rtb_VectorConcatenate_m[4] = arm_cos_f32(-FMS_U.INS_Out.psi);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* SignalConversion: '<S86>/ConcatBufferAtVector Concatenate2In3' incorporates:
         *  Constant: '<S86>/Constant4'
         */
        rtb_VectorConcatenate_m[5] = 0.0F;

        /* SignalConversion: '<S86>/ConcatBufferAtVector ConcatenateIn3' */
        rtb_VectorConcatenate_m[6] = FMS_ConstB.VectorConcatenate3[0];
        rtb_VectorConcatenate_m[7] = FMS_ConstB.VectorConcatenate3[1];
        rtb_VectorConcatenate_m[8] = FMS_ConstB.VectorConcatenate3[2];

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Chart: '<S59>/Motion Status' incorporates:
         *  Abs: '<S59>/Abs'
         *  Abs: '<S59>/Abs1'
         *  Constant: '<S67>/Constant'
         *  Inport: '<Root>/INS_Out'
         *  Inport: '<Root>/Pilot_Cmd'
         *  RelationalOperator: '<S67>/Compare'
         *  SignalConversion: '<S16>/Signal Copy1'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        FMS_MotionStatus_b(fabsf(FMS_U.Pilot_Cmd.stick_pitch) >
                           FMS_PARAM.PITCH_DZ, fabsf(FMS_U.INS_Out.vd),
                           &rtb_state_a, &FMS_DW.sf_MotionStatus_jn);

        /* RelationalOperator: '<S83>/Compare' incorporates:
         *  Abs: '<S73>/Abs1'
         *  Constant: '<S83>/Constant'
         *  Inport: '<Root>/Pilot_Cmd'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        rtb_FixPtRelationalOperator = (fabsf(FMS_U.Pilot_Cmd.stick_roll) >
          FMS_PARAM.ROLL_DZ);

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Chart: '<S73>/Motion State' incorporates:
         *  Abs: '<S73>/Abs'
         */
        if (FMS_DW.temporalCounter_i1_i < 1023U) {
          FMS_DW.temporalCounter_i1_i++;
        }

        if (FMS_DW.is_active_c16_FMS == 0U) {
          FMS_DW.is_active_c16_FMS = 1U;
          FMS_DW.is_c16_FMS = FMS_IN_Move_n;
          rtb_state_b = MotionState_Move;
        } else {
          switch (FMS_DW.is_c16_FMS) {
           case FMS_IN_Brake_o:
            rtb_state_b = MotionState_Brake;

            /* Product: '<S73>/Multiply' incorporates:
             *  Inport: '<Root>/INS_Out'
             *  SignalConversion: '<S16>/Signal Copy1'
             */
            for (i = 0; i < 3; i++) {
              /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
              rtb_VectorConcatenate_a[i] = rtb_VectorConcatenate_m[i + 6] *
                FMS_U.INS_Out.vd + (rtb_VectorConcatenate_m[i + 3] *
                                    FMS_U.INS_Out.ve + rtb_VectorConcatenate_m[i]
                                    * FMS_U.INS_Out.vn);

              /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
            }

            /* End of Product: '<S73>/Multiply' */
            if ((fabsf(rtb_VectorConcatenate_a[1]) <= 0.2) ||
                (FMS_DW.temporalCounter_i1_i >= 625U)) {
              FMS_DW.is_c16_FMS = FMS_IN_Hold_d;
              rtb_state_b = MotionState_Hold;
            } else {
              if (rtb_FixPtRelationalOperator) {
                FMS_DW.is_c16_FMS = FMS_IN_Move_n;
                rtb_state_b = MotionState_Move;
              }
            }
            break;

           case FMS_IN_Hold_d:
            rtb_state_b = MotionState_Hold;
            if (rtb_FixPtRelationalOperator) {
              FMS_DW.is_c16_FMS = FMS_IN_Move_n;
              rtb_state_b = MotionState_Move;
            }
            break;

           default:
            rtb_state_b = MotionState_Move;
            if (!rtb_FixPtRelationalOperator) {
              FMS_DW.is_c16_FMS = FMS_IN_Brake_o;
              FMS_DW.temporalCounter_i1_i = 0U;
              rtb_state_b = MotionState_Brake;
            }
            break;
          }
        }

        /* End of Chart: '<S73>/Motion State' */

        /* SwitchCase: '<S72>/Switch Case' */
        rtPrevAction = FMS_DW.SwitchCase_ActiveSubsystem_l;
        FMS_DW.SwitchCase_ActiveSubsystem_l = -1;
        switch (rtb_state_b) {
         case MotionState_Hold:
          FMS_DW.SwitchCase_ActiveSubsystem_l = 0;
          break;

         case MotionState_Brake:
          FMS_DW.SwitchCase_ActiveSubsystem_l = 1;
          break;

         case MotionState_Move:
          FMS_DW.SwitchCase_ActiveSubsystem_l = 2;
          break;
        }

        switch (FMS_DW.SwitchCase_ActiveSubsystem_l) {
         case 0:
          if (FMS_DW.SwitchCase_ActiveSubsystem_l != rtPrevAction) {
            /* InitializeConditions for IfAction SubSystem: '<S72>/Hold Control' incorporates:
             *  ActionPort: '<S75>/Action Port'
             */
            /* InitializeConditions for SwitchCase: '<S72>/Switch Case' incorporates:
             *  Delay: '<S75>/Delay'
             */
            FMS_DW.icLoad = 1U;

            /* End of InitializeConditions for SubSystem: '<S72>/Hold Control' */
          }

          /* Outputs for IfAction SubSystem: '<S72>/Hold Control' incorporates:
           *  ActionPort: '<S75>/Action Port'
           */
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          /* Trigonometry: '<S79>/Trigonometric Function1' incorporates:
           *  Gain: '<S78>/Gain'
           *  Inport: '<Root>/INS_Out'
           *  SignalConversion: '<S16>/Signal Copy1'
           */
          rtb_VectorConcatenate_m[0] = arm_cos_f32(-FMS_U.INS_Out.psi);

          /* Trigonometry: '<S79>/Trigonometric Function' incorporates:
           *  Gain: '<S78>/Gain'
           *  Inport: '<Root>/INS_Out'
           *  SignalConversion: '<S16>/Signal Copy1'
           */
          rtb_VectorConcatenate_m[1] = arm_sin_f32(-FMS_U.INS_Out.psi);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

          /* SignalConversion: '<S79>/ConcatBufferAtVector Concatenate1In3' incorporates:
           *  Constant: '<S79>/Constant3'
           */
          rtb_VectorConcatenate_m[2] = 0.0F;

          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          /* Gain: '<S79>/Gain' incorporates:
           *  Gain: '<S78>/Gain'
           *  Inport: '<Root>/INS_Out'
           *  SignalConversion: '<S16>/Signal Copy1'
           *  Trigonometry: '<S79>/Trigonometric Function2'
           */
          rtb_VectorConcatenate_m[3] = -arm_sin_f32(-FMS_U.INS_Out.psi);

          /* Trigonometry: '<S79>/Trigonometric Function3' incorporates:
           *  Gain: '<S78>/Gain'
           *  Inport: '<Root>/INS_Out'
           *  SignalConversion: '<S16>/Signal Copy1'
           */
          rtb_VectorConcatenate_m[4] = arm_cos_f32(-FMS_U.INS_Out.psi);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

          /* SignalConversion: '<S79>/ConcatBufferAtVector Concatenate2In3' incorporates:
           *  Constant: '<S79>/Constant4'
           */
          rtb_VectorConcatenate_m[5] = 0.0F;

          /* SignalConversion: '<S79>/ConcatBufferAtVector ConcatenateIn3' */
          rtb_VectorConcatenate_m[6] = FMS_ConstB.VectorConcatenate3_p[0];
          rtb_VectorConcatenate_m[7] = FMS_ConstB.VectorConcatenate3_p[1];
          rtb_VectorConcatenate_m[8] = FMS_ConstB.VectorConcatenate3_p[2];

          /* Product: '<S75>/Multiply' incorporates:
           *  Inport: '<Root>/INS_Out'
           *  SignalConversion: '<S16>/Signal Copy1'
           */
          for (i = 0; i < 3; i++) {
            /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
            rtb_Switch_l[i] = rtb_VectorConcatenate_m[i + 6] * FMS_U.INS_Out.h_R
              + (rtb_VectorConcatenate_m[i + 3] * FMS_U.INS_Out.y_R +
                 rtb_VectorConcatenate_m[i] * FMS_U.INS_Out.x_R);

            /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          }

          /* End of Product: '<S75>/Multiply' */

          /* Delay: '<S75>/Delay' */
          if (FMS_DW.icLoad != 0) {
            FMS_DW.Delay_DSTATE = rtb_Switch_l[1];
          }

          /* Gain: '<S75>/Gain2' incorporates:
           *  Delay: '<S75>/Delay'
           *  Sum: '<S75>/Sum'
           */
          FMS_B.Merge_p = (FMS_DW.Delay_DSTATE - rtb_Switch_l[1]) *
            FMS_PARAM.Y_P;

          /* Update for Delay: '<S75>/Delay' */
          FMS_DW.icLoad = 0U;

          /* End of Outputs for SubSystem: '<S72>/Hold Control' */
          break;

         case 1:
          /* Outputs for IfAction SubSystem: '<S72>/Brake Control' incorporates:
           *  ActionPort: '<S74>/Action Port'
           */
          /* SignalConversion: '<S74>/OutportBuffer_InsertedFor_v_cmd_mPs_at_inport_0' incorporates:
           *  Constant: '<S74>/Brake Speed'
           */
          FMS_B.Merge_p = 0.0F;

          /* End of Outputs for SubSystem: '<S72>/Brake Control' */
          break;

         case 2:
          if (FMS_DW.SwitchCase_ActiveSubsystem_l != rtPrevAction) {
            /* InitializeConditions for IfAction SubSystem: '<S72>/Move Control' incorporates:
             *  ActionPort: '<S76>/Action Port'
             */
            /* InitializeConditions for SwitchCase: '<S72>/Switch Case' incorporates:
             *  DiscreteIntegrator: '<S81>/Integrator'
             *  DiscreteIntegrator: '<S81>/Integrator1'
             */
            FMS_DW.Integrator1_DSTATE_c = 0.0F;
            FMS_DW.Integrator_DSTATE_h = 0.0F;

            /* End of InitializeConditions for SubSystem: '<S72>/Move Control' */
          }

          /* Outputs for IfAction SubSystem: '<S72>/Move Control' incorporates:
           *  ActionPort: '<S76>/Action Port'
           */
          /* Product: '<S82>/Multiply1' incorporates:
           *  Constant: '<S82>/const1'
           *  DiscreteIntegrator: '<S81>/Integrator'
           */
          rtb_Sqrt_k0 = FMS_DW.Integrator_DSTATE_h * 0.05F;

          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          /* DeadZone: '<S80>/Dead Zone' incorporates:
           *  Inport: '<Root>/Pilot_Cmd'
           *  SignalConversion: '<S16>/Signal Copy2'
           */
          if (FMS_U.Pilot_Cmd.stick_roll > FMS_PARAM.ROLL_DZ) {
            rtb_Add4_k = FMS_U.Pilot_Cmd.stick_roll - FMS_PARAM.ROLL_DZ;
          } else if (FMS_U.Pilot_Cmd.stick_roll >= -FMS_PARAM.ROLL_DZ) {
            rtb_Add4_k = 0.0F;
          } else {
            rtb_Add4_k = FMS_U.Pilot_Cmd.stick_roll - (-FMS_PARAM.ROLL_DZ);
          }

          /* End of DeadZone: '<S80>/Dead Zone' */
          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

          /* Sum: '<S82>/Add' incorporates:
           *  DiscreteIntegrator: '<S81>/Integrator1'
           *  Gain: '<S76>/Gain6'
           *  Gain: '<S80>/Gain'
           *  Sum: '<S81>/Subtract'
           */
          rtb_a_pr = (FMS_DW.Integrator1_DSTATE_c - 1.0F / (1.0F -
            FMS_PARAM.ROLL_DZ) * rtb_Add4_k * FMS_PARAM.VEL_Y_LIM) + rtb_Sqrt_k0;

          /* Signum: '<S82>/Sign' */
          if (rtb_a_pr < 0.0F) {
            rtb_Switch_k = -1.0F;
          } else if (rtb_a_pr > 0.0F) {
            rtb_Switch_k = 1.0F;
          } else {
            rtb_Switch_k = rtb_a_pr;
          }

          /* End of Signum: '<S82>/Sign' */

          /* Sum: '<S82>/Add2' incorporates:
           *  Abs: '<S82>/Abs'
           *  Gain: '<S82>/Gain'
           *  Gain: '<S82>/Gain1'
           *  Product: '<S82>/Multiply2'
           *  Product: '<S82>/Multiply3'
           *  Sqrt: '<S82>/Sqrt'
           *  Sum: '<S82>/Add1'
           *  Sum: '<S82>/Subtract'
           */
          rtb_Switch_k = (sqrtf((8.0F * fabsf(rtb_a_pr) + FMS_ConstB.d_j) *
                                FMS_ConstB.d_j) - FMS_ConstB.d_j) * 0.5F *
            rtb_Switch_k + rtb_Sqrt_k0;

          /* Sum: '<S82>/Add4' */
          A = (rtb_a_pr - rtb_Switch_k) + rtb_Sqrt_k0;

          /* Sum: '<S82>/Add3' */
          rtb_Sqrt_k0 = rtb_a_pr + FMS_ConstB.d_j;

          /* Sum: '<S82>/Subtract1' */
          rtb_a_pr -= FMS_ConstB.d_j;

          /* Signum: '<S82>/Sign1' */
          if (rtb_Sqrt_k0 < 0.0F) {
            rtb_Sqrt_k0 = -1.0F;
          } else {
            if (rtb_Sqrt_k0 > 0.0F) {
              rtb_Sqrt_k0 = 1.0F;
            }
          }

          /* End of Signum: '<S82>/Sign1' */

          /* Signum: '<S82>/Sign2' */
          if (rtb_a_pr < 0.0F) {
            rtb_a_pr = -1.0F;
          } else {
            if (rtb_a_pr > 0.0F) {
              rtb_a_pr = 1.0F;
            }
          }

          /* End of Signum: '<S82>/Sign2' */

          /* Sum: '<S82>/Add5' incorporates:
           *  Gain: '<S82>/Gain2'
           *  Product: '<S82>/Multiply4'
           *  Sum: '<S82>/Subtract2'
           */
          rtb_Switch_k += (rtb_Sqrt_k0 - rtb_a_pr) * 0.5F * A;

          /* SignalConversion: '<S76>/OutportBufferForv_cmd_mPs' incorporates:
           *  DiscreteIntegrator: '<S81>/Integrator1'
           */
          FMS_B.Merge_p = FMS_DW.Integrator1_DSTATE_c;

          /* Update for DiscreteIntegrator: '<S81>/Integrator1' incorporates:
           *  DiscreteIntegrator: '<S81>/Integrator'
           */
          FMS_DW.Integrator1_DSTATE_c += 0.004F * FMS_DW.Integrator_DSTATE_h;

          /* Sum: '<S82>/Add6' */
          rtb_Sqrt_k0 = rtb_Switch_k + FMS_ConstB.d_j;

          /* Sum: '<S82>/Subtract3' */
          A = rtb_Switch_k - FMS_ConstB.d_j;

          /* Signum: '<S82>/Sign5' */
          if (rtb_Switch_k < 0.0F) {
            rtb_a_pr = -1.0F;
          } else if (rtb_Switch_k > 0.0F) {
            rtb_a_pr = 1.0F;
          } else {
            rtb_a_pr = rtb_Switch_k;
          }

          /* End of Signum: '<S82>/Sign5' */

          /* Signum: '<S82>/Sign3' */
          if (rtb_Sqrt_k0 < 0.0F) {
            rtb_Sqrt_k0 = -1.0F;
          } else {
            if (rtb_Sqrt_k0 > 0.0F) {
              rtb_Sqrt_k0 = 1.0F;
            }
          }

          /* End of Signum: '<S82>/Sign3' */

          /* Signum: '<S82>/Sign4' */
          if (A < 0.0F) {
            A = -1.0F;
          } else {
            if (A > 0.0F) {
              A = 1.0F;
            }
          }

          /* End of Signum: '<S82>/Sign4' */

          /* Signum: '<S82>/Sign6' */
          if (rtb_Switch_k < 0.0F) {
            rtb_Add4_k = -1.0F;
          } else if (rtb_Switch_k > 0.0F) {
            rtb_Add4_k = 1.0F;
          } else {
            rtb_Add4_k = rtb_Switch_k;
          }

          /* End of Signum: '<S82>/Sign6' */

          /* Update for DiscreteIntegrator: '<S81>/Integrator' incorporates:
           *  Constant: '<S82>/const'
           *  Gain: '<S82>/Gain3'
           *  Product: '<S82>/Divide'
           *  Product: '<S82>/Multiply5'
           *  Product: '<S82>/Multiply6'
           *  Sum: '<S82>/Subtract4'
           *  Sum: '<S82>/Subtract5'
           *  Sum: '<S82>/Subtract6'
           */
          FMS_DW.Integrator_DSTATE_h += ((rtb_Switch_k / FMS_ConstB.d_j -
            rtb_a_pr) * FMS_ConstB.Gain4_k * ((rtb_Sqrt_k0 - A) * 0.5F) -
            rtb_Add4_k * 58.836F) * 0.004F;

          /* End of Outputs for SubSystem: '<S72>/Move Control' */
          break;
        }

        /* End of SwitchCase: '<S72>/Switch Case' */

        /* SwitchCase: '<S58>/Switch Case' incorporates:
         *  Inport: '<Root>/INS_Out'
         *  SignalConversion: '<S16>/Signal Copy1'
         */
        rtPrevAction = FMS_DW.SwitchCase_ActiveSubsystem_ba;
        FMS_DW.SwitchCase_ActiveSubsystem_ba = -1;
        switch (rtb_state_a) {
         case MotionState_Hold:
          FMS_DW.SwitchCase_ActiveSubsystem_ba = 0;
          break;

         case MotionState_Brake:
          FMS_DW.SwitchCase_ActiveSubsystem_ba = 1;
          break;

         case MotionState_Move:
          FMS_DW.SwitchCase_ActiveSubsystem_ba = 2;
          break;
        }

        switch (FMS_DW.SwitchCase_ActiveSubsystem_ba) {
         case 0:
          if (FMS_DW.SwitchCase_ActiveSubsystem_ba != rtPrevAction) {
            /* SystemReset for IfAction SubSystem: '<S58>/Hold Control' incorporates:
             *  ActionPort: '<S61>/Action Port'
             */
            /* SystemReset for SwitchCase: '<S58>/Switch Case' */
            FMS_HoldControl_Reset(&FMS_DW.HoldControl_l);

            /* End of SystemReset for SubSystem: '<S58>/Hold Control' */
          }

          /* Outputs for IfAction SubSystem: '<S58>/Hold Control' incorporates:
           *  ActionPort: '<S61>/Action Port'
           */
          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          FMS_HoldControl(FMS_U.INS_Out.h_R, &FMS_B.Merge, &FMS_DW.HoldControl_l);

          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
          /* End of Outputs for SubSystem: '<S58>/Hold Control' */
          break;

         case 1:
          /* Outputs for IfAction SubSystem: '<S58>/Brake Control' incorporates:
           *  ActionPort: '<S60>/Action Port'
           */
          FMS_BrakeControl(&FMS_B.Merge);

          /* End of Outputs for SubSystem: '<S58>/Brake Control' */
          break;

         case 2:
          if (FMS_DW.SwitchCase_ActiveSubsystem_ba != rtPrevAction) {
            /* InitializeConditions for IfAction SubSystem: '<S58>/Move Control' incorporates:
             *  ActionPort: '<S62>/Action Port'
             */
            /* InitializeConditions for SwitchCase: '<S58>/Switch Case' incorporates:
             *  DiscreteIntegrator: '<S65>/Integrator'
             *  DiscreteIntegrator: '<S65>/Integrator1'
             */
            FMS_DW.Integrator1_DSTATE_l = 0.0F;
            FMS_DW.Integrator_DSTATE_l = 0.0F;

            /* End of InitializeConditions for SubSystem: '<S58>/Move Control' */
          }

          /* Outputs for IfAction SubSystem: '<S58>/Move Control' incorporates:
           *  ActionPort: '<S62>/Action Port'
           */
          /* Product: '<S66>/Multiply1' incorporates:
           *  Constant: '<S66>/const1'
           *  DiscreteIntegrator: '<S65>/Integrator'
           */
          rtb_Sqrt_k0 = FMS_DW.Integrator_DSTATE_l * 0.05F;

          /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
          /* DeadZone: '<S64>/Dead Zone' incorporates:
           *  Inport: '<Root>/Pilot_Cmd'
           *  SignalConversion: '<S16>/Signal Copy2'
           */
          if (FMS_U.Pilot_Cmd.stick_pitch > FMS_PARAM.PITCH_DZ) {
            rtb_Add4_k = FMS_U.Pilot_Cmd.stick_pitch - FMS_PARAM.PITCH_DZ;
          } else if (FMS_U.Pilot_Cmd.stick_pitch >= -FMS_PARAM.PITCH_DZ) {
            rtb_Add4_k = 0.0F;
          } else {
            rtb_Add4_k = FMS_U.Pilot_Cmd.stick_pitch - (-FMS_PARAM.PITCH_DZ);
          }

          /* End of DeadZone: '<S64>/Dead Zone' */
          /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

          /* Sum: '<S66>/Add' incorporates:
           *  DiscreteIntegrator: '<S65>/Integrator1'
           *  Gain: '<S62>/Gain1'
           *  Gain: '<S64>/Gain'
           *  Sum: '<S65>/Subtract'
           */
          rtb_a_pr = (FMS_DW.Integrator1_DSTATE_l - 1.0F / (1.0F -
            FMS_PARAM.PITCH_DZ) * rtb_Add4_k * FMS_PARAM.VEL_Z_LIM) +
            rtb_Sqrt_k0;

          /* Signum: '<S66>/Sign' */
          if (rtb_a_pr < 0.0F) {
            rtb_Switch_k = -1.0F;
          } else if (rtb_a_pr > 0.0F) {
            rtb_Switch_k = 1.0F;
          } else {
            rtb_Switch_k = rtb_a_pr;
          }

          /* End of Signum: '<S66>/Sign' */

          /* Sum: '<S66>/Add2' incorporates:
           *  Abs: '<S66>/Abs'
           *  Gain: '<S66>/Gain'
           *  Gain: '<S66>/Gain1'
           *  Product: '<S66>/Multiply2'
           *  Product: '<S66>/Multiply3'
           *  Sqrt: '<S66>/Sqrt'
           *  Sum: '<S66>/Add1'
           *  Sum: '<S66>/Subtract'
           */
          rtb_Switch_k = (sqrtf((8.0F * fabsf(rtb_a_pr) + FMS_ConstB.d_i) *
                                FMS_ConstB.d_i) - FMS_ConstB.d_i) * 0.5F *
            rtb_Switch_k + rtb_Sqrt_k0;

          /* Sum: '<S66>/Add4' */
          A = (rtb_a_pr - rtb_Switch_k) + rtb_Sqrt_k0;

          /* Sum: '<S66>/Add3' */
          rtb_Sqrt_k0 = rtb_a_pr + FMS_ConstB.d_i;

          /* Sum: '<S66>/Subtract1' */
          rtb_a_pr -= FMS_ConstB.d_i;

          /* Signum: '<S66>/Sign1' */
          if (rtb_Sqrt_k0 < 0.0F) {
            rtb_Sqrt_k0 = -1.0F;
          } else {
            if (rtb_Sqrt_k0 > 0.0F) {
              rtb_Sqrt_k0 = 1.0F;
            }
          }

          /* End of Signum: '<S66>/Sign1' */

          /* Signum: '<S66>/Sign2' */
          if (rtb_a_pr < 0.0F) {
            rtb_a_pr = -1.0F;
          } else {
            if (rtb_a_pr > 0.0F) {
              rtb_a_pr = 1.0F;
            }
          }

          /* End of Signum: '<S66>/Sign2' */

          /* Sum: '<S66>/Add5' incorporates:
           *  Gain: '<S66>/Gain2'
           *  Product: '<S66>/Multiply4'
           *  Sum: '<S66>/Subtract2'
           */
          rtb_Switch_k += (rtb_Sqrt_k0 - rtb_a_pr) * 0.5F * A;

          /* SignalConversion: '<S62>/OutportBufferForw_cmd_mPs' incorporates:
           *  DiscreteIntegrator: '<S65>/Integrator1'
           */
          FMS_B.Merge = FMS_DW.Integrator1_DSTATE_l;

          /* Update for DiscreteIntegrator: '<S65>/Integrator1' incorporates:
           *  DiscreteIntegrator: '<S65>/Integrator'
           */
          FMS_DW.Integrator1_DSTATE_l += 0.004F * FMS_DW.Integrator_DSTATE_l;

          /* Sum: '<S66>/Add6' */
          rtb_Sqrt_k0 = rtb_Switch_k + FMS_ConstB.d_i;

          /* Sum: '<S66>/Subtract3' */
          A = rtb_Switch_k - FMS_ConstB.d_i;

          /* Signum: '<S66>/Sign5' */
          if (rtb_Switch_k < 0.0F) {
            rtb_a_pr = -1.0F;
          } else if (rtb_Switch_k > 0.0F) {
            rtb_a_pr = 1.0F;
          } else {
            rtb_a_pr = rtb_Switch_k;
          }

          /* End of Signum: '<S66>/Sign5' */

          /* Signum: '<S66>/Sign3' */
          if (rtb_Sqrt_k0 < 0.0F) {
            rtb_Sqrt_k0 = -1.0F;
          } else {
            if (rtb_Sqrt_k0 > 0.0F) {
              rtb_Sqrt_k0 = 1.0F;
            }
          }

          /* End of Signum: '<S66>/Sign3' */

          /* Signum: '<S66>/Sign4' */
          if (A < 0.0F) {
            A = -1.0F;
          } else {
            if (A > 0.0F) {
              A = 1.0F;
            }
          }

          /* End of Signum: '<S66>/Sign4' */

          /* Signum: '<S66>/Sign6' */
          if (rtb_Switch_k < 0.0F) {
            rtb_Add4_k = -1.0F;
          } else if (rtb_Switch_k > 0.0F) {
            rtb_Add4_k = 1.0F;
          } else {
            rtb_Add4_k = rtb_Switch_k;
          }

          /* End of Signum: '<S66>/Sign6' */

          /* Update for DiscreteIntegrator: '<S65>/Integrator' incorporates:
           *  Constant: '<S66>/const'
           *  Gain: '<S66>/Gain3'
           *  Product: '<S66>/Divide'
           *  Product: '<S66>/Multiply5'
           *  Product: '<S66>/Multiply6'
           *  Sum: '<S66>/Subtract4'
           *  Sum: '<S66>/Subtract5'
           *  Sum: '<S66>/Subtract6'
           */
          FMS_DW.Integrator_DSTATE_l += ((rtb_Switch_k / FMS_ConstB.d_i -
            rtb_a_pr) * FMS_ConstB.Gain4_l * ((rtb_Sqrt_k0 - A) * 0.5F) -
            rtb_Add4_k * 78.448F) * 0.004F;

          /* End of Outputs for SubSystem: '<S58>/Move Control' */
          break;
        }

        /* End of SwitchCase: '<S58>/Switch Case' */

        /* Outport: '<Root>/FMS_Out' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  BusAssignment: '<S28>/Bus Assignment'
         *  Constant: '<S28>/Constant'
         */
        FMS_Y.FMS_Out = FMS_rtZFMS_Out_Bus;

        /* BusAssignment: '<S28>/Bus Assignment' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  DiscreteIntegrator: '<S70>/Integrator1'
         *  Outport: '<Root>/FMS_Out'
         */
        FMS_Y.FMS_Out.status = FMS_ConstB.DataTypeConversion_b;
        FMS_Y.FMS_Out.state = FMS_ConstB.DataTypeConversion1_o;
        FMS_Y.FMS_Out.ctrl_mode = FMS_ConstB.DataTypeConversion2_m;
        FMS_Y.FMS_Out.psi_rate_cmd = FMS_DW.Integrator1_DSTATE;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* Gain: '<S54>/Gain1' incorporates:
         *  Bias: '<S54>/Bias'
         *  Inport: '<Root>/Pilot_Cmd'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        rtb_Sqrt_k0 = (FMS_U.Pilot_Cmd.stick_throttle + 1.0F) * 0.5F;

        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Saturate: '<S54>/Saturation' incorporates:
         *  Gain: '<S54>/Gain1'
         */
        if (rtb_Sqrt_k0 > 1.0F) {
          rtb_Sqrt_k0 = 1.0F;
        } else {
          if (rtb_Sqrt_k0 < 0.0F) {
            rtb_Sqrt_k0 = 0.0F;
          }
        }

        /* End of Saturate: '<S54>/Saturation' */

        /* BusAssignment: '<S28>/Bus Assignment' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         *  Gain: '<S54>/Gain'
         *  Outport: '<Root>/FMS_Out'
         */
        FMS_Y.FMS_Out.u_cmd = FMS_PARAM.FW_AIRSPD_MAX * rtb_Sqrt_k0;

        /* Saturate: '<S72>/Saturation1' */
        if (FMS_B.Merge_p > FMS_PARAM.VEL_Y_LIM) {
          /* BusAssignment: '<S28>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.v_cmd = FMS_PARAM.VEL_Y_LIM;
        } else if (FMS_B.Merge_p < -FMS_PARAM.VEL_Y_LIM) {
          /* BusAssignment: '<S28>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.v_cmd = -FMS_PARAM.VEL_Y_LIM;
        } else {
          /* BusAssignment: '<S28>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.v_cmd = FMS_B.Merge_p;
        }

        /* End of Saturate: '<S72>/Saturation1' */

        /* Saturate: '<S58>/Saturation1' */
        if (FMS_B.Merge > FMS_PARAM.VEL_Z_LIM) {
          /* BusAssignment: '<S28>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.w_cmd = FMS_PARAM.VEL_Z_LIM;
        } else if (FMS_B.Merge < -FMS_PARAM.VEL_Z_LIM) {
          /* BusAssignment: '<S28>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.w_cmd = -FMS_PARAM.VEL_Z_LIM;
        } else {
          /* BusAssignment: '<S28>/Bus Assignment' incorporates:
           *  BusAssignment: '<S18>/Bus Assignment'
           *  Outport: '<Root>/FMS_Out'
           */
          FMS_Y.FMS_Out.w_cmd = FMS_B.Merge;
        }

        /* End of Saturate: '<S58>/Saturation1' */

        /* Product: '<S71>/Multiply1' incorporates:
         *  Constant: '<S71>/const1'
         *  DiscreteIntegrator: '<S70>/Integrator'
         */
        rtb_Sqrt_k0 = FMS_DW.Integrator_DSTATE * 0.02F;

        /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
        /* DeadZone: '<S69>/Dead Zone' incorporates:
         *  Inport: '<Root>/Pilot_Cmd'
         *  SignalConversion: '<S16>/Signal Copy2'
         */
        if (FMS_U.Pilot_Cmd.stick_yaw > FMS_PARAM.YAW_DZ) {
          rtb_Add4_k = FMS_U.Pilot_Cmd.stick_yaw - FMS_PARAM.YAW_DZ;
        } else if (FMS_U.Pilot_Cmd.stick_yaw >= -FMS_PARAM.YAW_DZ) {
          rtb_Add4_k = 0.0F;
        } else {
          rtb_Add4_k = FMS_U.Pilot_Cmd.stick_yaw - (-FMS_PARAM.YAW_DZ);
        }

        /* End of DeadZone: '<S69>/Dead Zone' */
        /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

        /* Sum: '<S71>/Add' incorporates:
         *  DiscreteIntegrator: '<S70>/Integrator1'
         *  Gain: '<S56>/Gain1'
         *  Gain: '<S69>/Gain'
         *  Sum: '<S70>/Subtract'
         */
        rtb_a_pr = (FMS_DW.Integrator1_DSTATE - 1.0F / (1.0F - FMS_PARAM.YAW_DZ)
                    * rtb_Add4_k * FMS_PARAM.YAW_RATE_LIM) + rtb_Sqrt_k0;

        /* Signum: '<S71>/Sign' */
        if (rtb_a_pr < 0.0F) {
          rtb_Switch_k = -1.0F;
        } else if (rtb_a_pr > 0.0F) {
          rtb_Switch_k = 1.0F;
        } else {
          rtb_Switch_k = rtb_a_pr;
        }

        /* End of Signum: '<S71>/Sign' */

        /* Sum: '<S71>/Add2' incorporates:
         *  Abs: '<S71>/Abs'
         *  Gain: '<S71>/Gain'
         *  Gain: '<S71>/Gain1'
         *  Product: '<S71>/Multiply2'
         *  Product: '<S71>/Multiply3'
         *  Sqrt: '<S71>/Sqrt'
         *  Sum: '<S71>/Add1'
         *  Sum: '<S71>/Subtract'
         */
        rtb_Switch_k = (sqrtf((8.0F * fabsf(rtb_a_pr) + FMS_ConstB.d) *
                              FMS_ConstB.d) - FMS_ConstB.d) * 0.5F *
          rtb_Switch_k + rtb_Sqrt_k0;

        /* Sum: '<S71>/Add4' */
        A = (rtb_a_pr - rtb_Switch_k) + rtb_Sqrt_k0;

        /* Sum: '<S71>/Add3' */
        rtb_Sqrt_k0 = rtb_a_pr + FMS_ConstB.d;

        /* Sum: '<S71>/Subtract1' */
        rtb_a_pr -= FMS_ConstB.d;

        /* Signum: '<S71>/Sign1' */
        if (rtb_Sqrt_k0 < 0.0F) {
          rtb_Sqrt_k0 = -1.0F;
        } else {
          if (rtb_Sqrt_k0 > 0.0F) {
            rtb_Sqrt_k0 = 1.0F;
          }
        }

        /* End of Signum: '<S71>/Sign1' */

        /* Signum: '<S71>/Sign2' */
        if (rtb_a_pr < 0.0F) {
          rtb_a_pr = -1.0F;
        } else {
          if (rtb_a_pr > 0.0F) {
            rtb_a_pr = 1.0F;
          }
        }

        /* End of Signum: '<S71>/Sign2' */

        /* Sum: '<S71>/Add5' incorporates:
         *  Gain: '<S71>/Gain2'
         *  Product: '<S71>/Multiply4'
         *  Sum: '<S71>/Subtract2'
         */
        rtb_Switch_k += (rtb_Sqrt_k0 - rtb_a_pr) * 0.5F * A;

        /* Update for DiscreteIntegrator: '<S70>/Integrator1' incorporates:
         *  DiscreteIntegrator: '<S70>/Integrator'
         */
        FMS_DW.Integrator1_DSTATE += 0.004F * FMS_DW.Integrator_DSTATE;

        /* Sum: '<S71>/Add6' */
        rtb_Sqrt_k0 = rtb_Switch_k + FMS_ConstB.d;

        /* Sum: '<S71>/Subtract3' */
        A = rtb_Switch_k - FMS_ConstB.d;

        /* Signum: '<S71>/Sign5' */
        if (rtb_Switch_k < 0.0F) {
          rtb_a_pr = -1.0F;
        } else if (rtb_Switch_k > 0.0F) {
          rtb_a_pr = 1.0F;
        } else {
          rtb_a_pr = rtb_Switch_k;
        }

        /* End of Signum: '<S71>/Sign5' */

        /* Signum: '<S71>/Sign3' */
        if (rtb_Sqrt_k0 < 0.0F) {
          rtb_Sqrt_k0 = -1.0F;
        } else {
          if (rtb_Sqrt_k0 > 0.0F) {
            rtb_Sqrt_k0 = 1.0F;
          }
        }

        /* End of Signum: '<S71>/Sign3' */

        /* Signum: '<S71>/Sign4' */
        if (A < 0.0F) {
          A = -1.0F;
        } else {
          if (A > 0.0F) {
            A = 1.0F;
          }
        }

        /* End of Signum: '<S71>/Sign4' */

        /* Signum: '<S71>/Sign6' */
        if (rtb_Switch_k < 0.0F) {
          rtb_Add4_k = -1.0F;
        } else if (rtb_Switch_k > 0.0F) {
          rtb_Add4_k = 1.0F;
        } else {
          rtb_Add4_k = rtb_Switch_k;
        }

        /* End of Signum: '<S71>/Sign6' */

        /* Update for DiscreteIntegrator: '<S70>/Integrator' incorporates:
         *  Constant: '<S71>/const'
         *  Gain: '<S71>/Gain3'
         *  Product: '<S71>/Divide'
         *  Product: '<S71>/Multiply5'
         *  Product: '<S71>/Multiply6'
         *  Sum: '<S71>/Subtract4'
         *  Sum: '<S71>/Subtract5'
         *  Sum: '<S71>/Subtract6'
         */
        FMS_DW.Integrator_DSTATE += ((rtb_Switch_k / FMS_ConstB.d - rtb_a_pr) *
          FMS_ConstB.Gain4 * ((rtb_Sqrt_k0 - A) * 0.5F) - rtb_Add4_k *
          15.707963F) * 0.004F;

        /* End of Outputs for SubSystem: '<S21>/Position' */
        break;

       case 4:
        /* Outputs for IfAction SubSystem: '<S21>/Unknown' incorporates:
         *  ActionPort: '<S30>/Action Port'
         */
        /* Outport: '<Root>/FMS_Out' incorporates:
         *  BusAssignment: '<S18>/Bus Assignment'
         */
        FMS_Unknown(&FMS_Y.FMS_Out, &FMS_ConstB.Unknown_i);

        /* End of Outputs for SubSystem: '<S21>/Unknown' */
        break;
      }

      /* End of SwitchCase: '<S21>/Switch Case' */
      /* End of Outputs for SubSystem: '<S17>/Assist' */
      break;

     case 3:
      /* Outputs for IfAction SubSystem: '<S17>/Manual' incorporates:
       *  ActionPort: '<S23>/Action Port'
       */
      /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
      /* Saturate: '<S176>/Saturation' incorporates:
       *  Constant: '<S176>/Constant4'
       *  Inport: '<Root>/Pilot_Cmd'
       *  SignalConversion: '<S16>/Signal Copy2'
       *  Sum: '<S176>/Sum'
       */
      if (FMS_U.Pilot_Cmd.stick_throttle + 1.0F > 2.0F) {
        rtb_Add4_k = 2.0F;
      } else if (FMS_U.Pilot_Cmd.stick_throttle + 1.0F < 0.0F) {
        rtb_Add4_k = 0.0F;
      } else {
        rtb_Add4_k = FMS_U.Pilot_Cmd.stick_throttle + 1.0F;
      }

      /* End of Saturate: '<S176>/Saturation' */
      /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

      /* DataTypeConversion: '<S175>/Data Type Conversion' incorporates:
       *  Constant: '<S176>/Constant5'
       *  Gain: '<S176>/Gain4'
       *  Sum: '<S176>/Add'
       */
      rtb_DataTypeConversion = (uint16_T)fmodf(floorf(500.0F * rtb_Add4_k +
        1000.0F), 65536.0F);

      /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
      /* DataTypeConversion: '<S175>/Data Type Conversion1' incorporates:
       *  Bias: '<S175>/Bias1'
       *  Gain: '<S175>/Gain1'
       *  Inport: '<Root>/Pilot_Cmd'
       *  SignalConversion: '<S16>/Signal Copy2'
       */
      rtb_Add4_k = fmodf(floorf(-500.0F * FMS_U.Pilot_Cmd.stick_roll + 1500.0F),
                         65536.0F);

      /* End of Outputs for SubSystem: '<S2>/FMS_Input' */
      rtb_DataTypeConversion1_l = (uint16_T)(rtb_Add4_k < 0.0F ? (int32_T)
        (uint16_T)-(int16_T)(uint16_T)-rtb_Add4_k : (int32_T)(uint16_T)
        rtb_Add4_k);

      /* Outport: '<Root>/FMS_Out' incorporates:
       *  BusAssignment: '<S18>/Bus Assignment'
       *  BusAssignment: '<S23>/Bus Assignment'
       *  Constant: '<S23>/Constant'
       *  SignalConversion: '<S23>/TmpHiddenBufferAtBus AssignmentInport1'
       */
      FMS_Y.FMS_Out = FMS_rtZFMS_Out_Bus;

      /* BusAssignment: '<S23>/Bus Assignment' incorporates:
       *  BusAssignment: '<S18>/Bus Assignment'
       *  Constant: '<S23>/Constant2'
       *  Outport: '<Root>/FMS_Out'
       */
      FMS_Y.FMS_Out.reset = 1U;
      FMS_Y.FMS_Out.status = FMS_ConstB.DataTypeConversion;
      FMS_Y.FMS_Out.state = FMS_ConstB.DataTypeConversion1;
      FMS_Y.FMS_Out.ctrl_mode = FMS_ConstB.DataTypeConversion2;
      FMS_Y.FMS_Out.actuator_cmd[0] = rtb_DataTypeConversion;
      FMS_Y.FMS_Out.actuator_cmd[1] = rtb_DataTypeConversion;
      FMS_Y.FMS_Out.actuator_cmd[2] = rtb_DataTypeConversion1_l;
      FMS_Y.FMS_Out.actuator_cmd[3] = rtb_DataTypeConversion1_l;

      /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
      /* DataTypeConversion: '<S175>/Data Type Conversion2' incorporates:
       *  Bias: '<S175>/Bias2'
       *  Gain: '<S175>/Gain2'
       *  Inport: '<Root>/Pilot_Cmd'
       *  SignalConversion: '<S16>/Signal Copy2'
       */
      rtb_Add4_k = fmodf(floorf(500.0F * FMS_U.Pilot_Cmd.stick_pitch + 1500.0F),
                         65536.0F);

      /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

      /* BusAssignment: '<S23>/Bus Assignment' incorporates:
       *  BusAssignment: '<S18>/Bus Assignment'
       *  DataTypeConversion: '<S175>/Data Type Conversion2'
       *  Outport: '<Root>/FMS_Out'
       */
      FMS_Y.FMS_Out.actuator_cmd[4] = (uint16_T)(rtb_Add4_k < 0.0F ? (int32_T)
        (uint16_T)-(int16_T)(uint16_T)-rtb_Add4_k : (int32_T)(uint16_T)
        rtb_Add4_k);

      /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
      /* DataTypeConversion: '<S175>/Data Type Conversion3' incorporates:
       *  Bias: '<S175>/Bias3'
       *  Gain: '<S175>/Gain3'
       *  Inport: '<Root>/Pilot_Cmd'
       *  SignalConversion: '<S16>/Signal Copy2'
       */
      rtb_Add4_k = fmodf(floorf(500.0F * FMS_U.Pilot_Cmd.stick_yaw + 1500.0F),
                         65536.0F);

      /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

      /* BusAssignment: '<S23>/Bus Assignment' incorporates:
       *  BusAssignment: '<S18>/Bus Assignment'
       *  DataTypeConversion: '<S175>/Data Type Conversion3'
       *  Outport: '<Root>/FMS_Out'
       */
      FMS_Y.FMS_Out.actuator_cmd[5] = (uint16_T)(rtb_Add4_k < 0.0F ? (int32_T)
        (uint16_T)-(int16_T)(uint16_T)-rtb_Add4_k : (int32_T)(uint16_T)
        rtb_Add4_k);
      for (i = 0; i < 10; i++) {
        FMS_Y.FMS_Out.actuator_cmd[i + 6] = 0U;
      }

      /* End of Outputs for SubSystem: '<S17>/Manual' */
      break;

     case 4:
      /* Outputs for IfAction SubSystem: '<S17>/Unknown' incorporates:
       *  ActionPort: '<S25>/Action Port'
       */
      /* Outport: '<Root>/FMS_Out' incorporates:
       *  BusAssignment: '<S18>/Bus Assignment'
       */
      FMS_Unknown(&FMS_Y.FMS_Out, &FMS_ConstB.Unknown);

      /* End of Outputs for SubSystem: '<S17>/Unknown' */
      break;
    }

    /* End of SwitchCase: '<S17>/Switch Case' */
    /* End of Outputs for SubSystem: '<S15>/Arm' */
    break;
  }

  /* End of SwitchCase: '<S15>/Switch Case' */

  /* BusAssignment: '<S18>/Bus Assignment' incorporates:
   *  Constant: '<S18>/Constant'
   *  DataTypeConversion: '<S18>/Data Type Conversion'
   *  DiscreteIntegrator: '<S300>/Discrete-Time Integrator'
   *  Outport: '<Root>/FMS_Out'
   *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy4Inport1'
   *  SignalConversion: '<S16>/TmpSignal ConversionAtSignal Copy5Inport1'
   *  Sum: '<S18>/Sum'
   */
  FMS_Y.FMS_Out.timestamp = FMS_DW.DiscreteTimeIntegrator_DSTATE;
  FMS_Y.FMS_Out.mode = (uint8_T)FMS_B.target_mode;

  /* Outputs for Atomic SubSystem: '<S2>/FMS_Input' */
  FMS_Y.FMS_Out.wp_consume = FMS_B.wp_consume;
  FMS_Y.FMS_Out.wp_current = (uint8_T)(FMS_B.wp_index - 1);

  /* End of Outputs for SubSystem: '<S2>/FMS_Input' */

  /* Update for DiscreteIntegrator: '<S300>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S300>/Constant'
   */
  FMS_DW.DiscreteTimeIntegrator_DSTATE += FMS_EXPORT.period;

  /* End of Outputs for SubSystem: '<Root>/FMS Commander' */
}

/* Model initialize function */
void FMS_init(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(FMS_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &FMS_B), 0,
                sizeof(B_FMS_T));

  {
    FMS_B.state = VehicleState_None;
    FMS_B.target_mode = PilotMode_None;
    FMS_B.Switch1 = FMS_Cmd_None;
  }

  /* states (dwork) */
  (void) memset((void *)&FMS_DW, 0,
                sizeof(DW_FMS_T));

  /* external inputs */
  (void)memset(&FMS_U, 0, sizeof(ExtU_FMS_T));

  /* external outputs */
  FMS_Y.FMS_Out = FMS_rtZFMS_Out_Bus;

  /* Start for Atomic SubSystem: '<Root>/FMS Commander' */
  /* Start for SwitchCase: '<S15>/Switch Case' */
  FMS_DW.SwitchCase_ActiveSubsystem = -1;

  /* Start for IfAction SubSystem: '<S15>/Arm' */
  /* Start for SwitchCase: '<S17>/Switch Case' */
  FMS_DW.SwitchCase_ActiveSubsystem_b = -1;

  /* Start for IfAction SubSystem: '<S17>/SubMode' */
  /* Start for SwitchCase: '<S24>/Switch Case' */
  FMS_DW.SwitchCase_ActiveSubsystem_at = -1;

  /* Start for IfAction SubSystem: '<S24>/Return' */
  /* Start for SwitchCase: '<S261>/Switch Case' */
  FMS_DW.SwitchCase_ActiveSubsystem_k = -1;

  /* Start for SwitchCase: '<S251>/Switch Case' */
  FMS_DW.SwitchCase_ActiveSubsystem_g = -1;

  /* End of Start for SubSystem: '<S24>/Return' */

  /* Start for IfAction SubSystem: '<S24>/Hold' */
  /* Start for SwitchCase: '<S207>/Switch Case' */
  FMS_DW.SwitchCase_ActiveSubsystem_p = -1;

  /* Start for SwitchCase: '<S185>/Switch Case' */
  FMS_DW.SwitchCase_ActiveSubsystem_pp = -1;

  /* Start for SwitchCase: '<S195>/Switch Case' */
  FMS_DW.SwitchCase_ActiveSubsystem_bn = -1;

  /* End of Start for SubSystem: '<S24>/Hold' */
  /* End of Start for SubSystem: '<S17>/SubMode' */

  /* Start for IfAction SubSystem: '<S17>/Auto' */
  /* Start for SwitchCase: '<S22>/Switch Case' */
  FMS_DW.SwitchCase_ActiveSubsystem_i = -1;

  /* Start for IfAction SubSystem: '<S22>/Mission' */
  /* Start for Resettable SubSystem: '<S99>/Mission_SubSystem' */
  /* Start for SwitchCase: '<S144>/Switch Case' */
  FMS_DW.SwitchCase_ActiveSubsystem_a = -1;

  /* Start for SwitchCase: '<S134>/Switch Case' */
  FMS_DW.SwitchCase_ActiveSubsystem_e = -1;

  /* End of Start for SubSystem: '<S99>/Mission_SubSystem' */
  /* End of Start for SubSystem: '<S22>/Mission' */
  /* End of Start for SubSystem: '<S17>/Auto' */

  /* Start for IfAction SubSystem: '<S17>/Assist' */
  /* Start for SwitchCase: '<S21>/Switch Case' */
  FMS_DW.SwitchCase_ActiveSubsystem_f = -1;

  /* Start for IfAction SubSystem: '<S21>/Altitude' */
  /* Start for SwitchCase: '<S37>/Switch Case' */
  FMS_DW.SwitchCase_ActiveSubsystem_m = -1;

  /* End of Start for SubSystem: '<S21>/Altitude' */

  /* Start for IfAction SubSystem: '<S21>/Position' */
  /* Start for SwitchCase: '<S72>/Switch Case' */
  FMS_DW.SwitchCase_ActiveSubsystem_l = -1;

  /* Start for SwitchCase: '<S58>/Switch Case' */
  FMS_DW.SwitchCase_ActiveSubsystem_ba = -1;

  /* End of Start for SubSystem: '<S21>/Position' */
  /* End of Start for SubSystem: '<S17>/Assist' */
  /* End of Start for SubSystem: '<S15>/Arm' */
  /* End of Start for SubSystem: '<Root>/FMS Commander' */
  FMS_PrevZCX.Mission_SubSystem_Reset_ZCE = POS_ZCSIG;

  /* SystemInitialize for Chart: '<Root>/SafeMode' */
  FMS_DW.is_active_c3_FMS = 0U;
  FMS_DW.is_c3_FMS = FMS_IN_NO_ACTIVE_CHILD_h;

  /* SystemInitialize for Chart: '<Root>/FMS State Machine' */
  initialize_msg_local_queues_for();
  FMS_DW.sfEvent = -1;
  FMS_DW.is_active_Combo_Stick = 0U;
  FMS_DW.is_Combo_Stick = FMS_IN_NO_ACTIVE_CHILD_h;
  FMS_DW.is_active_Command_Listener = 0U;
  FMS_DW.is_Command_Listener = FMS_IN_NO_ACTIVE_CHILD_h;
  FMS_DW.is_active_Vehicle = 0U;
  FMS_DW.is_Vehicle = FMS_IN_NO_ACTIVE_CHILD_h;
  FMS_DW.is_Arm = FMS_IN_NO_ACTIVE_CHILD_h;
  FMS_DW.is_Assist = FMS_IN_NO_ACTIVE_CHILD_h;
  FMS_DW.is_Auto = FMS_IN_NO_ACTIVE_CHILD_h;
  FMS_DW.is_Mission = FMS_IN_NO_ACTIVE_CHILD_h;
  FMS_DW.is_Manual = FMS_IN_NO_ACTIVE_CHILD_h;
  FMS_DW.is_SubMode = FMS_IN_NO_ACTIVE_CHILD_h;
  FMS_DW.temporalCounter_i1 = 0U;
  FMS_DW.is_active_c11_FMS = 0U;
  FMS_DW.M_msgReservedData = FMS_Cmd_None;
  FMS_DW.prep_takeoff = 0.0;
  FMS_DW.bl = false;
  FMS_DW.br = false;
  FMS_DW.prep_mission_takeoff = 0.0;
  FMS_B.wp_consume = 0U;
  FMS_B.wp_index = 1U;
  FMS_DW.chartAbsoluteTimeCounter = 0;

  /* SystemInitialize for Atomic SubSystem: '<Root>/FMS Commander' */
  /* SystemInitialize for IfAction SubSystem: '<S15>/Arm' */
  /* SystemInitialize for IfAction SubSystem: '<S17>/SubMode' */
  /* SystemInitialize for IfAction SubSystem: '<S24>/Return' */
  /* InitializeConditions for Delay: '<S247>/Delay' */
  FMS_DW.icLoad_o = 1U;

  /* InitializeConditions for DiscreteIntegrator: '<S288>/Discrete-Time Integrator' */
  FMS_DW.l1_heading_p = 0.0F;

  /* InitializeConditions for Delay: '<S227>/Delay' */
  FMS_DW.icLoad_c = 1U;

  /* InitializeConditions for Delay: '<S228>/Delay' */
  FMS_DW.icLoad_j = 1U;

  /* InitializeConditions for DiscreteIntegrator: '<S231>/Integrator1' */
  FMS_DW.Integrator1_IC_LOADING_j = 1U;

  /* InitializeConditions for DiscreteIntegrator: '<S231>/Integrator' */
  FMS_DW.Integrator_DSTATE_b = 0.0F;

  /* SystemInitialize for Chart: '<S262>/Motion State' */
  FMS_MotionState_Init(&FMS_DW.sf_MotionState);

  /* SystemInitialize for IfAction SubSystem: '<S261>/Hold Control' */
  FMS_HoldControl_b_Init(&FMS_DW.HoldControl_k);

  /* End of SystemInitialize for SubSystem: '<S261>/Hold Control' */

  /* SystemInitialize for IfAction SubSystem: '<S261>/Move Control' */
  FMS_MoveControl_i_Init(&FMS_DW.MoveControl_o);

  /* End of SystemInitialize for SubSystem: '<S261>/Move Control' */

  /* SystemInitialize for Merge: '<S261>/Merge' */
  FMS_B.Merge_m[0] = 0.0F;
  FMS_B.Merge_m[1] = 0.0F;

  /* SystemInitialize for Chart: '<S252>/Motion Status' */
  FMS_MotionStatus_Init(&FMS_DW.sf_MotionStatus);

  /* SystemInitialize for IfAction SubSystem: '<S251>/Hold Control' */
  FMS_HoldControl_Init(&FMS_DW.HoldControl);

  /* End of SystemInitialize for SubSystem: '<S251>/Hold Control' */

  /* SystemInitialize for IfAction SubSystem: '<S251>/Move Control' */
  FMS_MoveControl_Init(&FMS_DW.MoveControl);

  /* End of SystemInitialize for SubSystem: '<S251>/Move Control' */

  /* SystemInitialize for Merge: '<S251>/Merge' */
  FMS_B.Merge_mu = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S24>/Return' */

  /* SystemInitialize for IfAction SubSystem: '<S24>/Hold' */
  /* SystemInitialize for Chart: '<S186>/Motion Status' */
  FMS_MotionStatus_Init(&FMS_DW.sf_MotionStatus_j);

  /* SystemInitialize for Chart: '<S196>/Motion State' */
  FMS_DW.temporalCounter_i1_a = 0U;
  FMS_DW.is_active_c15_FMS = 0U;
  FMS_DW.is_c15_FMS = FMS_IN_NO_ACTIVE_CHILD_h;

  /* SystemInitialize for Chart: '<S208>/Motion State' */
  FMS_MotionState_Init(&FMS_DW.sf_MotionState_g);

  /* SystemInitialize for IfAction SubSystem: '<S207>/Hold Control' */
  FMS_HoldControl_b_Init(&FMS_DW.HoldControl_f);

  /* End of SystemInitialize for SubSystem: '<S207>/Hold Control' */

  /* SystemInitialize for IfAction SubSystem: '<S207>/Move Control' */
  FMS_MoveControl_i_Init(&FMS_DW.MoveControl_i);

  /* End of SystemInitialize for SubSystem: '<S207>/Move Control' */

  /* SystemInitialize for Merge: '<S207>/Merge' */
  FMS_B.Merge_o[0] = 0.0F;
  FMS_B.Merge_o[1] = 0.0F;

  /* SystemInitialize for IfAction SubSystem: '<S185>/Hold Control' */
  FMS_HoldControl_Init(&FMS_DW.HoldControl_n);

  /* End of SystemInitialize for SubSystem: '<S185>/Hold Control' */

  /* SystemInitialize for IfAction SubSystem: '<S185>/Move Control' */
  FMS_MoveControl_Init(&FMS_DW.MoveControl_n);

  /* End of SystemInitialize for SubSystem: '<S185>/Move Control' */

  /* SystemInitialize for Merge: '<S185>/Merge' */
  FMS_B.Merge_ey = 0.0F;

  /* SystemInitialize for IfAction SubSystem: '<S195>/Hold Control' */
  /* InitializeConditions for Delay: '<S198>/Delay' */
  FMS_DW.icLoad_g = 1U;

  /* End of SystemInitialize for SubSystem: '<S195>/Hold Control' */

  /* SystemInitialize for IfAction SubSystem: '<S195>/Move Control' */
  /* InitializeConditions for DiscreteIntegrator: '<S204>/Integrator1' */
  FMS_DW.Integrator1_DSTATE_k = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S204>/Integrator' */
  FMS_DW.Integrator_DSTATE_h2 = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S195>/Move Control' */

  /* SystemInitialize for Merge: '<S195>/Merge' */
  FMS_B.Merge_n1 = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S24>/Hold' */
  /* End of SystemInitialize for SubSystem: '<S17>/SubMode' */

  /* SystemInitialize for IfAction SubSystem: '<S17>/Auto' */
  /* SystemInitialize for IfAction SubSystem: '<S22>/Mission' */
  /* InitializeConditions for UnitDelay: '<S102>/Delay Input1'
   *
   * Block description for '<S102>/Delay Input1':
   *
   *  Store in Global RAM
   */
  FMS_DW.DelayInput1_DSTATE_pe = 0U;

  /* SystemInitialize for Resettable SubSystem: '<S99>/Mission_SubSystem' */
  /* InitializeConditions for Delay: '<S127>/Delay' */
  FMS_DW.icLoad_i = 1U;

  /* InitializeConditions for DiscreteIntegrator: '<S171>/Discrete-Time Integrator' */
  FMS_DW.l1_heading = 0.0F;

  /* InitializeConditions for Delay: '<S107>/Delay' */
  FMS_DW.icLoad_k = 1U;

  /* InitializeConditions for DiscreteIntegrator: '<S110>/Integrator1' */
  FMS_DW.Integrator1_IC_LOADING = 1U;

  /* InitializeConditions for DiscreteIntegrator: '<S110>/Integrator' */
  FMS_DW.Integrator_DSTATE_i = 0.0F;

  /* SystemInitialize for Chart: '<S145>/Motion State' */
  FMS_MotionState_Init(&FMS_DW.sf_MotionState_n);

  /* SystemInitialize for IfAction SubSystem: '<S144>/Hold Control' */
  FMS_HoldControl_b_Init(&FMS_DW.HoldControl_d);

  /* End of SystemInitialize for SubSystem: '<S144>/Hold Control' */

  /* SystemInitialize for IfAction SubSystem: '<S144>/Move Control' */
  FMS_MoveControl_i_Init(&FMS_DW.MoveControl_c);

  /* End of SystemInitialize for SubSystem: '<S144>/Move Control' */

  /* SystemInitialize for Merge: '<S144>/Merge' */
  FMS_B.Merge_n[0] = 0.0F;
  FMS_B.Merge_n[1] = 0.0F;

  /* SystemInitialize for Chart: '<S135>/Motion Status' */
  FMS_MotionStatus_Init(&FMS_DW.sf_MotionStatus_jt);

  /* SystemInitialize for IfAction SubSystem: '<S134>/Hold Control' */
  FMS_HoldControl_Init(&FMS_DW.HoldControl_a);

  /* End of SystemInitialize for SubSystem: '<S134>/Hold Control' */

  /* SystemInitialize for IfAction SubSystem: '<S134>/Move Control' */
  FMS_MoveControl_Init(&FMS_DW.MoveControl_m);

  /* End of SystemInitialize for SubSystem: '<S134>/Move Control' */

  /* SystemInitialize for Merge: '<S134>/Merge' */
  FMS_B.Merge_e = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S99>/Mission_SubSystem' */
  /* End of SystemInitialize for SubSystem: '<S22>/Mission' */
  /* End of SystemInitialize for SubSystem: '<S17>/Auto' */

  /* SystemInitialize for IfAction SubSystem: '<S17>/Assist' */
  /* SystemInitialize for IfAction SubSystem: '<S21>/Stabilize' */
  /* InitializeConditions for DiscreteIntegrator: '<S97>/Integrator1' */
  FMS_DW.Integrator1_DSTATE_m = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S97>/Integrator' */
  FMS_DW.Integrator_DSTATE_f = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S21>/Stabilize' */

  /* SystemInitialize for IfAction SubSystem: '<S21>/Altitude' */
  /* SystemInitialize for Chart: '<S38>/Motion Status' */
  FMS_MotionStatus_o_Init(&FMS_DW.sf_MotionStatus_b);

  /* SystemInitialize for IfAction SubSystem: '<S37>/Hold Control' */
  FMS_HoldControl_Init(&FMS_DW.HoldControl_k2);

  /* End of SystemInitialize for SubSystem: '<S37>/Hold Control' */

  /* SystemInitialize for Merge: '<S37>/Merge' */
  FMS_B.Merge_l = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S21>/Altitude' */

  /* SystemInitialize for IfAction SubSystem: '<S21>/Position' */
  /* InitializeConditions for DiscreteIntegrator: '<S70>/Integrator1' */
  FMS_DW.Integrator1_DSTATE = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S70>/Integrator' */
  FMS_DW.Integrator_DSTATE = 0.0F;

  /* SystemInitialize for Chart: '<S59>/Motion Status' */
  FMS_MotionStatus_o_Init(&FMS_DW.sf_MotionStatus_jn);

  /* SystemInitialize for Chart: '<S73>/Motion State' */
  FMS_DW.temporalCounter_i1_i = 0U;
  FMS_DW.is_active_c16_FMS = 0U;
  FMS_DW.is_c16_FMS = FMS_IN_NO_ACTIVE_CHILD_h;

  /* SystemInitialize for IfAction SubSystem: '<S72>/Hold Control' */
  /* InitializeConditions for Delay: '<S75>/Delay' */
  FMS_DW.icLoad = 1U;

  /* End of SystemInitialize for SubSystem: '<S72>/Hold Control' */

  /* SystemInitialize for IfAction SubSystem: '<S72>/Move Control' */
  /* InitializeConditions for DiscreteIntegrator: '<S81>/Integrator1' */
  FMS_DW.Integrator1_DSTATE_c = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S81>/Integrator' */
  FMS_DW.Integrator_DSTATE_h = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S72>/Move Control' */

  /* SystemInitialize for IfAction SubSystem: '<S58>/Hold Control' */
  FMS_HoldControl_Init(&FMS_DW.HoldControl_l);

  /* End of SystemInitialize for SubSystem: '<S58>/Hold Control' */

  /* SystemInitialize for IfAction SubSystem: '<S58>/Move Control' */
  /* InitializeConditions for DiscreteIntegrator: '<S65>/Integrator1' */
  FMS_DW.Integrator1_DSTATE_l = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S65>/Integrator' */
  FMS_DW.Integrator_DSTATE_l = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S58>/Move Control' */

  /* SystemInitialize for Merge: '<S58>/Merge' */
  FMS_B.Merge = 0.0F;

  /* SystemInitialize for Merge: '<S72>/Merge' */
  FMS_B.Merge_p = 0.0F;

  /* End of SystemInitialize for SubSystem: '<S21>/Position' */
  /* End of SystemInitialize for SubSystem: '<S17>/Assist' */
  /* End of SystemInitialize for SubSystem: '<S15>/Arm' */
  /* End of SystemInitialize for SubSystem: '<Root>/FMS Commander' */
}

/* Model terminate function */
void FMS_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
