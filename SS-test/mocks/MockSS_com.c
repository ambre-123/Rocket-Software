/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "MockSS_com.h"

static const char* CMockString_SS_com_add_payload_to_frame = "SS_com_add_payload_to_frame";
static const char* CMockString_SS_com_add_sender = "SS_com_add_sender";
static const char* CMockString_SS_com_add_to_queue = "SS_com_add_to_queue";
static const char* CMockString_SS_com_handle_action = "SS_com_handle_action";
static const char* CMockString_SS_com_handle_frame = "SS_com_handle_frame";
static const char* CMockString_SS_com_handle_request = "SS_com_handle_request";
static const char* CMockString_SS_com_handle_service = "SS_com_handle_service";
static const char* CMockString_SS_com_init = "SS_com_init";
static const char* CMockString_SS_com_main = "SS_com_main";
static const char* CMockString_SS_com_message_received = "SS_com_message_received";
static const char* CMockString_SS_com_transmit = "SS_com_transmit";
static const char* CMockString_board = "board";
static const char* CMockString_frame = "frame";
static const char* CMockString_payload = "payload";
static const char* CMockString_queue = "queue";
static const char* CMockString_sender_fun = "sender_fun";
static const char* CMockString_type = "type";

typedef struct _CMOCK_SS_com_add_sender_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  QueueHandle_t ReturnVal;

} CMOCK_SS_com_add_sender_CALL_INSTANCE;

typedef struct _CMOCK_SS_com_add_to_queue_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  ComFrame* Expected_frame;
  cmock_SS_com_func_ptr1 Expected_sender_fun;
  QueueHandle_t Expected_queue;
  int Expected_frame_Depth;

} CMOCK_SS_com_add_to_queue_CALL_INSTANCE;

typedef struct _CMOCK_SS_com_message_received_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  ComFrame* Expected_frame;
  int Expected_frame_Depth;

} CMOCK_SS_com_message_received_CALL_INSTANCE;

typedef struct _CMOCK_SS_com_init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  ComBoardID Expected_board;

} CMOCK_SS_com_init_CALL_INSTANCE;

typedef struct _CMOCK_SS_com_transmit_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  ComFrame* Expected_frame;
  int Expected_frame_Depth;

} CMOCK_SS_com_transmit_CALL_INSTANCE;

typedef struct _CMOCK_SS_com_handle_frame_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  ComStatus ReturnVal;
  ComFrame* Expected_frame;
  int Expected_frame_Depth;

} CMOCK_SS_com_handle_frame_CALL_INSTANCE;

typedef struct _CMOCK_SS_com_handle_action_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  ComStatus ReturnVal;
  ComFrame* Expected_frame;
  int Expected_frame_Depth;

} CMOCK_SS_com_handle_action_CALL_INSTANCE;

typedef struct _CMOCK_SS_com_handle_request_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  ComStatus ReturnVal;
  ComFrame* Expected_frame;
  int Expected_frame_Depth;

} CMOCK_SS_com_handle_request_CALL_INSTANCE;

typedef struct _CMOCK_SS_com_handle_service_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  ComStatus ReturnVal;
  ComFrame* Expected_frame;
  int Expected_frame_Depth;

} CMOCK_SS_com_handle_service_CALL_INSTANCE;

typedef struct _CMOCK_SS_com_add_payload_to_frame_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  ComFrame* Expected_frame;
  ComDataType Expected_type;
  void* Expected_payload;
  int Expected_frame_Depth;
  int Expected_payload_Depth;

} CMOCK_SS_com_add_payload_to_frame_CALL_INSTANCE;

typedef struct _CMOCK_SS_com_main_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_SS_com_main_CALL_INSTANCE;

static struct MockSS_comInstance
{
  CMOCK_MEM_INDEX_TYPE SS_com_add_sender_CallInstance;
  CMOCK_MEM_INDEX_TYPE SS_com_add_to_queue_CallInstance;
  CMOCK_MEM_INDEX_TYPE SS_com_message_received_CallInstance;
  CMOCK_MEM_INDEX_TYPE SS_com_init_CallInstance;
  CMOCK_MEM_INDEX_TYPE SS_com_transmit_CallInstance;
  CMOCK_MEM_INDEX_TYPE SS_com_handle_frame_CallInstance;
  CMOCK_MEM_INDEX_TYPE SS_com_handle_action_CallInstance;
  CMOCK_MEM_INDEX_TYPE SS_com_handle_request_CallInstance;
  CMOCK_MEM_INDEX_TYPE SS_com_handle_service_CallInstance;
  CMOCK_MEM_INDEX_TYPE SS_com_add_payload_to_frame_CallInstance;
  CMOCK_MEM_INDEX_TYPE SS_com_main_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void MockSS_com_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.SS_com_add_sender_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_SS_com_add_sender);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.SS_com_add_to_queue_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_SS_com_add_to_queue);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.SS_com_message_received_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_SS_com_message_received);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.SS_com_init_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_SS_com_init);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.SS_com_transmit_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_SS_com_transmit);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.SS_com_handle_frame_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_SS_com_handle_frame);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.SS_com_handle_action_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_SS_com_handle_action);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.SS_com_handle_request_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_SS_com_handle_request);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.SS_com_handle_service_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_SS_com_handle_service);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.SS_com_add_payload_to_frame_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_SS_com_add_payload_to_frame);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.SS_com_main_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_SS_com_main);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
}

void MockSS_com_Init(void)
{
  MockSS_com_Destroy();
}

void MockSS_com_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

QueueHandle_t SS_com_add_sender(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_SS_com_add_sender_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_SS_com_add_sender);
  cmock_call_instance = (CMOCK_SS_com_add_sender_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.SS_com_add_sender_CallInstance);
  Mock.SS_com_add_sender_CallInstance = CMock_Guts_MemNext(Mock.SS_com_add_sender_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void SS_com_add_sender_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, QueueHandle_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_add_sender_CALL_INSTANCE));
  CMOCK_SS_com_add_sender_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_add_sender_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_add_sender_CallInstance = CMock_Guts_MemChain(Mock.SS_com_add_sender_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  memcpy((void*)(&cmock_call_instance->ReturnVal), (void*)(&cmock_to_return),
         sizeof(QueueHandle_t[sizeof(cmock_to_return) == sizeof(QueueHandle_t) ? 1 : -1])); /* add QueueHandle_t to :treat_as_array if this causes an error */
}

void SS_com_add_to_queue(ComFrame* frame, cmock_SS_com_func_ptr1 sender_fun, QueueHandle_t queue)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_SS_com_add_to_queue_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_SS_com_add_to_queue);
  cmock_call_instance = (CMOCK_SS_com_add_to_queue_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.SS_com_add_to_queue_CallInstance);
  Mock.SS_com_add_to_queue_CallInstance = CMock_Guts_MemNext(Mock.SS_com_add_to_queue_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_SS_com_add_to_queue,CMockString_frame);
    if (cmock_call_instance->Expected_frame == NULL)
      { UNITY_TEST_ASSERT_NULL(frame, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((void*)(cmock_call_instance->Expected_frame), (void*)(frame), sizeof(ComFrame), cmock_call_instance->Expected_frame_Depth, cmock_line, CMockStringMismatch); }
  }
  {
    UNITY_SET_DETAILS(CMockString_SS_com_add_to_queue,CMockString_sender_fun);
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_sender_fun, sender_fun, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_SS_com_add_to_queue,CMockString_queue);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_queue), (void*)(&queue), sizeof(QueueHandle_t), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_SS_com_add_to_queue(CMOCK_SS_com_add_to_queue_CALL_INSTANCE* cmock_call_instance, ComFrame* frame, int frame_Depth, cmock_SS_com_func_ptr1 sender_fun, QueueHandle_t queue)
{
  cmock_call_instance->Expected_frame = frame;
  cmock_call_instance->Expected_frame_Depth = frame_Depth;
  memcpy((void*)(&cmock_call_instance->Expected_sender_fun), (void*)(&sender_fun),
         sizeof(cmock_SS_com_func_ptr1[sizeof(sender_fun) == sizeof(cmock_SS_com_func_ptr1) ? 1 : -1])); /* add cmock_SS_com_func_ptr1 to :treat_as_array if this causes an error */
  memcpy((void*)(&cmock_call_instance->Expected_queue), (void*)(&queue),
         sizeof(QueueHandle_t[sizeof(queue) == sizeof(QueueHandle_t) ? 1 : -1])); /* add QueueHandle_t to :treat_as_array if this causes an error */
}

void SS_com_add_to_queue_CMockExpect(UNITY_LINE_TYPE cmock_line, ComFrame* frame, cmock_SS_com_func_ptr1 sender_fun, QueueHandle_t queue)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_add_to_queue_CALL_INSTANCE));
  CMOCK_SS_com_add_to_queue_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_add_to_queue_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_add_to_queue_CallInstance = CMock_Guts_MemChain(Mock.SS_com_add_to_queue_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_SS_com_add_to_queue(cmock_call_instance, frame, 1, sender_fun, queue);
}

void SS_com_add_to_queue_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, ComFrame* frame, int frame_Depth, cmock_SS_com_func_ptr1 sender_fun, QueueHandle_t queue)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_add_to_queue_CALL_INSTANCE));
  CMOCK_SS_com_add_to_queue_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_add_to_queue_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_add_to_queue_CallInstance = CMock_Guts_MemChain(Mock.SS_com_add_to_queue_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_SS_com_add_to_queue(cmock_call_instance, frame, frame_Depth, sender_fun, queue);
}

void SS_com_message_received(ComFrame* frame)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_SS_com_message_received_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_SS_com_message_received);
  cmock_call_instance = (CMOCK_SS_com_message_received_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.SS_com_message_received_CallInstance);
  Mock.SS_com_message_received_CallInstance = CMock_Guts_MemNext(Mock.SS_com_message_received_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_SS_com_message_received,CMockString_frame);
    if (cmock_call_instance->Expected_frame == NULL)
      { UNITY_TEST_ASSERT_NULL(frame, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((void*)(cmock_call_instance->Expected_frame), (void*)(frame), sizeof(ComFrame), cmock_call_instance->Expected_frame_Depth, cmock_line, CMockStringMismatch); }
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_SS_com_message_received(CMOCK_SS_com_message_received_CALL_INSTANCE* cmock_call_instance, ComFrame* frame, int frame_Depth)
{
  cmock_call_instance->Expected_frame = frame;
  cmock_call_instance->Expected_frame_Depth = frame_Depth;
}

void SS_com_message_received_CMockExpect(UNITY_LINE_TYPE cmock_line, ComFrame* frame)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_message_received_CALL_INSTANCE));
  CMOCK_SS_com_message_received_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_message_received_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_message_received_CallInstance = CMock_Guts_MemChain(Mock.SS_com_message_received_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_SS_com_message_received(cmock_call_instance, frame, 1);
}

void SS_com_message_received_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, ComFrame* frame, int frame_Depth)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_message_received_CALL_INSTANCE));
  CMOCK_SS_com_message_received_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_message_received_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_message_received_CallInstance = CMock_Guts_MemChain(Mock.SS_com_message_received_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_SS_com_message_received(cmock_call_instance, frame, frame_Depth);
}

void SS_com_init(ComBoardID board)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_SS_com_init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_SS_com_init);
  cmock_call_instance = (CMOCK_SS_com_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.SS_com_init_CallInstance);
  Mock.SS_com_init_CallInstance = CMock_Guts_MemNext(Mock.SS_com_init_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_SS_com_init,CMockString_board);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_board), (void*)(&board), sizeof(ComBoardID), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_SS_com_init(CMOCK_SS_com_init_CALL_INSTANCE* cmock_call_instance, ComBoardID board)
{
  memcpy((void*)(&cmock_call_instance->Expected_board), (void*)(&board),
         sizeof(ComBoardID[sizeof(board) == sizeof(ComBoardID) ? 1 : -1])); /* add ComBoardID to :treat_as_array if this causes an error */
}

void SS_com_init_CMockExpect(UNITY_LINE_TYPE cmock_line, ComBoardID board)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_init_CALL_INSTANCE));
  CMOCK_SS_com_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_init_CallInstance = CMock_Guts_MemChain(Mock.SS_com_init_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_SS_com_init(cmock_call_instance, board);
}

void SS_com_transmit(ComFrame* frame)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_SS_com_transmit_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_SS_com_transmit);
  cmock_call_instance = (CMOCK_SS_com_transmit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.SS_com_transmit_CallInstance);
  Mock.SS_com_transmit_CallInstance = CMock_Guts_MemNext(Mock.SS_com_transmit_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_SS_com_transmit,CMockString_frame);
    if (cmock_call_instance->Expected_frame == NULL)
      { UNITY_TEST_ASSERT_NULL(frame, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((void*)(cmock_call_instance->Expected_frame), (void*)(frame), sizeof(ComFrame), cmock_call_instance->Expected_frame_Depth, cmock_line, CMockStringMismatch); }
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_SS_com_transmit(CMOCK_SS_com_transmit_CALL_INSTANCE* cmock_call_instance, ComFrame* frame, int frame_Depth)
{
  cmock_call_instance->Expected_frame = frame;
  cmock_call_instance->Expected_frame_Depth = frame_Depth;
}

void SS_com_transmit_CMockExpect(UNITY_LINE_TYPE cmock_line, ComFrame* frame)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_transmit_CALL_INSTANCE));
  CMOCK_SS_com_transmit_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_transmit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_transmit_CallInstance = CMock_Guts_MemChain(Mock.SS_com_transmit_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_SS_com_transmit(cmock_call_instance, frame, 1);
}

void SS_com_transmit_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, ComFrame* frame, int frame_Depth)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_transmit_CALL_INSTANCE));
  CMOCK_SS_com_transmit_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_transmit_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_transmit_CallInstance = CMock_Guts_MemChain(Mock.SS_com_transmit_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_SS_com_transmit(cmock_call_instance, frame, frame_Depth);
}

ComStatus SS_com_handle_frame(ComFrame* frame)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_SS_com_handle_frame_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_SS_com_handle_frame);
  cmock_call_instance = (CMOCK_SS_com_handle_frame_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.SS_com_handle_frame_CallInstance);
  Mock.SS_com_handle_frame_CallInstance = CMock_Guts_MemNext(Mock.SS_com_handle_frame_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_SS_com_handle_frame,CMockString_frame);
    if (cmock_call_instance->Expected_frame == NULL)
      { UNITY_TEST_ASSERT_NULL(frame, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((void*)(cmock_call_instance->Expected_frame), (void*)(frame), sizeof(ComFrame), cmock_call_instance->Expected_frame_Depth, cmock_line, CMockStringMismatch); }
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_SS_com_handle_frame(CMOCK_SS_com_handle_frame_CALL_INSTANCE* cmock_call_instance, ComFrame* frame, int frame_Depth)
{
  cmock_call_instance->Expected_frame = frame;
  cmock_call_instance->Expected_frame_Depth = frame_Depth;
}

void SS_com_handle_frame_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, ComFrame* frame, ComStatus cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_handle_frame_CALL_INSTANCE));
  CMOCK_SS_com_handle_frame_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_handle_frame_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_handle_frame_CallInstance = CMock_Guts_MemChain(Mock.SS_com_handle_frame_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_SS_com_handle_frame(cmock_call_instance, frame, 1);
  memcpy((void*)(&cmock_call_instance->ReturnVal), (void*)(&cmock_to_return),
         sizeof(ComStatus[sizeof(cmock_to_return) == sizeof(ComStatus) ? 1 : -1])); /* add ComStatus to :treat_as_array if this causes an error */
}

void SS_com_handle_frame_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, ComFrame* frame, int frame_Depth, ComStatus cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_handle_frame_CALL_INSTANCE));
  CMOCK_SS_com_handle_frame_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_handle_frame_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_handle_frame_CallInstance = CMock_Guts_MemChain(Mock.SS_com_handle_frame_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_SS_com_handle_frame(cmock_call_instance, frame, frame_Depth);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

ComStatus SS_com_handle_action(ComFrame* frame)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_SS_com_handle_action_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_SS_com_handle_action);
  cmock_call_instance = (CMOCK_SS_com_handle_action_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.SS_com_handle_action_CallInstance);
  Mock.SS_com_handle_action_CallInstance = CMock_Guts_MemNext(Mock.SS_com_handle_action_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_SS_com_handle_action,CMockString_frame);
    if (cmock_call_instance->Expected_frame == NULL)
      { UNITY_TEST_ASSERT_NULL(frame, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((void*)(cmock_call_instance->Expected_frame), (void*)(frame), sizeof(ComFrame), cmock_call_instance->Expected_frame_Depth, cmock_line, CMockStringMismatch); }
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_SS_com_handle_action(CMOCK_SS_com_handle_action_CALL_INSTANCE* cmock_call_instance, ComFrame* frame, int frame_Depth)
{
  cmock_call_instance->Expected_frame = frame;
  cmock_call_instance->Expected_frame_Depth = frame_Depth;
}

void SS_com_handle_action_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, ComFrame* frame, ComStatus cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_handle_action_CALL_INSTANCE));
  CMOCK_SS_com_handle_action_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_handle_action_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_handle_action_CallInstance = CMock_Guts_MemChain(Mock.SS_com_handle_action_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_SS_com_handle_action(cmock_call_instance, frame, 1);
  memcpy((void*)(&cmock_call_instance->ReturnVal), (void*)(&cmock_to_return),
         sizeof(ComStatus[sizeof(cmock_to_return) == sizeof(ComStatus) ? 1 : -1])); /* add ComStatus to :treat_as_array if this causes an error */
}

void SS_com_handle_action_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, ComFrame* frame, int frame_Depth, ComStatus cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_handle_action_CALL_INSTANCE));
  CMOCK_SS_com_handle_action_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_handle_action_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_handle_action_CallInstance = CMock_Guts_MemChain(Mock.SS_com_handle_action_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_SS_com_handle_action(cmock_call_instance, frame, frame_Depth);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

ComStatus SS_com_handle_request(ComFrame* frame)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_SS_com_handle_request_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_SS_com_handle_request);
  cmock_call_instance = (CMOCK_SS_com_handle_request_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.SS_com_handle_request_CallInstance);
  Mock.SS_com_handle_request_CallInstance = CMock_Guts_MemNext(Mock.SS_com_handle_request_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_SS_com_handle_request,CMockString_frame);
    if (cmock_call_instance->Expected_frame == NULL)
      { UNITY_TEST_ASSERT_NULL(frame, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((void*)(cmock_call_instance->Expected_frame), (void*)(frame), sizeof(ComFrame), cmock_call_instance->Expected_frame_Depth, cmock_line, CMockStringMismatch); }
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_SS_com_handle_request(CMOCK_SS_com_handle_request_CALL_INSTANCE* cmock_call_instance, ComFrame* frame, int frame_Depth)
{
  cmock_call_instance->Expected_frame = frame;
  cmock_call_instance->Expected_frame_Depth = frame_Depth;
}

void SS_com_handle_request_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, ComFrame* frame, ComStatus cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_handle_request_CALL_INSTANCE));
  CMOCK_SS_com_handle_request_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_handle_request_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_handle_request_CallInstance = CMock_Guts_MemChain(Mock.SS_com_handle_request_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_SS_com_handle_request(cmock_call_instance, frame, 1);
  memcpy((void*)(&cmock_call_instance->ReturnVal), (void*)(&cmock_to_return),
         sizeof(ComStatus[sizeof(cmock_to_return) == sizeof(ComStatus) ? 1 : -1])); /* add ComStatus to :treat_as_array if this causes an error */
}

void SS_com_handle_request_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, ComFrame* frame, int frame_Depth, ComStatus cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_handle_request_CALL_INSTANCE));
  CMOCK_SS_com_handle_request_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_handle_request_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_handle_request_CallInstance = CMock_Guts_MemChain(Mock.SS_com_handle_request_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_SS_com_handle_request(cmock_call_instance, frame, frame_Depth);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

ComStatus SS_com_handle_service(ComFrame* frame)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_SS_com_handle_service_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_SS_com_handle_service);
  cmock_call_instance = (CMOCK_SS_com_handle_service_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.SS_com_handle_service_CallInstance);
  Mock.SS_com_handle_service_CallInstance = CMock_Guts_MemNext(Mock.SS_com_handle_service_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_SS_com_handle_service,CMockString_frame);
    if (cmock_call_instance->Expected_frame == NULL)
      { UNITY_TEST_ASSERT_NULL(frame, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((void*)(cmock_call_instance->Expected_frame), (void*)(frame), sizeof(ComFrame), cmock_call_instance->Expected_frame_Depth, cmock_line, CMockStringMismatch); }
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_SS_com_handle_service(CMOCK_SS_com_handle_service_CALL_INSTANCE* cmock_call_instance, ComFrame* frame, int frame_Depth)
{
  cmock_call_instance->Expected_frame = frame;
  cmock_call_instance->Expected_frame_Depth = frame_Depth;
}

void SS_com_handle_service_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, ComFrame* frame, ComStatus cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_handle_service_CALL_INSTANCE));
  CMOCK_SS_com_handle_service_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_handle_service_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_handle_service_CallInstance = CMock_Guts_MemChain(Mock.SS_com_handle_service_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_SS_com_handle_service(cmock_call_instance, frame, 1);
  memcpy((void*)(&cmock_call_instance->ReturnVal), (void*)(&cmock_to_return),
         sizeof(ComStatus[sizeof(cmock_to_return) == sizeof(ComStatus) ? 1 : -1])); /* add ComStatus to :treat_as_array if this causes an error */
}

void SS_com_handle_service_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, ComFrame* frame, int frame_Depth, ComStatus cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_handle_service_CALL_INSTANCE));
  CMOCK_SS_com_handle_service_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_handle_service_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_handle_service_CallInstance = CMock_Guts_MemChain(Mock.SS_com_handle_service_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_SS_com_handle_service(cmock_call_instance, frame, frame_Depth);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void SS_com_add_payload_to_frame(ComFrame* frame, ComDataType type, void* payload)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_SS_com_add_payload_to_frame_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_SS_com_add_payload_to_frame);
  cmock_call_instance = (CMOCK_SS_com_add_payload_to_frame_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.SS_com_add_payload_to_frame_CallInstance);
  Mock.SS_com_add_payload_to_frame_CallInstance = CMock_Guts_MemNext(Mock.SS_com_add_payload_to_frame_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_SS_com_add_payload_to_frame,CMockString_frame);
    if (cmock_call_instance->Expected_frame == NULL)
      { UNITY_TEST_ASSERT_NULL(frame, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((void*)(cmock_call_instance->Expected_frame), (void*)(frame), sizeof(ComFrame), cmock_call_instance->Expected_frame_Depth, cmock_line, CMockStringMismatch); }
  }
  {
    UNITY_SET_DETAILS(CMockString_SS_com_add_payload_to_frame,CMockString_type);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_type), (void*)(&type), sizeof(ComDataType), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_SS_com_add_payload_to_frame,CMockString_payload);
    if (cmock_call_instance->Expected_payload == NULL)
      { UNITY_TEST_ASSERT_NULL(payload, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_HEX8_ARRAY(cmock_call_instance->Expected_payload, payload, cmock_call_instance->Expected_payload_Depth, cmock_line, CMockStringMismatch); }
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_SS_com_add_payload_to_frame(CMOCK_SS_com_add_payload_to_frame_CALL_INSTANCE* cmock_call_instance, ComFrame* frame, int frame_Depth, ComDataType type, void* payload, int payload_Depth)
{
  cmock_call_instance->Expected_frame = frame;
  cmock_call_instance->Expected_frame_Depth = frame_Depth;
  memcpy((void*)(&cmock_call_instance->Expected_type), (void*)(&type),
         sizeof(ComDataType[sizeof(type) == sizeof(ComDataType) ? 1 : -1])); /* add ComDataType to :treat_as_array if this causes an error */
  cmock_call_instance->Expected_payload = payload;
  cmock_call_instance->Expected_payload_Depth = payload_Depth;
}

void SS_com_add_payload_to_frame_CMockExpect(UNITY_LINE_TYPE cmock_line, ComFrame* frame, ComDataType type, void* payload)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_add_payload_to_frame_CALL_INSTANCE));
  CMOCK_SS_com_add_payload_to_frame_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_add_payload_to_frame_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_add_payload_to_frame_CallInstance = CMock_Guts_MemChain(Mock.SS_com_add_payload_to_frame_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_SS_com_add_payload_to_frame(cmock_call_instance, frame, 1, type, payload, 1);
}

void SS_com_add_payload_to_frame_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, ComFrame* frame, int frame_Depth, ComDataType type, void* payload, int payload_Depth)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_add_payload_to_frame_CALL_INSTANCE));
  CMOCK_SS_com_add_payload_to_frame_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_add_payload_to_frame_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_add_payload_to_frame_CallInstance = CMock_Guts_MemChain(Mock.SS_com_add_payload_to_frame_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_SS_com_add_payload_to_frame(cmock_call_instance, frame, frame_Depth, type, payload, payload_Depth);
}

void SS_com_main(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_SS_com_main_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_SS_com_main);
  cmock_call_instance = (CMOCK_SS_com_main_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.SS_com_main_CallInstance);
  Mock.SS_com_main_CallInstance = CMock_Guts_MemNext(Mock.SS_com_main_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void SS_com_main_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_SS_com_main_CALL_INSTANCE));
  CMOCK_SS_com_main_CALL_INSTANCE* cmock_call_instance = (CMOCK_SS_com_main_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.SS_com_main_CallInstance = CMock_Guts_MemChain(Mock.SS_com_main_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
}

