/*
 * SS_it.c
 *
 *  Created on: Dec 25, 2019
 *      Author: maciek
 */

#ifdef SS_USE_ADS1258
#include "SS_ADS1258.h"
#endif
#ifdef SS_USE_SERVOS
#include "SS_servos.h"
#endif
#ifdef SS_USE_DYNAMIXEL
#include "SS_dynamixel.h"
#endif
#ifdef SS_USE_GRAZYNA
#include "SS_Grazyna.h"
#endif
#ifdef SS_USE_SEQUENCE
#include "SS_sequence.h"
#endif

#ifdef RUN_TESTS
#include "SS_ADS1258_unit_tests.h"
extern void SS_dynamixel_test_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);
#endif

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
#ifdef SS_USE_ADS1258
    SS_ADS1258_EXTI_Callback(GPIO_Pin);
#endif
}

void HAL_SPI_TxRxCpltCallback(SPI_HandleTypeDef *hspi) {
#ifdef SS_USE_ADS1258
    SS_ADS1258_SPI_TxRxCpltCallback(hspi);
#endif
}

//void HAL_SPI_ErrorCallback(SPI_HandleTypeDef *hspi) {
//	printf("spi error\r\n");
//}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart) {
#ifdef SS_USE_DYNAMIXEL
    SS_dynamixel_UART_RxCpltCallback(huart);
#endif
#ifdef SS_USE_GRAZYNA
    SS_grazyna_UART_RxCpltCallback(huart);
#endif
}

void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart) {
#ifdef SS_USE_DYNAMIXEL
    SS_dynamixel_UART_TxCpltCallback(huart);
#endif
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
#ifdef RUN_TESTS
    // TODO Change test to remove this function
//    SS_dynamixel_test_TIM_PeriodElapsedCallback(htim);
#endif
}
//
//void HAL_UART_RxHalfCpltCallback(UART_HandleTypeDef *huart) {
//    if(huart == &huart2)
//    printf("rxcptl half callback\r\n");
//}

//void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart) {
//    if(huart == &huart2)
//    printf("uart error callback\r\n");

//}

void HAL_SYSTICK_Callback() {
#ifdef SS_USE_SERVOS
    SS_servos_SYSTICK();
#endif
#ifdef SS_USE_SUPPLY
    SS_supply_SYSTICK();
#endif
#ifdef SS_USE_DYNAMIXEL
    SS_dynamixel_SYSTICK_Callback();
#endif
#ifdef SS_USE_SEQUENCE
    SS_sequence_SYSTICK();
#endif
#ifdef SS_USE_ADS1258
    SS_ADS1258_Systick();
#endif
}
