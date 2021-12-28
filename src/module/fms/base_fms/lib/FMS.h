/*
 * File: FMS.h
 *
 * Code generated for Simulink model 'FMS'.
 *
 * Model version                  : 1.1205
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Dec 28 21:03:15 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FMS_h_
#define RTW_HEADER_FMS_h_
#include <float.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#include <stddef.h>
#ifndef FMS_COMMON_INCLUDES_
# define FMS_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* FMS_COMMON_INCLUDES_ */

#include "FMS_types.h"
#include "arm_math.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<S208>/Hold Control' */
typedef struct {
  real32_T Delay_DSTATE;               /* '<S211>/Delay' */
  uint8_T icLoad;                      /* '<S211>/Delay' */
} DW_HoldControl_FMS_T;

/* Block states (default storage) for system '<S208>/Move Control' */
typedef struct {
  real32_T Integrator1_DSTATE;         /* '<S215>/Integrator1' */
  real32_T Integrator_DSTATE;          /* '<S215>/Integrator' */
} DW_MoveControl_FMS_T;

/* Block states (default storage) for system '<S209>/Motion Status' */
typedef struct {
  uint16_T temporalCounter_i1;         /* '<S209>/Motion Status' */
  uint8_T is_active_c1_FMS;            /* '<S209>/Motion Status' */
  uint8_T is_c1_FMS;                   /* '<S209>/Motion Status' */
} DW_MotionStatus_FMS_T;

/* Block states (default storage) for system '<S218>/Hold Control' */
typedef struct {
  real32_T Delay_DSTATE[2];            /* '<S221>/Delay' */
  uint8_T icLoad;                      /* '<S221>/Delay' */
} DW_HoldControl_FMS_l_T;

/* Block states (default storage) for system '<S218>/Move Control' */
typedef struct {
  real32_T Integrator1_DSTATE[2];      /* '<S228>/Integrator1' */
  real32_T Integrator_DSTATE[2];       /* '<S228>/Integrator' */
} DW_MoveControl_FMS_d_T;

/* Block states (default storage) for system '<S219>/Motion State' */
typedef struct {
  uint16_T temporalCounter_i1;         /* '<S219>/Motion State' */
  uint8_T is_active_c2_FMS;            /* '<S219>/Motion State' */
  uint8_T is_c2_FMS;                   /* '<S219>/Motion State' */
} DW_MotionState_FMS_T;

/* Block states (default storage) for system '<S152>/Hold Control' */
typedef struct {
  real32_T Delay_DSTATE;               /* '<S155>/Delay' */
  uint8_T icLoad;                      /* '<S155>/Delay' */
} DW_HoldControl_FMS_g_T;

/* Block states (default storage) for system '<S152>/Move Control' */
typedef struct {
  real32_T Integrator1_DSTATE;         /* '<S161>/Integrator1' */
  real32_T Integrator_DSTATE;          /* '<S161>/Integrator' */
} DW_MoveControl_FMS_c_T;

/* Block states (default storage) for system '<S119>/Motion State' */
typedef struct {
  uint8_T is_active_c19_FMS;           /* '<S119>/Motion State' */
  uint8_T is_c19_FMS;                  /* '<S119>/Motion State' */
  uint8_T temporalCounter_i1;          /* '<S119>/Motion State' */
} DW_MotionState_FMS_g_T;

/* Block states (default storage) for system '<S38>/Motion Status' */
typedef struct {
  uint16_T temporalCounter_i1;         /* '<S38>/Motion Status' */
  uint8_T is_active_c17_FMS;           /* '<S38>/Motion Status' */
  uint8_T is_c17_FMS;                  /* '<S38>/Motion Status' */
} DW_MotionStatus_FMS_a_T;

/* Block signals (default storage) */
typedef struct {
  INS_Out_Bus BusConversion_InsertedFor_FMSSt;
  Pilot_Cmd_Bus BusConversion_InsertedFor_FMS_f;
  Pilot_Cmd_Bus pilot_cmd;             /* '<Root>/FMS State Machine' */
  Cmd_In_Bus Cmd_In;                   /* '<Root>/FMS State Machine' */
  real_T stick_val[4];                 /* '<Root>/FMS State Machine' */
  real32_T Merge[2];                   /* '<S94>/Merge' */
  real32_T Merge_k;                    /* '<S70>/Merge' */
  real32_T Merge_d;                    /* '<S81>/Merge' */
  real32_T Merge_l;                    /* '<S37>/Merge' */
  real32_T Merge_m;                    /* '<S54>/Merge' */
  real32_T Merge_j;                    /* '<S118>/Merge' */
  real32_T Merge_o[2];                 /* '<S164>/Merge' */
  real32_T Merge_e;                    /* '<S142>/Merge' */
  real32_T Merge_n;                    /* '<S152>/Merge' */
  real32_T Merge_mv[2];                /* '<S218>/Merge' */
  real32_T Merge_mu;                   /* '<S208>/Merge' */
  VehicleState VehicleState_f;         /* '<Root>/FMS State Machine' */
  PilotMode safe_mode;                 /* '<Root>/Mode Degrade' */
  FMS_Cmd fms_cmd;                     /* '<S7>/Switch' */
  boolean_T LogicalOperator1;          /* '<S6>/Logical Operator1' */
  boolean_T Compare;                   /* '<S253>/Compare' */
} B_FMS_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T prep_takeoff;                 /* '<Root>/FMS State Machine' */
  Msg_FMS_Cmd Msg_FMS_Cmd_p[11];       /* '<Root>/FMS State Machine' */
  Queue_FMS_Cmd Queue_FMS_Cmd_o;       /* '<Root>/FMS State Machine' */
  void* M_msgInterface;                /* '<Root>/FMS State Machine' */
  void* M_msgHandle;                   /* '<Root>/FMS State Machine' */
  void* M_msgDataPtr;                  /* '<Root>/FMS State Machine' */
  real32_T DiscreteTimeIntegrator5_DSTATE[3];/* '<S255>/Discrete-Time Integrator5' */
  real32_T DiscreteTimeIntegrator5_DSTAT_d;/* '<S256>/Discrete-Time Integrator5' */
  real32_T Integrator1_DSTATE;         /* '<S50>/Integrator1' */
  real32_T Integrator_DSTATE;          /* '<S50>/Integrator' */
  real32_T Integrator1_DSTATE_o;       /* '<S51>/Integrator1' */
  real32_T Integrator_DSTATE_b;        /* '<S51>/Integrator' */
  real32_T Integrator1_DSTATE_j;       /* '<S114>/Integrator1' */
  real32_T Integrator_DSTATE_c;        /* '<S114>/Integrator' */
  real32_T Integrator1_DSTATE_jt;      /* '<S115>/Integrator1' */
  real32_T Integrator_DSTATE_cq;       /* '<S115>/Integrator' */
  real32_T Delay_DSTATE[2];            /* '<S184>/Delay' */
  real32_T l1_heading;                 /* '<S244>/Discrete-Time Integrator' */
  real32_T Delay_DSTATE_a;             /* '<S185>/Delay' */
  real32_T Integrator1_DSTATE_e;       /* '<S188>/Integrator1' */
  real32_T Integrator_DSTATE_bs;       /* '<S188>/Integrator' */
  uint32_T DelayInput1_DSTATE;         /* '<S17>/Delay Input1' */
  uint32_T DiscreteTimeIntegrator1_DSTATE;/* '<S9>/Discrete-Time Integrator1' */
  uint32_T DelayInput1_DSTATE_f;       /* '<S13>/Delay Input1' */
  uint32_T DelayInput1_DSTATE_h;       /* '<S10>/Delay Input1' */
  uint32_T DelayInput1_DSTATE_m;       /* '<S11>/Delay Input1' */
  uint32_T DiscreteTimeIntegrator_DSTATE;/* '<S21>/Discrete-Time Integrator' */
  PilotMode Delay_DSTATE_c;            /* '<S8>/Delay' */
  real32_T home[3];                    /* '<Root>/FMS State Machine' */
  real32_T stick_val[4];               /* '<Root>/FMS State Machine' */
  int32_T sfEvent;                     /* '<Root>/FMS State Machine' */
  int32_T chartAbsoluteTimeCounter;    /* '<Root>/FMS State Machine' */
  int32_T durationLastReferenceTick_1; /* '<Root>/FMS State Machine' */
  int32_T durationLastReferenceTick_1_d;/* '<Root>/FMS State Machine' */
  int32_T durationLastReferenceTick_1_l;/* '<Root>/FMS State Machine' */
  int32_T durationLastReferenceTick_1_m;/* '<Root>/FMS State Machine' */
  int32_T durationLastReferenceTick_2; /* '<Root>/FMS State Machine' */
  int32_T M_qId;                       /* '<Root>/FMS State Machine' */
  FMS_Cmd M;                           /* '<Root>/FMS State Machine' */
  FMS_Cmd cmd_prev;                    /* '<Root>/FMS State Machine' */
  FMS_Cmd cmd_start;                   /* '<Root>/FMS State Machine' */
  FMS_Cmd M_msgData;                   /* '<Root>/FMS State Machine' */
  FMS_Cmd M_msgReservedData;           /* '<Root>/FMS State Machine' */
  PilotMode mode_prev;                 /* '<Root>/FMS State Machine' */
  PilotMode mode_start;                /* '<Root>/FMS State Machine' */
  uint16_T temporalCounter_i1;         /* '<Root>/FMS State Machine' */
  uint16_T temporalCounter_i1_i;       /* '<S95>/Motion State' */
  int8_T Delay_DSTATE_g;               /* '<S7>/Delay' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S2>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_b; /* '<S18>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_f; /* '<S22>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_l; /* '<S94>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_o; /* '<S70>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_j; /* '<S81>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_m; /* '<S37>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_h; /* '<S54>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_fs;/* '<S118>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_a; /* '<S25>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_p; /* '<S164>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_pp;/* '<S142>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_bn;/* '<S152>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_k; /* '<S218>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_g; /* '<S208>/Switch Case' */
  uint8_T DiscreteTimeIntegrator5_IC_LOAD;/* '<S255>/Discrete-Time Integrator5' */
  uint8_T DiscreteTimeIntegrator5_IC_LO_a;/* '<S256>/Discrete-Time Integrator5' */
  uint8_T is_active_c3_FMS;            /* '<Root>/Mode Degrade' */
  uint8_T is_c3_FMS;                   /* '<Root>/Mode Degrade' */
  uint8_T is_active_c11_FMS;           /* '<Root>/FMS State Machine' */
  uint8_T is_Command_Listener;         /* '<Root>/FMS State Machine' */
  uint8_T is_active_Command_Listener;  /* '<Root>/FMS State Machine' */
  uint8_T is_Vehicle;                  /* '<Root>/FMS State Machine' */
  uint8_T is_active_Vehicle;           /* '<Root>/FMS State Machine' */
  uint8_T is_Arm;                      /* '<Root>/FMS State Machine' */
  uint8_T is_SubMode;                  /* '<Root>/FMS State Machine' */
  uint8_T is_Auto;                     /* '<Root>/FMS State Machine' */
  uint8_T is_Assist;                   /* '<Root>/FMS State Machine' */
  uint8_T is_Manual;                   /* '<Root>/FMS State Machine' */
  uint8_T is_Combo_Stick;              /* '<Root>/FMS State Machine' */
  uint8_T is_active_Combo_Stick;       /* '<Root>/FMS State Machine' */
  uint8_T is_active_c16_FMS;           /* '<S95>/Motion State' */
  uint8_T is_c16_FMS;                  /* '<S95>/Motion State' */
  uint8_T is_active_c15_FMS;           /* '<S153>/Motion State' */
  uint8_T is_c15_FMS;                  /* '<S153>/Motion State' */
  uint8_T temporalCounter_i1_a;        /* '<S153>/Motion State' */
  uint8_T icLoad;                      /* '<S184>/Delay' */
  uint8_T icLoad_j;                    /* '<S185>/Delay' */
  uint8_T Integrator1_IC_LOADING;      /* '<S188>/Integrator1' */
  boolean_T valid_cmd;                 /* '<Root>/FMS State Machine' */
  boolean_T bl;                        /* '<Root>/FMS State Machine' */
  boolean_T br;                        /* '<Root>/FMS State Machine' */
  boolean_T M_isValid;                 /* '<Root>/FMS State Machine' */
  boolean_T condWasTrueAtLastTimeStep_1;/* '<Root>/FMS State Machine' */
  boolean_T condWasTrueAtLastTimeStep_1_i;/* '<Root>/FMS State Machine' */
  boolean_T condWasTrueAtLastTimeStep_1_j;/* '<Root>/FMS State Machine' */
  boolean_T condWasTrueAtLastTimeStep_1_l;/* '<Root>/FMS State Machine' */
  boolean_T condWasTrueAtLastTimeStep_2;/* '<Root>/FMS State Machine' */
  DW_MoveControl_FMS_d_T MoveControl_k1;/* '<S94>/Move Control' */
  DW_HoldControl_FMS_l_T HoldControl_a;/* '<S94>/Hold Control' */
  DW_MotionState_FMS_g_T sf_MotionState_j;/* '<S82>/Motion State' */
  DW_MoveControl_FMS_c_T MoveControl_m;/* '<S81>/Move Control' */
  DW_HoldControl_FMS_g_T HoldControl_e;/* '<S81>/Hold Control' */
  DW_MotionStatus_FMS_a_T sf_MotionStatus_i;/* '<S71>/Motion Status' */
  DW_MoveControl_FMS_T MoveControl_be; /* '<S70>/Move Control' */
  DW_HoldControl_FMS_T HoldControl_p;  /* '<S70>/Hold Control' */
  DW_MotionState_FMS_g_T sf_MotionState_k;/* '<S55>/Motion State' */
  DW_MoveControl_FMS_c_T MoveControl_c;/* '<S54>/Move Control' */
  DW_HoldControl_FMS_g_T HoldControl_o;/* '<S54>/Hold Control' */
  DW_MotionStatus_FMS_a_T sf_MotionStatus_b;/* '<S38>/Motion Status' */
  DW_MoveControl_FMS_T MoveControl_l;  /* '<S37>/Move Control' */
  DW_HoldControl_FMS_T HoldControl_k2; /* '<S37>/Hold Control' */
  DW_MotionState_FMS_g_T sf_MotionState_e;/* '<S119>/Motion State' */
  DW_MoveControl_FMS_c_T MoveControl_k;/* '<S118>/Move Control' */
  DW_HoldControl_FMS_g_T HoldControl_h;/* '<S118>/Hold Control' */
  DW_MotionState_FMS_T sf_MotionState_g;/* '<S165>/Motion State' */
  DW_MoveControl_FMS_d_T MoveControl_i;/* '<S164>/Move Control' */
  DW_HoldControl_FMS_l_T HoldControl_f;/* '<S164>/Hold Control' */
  DW_MoveControl_FMS_c_T MoveControl_b;/* '<S152>/Move Control' */
  DW_HoldControl_FMS_g_T HoldControl_kq;/* '<S152>/Hold Control' */
  DW_MotionStatus_FMS_T sf_MotionStatus_j;/* '<S143>/Motion Status' */
  DW_MoveControl_FMS_T MoveControl_n;  /* '<S142>/Move Control' */
  DW_HoldControl_FMS_T HoldControl_n;  /* '<S142>/Hold Control' */
  DW_MotionState_FMS_T sf_MotionState; /* '<S219>/Motion State' */
  DW_MoveControl_FMS_d_T MoveControl_o;/* '<S218>/Move Control' */
  DW_HoldControl_FMS_l_T HoldControl_k;/* '<S218>/Hold Control' */
  DW_MotionStatus_FMS_T sf_MotionStatus;/* '<S209>/Motion Status' */
  DW_MoveControl_FMS_T MoveControl;    /* '<S208>/Move Control' */
  DW_HoldControl_FMS_T HoldControl;    /* '<S208>/Hold Control' */
} DW_FMS_T;

/* Invariant block signals for system '<S2>/Disarm' */
typedef struct {
  const uint8_T DataTypeConversion;    /* '<S19>/Data Type Conversion' */
  const uint8_T DataTypeConversion1;   /* '<S19>/Data Type Conversion1' */
} ConstB_Disarm_FMS_T;

/* Invariant block signals for system '<S208>/Move Control' */
typedef struct {
  const real32_T Square;               /* '<S216>/Square' */
  const real32_T d;                    /* '<S216>/Multiply' */
  const real32_T Gain4;                /* '<S216>/Gain4' */
} ConstB_MoveControl_FMS_T;

/* Invariant block signals for system '<S218>/Hold Control' */
typedef struct {
  const real32_T VectorConcatenate3[3];/* '<S225>/Vector Concatenate3' */
} ConstB_HoldControl_FMS_k_T;

/* Invariant block signals for system '<S218>/Move Control' */
typedef struct {
  const real32_T Square;               /* '<S229>/Square' */
  const real32_T d;                    /* '<S229>/Multiply' */
  const real32_T Gain4;                /* '<S229>/Gain4' */
} ConstB_MoveControl_FMS_k_T;

/* Invariant block signals for system '<S152>/Move Control' */
typedef struct {
  const real32_T Square;               /* '<S162>/Square' */
  const real32_T d;                    /* '<S162>/Multiply' */
  const real32_T Gain4;                /* '<S162>/Gain4' */
} ConstB_MoveControl_FMS_f_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real32_T Square;               /* '<S52>/Square' */
  const real32_T d;                    /* '<S52>/Multiply' */
  const real32_T Gain4;                /* '<S52>/Gain4' */
  const real32_T Square_d;             /* '<S53>/Square' */
  const real32_T d_c;                  /* '<S53>/Multiply' */
  const real32_T Gain4_m;              /* '<S53>/Gain4' */
  const real32_T Square_m;             /* '<S116>/Square' */
  const real32_T d_d;                  /* '<S116>/Multiply' */
  const real32_T Gain4_n;              /* '<S116>/Gain4' */
  const real32_T Square_n;             /* '<S117>/Square' */
  const real32_T d_o;                  /* '<S117>/Multiply' */
  const real32_T Gain4_n3;             /* '<S117>/Gain4' */
  const real32_T VectorConcatenate3[3];/* '<S247>/Vector Concatenate3' */
  const real32_T TmpSignalConversionAtMathFu[2];
  const real32_T MathFunction[2];      /* '<S198>/Math Function' */
  const real32_T SumofElements;        /* '<S198>/Sum of Elements' */
  const real32_T MathFunction1;        /* '<S198>/Math Function1' */
  const real32_T Product[2];           /* '<S198>/Product' */
  const real32_T Switch[3];            /* '<S198>/Switch' */
  const real32_T Divide[2];            /* '<S198>/Divide' */
  const real32_T Square_k;             /* '<S194>/Square' */
  const real32_T d_l;                  /* '<S194>/Multiply' */
  const real32_T Gain4_np;             /* '<S194>/Gain4' */
  const real32_T VectorConcatenate3_f[3];/* '<S181>/Vector Concatenate3' */
  const real32_T VectorConcatenate3_fb[3];/* '<S251>/Vector Concatenate3' */
  const uint8_T DataTypeConversion;    /* '<S24>/Data Type Conversion' */
  const uint8_T DataTypeConversion1;   /* '<S24>/Data Type Conversion1' */
  const uint8_T DataTypeConversion_b;  /* '<S29>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_o; /* '<S29>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2;   /* '<S29>/Data Type Conversion2' */
  const uint8_T DataTypeConversion1_d; /* '<S28>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_n; /* '<S28>/Data Type Conversion2' */
  const uint8_T DataTypeConversion3;   /* '<S28>/Data Type Conversion3' */
  const uint8_T DataTypeConversion_ba; /* '<S30>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_k; /* '<S30>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_o; /* '<S30>/Data Type Conversion2' */
  const uint8_T DataTypeConversion_j;  /* '<S27>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_do;/* '<S27>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_b; /* '<S27>/Data Type Conversion2' */
  const uint8_T DataTypeConversion_l;  /* '<S131>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_b; /* '<S131>/Data Type Conversion1' */
  const uint8_T DataTypeConversion_a;  /* '<S132>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_n; /* '<S132>/Data Type Conversion1' */
  const uint8_T DataTypeConversion_g;  /* '<S134>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_i; /* '<S134>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_j; /* '<S134>/Data Type Conversion2' */
  const uint8_T DataTypeConversion_o;  /* '<S136>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_m; /* '<S136>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_p; /* '<S136>/Data Type Conversion2' */
  const uint8_T DataTypeConversion_c;  /* '<S135>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_h; /* '<S135>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_m; /* '<S135>/Data Type Conversion2' */
  const uint8_T DataTypeConversion_ld; /* '<S137>/Data Type Conversion' */
  const uint8_T DataTypeConversion1_dh;/* '<S137>/Data Type Conversion1' */
  const uint8_T DataTypeConversion2_d; /* '<S137>/Data Type Conversion2' */
  const uint8_T DataTypeConversion2_h; /* '<S20>/Data Type Conversion2' */
  const uint8_T DataTypeConversion1_f; /* '<S20>/Data Type Conversion1' */
  ConstB_Disarm_FMS_T Unknown;         /* '<S18>/Unknown' */
  ConstB_Disarm_FMS_T Unknown_i;       /* '<S22>/Unknown' */
  ConstB_MoveControl_FMS_k_T MoveControl_k1;/* '<S94>/Move Control' */
  ConstB_HoldControl_FMS_k_T HoldControl_a;/* '<S94>/Hold Control' */
  ConstB_MoveControl_FMS_f_T MoveControl_m;/* '<S81>/Move Control' */
  ConstB_MoveControl_FMS_T MoveControl_be;/* '<S70>/Move Control' */
  ConstB_MoveControl_FMS_f_T MoveControl_c;/* '<S54>/Move Control' */
  ConstB_MoveControl_FMS_T MoveControl_l;/* '<S37>/Move Control' */
  ConstB_MoveControl_FMS_f_T MoveControl_k;/* '<S118>/Move Control' */
  ConstB_Disarm_FMS_T Unknown_d;       /* '<S23>/Unknown' */
  ConstB_Disarm_FMS_T Unknown_g;       /* '<S25>/Unknown' */
  ConstB_MoveControl_FMS_k_T MoveControl_i;/* '<S164>/Move Control' */
  ConstB_HoldControl_FMS_k_T HoldControl_f;/* '<S164>/Hold Control' */
  ConstB_MoveControl_FMS_f_T MoveControl_b;/* '<S152>/Move Control' */
  ConstB_MoveControl_FMS_T MoveControl_n;/* '<S142>/Move Control' */
  ConstB_MoveControl_FMS_k_T MoveControl_o;/* '<S218>/Move Control' */
  ConstB_HoldControl_FMS_k_T HoldControl_k;/* '<S218>/Hold Control' */
  ConstB_MoveControl_FMS_T MoveControl;/* '<S208>/Move Control' */
  ConstB_Disarm_FMS_T Disarm;          /* '<S2>/Disarm' */
} ConstB_FMS_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  Pilot_Cmd_Bus Pilot_Cmd;             /* '<Root>/Pilot_Cmd' */
  Auto_Cmd_Bus Auto_Cmd;               /* '<Root>/Auto_Cmd' */
  GCS_Cmd_Bus GCS_Cmd;                 /* '<Root>/GCS_Cmd' */
  INS_Out_Bus INS_Out;                 /* '<Root>/INS_Out' */
  Control_Out_Bus Control_Out;         /* '<Root>/Control_Out' */
} ExtU_FMS_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  FMS_Out_Bus FMS_Out;                 /* '<Root>/FMS_Out' */
} ExtY_FMS_T;

/* Real-time Model Data Structure */
struct tag_RTM_FMS_T {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
extern B_FMS_T FMS_B;

/* Block states (default storage) */
extern DW_FMS_T FMS_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_FMS_T FMS_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_FMS_T FMS_Y;

/* External data declarations for dependent source files */
extern const FMS_Out_Bus FMS_rtZFMS_Out_Bus;/* FMS_Out_Bus ground */
extern const ConstB_FMS_T FMS_ConstB;  /* constant block i/o */

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern struct_5vUBwe4VfGkNikzOx8lYKF FMS_PARAM;/* Variable: FMS_PARAM
                                                * Referenced by:
                                                *   '<S35>/Gain'
                                                *   '<S35>/Gain1'
                                                *   '<S109>/Gain'
                                                *   '<S109>/Gain1'
                                                *   '<S177>/Saturation1'
                                                *   '<S248>/Gain2'
                                                *   '<S248>/Saturation1'
                                                *   '<S37>/Saturation1'
                                                *   '<S48>/Dead Zone'
                                                *   '<S48>/Gain'
                                                *   '<S49>/Dead Zone'
                                                *   '<S49>/Gain'
                                                *   '<S54>/Saturation'
                                                *   '<S70>/Saturation1'
                                                *   '<S81>/Saturation'
                                                *   '<S94>/Saturation1'
                                                *   '<S112>/Dead Zone'
                                                *   '<S112>/Gain'
                                                *   '<S113>/Dead Zone'
                                                *   '<S113>/Gain'
                                                *   '<S118>/Saturation'
                                                *   '<S142>/Saturation1'
                                                *   '<S152>/Saturation'
                                                *   '<S164>/Saturation1'
                                                *   '<S178>/Gain2'
                                                *   '<S40>/Gain2'
                                                *   '<S41>/Gain1'
                                                *   '<S46>/Constant'
                                                *   '<S57>/Gain2'
                                                *   '<S58>/Gain1'
                                                *   '<S65>/Constant'
                                                *   '<S73>/Gain2'
                                                *   '<S74>/Gain1'
                                                *   '<S79>/Constant'
                                                *   '<S84>/Gain2'
                                                *   '<S85>/Gain1'
                                                *   '<S92>/Constant'
                                                *   '<S97>/Gain2'
                                                *   '<S98>/Gain6'
                                                *   '<S106>/Constant'
                                                *   '<S107>/Constant'
                                                *   '<S121>/Gain2'
                                                *   '<S122>/Gain1'
                                                *   '<S129>/Constant'
                                                *   '<S145>/Gain2'
                                                *   '<S146>/Gain1'
                                                *   '<S155>/Gain2'
                                                *   '<S156>/Gain1'
                                                *   '<S167>/Gain2'
                                                *   '<S168>/Gain6'
                                                *   '<S187>/Gain2'
                                                *   '<S187>/Saturation'
                                                *   '<S188>/Integrator'
                                                *   '<S43>/Dead Zone'
                                                *   '<S43>/Gain'
                                                *   '<S62>/Dead Zone'
                                                *   '<S62>/Gain'
                                                *   '<S76>/Dead Zone'
                                                *   '<S76>/Gain'
                                                *   '<S89>/Dead Zone'
                                                *   '<S89>/Gain'
                                                *   '<S102>/Dead Zone'
                                                *   '<S102>/Gain'
                                                *   '<S103>/Dead Zone'
                                                *   '<S103>/Gain'
                                                *   '<S126>/Dead Zone'
                                                *   '<S126>/Gain'
                                                *   '<S148>/Dead Zone'
                                                *   '<S148>/Gain'
                                                *   '<S160>/Dead Zone'
                                                *   '<S160>/Gain'
                                                *   '<S172>/Dead Zone'
                                                *   '<S172>/Gain'
                                                *   '<S173>/Dead Zone'
                                                *   '<S173>/Gain'
                                                *   '<S208>/Saturation1'
                                                *   '<S218>/Saturation1'
                                                *   '<S211>/Gain2'
                                                *   '<S212>/Gain1'
                                                *   '<S221>/Gain2'
                                                *   '<S222>/Gain6'
                                                *   '<S214>/Dead Zone'
                                                *   '<S214>/Gain'
                                                *   '<S226>/Dead Zone'
                                                *   '<S226>/Gain'
                                                *   '<S227>/Dead Zone'
                                                *   '<S227>/Gain'
                                                */
extern struct_TYt7YeNdxIDXfczXumtXXB FMS_EXPORT;/* Variable: FMS_EXPORT
                                                 * Referenced by:
                                                 *   '<S9>/Constant1'
                                                 *   '<S21>/Constant'
                                                 */

/* Model entry point functions */
extern void FMS_init(void);
extern void FMS_step(void);
extern void FMS_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FMS_T *const FMS_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S15>/Compare' : Unused code path elimination
 * Block '<S15>/Constant' : Unused code path elimination
 * Block '<S9>/Constant' : Unused code path elimination
 * Block '<S16>/Delay Input1' : Unused code path elimination
 * Block '<S16>/FixPt Relational Operator' : Unused code path elimination
 * Block '<S9>/Discrete-Time Integrator' : Unused code path elimination
 * Block '<S198>/Data Type Duplicate' : Unused code path elimination
 * Block '<S199>/Data Type Duplicate' : Unused code path elimination
 * Block '<S241>/Data Type Duplicate' : Unused code path elimination
 * Block '<S242>/Data Type Duplicate' : Unused code path elimination
 * Block '<S238>/Data Type Duplicate' : Unused code path elimination
 * Block '<S239>/Data Type Duplicate' : Unused code path elimination
 * Block '<S245>/Data Type Duplicate' : Unused code path elimination
 * Block '<S257>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S135>/Reshape' : Reshape block reduction
 * Block '<S202>/Reshape' : Reshape block reduction
 * Block '<S184>/Reshape' : Reshape block reduction
 * Block '<S184>/Reshape1' : Reshape block reduction
 * Block '<S184>/Reshape2' : Reshape block reduction
 * Block '<S248>/Reshape' : Reshape block reduction
 * Block '<S21>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S3>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S255>/Data Type Conversion' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'FMS'
 * '<S1>'   : 'FMS/Command Process'
 * '<S2>'   : 'FMS/FMS Commander'
 * '<S3>'   : 'FMS/FMS Input'
 * '<S4>'   : 'FMS/FMS State Machine'
 * '<S5>'   : 'FMS/Mode Degrade'
 * '<S6>'   : 'FMS/Onground Check'
 * '<S7>'   : 'FMS/Command Process/Command Routing'
 * '<S8>'   : 'FMS/Command Process/Mode Routing'
 * '<S9>'   : 'FMS/Command Process/Subsystem'
 * '<S10>'  : 'FMS/Command Process/Command Routing/Detect Change1'
 * '<S11>'  : 'FMS/Command Process/Command Routing/Detect Change2'
 * '<S12>'  : 'FMS/Command Process/Mode Routing/Compare To Zero'
 * '<S13>'  : 'FMS/Command Process/Mode Routing/Detect Change'
 * '<S14>'  : 'FMS/Command Process/Subsystem/Compare To Constant1'
 * '<S15>'  : 'FMS/Command Process/Subsystem/Compare To Constant4'
 * '<S16>'  : 'FMS/Command Process/Subsystem/Detect Change'
 * '<S17>'  : 'FMS/Command Process/Subsystem/Detect Change1'
 * '<S18>'  : 'FMS/FMS Commander/Arm'
 * '<S19>'  : 'FMS/FMS Commander/Disarm'
 * '<S20>'  : 'FMS/FMS Commander/Standby'
 * '<S21>'  : 'FMS/FMS Commander/timestamp'
 * '<S22>'  : 'FMS/FMS Commander/Arm/Assist'
 * '<S23>'  : 'FMS/FMS Commander/Arm/Auto'
 * '<S24>'  : 'FMS/FMS Commander/Arm/Manual'
 * '<S25>'  : 'FMS/FMS Commander/Arm/SubMode'
 * '<S26>'  : 'FMS/FMS Commander/Arm/Unknown'
 * '<S27>'  : 'FMS/FMS Commander/Arm/Assist/Acro'
 * '<S28>'  : 'FMS/FMS Commander/Arm/Assist/Altitude'
 * '<S29>'  : 'FMS/FMS Commander/Arm/Assist/Position'
 * '<S30>'  : 'FMS/FMS Commander/Arm/Assist/Stabilize'
 * '<S31>'  : 'FMS/FMS Commander/Arm/Assist/Unknown'
 * '<S32>'  : 'FMS/FMS Commander/Arm/Assist/Acro/Angular Rate Command'
 * '<S33>'  : 'FMS/FMS Commander/Arm/Assist/Acro/Throttle Command'
 * '<S34>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Altitude Command'
 * '<S35>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Attitude Command'
 * '<S36>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Heading Command'
 * '<S37>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Altitude Command/Controller'
 * '<S38>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Altitude Command/Detect Movement'
 * '<S39>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Altitude Command/Controller/Brake Control'
 * '<S40>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Altitude Command/Controller/Hold Control'
 * '<S41>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Altitude Command/Controller/Move Control'
 * '<S42>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Altitude Command/Controller/Hold Control/Bus_Selection'
 * '<S43>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Altitude Command/Controller/Move Control/DeadZone'
 * '<S44>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Altitude Command/Controller/Move Control/TD1'
 * '<S45>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Altitude Command/Controller/Move Control/TD1/fhan '
 * '<S46>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Altitude Command/Detect Movement/Compare To Constant'
 * '<S47>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Altitude Command/Detect Movement/Motion Status'
 * '<S48>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Attitude Command/DeadZone'
 * '<S49>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Attitude Command/DeadZone2'
 * '<S50>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Attitude Command/Phi_CMD_TD'
 * '<S51>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Attitude Command/Theta_CMD_TD'
 * '<S52>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Attitude Command/Phi_CMD_TD/fhan '
 * '<S53>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Attitude Command/Theta_CMD_TD/fhan '
 * '<S54>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Heading Command/Controller'
 * '<S55>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Heading Command/Detect Movement'
 * '<S56>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Heading Command/Controller/Brake Control'
 * '<S57>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Heading Command/Controller/Hold Control'
 * '<S58>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Heading Command/Controller/Move Control'
 * '<S59>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Heading Command/Controller/Hold Control/Bus_Selection'
 * '<S60>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Heading Command/Controller/Hold Control/psi_err_saturation'
 * '<S61>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Heading Command/Controller/Hold Control/psi_err_saturation/Compare To Constant'
 * '<S62>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Heading Command/Controller/Move Control/DeadZone'
 * '<S63>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Heading Command/Controller/Move Control/TD'
 * '<S64>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Heading Command/Controller/Move Control/TD/fhan '
 * '<S65>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Heading Command/Detect Movement/Compare To Constant'
 * '<S66>'  : 'FMS/FMS Commander/Arm/Assist/Altitude/Heading Command/Detect Movement/Motion State'
 * '<S67>'  : 'FMS/FMS Commander/Arm/Assist/Position/Altitude Command'
 * '<S68>'  : 'FMS/FMS Commander/Arm/Assist/Position/Heading Command'
 * '<S69>'  : 'FMS/FMS Commander/Arm/Assist/Position/Position Command'
 * '<S70>'  : 'FMS/FMS Commander/Arm/Assist/Position/Altitude Command/Controller'
 * '<S71>'  : 'FMS/FMS Commander/Arm/Assist/Position/Altitude Command/Detect Movement'
 * '<S72>'  : 'FMS/FMS Commander/Arm/Assist/Position/Altitude Command/Controller/Brake Control'
 * '<S73>'  : 'FMS/FMS Commander/Arm/Assist/Position/Altitude Command/Controller/Hold Control'
 * '<S74>'  : 'FMS/FMS Commander/Arm/Assist/Position/Altitude Command/Controller/Move Control'
 * '<S75>'  : 'FMS/FMS Commander/Arm/Assist/Position/Altitude Command/Controller/Hold Control/Bus_Selection'
 * '<S76>'  : 'FMS/FMS Commander/Arm/Assist/Position/Altitude Command/Controller/Move Control/DeadZone'
 * '<S77>'  : 'FMS/FMS Commander/Arm/Assist/Position/Altitude Command/Controller/Move Control/TD1'
 * '<S78>'  : 'FMS/FMS Commander/Arm/Assist/Position/Altitude Command/Controller/Move Control/TD1/fhan '
 * '<S79>'  : 'FMS/FMS Commander/Arm/Assist/Position/Altitude Command/Detect Movement/Compare To Constant'
 * '<S80>'  : 'FMS/FMS Commander/Arm/Assist/Position/Altitude Command/Detect Movement/Motion Status'
 * '<S81>'  : 'FMS/FMS Commander/Arm/Assist/Position/Heading Command/Controller'
 * '<S82>'  : 'FMS/FMS Commander/Arm/Assist/Position/Heading Command/Detect Movement'
 * '<S83>'  : 'FMS/FMS Commander/Arm/Assist/Position/Heading Command/Controller/Brake Control'
 * '<S84>'  : 'FMS/FMS Commander/Arm/Assist/Position/Heading Command/Controller/Hold Control'
 * '<S85>'  : 'FMS/FMS Commander/Arm/Assist/Position/Heading Command/Controller/Move Control'
 * '<S86>'  : 'FMS/FMS Commander/Arm/Assist/Position/Heading Command/Controller/Hold Control/Bus_Selection'
 * '<S87>'  : 'FMS/FMS Commander/Arm/Assist/Position/Heading Command/Controller/Hold Control/psi_err_saturation'
 * '<S88>'  : 'FMS/FMS Commander/Arm/Assist/Position/Heading Command/Controller/Hold Control/psi_err_saturation/Compare To Constant'
 * '<S89>'  : 'FMS/FMS Commander/Arm/Assist/Position/Heading Command/Controller/Move Control/DeadZone'
 * '<S90>'  : 'FMS/FMS Commander/Arm/Assist/Position/Heading Command/Controller/Move Control/TD'
 * '<S91>'  : 'FMS/FMS Commander/Arm/Assist/Position/Heading Command/Controller/Move Control/TD/fhan '
 * '<S92>'  : 'FMS/FMS Commander/Arm/Assist/Position/Heading Command/Detect Movement/Compare To Constant'
 * '<S93>'  : 'FMS/FMS Commander/Arm/Assist/Position/Heading Command/Detect Movement/Motion State'
 * '<S94>'  : 'FMS/FMS Commander/Arm/Assist/Position/Position Command/Controller'
 * '<S95>'  : 'FMS/FMS Commander/Arm/Assist/Position/Position Command/Detect Movement'
 * '<S96>'  : 'FMS/FMS Commander/Arm/Assist/Position/Position Command/Controller/Brake Control'
 * '<S97>'  : 'FMS/FMS Commander/Arm/Assist/Position/Position Command/Controller/Hold Control'
 * '<S98>'  : 'FMS/FMS Commander/Arm/Assist/Position/Position Command/Controller/Move Control'
 * '<S99>'  : 'FMS/FMS Commander/Arm/Assist/Position/Position Command/Controller/Hold Control/Bus_Selection'
 * '<S100>' : 'FMS/FMS Commander/Arm/Assist/Position/Position Command/Controller/Hold Control/Psi To DCM'
 * '<S101>' : 'FMS/FMS Commander/Arm/Assist/Position/Position Command/Controller/Hold Control/Psi To DCM/Rotation Matrix Z'
 * '<S102>' : 'FMS/FMS Commander/Arm/Assist/Position/Position Command/Controller/Move Control/DeadZone'
 * '<S103>' : 'FMS/FMS Commander/Arm/Assist/Position/Position Command/Controller/Move Control/DeadZone1'
 * '<S104>' : 'FMS/FMS Commander/Arm/Assist/Position/Position Command/Controller/Move Control/TD'
 * '<S105>' : 'FMS/FMS Commander/Arm/Assist/Position/Position Command/Controller/Move Control/TD/fhan '
 * '<S106>' : 'FMS/FMS Commander/Arm/Assist/Position/Position Command/Detect Movement/Compare To Constant'
 * '<S107>' : 'FMS/FMS Commander/Arm/Assist/Position/Position Command/Detect Movement/Compare To Constant1'
 * '<S108>' : 'FMS/FMS Commander/Arm/Assist/Position/Position Command/Detect Movement/Motion State'
 * '<S109>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Attitude Command'
 * '<S110>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Heading Command'
 * '<S111>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Throttle Command'
 * '<S112>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Attitude Command/DeadZone'
 * '<S113>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Attitude Command/DeadZone2'
 * '<S114>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Attitude Command/Phi_CMD_TD'
 * '<S115>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Attitude Command/Theta_CMD_TD'
 * '<S116>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Attitude Command/Phi_CMD_TD/fhan '
 * '<S117>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Attitude Command/Theta_CMD_TD/fhan '
 * '<S118>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Heading Command/Controller'
 * '<S119>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Heading Command/Detect Movement'
 * '<S120>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Heading Command/Controller/Brake Control'
 * '<S121>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Heading Command/Controller/Hold Control'
 * '<S122>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Heading Command/Controller/Move Control'
 * '<S123>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Heading Command/Controller/Hold Control/Bus_Selection'
 * '<S124>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Heading Command/Controller/Hold Control/psi_err_saturation'
 * '<S125>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Heading Command/Controller/Hold Control/psi_err_saturation/Compare To Constant'
 * '<S126>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Heading Command/Controller/Move Control/DeadZone'
 * '<S127>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Heading Command/Controller/Move Control/TD'
 * '<S128>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Heading Command/Controller/Move Control/TD/fhan '
 * '<S129>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Heading Command/Detect Movement/Compare To Constant'
 * '<S130>' : 'FMS/FMS Commander/Arm/Assist/Stabilize/Heading Command/Detect Movement/Motion State'
 * '<S131>' : 'FMS/FMS Commander/Arm/Auto/Mission'
 * '<S132>' : 'FMS/FMS Commander/Arm/Auto/Offboard'
 * '<S133>' : 'FMS/FMS Commander/Arm/Auto/Unknown'
 * '<S134>' : 'FMS/FMS Commander/Arm/SubMode/Hold'
 * '<S135>' : 'FMS/FMS Commander/Arm/SubMode/Land'
 * '<S136>' : 'FMS/FMS Commander/Arm/SubMode/Return'
 * '<S137>' : 'FMS/FMS Commander/Arm/SubMode/Takeoff'
 * '<S138>' : 'FMS/FMS Commander/Arm/SubMode/Unknown'
 * '<S139>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Altitude Hold'
 * '<S140>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Heading Hold'
 * '<S141>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Position Hold'
 * '<S142>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Altitude Hold/Controller'
 * '<S143>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Altitude Hold/Detect Movement'
 * '<S144>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Altitude Hold/Controller/Brake Control'
 * '<S145>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Altitude Hold/Controller/Hold Control'
 * '<S146>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Altitude Hold/Controller/Move Control'
 * '<S147>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Altitude Hold/Controller/Hold Control/Bus_Selection'
 * '<S148>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Altitude Hold/Controller/Move Control/DeadZone'
 * '<S149>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Altitude Hold/Controller/Move Control/TD1'
 * '<S150>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Altitude Hold/Controller/Move Control/TD1/fhan '
 * '<S151>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Altitude Hold/Detect Movement/Motion Status'
 * '<S152>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Heading Hold/Controller'
 * '<S153>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Heading Hold/Detect Movement'
 * '<S154>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Heading Hold/Controller/Brake Control'
 * '<S155>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Heading Hold/Controller/Hold Control'
 * '<S156>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Heading Hold/Controller/Move Control'
 * '<S157>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Heading Hold/Controller/Hold Control/Bus_Selection'
 * '<S158>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Heading Hold/Controller/Hold Control/psi_err_saturation'
 * '<S159>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Heading Hold/Controller/Hold Control/psi_err_saturation/Compare To Constant'
 * '<S160>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Heading Hold/Controller/Move Control/DeadZone'
 * '<S161>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Heading Hold/Controller/Move Control/TD'
 * '<S162>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Heading Hold/Controller/Move Control/TD/fhan '
 * '<S163>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Heading Hold/Detect Movement/Motion State'
 * '<S164>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Position Hold/Controller'
 * '<S165>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Position Hold/Detect Movement'
 * '<S166>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Position Hold/Controller/Brake Control'
 * '<S167>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Position Hold/Controller/Hold Control'
 * '<S168>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Position Hold/Controller/Move Control'
 * '<S169>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Position Hold/Controller/Hold Control/Bus_Selection'
 * '<S170>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Position Hold/Controller/Hold Control/Psi To DCM'
 * '<S171>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Position Hold/Controller/Hold Control/Psi To DCM/Rotation Matrix Z'
 * '<S172>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Position Hold/Controller/Move Control/DeadZone'
 * '<S173>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Position Hold/Controller/Move Control/DeadZone1'
 * '<S174>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Position Hold/Controller/Move Control/TD'
 * '<S175>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Position Hold/Controller/Move Control/TD/fhan '
 * '<S176>' : 'FMS/FMS Commander/Arm/SubMode/Hold/Position Hold/Detect Movement/Motion State'
 * '<S177>' : 'FMS/FMS Commander/Arm/SubMode/Land/Position Command'
 * '<S178>' : 'FMS/FMS Commander/Arm/SubMode/Land/Position Command/Position Control'
 * '<S179>' : 'FMS/FMS Commander/Arm/SubMode/Land/Position Command/Position Control/Bus_Selection'
 * '<S180>' : 'FMS/FMS Commander/Arm/SubMode/Land/Position Command/Position Control/Psi To DCM'
 * '<S181>' : 'FMS/FMS Commander/Arm/SubMode/Land/Position Command/Position Control/Psi To DCM/Rotation Matrix Z'
 * '<S182>' : 'FMS/FMS Commander/Arm/SubMode/Return/Heading Commander'
 * '<S183>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander'
 * '<S184>' : 'FMS/FMS Commander/Arm/SubMode/Return/Way Points'
 * '<S185>' : 'FMS/FMS Commander/Arm/SubMode/Return/Heading Commander/Heading Control'
 * '<S186>' : 'FMS/FMS Commander/Arm/SubMode/Return/Heading Commander/Included Angle'
 * '<S187>' : 'FMS/FMS Commander/Arm/SubMode/Return/Heading Commander/Heading Control/Heading Control'
 * '<S188>' : 'FMS/FMS Commander/Arm/SubMode/Return/Heading Commander/Heading Control/TD'
 * '<S189>' : 'FMS/FMS Commander/Arm/SubMode/Return/Heading Commander/Heading Control/psi_saturation'
 * '<S190>' : 'FMS/FMS Commander/Arm/SubMode/Return/Heading Commander/Heading Control/psi_saturation1'
 * '<S191>' : 'FMS/FMS Commander/Arm/SubMode/Return/Heading Commander/Heading Control/Heading Control/Bus_Selection'
 * '<S192>' : 'FMS/FMS Commander/Arm/SubMode/Return/Heading Commander/Heading Control/Heading Control/psi_saturation'
 * '<S193>' : 'FMS/FMS Commander/Arm/SubMode/Return/Heading Commander/Heading Control/Heading Control/psi_saturation/Compare To Constant'
 * '<S194>' : 'FMS/FMS Commander/Arm/SubMode/Return/Heading Commander/Heading Control/TD/fhan '
 * '<S195>' : 'FMS/FMS Commander/Arm/SubMode/Return/Heading Commander/Heading Control/psi_saturation/Compare To Constant'
 * '<S196>' : 'FMS/FMS Commander/Arm/SubMode/Return/Heading Commander/Heading Control/psi_saturation1/Compare To Constant'
 * '<S197>' : 'FMS/FMS Commander/Arm/SubMode/Return/Heading Commander/Included Angle/2D Cross Product'
 * '<S198>' : 'FMS/FMS Commander/Arm/SubMode/Return/Heading Commander/Included Angle/Vector Normalize'
 * '<S199>' : 'FMS/FMS Commander/Arm/SubMode/Return/Heading Commander/Included Angle/Vector Normalize1'
 * '<S200>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Cruise Speed '
 * '<S201>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position'
 * '<S202>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/L1 Reference WP'
 * '<S203>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration'
 * '<S204>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration To Speed'
 * '<S205>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Cruise Speed /Vector Modulus'
 * '<S206>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold'
 * '<S207>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold'
 * '<S208>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Controller'
 * '<S209>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Detect Movement'
 * '<S210>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Controller/Brake Control'
 * '<S211>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Controller/Hold Control'
 * '<S212>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Controller/Move Control'
 * '<S213>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Controller/Hold Control/Bus_Selection'
 * '<S214>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Controller/Move Control/DeadZone'
 * '<S215>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Controller/Move Control/TD1'
 * '<S216>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Controller/Move Control/TD1/fhan '
 * '<S217>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Altitude Hold/Detect Movement/Motion Status'
 * '<S218>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller'
 * '<S219>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Detect Movement'
 * '<S220>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Brake Control'
 * '<S221>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Hold Control'
 * '<S222>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Move Control'
 * '<S223>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Hold Control/Bus_Selection'
 * '<S224>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Hold Control/Psi To DCM'
 * '<S225>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Hold Control/Psi To DCM/Rotation Matrix Z'
 * '<S226>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Move Control/DeadZone'
 * '<S227>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Move Control/DeadZone1'
 * '<S228>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Move Control/TD'
 * '<S229>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Controller/Move Control/TD/fhan '
 * '<S230>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Hold Position/Position Hold/Detect Movement/Motion State'
 * '<S231>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/L1 Reference WP/Compare To Constant'
 * '<S232>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/L1 Reference WP/Compare To Constant1'
 * '<S233>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/L1 Reference WP/NearbyRefWP'
 * '<S234>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/L1 Reference WP/OutRegionRegWP'
 * '<S235>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/L1 Reference WP/SearchL1RefWP'
 * '<S236>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration/Included Angle'
 * '<S237>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration/Vector Modulus'
 * '<S238>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration/Vector Normalize'
 * '<S239>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration/Vector Normalize1'
 * '<S240>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration/Included Angle/2D Cross Product'
 * '<S241>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration/Included Angle/Vector Normalize'
 * '<S242>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration/Included Angle/Vector Normalize1'
 * '<S243>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration To Speed/Ground Speed'
 * '<S244>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration To Speed/Rotation Matrix'
 * '<S245>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration To Speed/Ground Speed/Vector Normalize2'
 * '<S246>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration To Speed/Rotation Matrix/Psi To DCM'
 * '<S247>' : 'FMS/FMS Commander/Arm/SubMode/Return/Velocity Commander/Lateral Acceleration To Speed/Rotation Matrix/Psi To DCM/Rotation Matrix Z'
 * '<S248>' : 'FMS/FMS Commander/Arm/SubMode/Takeoff/Hold Position'
 * '<S249>' : 'FMS/FMS Commander/Arm/SubMode/Takeoff/Hold Position/Bus_Selection'
 * '<S250>' : 'FMS/FMS Commander/Arm/SubMode/Takeoff/Hold Position/Psi To DCM'
 * '<S251>' : 'FMS/FMS Commander/Arm/SubMode/Takeoff/Hold Position/Psi To DCM/Rotation Matrix Z'
 * '<S252>' : 'FMS/FMS State Machine/Vehicle.StickMoved'
 * '<S253>' : 'FMS/FMS State Machine/Vehicle.StickMoved/Compare To Constant'
 * '<S254>' : 'FMS/Onground Check/Compare To Constant'
 * '<S255>' : 'FMS/Onground Check/First Order LPF'
 * '<S256>' : 'FMS/Onground Check/First Order LPF2'
 * '<S257>' : 'FMS/Onground Check/Interval Test'
 */
#endif                                 /* RTW_HEADER_FMS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
