/*
 * SS_com_protocol.h
 *
 *  Created on: Jan 16, 2020
 *      Author: maciek
 */

#ifndef SS_COM_H
#define SS_COM_H

#include "FreeRTOS.h"
#include "SS_com_ids.h"
#include "queue.h"
#include "stdint.h"

typedef struct __attribute__((packed)) {
    ComBoardID destination : 5;
    ComPriority priority : 3;
    ComActionID action : 3;
    ComBoardID source : 5;
    ComDeviceID device : 6;
    uint32_t id : 6;
    ComDataType data_type : 4;
    uint8_t message_type;
    uint32_t payload;
} ComFrame;

typedef struct {
    void (*fun)(ComFrame *);
    uint8_t group_id;
    ComPriority priority;
} ComFifoManager;

typedef enum {
    COM_OK,
    COM_ERROR
} ComStatus;

typedef enum {
    COM_GROUP_RECEIVE,
    COM_GROUP_CAN1,
    COM_GROUP_CAN2,
    COM_GROUP_GRAZYNA
} ComGroup;

void SS_com_message_received(ComFrame *frame);
void SS_com_init(ComBoardID board);
QueueHandle_t SS_com_add_sender();
void SS_com_add_to_rx_queue(ComFrame *frame, void (*sender_fun)(ComFrame *), QueueHandle_t queue);
void SS_com_transmit(ComFrame *frame);
void SS_com_add_payload_to_frame(ComFrame *frame, ComDataType type, void *payload);

#endif /* SS_COM_H */
