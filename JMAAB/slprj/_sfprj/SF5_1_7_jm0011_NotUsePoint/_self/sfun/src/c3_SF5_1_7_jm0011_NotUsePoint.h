#ifndef __c3_SF5_1_7_jm0011_NotUsePoint_h__
#define __c3_SF5_1_7_jm0011_NotUsePoint_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct
#define typedef_SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c3_sfEvent;
  uint8_T c3_tp_One;
  uint8_T c3_tp_A;
  uint8_T c3_tp_Two;
  uint8_T c3_tp_B;
  uint8_T c3_is_active_c3_SF5_1_7_jm0011_NotUsePoint;
  uint8_T c3_is_One;
  uint8_T c3_is_active_One;
  uint8_T c3_is_Two;
  uint8_T c3_is_active_Two;
  uint8_T c3_doSetSimStateSideEffects;
  const mxArray *c3_setSimStateSideEffectsInfo;
  real_T *c3_input;
  real_T *c3_output_a;
  real_T *c3_output_b;
  real_T *c3_output_c;
} SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct;

#endif                                 /*typedef_SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c3_SF5_1_7_jm0011_NotUsePoint_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_SF5_1_7_jm0011_NotUsePoint_get_check_sum(mxArray *plhs[]);
extern void c3_SF5_1_7_jm0011_NotUsePoint_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
