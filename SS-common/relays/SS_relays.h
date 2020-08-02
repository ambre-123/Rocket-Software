/*
 * SS_relays.h
 *
 *  Created on: Dec 26, 2019
 *      Author: maciek
 */

#ifndef SS_RELAYS_H
#define SS_RELAYS_H

/* ==================================================================== */
/* ============================= Includes ============================= */
/* ==================================================================== */

#include "SS_com.h"
#include "gpio.h"

/* ==================================================================== */
/* ============================= Macros =============================== */
/* ==================================================================== */

#define MAX_RELAY_COUNT 9

/* ==================================================================== */
/* ============================ Datatypes ============================= */
/* ==================================================================== */

typedef struct {
    uint8_t id;
    GPIO_TypeDef *GPIO_Port;
    uint16_t Pin;
    uint8_t state;
} Relay;

/* ==================================================================== */
/* ========================= Extern variables ========================= */
/* ==================================================================== */

extern Relay relays[9];

/* ==================================================================== */
/* ==================== Public function prototypes ==================== */
/* ==================================================================== */

void SS_relay_open(Relay *relay);
void SS_relay_close(Relay *relay);
void SS_relay_init(Relay *relay);
void SS_relays_init(Relay *relay_array, uint8_t count);
Relay *SS_relay_get(uint8_t id);

#endif /* SS_RELAYS_H_ */
