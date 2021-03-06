/* Include files */

#include "SF5_1_7_jm0011_NotUsePoint_sfun.h"
#include "c3_SF5_1_7_jm0011_NotUsePoint.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "SF5_1_7_jm0011_NotUsePoint_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c3_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c3_IN_A                        ((uint8_T)1U)
#define c3_IN_B                        ((uint8_T)1U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void initialize_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance);
static void initialize_params_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance);
static void enable_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance);
static void disable_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance);
static void c3_update_debugger_state_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance);
static void set_sim_state_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance, const mxArray
   *c3_st);
static void c3_set_sim_state_side_effects_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance);
static void finalize_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance);
static void sf_gateway_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance);
static void mdl_start_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance);
static void initSimStructsc3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber, uint32_T c3_instanceNumber);
static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData);
static int32_T c3_emlrt_marshallIn(SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static uint8_T c3_b_emlrt_marshallIn
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance, const mxArray
   *c3_b_tp_One, const char_T *c3_identifier);
static uint8_T c3_c_emlrt_marshallIn
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance, const mxArray
   *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static real_T c3_d_emlrt_marshallIn
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance, const mxArray
   *c3_b_output_a, const char_T *c3_identifier);
static real_T c3_e_emlrt_marshallIn
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance, const mxArray
   *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_f_emlrt_marshallIn
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance, const mxArray
   *c3_b_setSimStateSideEffectsInfo, const char_T *c3_identifier);
static const mxArray *c3_g_emlrt_marshallIn
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance, const mxArray
   *c3_u, const emlrtMsgIdentifier *c3_parentId);
static const mxArray *sf_get_hover_data_for_msg
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance, int32_T c3_ssid);
static void c3_init_sf_message_store_memory
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance);
static void init_dsm_address_info(SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *
  chartInstance);
static void init_simulink_io_address
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc3_SF5_1_7_jm0011_NotUsePoint(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  chartInstance->c3_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c3_doSetSimStateSideEffects = 0U;
  chartInstance->c3_setSimStateSideEffectsInfo = NULL;
  chartInstance->c3_is_active_One = 0U;
  chartInstance->c3_is_One = c3_IN_NO_ACTIVE_CHILD;
  chartInstance->c3_tp_One = 0U;
  chartInstance->c3_tp_A = 0U;
  chartInstance->c3_is_active_Two = 0U;
  chartInstance->c3_is_Two = c3_IN_NO_ACTIVE_CHILD;
  chartInstance->c3_tp_Two = 0U;
  chartInstance->c3_tp_B = 0U;
  chartInstance->c3_is_active_c3_SF5_1_7_jm0011_NotUsePoint = 0U;
  if (!(sf_get_output_port_reusable(chartInstance->S, 1) != 0)) {
    *chartInstance->c3_output_a = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c3_output_a, 1U, 1U, 0U,
                          chartInstance->c3_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 2) != 0)) {
    *chartInstance->c3_output_b = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c3_output_b, 2U, 1U, 0U,
                          chartInstance->c3_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 3) != 0)) {
    *chartInstance->c3_output_c = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c3_output_c, 3U, 1U, 0U,
                          chartInstance->c3_sfEvent, false);
  }
}

static void initialize_params_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c3_update_debugger_state_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance)
{
  uint32_T c3_prevAniVal;
  c3_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (chartInstance->c3_is_active_c3_SF5_1_7_jm0011_NotUsePoint == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_active_One == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_One == c3_IN_A) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_active_Two == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
  }

  if (chartInstance->c3_is_Two == c3_IN_B) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
  }

  _SFD_SET_ANIMATION(c3_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance)
{
  const mxArray *c3_st;
  const mxArray *c3_y = NULL;
  real_T c3_hoistedGlobal;
  const mxArray *c3_b_y = NULL;
  real_T c3_b_hoistedGlobal;
  const mxArray *c3_c_y = NULL;
  real_T c3_c_hoistedGlobal;
  const mxArray *c3_d_y = NULL;
  uint8_T c3_d_hoistedGlobal;
  const mxArray *c3_e_y = NULL;
  uint8_T c3_e_hoistedGlobal;
  const mxArray *c3_f_y = NULL;
  uint8_T c3_f_hoistedGlobal;
  const mxArray *c3_g_y = NULL;
  uint8_T c3_g_hoistedGlobal;
  const mxArray *c3_h_y = NULL;
  uint8_T c3_h_hoistedGlobal;
  const mxArray *c3_i_y = NULL;
  c3_st = NULL;
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellmatrix(8, 1), false);
  c3_hoistedGlobal = *chartInstance->c3_output_a;
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_hoistedGlobal, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_b_hoistedGlobal = *chartInstance->c3_output_b;
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", &c3_b_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 1, c3_c_y);
  c3_c_hoistedGlobal = *chartInstance->c3_output_c;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", &c3_c_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 2, c3_d_y);
  c3_d_hoistedGlobal = chartInstance->c3_is_active_c3_SF5_1_7_jm0011_NotUsePoint;
  c3_e_y = NULL;
  sf_mex_assign(&c3_e_y, sf_mex_create("y", &c3_d_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 3, c3_e_y);
  c3_e_hoistedGlobal = chartInstance->c3_is_active_One;
  c3_f_y = NULL;
  sf_mex_assign(&c3_f_y, sf_mex_create("y", &c3_e_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 4, c3_f_y);
  c3_f_hoistedGlobal = chartInstance->c3_is_active_Two;
  c3_g_y = NULL;
  sf_mex_assign(&c3_g_y, sf_mex_create("y", &c3_f_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 5, c3_g_y);
  c3_g_hoistedGlobal = chartInstance->c3_is_One;
  c3_h_y = NULL;
  sf_mex_assign(&c3_h_y, sf_mex_create("y", &c3_g_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 6, c3_h_y);
  c3_h_hoistedGlobal = chartInstance->c3_is_Two;
  c3_i_y = NULL;
  sf_mex_assign(&c3_i_y, sf_mex_create("y", &c3_h_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 7, c3_i_y);
  sf_mex_assign(&c3_st, c3_y, false);
  return c3_st;
}

static void set_sim_state_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance, const mxArray
   *c3_st)
{
  const mxArray *c3_u;
  c3_u = sf_mex_dup(c3_st);
  *chartInstance->c3_output_a = c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("output_a", c3_u, 0)), "output_a");
  *chartInstance->c3_output_b = c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("output_b", c3_u, 1)), "output_b");
  *chartInstance->c3_output_c = c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("output_c", c3_u, 2)), "output_c");
  chartInstance->c3_is_active_c3_SF5_1_7_jm0011_NotUsePoint =
    c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "is_active_c3_SF5_1_7_jm0011_NotUsePoint", c3_u, 3)),
    "is_active_c3_SF5_1_7_jm0011_NotUsePoint");
  chartInstance->c3_is_active_One = c3_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_One", c3_u, 4)), "is_active_One");
  chartInstance->c3_is_active_Two = c3_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_Two", c3_u, 5)), "is_active_Two");
  chartInstance->c3_is_One = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("is_One", c3_u, 6)), "is_One");
  chartInstance->c3_is_Two = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("is_Two", c3_u, 7)), "is_Two");
  sf_mex_assign(&chartInstance->c3_setSimStateSideEffectsInfo,
                c3_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c3_u, 8)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c3_u);
  chartInstance->c3_doSetSimStateSideEffects = 1U;
  c3_update_debugger_state_c3_SF5_1_7_jm0011_NotUsePoint(chartInstance);
  sf_mex_destroy(&c3_st);
}

static void c3_set_sim_state_side_effects_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance)
{
  if (chartInstance->c3_doSetSimStateSideEffects != 0) {
    chartInstance->c3_tp_One = (uint8_T)(chartInstance->c3_is_active_One == 1U);
    chartInstance->c3_tp_A = (uint8_T)(chartInstance->c3_is_One == c3_IN_A);
    chartInstance->c3_tp_Two = (uint8_T)(chartInstance->c3_is_active_Two == 1U);
    chartInstance->c3_tp_B = (uint8_T)(chartInstance->c3_is_Two == c3_IN_B);
    chartInstance->c3_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c3_setSimStateSideEffectsInfo);
}

static void sf_gateway_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance)
{
  c3_set_sim_state_side_effects_c3_SF5_1_7_jm0011_NotUsePoint(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, chartInstance->c3_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_input, 0U, 1U, 0U,
                        chartInstance->c3_sfEvent, false);
  chartInstance->c3_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c3_sfEvent);
  if (chartInstance->c3_is_active_c3_SF5_1_7_jm0011_NotUsePoint == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 0U, chartInstance->c3_sfEvent);
    chartInstance->c3_is_active_c3_SF5_1_7_jm0011_NotUsePoint = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c3_sfEvent);
    chartInstance->c3_is_active_One = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
    chartInstance->c3_tp_One = 1U;
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c3_sfEvent);
    chartInstance->c3_is_One = c3_IN_A;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
    chartInstance->c3_tp_A = 1U;
    chartInstance->c3_is_active_Two = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c3_sfEvent);
    chartInstance->c3_tp_Two = 1U;
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c3_sfEvent);
    chartInstance->c3_is_Two = c3_IN_B;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c3_sfEvent);
    chartInstance->c3_tp_B = 1U;
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c3_sfEvent);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c3_sfEvent);
    gMyStructVar.a = *chartInstance->c3_input;
    *chartInstance->c3_output_a = (real_T)(gMyStructVar.a * 3);
    _SFD_DATA_RANGE_CHECK(*chartInstance->c3_output_a, 1U, 4U, 1U,
                          chartInstance->c3_sfEvent, false);
    *chartInstance->c3_output_b = 4.0 * *chartInstance->c3_input;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c3_output_b, 2U, 4U, 1U,
                          chartInstance->c3_sfEvent, false);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c3_sfEvent);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c3_sfEvent);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U, chartInstance->c3_sfEvent);
    gMyStructVar.b[1] = *chartInstance->c3_input + 3.0;
    gMyStructPointerVar = &gMyStructVar;
    *chartInstance->c3_output_c = (real_T)gMyStructPointerVar->b[1];
    _SFD_DATA_RANGE_CHECK(*chartInstance->c3_output_c, 3U, 4U, 3U,
                          chartInstance->c3_sfEvent, false);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c3_sfEvent);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c3_sfEvent);
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_SF5_1_7_jm0011_NotUsePointMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance)
{
  c3_init_sf_message_store_memory(chartInstance);
}

static void initSimStructsc3_SF5_1_7_jm0011_NotUsePoint
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber, uint32_T c3_instanceNumber)
{
  (void)c3_machineNumber;
  (void)c3_chartNumber;
  (void)c3_instanceNumber;
}

const mxArray *sf_c3_SF5_1_7_jm0011_NotUsePoint_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  sf_mex_assign(&c3_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c3_nameCaptureInfo;
}

static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance;
  chartInstance = (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(int32_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static int32_T c3_emlrt_marshallIn(SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct
  *chartInstance, const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  int32_T c3_y;
  int32_T c3_i0;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_i0, 1, 6, 0U, 0, 0U, 0);
  c3_y = c3_i0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_sfEvent;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_y;
  SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance;
  chartInstance = (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *)
    chartInstanceVoid;
  c3_b_sfEvent = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_sfEvent), &c3_thisId);
  sf_mex_destroy(&c3_b_sfEvent);
  *(int32_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  uint8_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance;
  chartInstance = (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(uint8_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static uint8_T c3_b_emlrt_marshallIn
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance, const mxArray
   *c3_b_tp_One, const char_T *c3_identifier)
{
  uint8_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_tp_One),
    &c3_thisId);
  sf_mex_destroy(&c3_b_tp_One);
  return c3_y;
}

static uint8_T c3_c_emlrt_marshallIn
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance, const mxArray
   *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_y;
  uint8_T c3_u0;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_u0, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_u0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_tp_One;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_y;
  SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance;
  chartInstance = (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *)
    chartInstanceVoid;
  c3_b_tp_One = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_tp_One),
    &c3_thisId);
  sf_mex_destroy(&c3_b_tp_One);
  *(uint8_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  real_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance;
  chartInstance = (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *)
    chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(real_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static real_T c3_d_emlrt_marshallIn
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance, const mxArray
   *c3_b_output_a, const char_T *c3_identifier)
{
  real_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_output_a),
    &c3_thisId);
  sf_mex_destroy(&c3_b_output_a);
  return c3_y;
}

static real_T c3_e_emlrt_marshallIn
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance, const mxArray
   *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  real_T c3_y;
  real_T c3_d0;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_d0, 1, 0, 0U, 0, 0U, 0);
  c3_y = c3_d0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_output_a;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y;
  SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance;
  chartInstance = (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *)
    chartInstanceVoid;
  c3_b_output_a = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_output_a),
    &c3_thisId);
  sf_mex_destroy(&c3_b_output_a);
  *(real_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_f_emlrt_marshallIn
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance, const mxArray
   *c3_b_setSimStateSideEffectsInfo, const char_T *c3_identifier)
{
  const mxArray *c3_y = NULL;
  emlrtMsgIdentifier c3_thisId;
  c3_y = NULL;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  sf_mex_assign(&c3_y, c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_b_setSimStateSideEffectsInfo), &c3_thisId), false);
  sf_mex_destroy(&c3_b_setSimStateSideEffectsInfo);
  return c3_y;
}

static const mxArray *c3_g_emlrt_marshallIn
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance, const mxArray
   *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  const mxArray *c3_y = NULL;
  (void)chartInstance;
  (void)c3_parentId;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_duplicatearraysafe(&c3_u), false);
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static const mxArray *sf_get_hover_data_for_msg
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance, int32_T c3_ssid)
{
  const mxArray *c3_msgInfo;
  (void)chartInstance;
  (void)c3_ssid;
  c3_msgInfo = NULL;
  return NULL;
}

static void c3_init_sf_message_store_memory
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info(SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address
  (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance)
{
  chartInstance->c3_input = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c3_output_a = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c3_output_b = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c3_output_c = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

void sf_c3_SF5_1_7_jm0011_NotUsePoint_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2810567489U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3755064050U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2541605374U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2955211416U);
}

mxArray* sf_c3_SF5_1_7_jm0011_NotUsePoint_get_post_codegen_info(void);
mxArray *sf_c3_SF5_1_7_jm0011_NotUsePoint_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("ttDxQvKS63nDX89pkLW7IE");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo =
      sf_c3_SF5_1_7_jm0011_NotUsePoint_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c3_SF5_1_7_jm0011_NotUsePoint_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c3_SF5_1_7_jm0011_NotUsePoint_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("early");
  mxArray *fallbackReason = mxCreateString("custom_code");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c3_SF5_1_7_jm0011_NotUsePoint_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c3_SF5_1_7_jm0011_NotUsePoint_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c3_SF5_1_7_jm0011_NotUsePoint(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x8'type','srcId','name','auxInfo'{{M[1],M[19],T\"output_a\",},{M[1],M[20],T\"output_b\",},{M[1],M[24],T\"output_c\",},{M[8],M[0],T\"is_active_c3_SF5_1_7_jm0011_NotUsePoint\",},{M[8],M[27],T\"is_active_One\",},{M[8],M[28],T\"is_active_Two\",},{M[9],M[27],T\"is_One\",},{M[9],M[28],T\"is_Two\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 8, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_SF5_1_7_jm0011_NotUsePoint_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg
    ( (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *) chartInstance, msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance =
      (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *)sf_get_chart_instance_ptr
      (S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _SF5_1_7_jm0011_NotUsePointMachineNumber_,
           3,
           4,
           2,
           0,
           4,
           0,
           0,
           0,
           0,
           0,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_SF5_1_7_jm0011_NotUsePointMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,
             _SF5_1_7_jm0011_NotUsePointMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _SF5_1_7_jm0011_NotUsePointMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"input");
          _SFD_SET_DATA_PROPS(1,2,0,1,"output_a");
          _SFD_SET_DATA_PROPS(2,2,0,1,"output_b");
          _SFD_SET_DATA_PROPS(3,2,0,1,"output_c");
          _SFD_STATE_INFO(0,0,1);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,1);
          _SFD_STATE_INFO(3,0,0);
          _SFD_CH_SUBSTATE_COUNT(2);
          _SFD_CH_SUBSTATE_DECOMP(1);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,2);
          _SFD_ST_SUBSTATE_COUNT(0,1);
          _SFD_ST_SUBSTATE_INDEX(0,0,1);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,1);
          _SFD_ST_SUBSTATE_INDEX(2,0,3);
          _SFD_ST_SUBSTATE_COUNT(3,0);
        }

        _SFD_CV_INIT_CHART(2,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,1,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,1,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_c_sf_marshallOut,(MexInFcnForType)c3_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_c_sf_marshallOut,(MexInFcnForType)c3_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_c_sf_marshallOut,(MexInFcnForType)c3_c_sf_marshallIn);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _SF5_1_7_jm0011_NotUsePointMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance =
      (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *)sf_get_chart_instance_ptr
      (S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c3_input);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c3_output_a);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c3_output_b);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c3_output_c);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sy64X1ITFr2SlMUCjqVoCpH";
}

static void sf_opaque_initialize_c3_SF5_1_7_jm0011_NotUsePoint(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c3_SF5_1_7_jm0011_NotUsePoint
    ((SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct*) chartInstanceVar);
  initialize_c3_SF5_1_7_jm0011_NotUsePoint
    ((SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c3_SF5_1_7_jm0011_NotUsePoint(void
  *chartInstanceVar)
{
  enable_c3_SF5_1_7_jm0011_NotUsePoint
    ((SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c3_SF5_1_7_jm0011_NotUsePoint(void
  *chartInstanceVar)
{
  disable_c3_SF5_1_7_jm0011_NotUsePoint
    ((SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c3_SF5_1_7_jm0011_NotUsePoint(void
  *chartInstanceVar)
{
  sf_gateway_c3_SF5_1_7_jm0011_NotUsePoint
    ((SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c3_SF5_1_7_jm0011_NotUsePoint
  (SimStruct* S)
{
  return get_sim_state_c3_SF5_1_7_jm0011_NotUsePoint
    ((SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *)sf_get_chart_instance_ptr
     (S));                             /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c3_SF5_1_7_jm0011_NotUsePoint(SimStruct* S,
  const mxArray *st)
{
  set_sim_state_c3_SF5_1_7_jm0011_NotUsePoint
    ((SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct*)sf_get_chart_instance_ptr(S),
     st);
}

static void sf_opaque_terminate_c3_SF5_1_7_jm0011_NotUsePoint(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_SF5_1_7_jm0011_NotUsePoint_optimization_info();
    }

    finalize_c3_SF5_1_7_jm0011_NotUsePoint
      ((SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc3_SF5_1_7_jm0011_NotUsePoint
    ((SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_SF5_1_7_jm0011_NotUsePoint(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_SF5_1_7_jm0011_NotUsePoint
      ((SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct*)sf_get_chart_instance_ptr
       (S));
  }
}

static void mdlSetWorkWidths_c3_SF5_1_7_jm0011_NotUsePoint(SimStruct *S)
{
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_SF5_1_7_jm0011_NotUsePoint_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,3);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,3,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 3);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,3);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,3,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,3,3);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=3; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 1; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,3);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(24494646U));
  ssSetChecksum1(S,(1957386721U));
  ssSetChecksum2(S,(3229501985U));
  ssSetChecksum3(S,(937779601U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c3_SF5_1_7_jm0011_NotUsePoint(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c3_SF5_1_7_jm0011_NotUsePoint(SimStruct *S)
{
  SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *chartInstance;
  chartInstance = (SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct *)utMalloc
    (sizeof(SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc3_SF5_1_7_jm0011_NotUsePointInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c3_SF5_1_7_jm0011_NotUsePoint;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c3_SF5_1_7_jm0011_NotUsePoint;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c3_SF5_1_7_jm0011_NotUsePoint;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c3_SF5_1_7_jm0011_NotUsePoint;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c3_SF5_1_7_jm0011_NotUsePoint;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c3_SF5_1_7_jm0011_NotUsePoint;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c3_SF5_1_7_jm0011_NotUsePoint;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c3_SF5_1_7_jm0011_NotUsePoint;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_SF5_1_7_jm0011_NotUsePoint;
  chartInstance->chartInfo.mdlStart = mdlStart_c3_SF5_1_7_jm0011_NotUsePoint;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c3_SF5_1_7_jm0011_NotUsePoint;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  chart_debug_initialization(S,1);
  mdl_start_c3_SF5_1_7_jm0011_NotUsePoint(chartInstance);
}

void c3_SF5_1_7_jm0011_NotUsePoint_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c3_SF5_1_7_jm0011_NotUsePoint(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_SF5_1_7_jm0011_NotUsePoint(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_SF5_1_7_jm0011_NotUsePoint(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_SF5_1_7_jm0011_NotUsePoint_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
