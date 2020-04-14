/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKSS_GRAZYNA_HAL_H
#define _MOCKSS_GRAZYNA_HAL_H

#include "unity.h"
#include "SS_grazyna_hal.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void MockSS_grazyna_hal_Init(void);
void MockSS_grazyna_hal_Destroy(void);
void MockSS_grazyna_hal_Verify(void);




#define SS_grazyna_init_hal_Expect(huart) SS_grazyna_init_hal_CMockExpect(__LINE__, huart)
void SS_grazyna_init_hal_CMockExpect(UNITY_LINE_TYPE cmock_line, void* huart);
#define SS_grazyna_init_hal_ExpectWithArray(huart, huart_Depth) SS_grazyna_init_hal_CMockExpectWithArray(__LINE__, huart, huart_Depth)
void SS_grazyna_init_hal_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, void* huart, int huart_Depth);
#define SS_grazyna_receive_hal_Expect(data, length) SS_grazyna_receive_hal_CMockExpect(__LINE__, data, length)
void SS_grazyna_receive_hal_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t* data, uint16_t length);
#define SS_grazyna_receive_hal_ExpectWithArray(data, data_Depth, length) SS_grazyna_receive_hal_CMockExpectWithArray(__LINE__, data, data_Depth, length)
void SS_grazyna_receive_hal_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, uint8_t* data, int data_Depth, uint16_t length);
#define SS_grazyna_transmit_hal_Expect(data, length) SS_grazyna_transmit_hal_CMockExpect(__LINE__, data, length)
void SS_grazyna_transmit_hal_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t* data, uint16_t length);
#define SS_grazyna_transmit_hal_ExpectWithArray(data, data_Depth, length) SS_grazyna_transmit_hal_CMockExpectWithArray(__LINE__, data, data_Depth, length)
void SS_grazyna_transmit_hal_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, uint8_t* data, int data_Depth, uint16_t length);
#define SS_grazyna_crc_hal_ExpectAndReturn(data, len, cmock_retval) SS_grazyna_crc_hal_CMockExpectAndReturn(__LINE__, data, len, cmock_retval)
void SS_grazyna_crc_hal_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t* data, uint32_t len, uint32_t cmock_to_return);
#define SS_grazyna_crc_hal_ExpectWithArrayAndReturn(data, data_Depth, len, cmock_retval) SS_grazyna_crc_hal_CMockExpectWithArrayAndReturn(__LINE__, data, data_Depth, len, cmock_retval)
void SS_grazyna_crc_hal_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t* data, int data_Depth, uint32_t len, uint32_t cmock_to_return);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
