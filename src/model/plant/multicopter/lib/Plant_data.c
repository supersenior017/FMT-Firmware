/*
 * File: Plant_data.c
 *
 * Code generated for Simulink model 'Plant'.
 *
 * Model version                  : 1.752
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Mar 15 15:44:51 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Plant.h"
#include "Plant_private.h"

/* Invariant block signals (default storage) */
const ConstB_Plant_T Plant_ConstB = {
  1.9966471893352524,                  /* '<S89>/Sum' */
  0.0066943799901413165,               /* '<S89>/Multiply3' */
  0.99330562000985867,                 /* '<S89>/Sum4' */
  1.9966471868221032,                  /* '<S31>/Subtract1' */
  0.00669438499958795,                 /* '<S31>/Product1' */

  { 1.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 1.0F },/* '<S124>/Add' */

  { 0.0F, 0.0F, 1.0F },                /* '<S123>/Vector Concatenate3' */

  { 0.0F, 1.0F, 0.0F },                /* '<S122>/Vector Concatenate3' */

  { 1.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 1.0F },/* '<S102>/Add' */

  { 1.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 1.0F },/* '<S113>/Add' */

  { 1.0F, 0.0F, 0.0F, 0.0F },          /* '<S40>/quat0' */

  { 0.0F, 0.0F, 1.0F },                /* '<S11>/Vector Concatenate3' */
  3U,                                  /* '<S77>/Data Type Conversion' */
  11U                                  /* '<S77>/Data Type Conversion1' */
};

/* Constant parameters (default storage) */
const ConstP_Plant_T Plant_ConstP = {
  /* Expression: gain
   * Referenced by: '<S96>/Gain4'
   */
  { 20.0, 20.0, 15.0 },

  /* Computed Parameter: X_Frame_CM_Value
   * Referenced by: '<S19>/X_Frame_CM'
   */
  { -1.971237E-6F, 1.971237E-6F, 1.982E-7F, 1.971237E-6F, -1.971237E-6F,
    1.982E-7F, 1.971237E-6F, 1.971237E-6F, -1.982E-7F, -1.971237E-6F,
    -1.971237E-6F, -1.982E-7F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<Root>/Constant'
   *   '<S41>/Constant'
   *   '<S12>/Rotor_Delay'
   *   '<S13>/Constant'
   *   '<S13>/Constant1'
   *   '<S35>/Constant'
   *   '<S37>/Constant'
   *   '<S15>/Saturation1'
   *   '<S49>/Constant'
   *   '<S49>/Constant1'
   *   '<S49>/Constant2'
   *   '<S49>/Constant3'
   *   '<S79>/Saturation'
   *   '<S82>/Delay1'
   *   '<S11>/Constant1'
   *   '<S11>/Constant2'
   *   '<S11>/Constant3'
   *   '<S11>/Constant4'
   *   '<S74>/Limit  altitude  to Stratosphere'
   *   '<S74>/Limit  altitude  to troposhere'
   *   '<S75>/Constant3'
   *   '<S76>/Random Source'
   *   '<S85>/Random Source'
   *   '<S85>/Random Source1'
   *   '<S88>/Discrete FIR Filter'
   *   '<S103>/Random Source'
   *   '<S114>/Random Source'
   *   '<S125>/Random Source'
   *   '<S122>/Constant'
   *   '<S122>/Constant2'
   *   '<S122>/Constant3'
   *   '<S122>/Constant4'
   *   '<S123>/Constant1'
   *   '<S123>/Constant2'
   *   '<S123>/Constant3'
   *   '<S123>/Constant4'
   */
  0.0F,

  /* Computed Parameter: Inertia_Matrix_Value
   * Referenced by: '<S40>/Inertia_Matrix'
   */
  { 0.016F, 0.0F, 0.0F, 0.0F, 0.016F, 0.0F, 0.0F, 0.0F, 0.0274F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S119>/Saturation'
   *   '<S76>/Random Source'
   */
  4.0F,

  /* Computed Parameter: RandomSource_VarianceRTP
   * Referenced by: '<S85>/Random Source'
   */
  { 0.02F, 0.02F, 0.04F },

  /* Computed Parameter: RandomSource1_VarianceRTP
   * Referenced by: '<S85>/Random Source1'
   */
  { 0.01F, 0.01F, 0.01F },

  /* Computed Parameter: RandomSource_VarianceRTP_f
   * Referenced by: '<S103>/Random Source'
   */
  { 0.05F, 0.05F, 0.05F },

  /* Computed Parameter: RandomSource_VarianceRTP_b
   * Referenced by: '<S114>/Random Source'
   */
  { 0.005F, 0.005F, 0.005F },

  /* Expression: wmm_declination
   * Referenced by: '<S120>/Declination_Lookup_Table'
   */
  { 129.47F, 85.74F, 47.95F, 31.19F, 22.49F, 16.95F, 13.27F, 11.01F, 9.8F, 9.04F,
    8.04F, 6.39F, 4.43F, 2.87F, 1.89F, 0.82F, -2.32F, 117.22F, 77.74F, 46.6F,
    31.43F, 23.03F, 17.45F, 13.54F, 10.99F, 9.62F, 9.1F, 8.9F, 8.5F, 7.8F, 7.16F,
    6.81F, 6.22F, 3.0F, 106.08F, 71.32F, 45.05F, 31.15F, 23.11F, 17.66F, 13.69F,
    10.92F, 9.35F, 8.9F, 9.28F, 10.0F, 10.63F, 11.06F, 11.42F, 11.38F, 7.93F,
    95.9F, 65.84F, 43.54F, 30.68F, 22.9F, 17.63F, 13.76F, 10.96F, 9.35F, 9.04F,
    9.84F, 11.3F, 12.87F, 14.23F, 15.37F, 15.95F, 11.92F, 86.49F, 60.89F, 42.13F,
    30.3F, 22.59F, 17.34F, 13.56F, 10.85F, 9.33F, 9.23F, 10.36F, 12.23F, 14.3F,
    16.32F, 18.23F, 19.43F, 14.1F, 77.66F, 56.14F, 40.72F, 30.13F, 22.43F,
    16.92F, 13.06F, 10.41F, 8.99F, 9.0F, 10.29F, 12.32F, 14.56F, 16.91F, 19.4F,
    21.05F, 12.85F, 69.27F, 51.34F, 39.0F, 29.96F, 22.49F, 16.6F, 12.48F, 9.82F,
    8.45F, 8.36F, 9.46F, 11.29F, 13.35F, 15.59F, 18.13F, 19.48F, 5.26F, 61.17F,
    46.27F, 36.55F, 29.27F, 22.45F, 16.43F, 12.06F, 9.33F, 7.84F, 7.34F, 7.77F,
    8.9F, 10.31F, 11.84F, 13.4F, 12.7F, -11.34F, 53.29F, 40.83F, 33.06F, 27.34F,
    21.49F, 15.73F, 11.24F, 8.29F, 6.4F, 5.21F, 4.67F, 4.75F, 5.09F, 5.26F,
    4.59F, -0.63F, -31.16F, 45.55F, 34.99F, 28.39F, 23.59F, 18.49F, 13.05F,
    8.46F, 5.18F, 2.88F, 1.11F, -0.23F, -1.16F, -1.98F, -3.4F, -6.84F, -16.66F,
    -43.36F, 37.91F, 28.86F, 22.67F, 17.84F, 12.7F, 7.22F, 2.52F, -0.81F, -3.03F,
    -4.72F, -6.22F, -7.61F, -9.16F, -11.68F, -16.85F, -27.98F, -47.21F, 30.36F,
    22.59F, 16.3F, 10.57F, 4.49F, -1.41F, -5.93F, -8.65F, -10.05F, -10.91F,
    -11.73F, -12.73F, -14.24F, -17.04F, -22.55F, -32.64F, -46.06F, 22.85F,
    16.36F, 9.86F, 2.87F, -4.49F, -10.64F, -14.43F, -16.0F, -16.16F, -15.74F,
    -15.26F, -15.22F, -16.18F, -18.8F, -24.01F, -32.58F, -42.16F, 15.38F, 10.3F,
    3.93F, -3.97F, -12.12F, -17.93F, -20.64F, -20.9F, -19.68F, -17.83F, -16.01F,
    -14.96F, -15.38F, -17.74F, -22.51F, -29.71F, -36.69F, 7.89F, 4.43F, -1.18F,
    -9.07F, -17.2F, -22.31F, -23.86F, -22.61F, -19.85F, -16.82F, -14.24F,
    -12.74F, -12.85F, -14.94F, -19.22F, -25.22F, -30.28F, 0.34F, -1.36F, -5.56F,
    -12.4F, -19.92F, -24.42F, -24.67F, -21.47F, -17.13F, -13.44F, -10.85F,
    -9.45F, -9.48F, -11.25F, -14.92F, -19.8F, -23.3F, -7.34F, -7.29F, -9.74F,
    -14.73F, -21.07F, -24.99F, -23.63F, -18.27F, -12.78F, -9.01F, -6.79F, -5.7F,
    -5.73F, -7.17F, -10.17F, -13.88F, -15.96F, -15.18F, -13.59F, -14.42F,
    -17.22F, -21.47F, -23.92F, -20.57F, -13.85F, -8.29F, -4.9F, -3.03F, -2.14F,
    -2.11F, -3.15F, -5.32F, -7.72F, -8.41F, -23.24F, -20.43F, -20.09F, -21.03F,
    -22.35F, -21.47F, -15.69F, -9.0F, -4.51F, -1.89F, -0.34F, 0.56F, 0.85F,
    0.41F, -0.66F, -1.53F, -0.76F, -31.54F, -27.84F, -26.86F, -26.68F, -25.38F,
    -19.97F, -10.98F, -4.6F, -1.39F, 0.32F, 1.46F, 2.34F, 2.98F, 3.34F, 3.68F,
    4.58F, 6.88F, -40.09F, -35.71F, -34.41F, -33.68F, -30.76F, -21.75F, -9.14F,
    -1.8F, 1.02F, 2.21F, 2.96F, 3.69F, 4.55F, 5.77F, 7.67F, 10.49F, 14.44F,
    -48.87F, -43.87F, -42.21F, -40.93F, -36.84F, -25.91F, -11.0F, -1.84F, 1.76F,
    3.12F, 3.84F, 4.56F, 5.73F, 7.84F, 11.32F, 16.05F, 21.81F, -57.89F, -52.13F,
    -49.75F, -47.46F, -41.94F, -29.96F, -14.7F, -4.45F, 0.26F, 2.27F, 3.37F,
    4.49F, 6.31F, 9.49F, 14.47F, 21.06F, 28.85F, -67.15F, -60.38F, -56.69F,
    -52.66F, -45.12F, -32.1F, -17.48F, -7.38F, -2.13F, 0.43F, 1.99F, 3.65F,
    6.27F, 10.5F, 16.79F, 25.16F, 35.38F, -76.67F, -68.54F, -62.8F, -56.15F,
    -45.85F, -31.52F, -17.81F, -8.68F, -3.64F, -0.95F, 0.82F, 2.78F, 5.83F,
    10.64F, 17.76F, 27.79F, 41.1F, -86.5F, -76.64F, -67.97F, -57.6F, -43.82F,
    -28.28F, -15.84F, -8.22F, -3.99F, -1.57F, 0.15F, 2.08F, 5.0F, 9.61F, 16.78F,
    28.09F, 45.46F, -96.72F, -84.8F, -72.09F, -56.58F, -38.84F, -22.85F, -12.25F,
    -6.45F, -3.43F, -1.68F, -0.33F, 1.23F, 3.52F, 7.14F, 13.25F, 24.77F, 47.46F,
    -107.43F, -93.29F, -74.93F, -52.32F, -30.96F, -15.92F, -7.54F, -3.57F,
    -1.91F, -1.19F, -0.66F, 0.08F, 1.24F, 3.18F, 6.99F, 16.58F, 45.09F, -118.77F,
    -102.54F, -75.92F, -43.75F, -21.13F, -8.92F, -3.01F, -0.67F, -0.2F, -0.56F,
    -1.08F, -1.49F, -1.78F, -1.87F, -1.04F, 4.2F, 34.68F, -130.89F, -113.42F,
    -73.34F, -30.29F, -11.32F, -3.43F, -0.14F, 0.78F, 0.36F, -0.75F, -2.13F,
    -3.61F, -5.23F, -7.04F, -8.63F, -7.88F, 14.29F, -143.9F, -127.72F, -61.4F,
    -13.68F, -2.91F, 0.49F, 1.41F, 1.11F, 0.07F, -1.5F, -3.46F, -5.71F, -8.23F,
    -10.97F, -13.69F, -15.41F, -5.73F, -157.84F, -149.27F, -20.81F, 2.05F, 4.1F,
    3.94F, 3.15F, 2.05F, 0.6F, -1.33F, -3.78F, -6.64F, -9.66F, -12.67F, -15.54F,
    -18.02F, -15.73F, -172.57F, 176.83F, 27.13F, 14.12F, 10.06F, 7.49F, 5.65F,
    4.14F, 2.52F, 0.36F, -2.48F, -5.76F, -9.04F, -12.0F, -14.61F, -17.11F,
    -18.04F, 172.29F, 138.71F, 43.23F, 22.28F, 14.98F, 10.9F, 8.33F, 6.57F,
    4.97F, 2.89F, 0.03F, -3.36F, -6.67F, -9.47F, -11.75F, -14.01F, -16.3F,
    157.26F, 112.47F, 47.83F, 27.29F, 18.72F, 13.78F, 10.7F, 8.76F, 7.31F, 5.59F,
    3.08F, -0.08F, -3.24F, -5.8F, -7.71F, -9.63F, -12.48F, 142.86F, 96.47F,
    48.65F, 30.01F, 21.17F, 15.83F, 12.42F, 10.36F, 9.09F, 7.87F, 6.01F, 3.41F,
    0.63F, -1.55F, -3.04F, -4.57F, -7.62F, 129.47F, 85.74F, 47.95F, 31.19F,
    22.49F, 16.95F, 13.27F, 11.01F, 9.8F, 9.04F, 8.04F, 6.39F, 4.43F, 2.87F,
    1.89F, 0.82F, -2.32F },

  /* Expression: wmm_inclination
   * Referenced by: '<S120>/Inclination_Lookup_Table'
   */
  { -78.32F, -80.9F, -77.5F, -71.61F, -64.4F, -55.01F, -42.22F, -25.27F, -5.16F,
    14.71F, 31.05F, 43.37F, 53.09F, 61.88F, 70.58F, 78.83F, 85.96F, -77.55F,
    -79.07F, -75.48F, -69.67F, -62.42F, -52.87F, -39.76F, -22.29F, -1.69F, 18.2F,
    34.01F, 45.48F, 54.34F, 62.58F, 71.01F, 79.09F, 86.05F, -76.63F, -77.24F,
    -73.55F, -67.78F, -60.45F, -50.73F, -37.42F, -19.76F, 0.89F, 20.62F, 36.14F,
    47.27F, 55.81F, 63.74F, 71.88F, 79.66F, 86.28F, -75.6F, -75.39F, -71.65F,
    -65.94F, -58.48F, -48.51F, -34.98F, -17.28F, 3.17F, 22.54F, 37.81F, 48.88F,
    57.44F, 65.29F, 73.15F, 80.49F, 86.63F, -74.48F, -73.48F, -69.68F, -64.09F,
    -56.54F, -46.26F, -32.43F, -14.67F, 5.55F, 24.56F, 39.59F, 50.65F, 59.31F,
    67.16F, 74.71F, 81.53F, 87.09F, -73.33F, -71.51F, -67.54F, -62.1F, -54.59F,
    -44.09F, -29.96F, -12.08F, 7.95F, 26.67F, 41.57F, 52.65F, 61.39F, 69.2F,
    76.45F, 82.72F, 87.59F, -72.15F, -69.47F, -65.16F, -59.81F, -52.52F, -42.03F,
    -27.69F, -9.67F, 10.22F, 28.72F, 43.56F, 54.72F, 63.52F, 71.25F, 78.19F,
    83.92F, 88.06F, -71.0F, -67.41F, -62.55F, -57.1F, -50.07F, -39.77F, -25.28F,
    -7.0F, 12.83F, 31.01F, 45.61F, 56.71F, 65.49F, 73.08F, 79.73F, 84.97F,
    88.31F, -69.9F, -65.44F, -59.86F, -54.05F, -47.07F, -36.82F, -22.02F, -3.36F,
    16.26F, 33.68F, 47.59F, 58.35F, 66.97F, 74.37F, 80.75F, 85.57F, 88.18F,
    -68.89F, -63.66F, -57.37F, -51.04F, -43.81F, -33.3F, -18.06F, 0.72F, 19.64F,
    35.87F, 48.8F, 59.05F, 67.48F, 74.74F, 80.91F, 85.44F, 87.69F, -67.99F,
    -62.2F, -55.46F, -48.77F, -41.31F, -30.64F, -15.4F, 2.91F, 20.92F, 36.17F,
    48.37F, 58.27F, 66.65F, 73.95F, 80.13F, 84.62F, 87.02F, -67.22F, -61.13F,
    -54.42F, -47.99F, -40.97F, -30.96F, -16.69F, 0.68F, 18.26F, 33.51F, 45.81F,
    55.91F, 64.62F, 72.25F, 78.7F, 83.45F, 86.29F, -66.58F, -60.48F, -54.37F,
    -49.08F, -43.5F, -35.21F, -22.85F, -6.71F, 11.04F, 27.46F, 41.11F, 52.35F,
    61.92F, 70.16F, 77.03F, 82.19F, 85.57F, -66.09F, -60.18F, -55.14F, -51.69F,
    -48.17F, -42.02F, -31.99F, -17.58F, 0.23F, 18.6F, 34.89F, 48.29F, 59.19F,
    68.16F, 75.46F, 81.01F, 84.92F, -65.73F, -60.1F, -56.32F, -54.93F, -53.46F,
    -49.2F, -41.34F, -28.93F, -11.51F, 8.9F, 28.43F, 44.48F, 56.9F, 66.57F,
    74.18F, 80.01F, 84.34F, -65.49F, -60.13F, -57.45F, -57.9F, -58.26F, -55.54F,
    -49.29F, -38.3F, -21.14F, 0.89F, 23.14F, 41.5F, 55.25F, 65.48F, 73.27F,
    79.23F, 83.87F, -65.38F, -60.19F, -58.21F, -60.03F, -62.1F, -60.84F, -55.5F,
    -44.75F, -27.11F, -3.9F, 19.99F, 39.77F, 54.36F, 64.92F, 72.74F, 78.68F,
    83.51F, -65.4F, -60.26F, -58.51F, -61.05F, -64.69F, -65.0F, -60.06F, -48.52F,
    -29.72F, -5.46F, 19.21F, 39.46F, 54.29F, 64.87F, 72.54F, 78.36F, 83.27F,
    -65.55F, -60.4F, -58.47F, -60.96F, -65.61F, -67.43F, -62.7F, -50.16F,
    -30.15F, -5.02F, 19.99F, 40.22F, 54.89F, 65.22F, 72.61F, 78.24F, 83.16F,
    -65.86F, -60.73F, -58.41F, -60.14F, -64.77F, -67.53F, -63.05F, -49.9F,
    -29.26F, -3.73F, 21.35F, 41.4F, 55.79F, 65.79F, 72.87F, 78.31F, 83.18F,
    -66.34F, -61.34F, -58.67F, -59.33F, -62.86F, -65.5F, -61.08F, -47.67F,
    -26.83F, -1.44F, 23.2F, 42.79F, 56.77F, 66.43F, 73.25F, 78.54F, 83.33F,
    -66.99F, -62.33F, -59.55F, -59.31F, -61.25F, -62.6F, -57.62F, -43.83F,
    -22.82F, 2.14F, 25.82F, 44.47F, 57.81F, 67.08F, 73.72F, 78.94F, 83.6F,
    -67.82F, -63.72F, -61.17F, -60.51F, -61.11F, -60.61F, -54.38F, -40.02F,
    -18.78F, 5.77F, 28.45F, 46.12F, 58.78F, 67.74F, 74.32F, 79.52F, 84.01F,
    -68.81F, -65.51F, -63.47F, -62.83F, -62.64F, -60.52F, -52.91F, -37.98F,
    -16.6F, 7.73F, 29.92F, 47.11F, 59.5F, 68.4F, 75.07F, 80.3F, 84.53F, -69.94F,
    -67.63F, -66.3F, -65.89F, -65.24F, -61.9F, -53.14F, -37.71F, -16.24F, 8.09F,
    30.23F, 47.43F, 59.94F, 69.06F, 75.97F, 81.24F, 85.17F, -71.18F, -70.02F,
    -69.47F, -69.27F, -68.13F, -63.74F, -54.06F, -38.24F, -16.65F, 7.8F, 30.09F,
    47.47F, 60.26F, 69.75F, 76.97F, 82.31F, 85.89F, -72.49F, -72.58F, -72.82F,
    -72.64F, -70.71F, -65.25F, -54.9F, -38.94F, -17.39F, 7.2F, 29.79F, 47.46F,
    60.56F, 70.39F, 77.91F, 83.36F, 86.66F, -73.83F, -75.23F, -76.23F, -75.74F,
    -72.59F, -65.94F, -55.04F, -39.1F, -17.82F, 6.68F, 29.47F, 47.41F, 60.75F,
    70.81F, 78.54F, 84.18F, 87.41F, -75.13F, -77.9F, -79.6F, -78.31F, -73.53F,
    -65.61F, -54.07F, -38.04F, -17.09F, 6.93F, 29.43F, 47.3F, 60.67F, 70.78F,
    78.6F, 84.47F, 88.02F, -76.35F, -80.5F, -82.82F, -80.03F, -73.57F, -64.6F,
    -52.51F, -36.34F, -15.72F, 7.55F, 29.35F, 46.86F, 60.07F, 70.09F, 77.94F,
    84.07F, 88.29F, -77.43F, -82.9F, -85.67F, -80.66F, -73.05F, -63.59F, -51.36F,
    -35.4F, -15.35F, 7.17F, 28.41F, 45.63F, 58.71F, 68.71F, 76.67F, 83.16F,
    88.09F, -78.29F, -84.9F, -87.34F, -80.24F, -72.25F, -62.79F, -50.82F,
    -35.38F, -16.06F, 5.75F, 26.58F, 43.66F, 56.74F, 66.84F, 75.07F, 82.03F,
    87.62F, -78.89F, -86.01F, -86.37F, -79.08F, -71.21F, -61.92F, -50.17F,
    -35.06F, -16.31F, 4.76F, 24.95F, 41.67F, 54.66F, 64.91F, 73.47F, 80.91F,
    87.09F, -79.19F, -85.72F, -84.19F, -77.47F, -69.88F, -60.72F, -48.95F,
    -33.78F, -15.19F, 5.23F, 24.48F, 40.43F, 53.04F, 63.27F, 72.11F, 79.96F,
    86.61F, -79.18F, -84.41F, -81.87F, -75.59F, -68.24F, -59.11F, -47.14F,
    -31.59F, -12.77F, 7.24F, 25.46F, 40.34F, 52.22F, 62.19F, 71.14F, 79.28F,
    86.25F, -78.87F, -82.7F, -79.63F, -73.61F, -66.37F, -57.15F, -44.8F, -28.6F,
    -9.2F, 10.64F, 27.84F, 41.43F, 52.28F, 61.73F, 70.62F, 78.89F, 86.03F,
    -78.32F, -80.9F, -77.5F, -71.61F, -64.4F, -55.01F, -42.22F, -25.27F, -5.16F,
    14.71F, 31.05F, 43.37F, 53.09F, 61.88F, 70.58F, 78.83F, 85.96F },

  /* Expression: wmm_magnitude
   * Referenced by: '<S120>/Magnitude_Lookup_Table'
   */
  { 60.6688499F, 63.1136093F, 61.9571686F, 58.5107918F, 53.9825211F, 48.8148804F,
    43.2272797F, 37.9078407F, 34.1241F, 32.8304787F, 33.9999084F, 37.2338F,
    42.2268791F, 48.3138885F, 53.9158897F, 57.2580109F, 57.8856F, 60.04245F,
    61.7999496F, 60.0581F, 56.2311287F, 51.54179F, 46.4250603F, 41.1212692F,
    36.3227692F, 33.2118912F, 32.5332794F, 34.0471611F, 37.3293915F, 42.246109F,
    48.2871819F, 53.8394814F, 57.0920105F, 57.7239685F, 59.2624512F, 60.314F,
    58.0622902F, 53.9296608F, 49.110981F, 44.0556412F, 39.0556602F, 34.8108597F,
    32.3865395F, 32.343071F, 34.3287888F, 37.9020615F, 42.9333916F, 48.8902283F,
    54.1666F, 57.0963F, 57.5895386F, 58.3503799F, 58.6792908F, 55.9897194F,
    51.6387596F, 46.7298393F, 41.7255783F, 37.0196609F, 33.3552399F, 31.6662102F,
    32.3189316F, 34.8861198F, 38.9211082F, 44.1993408F, 50.0266304F, 54.8299294F,
    57.2408F, 57.4788208F, 57.3273582F, 56.9035416F, 53.8143883F, 49.3266411F,
    44.3983116F, 39.4714317F, 35.0624F, 32.0025291F, 31.1179695F, 32.5729713F,
    35.8210793F, 40.3716F, 45.8926392F, 51.5137215F, 55.7101402F, 57.4770088F,
    57.3836098F, 56.2152901F, 54.987751F, 51.4757309F, 46.8875389F, 42.0354309F,
    37.2897797F, 33.2398682F, 30.8035908F, 30.7420692F, 33.0564F, 37.0471382F,
    42.1026917F, 47.7855F, 53.1201286F, 56.6581802F, 57.7437401F, 57.2923393F,
    55.03825F, 52.9404488F, 48.9163399F, 44.1882286F, 39.496521F, 35.1065407F,
    31.5591698F, 29.77808F, 30.4949799F, 33.6304092F, 38.3542404F, 43.8760414F,
    49.6316719F, 54.6226616F, 57.5236206F, 57.9748383F, 57.1917381F, 53.822979F,
    50.7914505F, 46.1322517F, 41.1598816F, 36.6611519F, 32.7988701F, 29.9308491F,
    28.8718204F, 30.32831F, 34.19133F, 39.550621F, 45.4551697F, 51.2053F,
    55.8290596F, 58.1714516F, 58.1068916F, 57.0691185F, 52.5992203F, 48.5984192F,
    43.2062683F, 37.8717499F, 33.5220108F, 30.2470798F, 28.1678391F, 27.9196F,
    30.1113892F, 34.5684F, 40.3826485F, 46.5514717F, 52.2567482F, 56.5575F,
    58.4858894F, 58.0859795F, 56.9144F, 51.3993F, 46.4421F, 40.3025894F,
    34.547039F, 30.2575F, 27.4956608F, 26.1988106F, 26.7910194F, 29.6486797F,
    34.4864502F, 40.5179214F, 46.8266106F, 52.5147209F, 56.6392784F, 58.3791504F,
    57.875679F, 56.7213402F, 50.2558784F, 44.4099693F, 37.62146F, 31.5135899F,
    27.2581291F, 24.9102097F, 24.2886906F, 25.5767403F, 28.8667908F, 33.8025513F,
    39.7895889F, 46.0994682F, 51.8271217F, 55.9901314F, 57.8185081F, 57.4648705F,
    56.4902802F, 49.1997185F, 42.57724F, 35.3339F, 29.0936298F, 25.0088406F,
    23.0613403F, 22.9270802F, 24.5634F, 27.9123802F, 32.6535797F, 38.3665695F,
    44.5343208F, 50.3232689F, 54.7006683F, 56.8559608F, 56.8737F, 56.2281F,
    48.2592697F, 40.9926605F, 33.524189F, 27.4585304F, 23.8101292F, 22.3264198F,
    22.4728699F, 24.0649509F, 27.0742607F, 31.3636799F, 36.6731491F, 42.6149712F,
    48.4230499F, 53.0473595F, 55.6300392F, 56.1536789F, 55.9474F, 47.4595909F,
    39.67593F, 32.1695595F, 26.5328407F, 23.5364799F, 22.5513496F, 22.8670197F,
    24.2535191F, 26.7092609F, 30.3699F, 35.23452F, 40.9257507F, 46.6428719F,
    51.3816795F, 54.3264084F, 55.3779488F, 55.6673393F, 46.8229904F, 38.6292F,
    31.17342F, 26.0458908F, 23.731F, 23.2198105F, 23.7449F, 25.0779209F,
    27.0727406F, 30.0517807F, 34.4248F, 39.8271484F, 45.3229218F, 49.9803391F,
    53.1202087F, 54.6265106F, 55.41008F, 46.3701401F, 37.856369F, 30.4379F,
    25.7118893F, 23.9623108F, 23.9457703F, 24.8520699F, 26.3540192F, 28.07197F,
    30.42383F, 34.2626305F, 39.3300896F, 44.5348396F, 48.9756813F, 52.1386719F,
    53.9745712F, 55.1987915F, 46.1204F, 37.3793297F, 29.9332905F, 25.3900604F,
    24.0330906F, 24.6195107F, 26.1449604F, 27.9149895F, 29.3943501F, 31.2168598F,
    34.5874214F, 39.3349609F, 44.2456512F, 48.4057884F, 51.4557686F, 53.4830093F,
    55.0553894F, 46.0917816F, 37.2448502F, 29.72896F, 25.1364403F, 23.9364891F,
    25.1510906F, 27.4533596F, 29.5271F, 30.7618294F, 32.1979485F, 35.2950897F,
    39.8154907F, 44.4367485F, 48.2638893F, 51.1002693F, 53.1952705F, 54.9979897F,
    46.2990417F, 37.5177307F, 29.9768505F, 25.1834908F, 23.8245F, 25.4074497F,
    28.3906803F, 30.8085804F, 31.9389F, 33.205349F, 36.2473F, 40.6632F,
    45.0166512F, 48.4885292F, 51.0664F, 53.1387596F, 55.0398903F, 46.7511F,
    38.2631493F, 30.85853F, 25.8815708F, 24.0939503F, 25.5383797F, 28.7855701F,
    31.4756F, 32.7162F, 34.0644608F, 37.2147713F, 41.6298294F, 45.7915497F,
    48.9735413F, 51.3314896F, 53.3283882F, 55.1878319F, 47.44804F, 39.5251808F,
    32.5166512F, 27.5721607F, 25.3377705F, 26.16325F, 29.0192299F, 31.6294098F,
    33.0449486F, 34.7081604F, 38.1154594F, 42.5916901F, 46.6388092F, 49.6521187F,
    51.8841515F, 53.7698517F, 55.4411F, 48.3783493F, 41.3098793F, 34.99897F,
    30.4203606F, 28.0098896F, 28.0544796F, 29.9036694F, 31.8600807F, 33.2503319F,
    35.3214188F, 39.08535F, 43.6334801F, 47.5973816F, 50.54813F, 52.7364082F,
    54.4578209F, 55.7903519F, 49.5174217F, 43.5770683F, 38.2391205F, 34.3330383F,
    32.1117897F, 31.5786591F, 32.20224F, 33.0197601F, 33.9549484F, 36.1782188F,
    40.1831512F, 44.7884789F, 48.7397118F, 51.7291794F, 53.9053612F, 55.3693199F,
    56.2177086F, 50.8273F, 46.24123F, 42.0747795F, 39.0112915F, 37.2069397F,
    36.3978882F, 35.9685097F, 35.4701118F, 35.477581F, 37.3330803F, 41.2869F,
    45.9653091F, 50.0739708F, 53.2238F, 55.369F, 56.4536285F, 56.6971092F,
    52.2585411F, 49.1803398F, 46.2837486F, 44.0661697F, 42.6629906F, 41.6962891F,
    40.4416885F, 38.6933F, 37.5363197F, 38.6625099F, 42.3569298F, 47.1515198F,
    51.5779305F, 54.9728203F, 57.0323F, 57.6269302F, 57.1959801F, 53.7530708F,
    52.2467918F, 50.6192894F, 49.126091F, 47.9187088F, 46.6905F, 44.7241707F,
    41.9129F, 39.6623383F, 40.03F, 43.4514618F, 48.3972397F, 53.1817207F,
    56.8117905F, 58.7214F, 58.7770615F, 57.6783295F, 55.2478218F, 55.2797089F,
    54.8312798F, 53.8861389F, 52.6146812F, 50.9185F, 48.2532387F, 44.5917816F,
    41.4765205F, 41.2253418F, 44.4608383F, 49.5864716F, 54.6858215F, 58.4801292F,
    60.2103386F, 59.779541F, 58.1086884F, 56.6799F, 58.1193F, 58.677021F,
    58.0862198F, 56.5232391F, 54.1281395F, 50.6552887F, 46.2659798F, 42.5672607F,
    41.9474716F, 45.1312F, 50.4559784F, 55.7945595F, 59.6797485F, 61.2728806F,
    60.5214119F, 58.4570389F, 57.9907494F, 60.620491F, 61.934761F, 61.4903412F,
    59.4637718F, 56.1816101F, 51.7399406F, 46.6526489F, 42.6542282F, 41.9919586F,
    45.2595406F, 50.7410316F, 56.2129288F, 60.1520195F, 61.737751F, 60.9253387F,
    58.7026482F, 59.1301613F, 62.6677208F, 64.4334793F, 63.9225388F, 61.3523102F,
    57.19067F, 51.8279915F, 46.1409798F, 41.9927711F, 41.3919106F, 44.6956406F,
    50.1936607F, 55.7020302F, 59.7392616F, 61.5330391F, 60.9662704F, 58.8369408F,
    60.0598106F, 64.1874237F, 66.0832214F, 65.3220062F, 62.250061F, 57.464241F,
    51.5262604F, 45.4629517F, 41.1138115F, 40.3063698F, 43.3432884F, 48.6538582F,
    54.1679916F, 58.4471092F, 60.7108498F, 60.6774483F, 58.8635406F, 60.7546082F,
    65.152771F, 66.8857117F, 65.7488708F, 62.2935104F, 57.2024307F, 51.054039F,
    44.818119F, 40.1843681F, 38.8794289F, 41.3375702F, 46.2735786F, 51.8004303F,
    56.4865112F, 59.4405594F, 60.1399689F, 58.7971916F, 61.2030716F, 65.5802612F,
    66.9189682F, 65.33918F, 61.6124306F, 56.4158516F, 50.2304F, 43.9236908F,
    39.0599213F, 37.2652206F, 39.0765F, 43.5435905F, 49.0624886F, 54.2272186F,
    57.9635391F, 59.4627113F, 58.66F, 61.4053612F, 65.5193787F, 66.3063583F,
    64.2539597F, 60.3182487F, 55.1038704F, 48.9593887F, 42.6758194F, 37.7462082F,
    35.6767807F, 36.9895F, 41.008091F, 46.4677887F, 52.0577316F, 56.5215187F,
    58.7569199F, 58.4774513F, 61.3719597F, 65.0383682F, 65.1877213F, 62.6528397F,
    58.52145F, 53.3208618F, 47.3027496F, 41.19347F, 36.4136505F, 34.3309784F,
    35.3677101F, 39.0226517F, 44.3670082F, 50.2589111F, 55.2993202F, 58.1154785F,
    58.274559F, 61.119381F, 64.2127838F, 63.698391F, 60.6903191F, 56.3554802F,
    51.1674194F, 45.3414307F, 39.5673599F, 35.1857109F, 33.3773117F, 34.3724213F,
    37.75737F, 42.9317513F, 48.984169F, 54.4105301F, 57.6034317F, 58.0721283F,
    60.6688499F, 63.1136093F, 61.9571686F, 58.5107918F, 53.9825211F, 48.8148804F,
    43.2272797F, 37.9078407F, 34.1241F, 32.8304787F, 33.9999084F, 37.2338F,
    42.2268791F, 48.3138885F, 53.9158897F, 57.2580109F, 57.8856F },

  /* Computed Parameter: RandomSource_VarianceRTP_a
   * Referenced by: '<S125>/Random Source'
   */
  { 0.001F, 0.001F, 0.001F }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
