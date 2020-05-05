/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "Mockcroutine.h"

static const char* CMockString_pxCoRoutineCode = "pxCoRoutineCode";
static const char* CMockString_pxEventList = "pxEventList";
static const char* CMockString_uxIndex = "uxIndex";
static const char* CMockString_uxPriority = "uxPriority";
static const char* CMockString_vCoRoutineAddToDelayedList = "vCoRoutineAddToDelayedList";
static const char* CMockString_vCoRoutineSchedule = "vCoRoutineSchedule";
static const char* CMockString_xCoRoutineCreate = "xCoRoutineCreate";
static const char* CMockString_xCoRoutineRemoveFromEventList = "xCoRoutineRemoveFromEventList";
static const char* CMockString_xTicksToDelay = "xTicksToDelay";

typedef struct _CMOCK_xCoRoutineCreate_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  BaseType_t ReturnVal;
  crCOROUTINE_CODE Expected_pxCoRoutineCode;
  UBaseType_t Expected_uxPriority;
  UBaseType_t Expected_uxIndex;
  char IgnoreArg_pxCoRoutineCode;
  char IgnoreArg_uxPriority;
  char IgnoreArg_uxIndex;

} CMOCK_xCoRoutineCreate_CALL_INSTANCE;

typedef struct _CMOCK_vCoRoutineSchedule_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;

} CMOCK_vCoRoutineSchedule_CALL_INSTANCE;

typedef struct _CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  TickType_t Expected_xTicksToDelay;
  List_t* Expected_pxEventList;
  int Expected_pxEventList_Depth;
  char IgnoreArg_xTicksToDelay;
  char IgnoreArg_pxEventList;

} CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE;

typedef struct _CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  BaseType_t ReturnVal;
  const List_t* Expected_pxEventList;
  int Expected_pxEventList_Depth;
  char IgnoreArg_pxEventList;

} CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE;

static struct MockcroutineInstance
{
  char xCoRoutineCreate_IgnoreBool;
  BaseType_t xCoRoutineCreate_FinalReturn;
  CMOCK_MEM_INDEX_TYPE xCoRoutineCreate_CallInstance;
  char vCoRoutineSchedule_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE vCoRoutineSchedule_CallInstance;
  char vCoRoutineAddToDelayedList_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE vCoRoutineAddToDelayedList_CallInstance;
  char xCoRoutineRemoveFromEventList_IgnoreBool;
  BaseType_t xCoRoutineRemoveFromEventList_FinalReturn;
  CMOCK_MEM_INDEX_TYPE xCoRoutineRemoveFromEventList_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mockcroutine_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.xCoRoutineCreate_CallInstance;
  if (Mock.xCoRoutineCreate_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_xCoRoutineCreate);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.vCoRoutineSchedule_CallInstance;
  if (Mock.vCoRoutineSchedule_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_vCoRoutineSchedule);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.vCoRoutineAddToDelayedList_CallInstance;
  if (Mock.vCoRoutineAddToDelayedList_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_vCoRoutineAddToDelayedList);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.xCoRoutineRemoveFromEventList_CallInstance;
  if (Mock.xCoRoutineRemoveFromEventList_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_xCoRoutineRemoveFromEventList);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
}

void Mockcroutine_Init(void)
{
  Mockcroutine_Destroy();
}

void Mockcroutine_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

BaseType_t xCoRoutineCreate(crCOROUTINE_CODE pxCoRoutineCode, UBaseType_t uxPriority, UBaseType_t uxIndex)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_xCoRoutineCreate_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_xCoRoutineCreate);
  cmock_call_instance = (CMOCK_xCoRoutineCreate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.xCoRoutineCreate_CallInstance);
  Mock.xCoRoutineCreate_CallInstance = CMock_Guts_MemNext(Mock.xCoRoutineCreate_CallInstance);
  if (Mock.xCoRoutineCreate_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.xCoRoutineCreate_FinalReturn;
    memcpy((void*)(&Mock.xCoRoutineCreate_FinalReturn), (void*)(&cmock_call_instance->ReturnVal),
         sizeof(BaseType_t[sizeof(cmock_call_instance->ReturnVal) == sizeof(BaseType_t) ? 1 : -1])); /* add BaseType_t to :treat_as_array if this causes an error */
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  if (!cmock_call_instance->IgnoreArg_pxCoRoutineCode)
  {
    UNITY_SET_DETAILS(CMockString_xCoRoutineCreate,CMockString_pxCoRoutineCode);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_pxCoRoutineCode), (void*)(&pxCoRoutineCode), sizeof(crCOROUTINE_CODE), cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_uxPriority)
  {
    UNITY_SET_DETAILS(CMockString_xCoRoutineCreate,CMockString_uxPriority);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_uxPriority), (void*)(&uxPriority), sizeof(UBaseType_t), cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_uxIndex)
  {
    UNITY_SET_DETAILS(CMockString_xCoRoutineCreate,CMockString_uxIndex);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_uxIndex), (void*)(&uxIndex), sizeof(UBaseType_t), cmock_line, CMockStringMismatch);
  }
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_xCoRoutineCreate(CMOCK_xCoRoutineCreate_CALL_INSTANCE* cmock_call_instance, crCOROUTINE_CODE pxCoRoutineCode, UBaseType_t uxPriority, UBaseType_t uxIndex)
{
  memcpy((void*)(&cmock_call_instance->Expected_pxCoRoutineCode), (void*)(&pxCoRoutineCode),
         sizeof(crCOROUTINE_CODE[sizeof(pxCoRoutineCode) == sizeof(crCOROUTINE_CODE) ? 1 : -1])); /* add crCOROUTINE_CODE to :treat_as_array if this causes an error */
  cmock_call_instance->IgnoreArg_pxCoRoutineCode = 0;
  memcpy((void*)(&cmock_call_instance->Expected_uxPriority), (void*)(&uxPriority),
         sizeof(UBaseType_t[sizeof(uxPriority) == sizeof(UBaseType_t) ? 1 : -1])); /* add UBaseType_t to :treat_as_array if this causes an error */
  cmock_call_instance->IgnoreArg_uxPriority = 0;
  memcpy((void*)(&cmock_call_instance->Expected_uxIndex), (void*)(&uxIndex),
         sizeof(UBaseType_t[sizeof(uxIndex) == sizeof(UBaseType_t) ? 1 : -1])); /* add UBaseType_t to :treat_as_array if this causes an error */
  cmock_call_instance->IgnoreArg_uxIndex = 0;
}

void xCoRoutineCreate_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, BaseType_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_xCoRoutineCreate_CALL_INSTANCE));
  CMOCK_xCoRoutineCreate_CALL_INSTANCE* cmock_call_instance = (CMOCK_xCoRoutineCreate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.xCoRoutineCreate_CallInstance = CMock_Guts_MemChain(Mock.xCoRoutineCreate_CallInstance, cmock_guts_index);
  Mock.xCoRoutineCreate_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.xCoRoutineCreate_IgnoreBool = (char)1;
}

void xCoRoutineCreate_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, BaseType_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_xCoRoutineCreate_CALL_INSTANCE));
  CMOCK_xCoRoutineCreate_CALL_INSTANCE* cmock_call_instance = (CMOCK_xCoRoutineCreate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.xCoRoutineCreate_CallInstance = CMock_Guts_MemChain(Mock.xCoRoutineCreate_CallInstance, cmock_guts_index);
  Mock.xCoRoutineCreate_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void xCoRoutineCreate_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, crCOROUTINE_CODE pxCoRoutineCode, UBaseType_t uxPriority, UBaseType_t uxIndex, BaseType_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_xCoRoutineCreate_CALL_INSTANCE));
  CMOCK_xCoRoutineCreate_CALL_INSTANCE* cmock_call_instance = (CMOCK_xCoRoutineCreate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.xCoRoutineCreate_CallInstance = CMock_Guts_MemChain(Mock.xCoRoutineCreate_CallInstance, cmock_guts_index);
  Mock.xCoRoutineCreate_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_xCoRoutineCreate(cmock_call_instance, pxCoRoutineCode, uxPriority, uxIndex);
  memcpy((void*)(&cmock_call_instance->ReturnVal), (void*)(&cmock_to_return),
         sizeof(BaseType_t[sizeof(cmock_to_return) == sizeof(BaseType_t) ? 1 : -1])); /* add BaseType_t to :treat_as_array if this causes an error */
}

void xCoRoutineCreate_CMockIgnoreArg_pxCoRoutineCode(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_xCoRoutineCreate_CALL_INSTANCE* cmock_call_instance = (CMOCK_xCoRoutineCreate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.xCoRoutineCreate_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_pxCoRoutineCode = 1;
}

void xCoRoutineCreate_CMockIgnoreArg_uxPriority(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_xCoRoutineCreate_CALL_INSTANCE* cmock_call_instance = (CMOCK_xCoRoutineCreate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.xCoRoutineCreate_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_uxPriority = 1;
}

void xCoRoutineCreate_CMockIgnoreArg_uxIndex(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_xCoRoutineCreate_CALL_INSTANCE* cmock_call_instance = (CMOCK_xCoRoutineCreate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.xCoRoutineCreate_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_uxIndex = 1;
}

void vCoRoutineSchedule(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_vCoRoutineSchedule_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_vCoRoutineSchedule);
  cmock_call_instance = (CMOCK_vCoRoutineSchedule_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.vCoRoutineSchedule_CallInstance);
  Mock.vCoRoutineSchedule_CallInstance = CMock_Guts_MemNext(Mock.vCoRoutineSchedule_CallInstance);
  if (Mock.vCoRoutineSchedule_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void vCoRoutineSchedule_CMockIgnore(void)
{
  Mock.vCoRoutineSchedule_IgnoreBool = (char)1;
}

void vCoRoutineSchedule_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_vCoRoutineSchedule_CALL_INSTANCE));
  CMOCK_vCoRoutineSchedule_CALL_INSTANCE* cmock_call_instance = (CMOCK_vCoRoutineSchedule_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.vCoRoutineSchedule_CallInstance = CMock_Guts_MemChain(Mock.vCoRoutineSchedule_CallInstance, cmock_guts_index);
  Mock.vCoRoutineSchedule_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
}

void vCoRoutineAddToDelayedList(TickType_t xTicksToDelay, List_t* pxEventList)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_vCoRoutineAddToDelayedList);
  cmock_call_instance = (CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.vCoRoutineAddToDelayedList_CallInstance);
  Mock.vCoRoutineAddToDelayedList_CallInstance = CMock_Guts_MemNext(Mock.vCoRoutineAddToDelayedList_CallInstance);
  if (Mock.vCoRoutineAddToDelayedList_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  if (!cmock_call_instance->IgnoreArg_xTicksToDelay)
  {
    UNITY_SET_DETAILS(CMockString_vCoRoutineAddToDelayedList,CMockString_xTicksToDelay);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_xTicksToDelay), (void*)(&xTicksToDelay), sizeof(TickType_t), cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_pxEventList)
  {
    UNITY_SET_DETAILS(CMockString_vCoRoutineAddToDelayedList,CMockString_pxEventList);
    if (cmock_call_instance->Expected_pxEventList == NULL)
      { UNITY_TEST_ASSERT_NULL(pxEventList, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((void*)(cmock_call_instance->Expected_pxEventList), (void*)(pxEventList), sizeof(List_t), cmock_call_instance->Expected_pxEventList_Depth, cmock_line, CMockStringMismatch); }
  }
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_vCoRoutineAddToDelayedList(CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE* cmock_call_instance, TickType_t xTicksToDelay, List_t* pxEventList, int pxEventList_Depth)
{
  memcpy((void*)(&cmock_call_instance->Expected_xTicksToDelay), (void*)(&xTicksToDelay),
         sizeof(TickType_t[sizeof(xTicksToDelay) == sizeof(TickType_t) ? 1 : -1])); /* add TickType_t to :treat_as_array if this causes an error */
  cmock_call_instance->IgnoreArg_xTicksToDelay = 0;
  cmock_call_instance->Expected_pxEventList = pxEventList;
  cmock_call_instance->Expected_pxEventList_Depth = pxEventList_Depth;
  cmock_call_instance->IgnoreArg_pxEventList = 0;
}

void vCoRoutineAddToDelayedList_CMockIgnore(void)
{
  Mock.vCoRoutineAddToDelayedList_IgnoreBool = (char)1;
}

void vCoRoutineAddToDelayedList_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE));
  CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE* cmock_call_instance = (CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.vCoRoutineAddToDelayedList_CallInstance = CMock_Guts_MemChain(Mock.vCoRoutineAddToDelayedList_CallInstance, cmock_guts_index);
  Mock.vCoRoutineAddToDelayedList_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void vCoRoutineAddToDelayedList_CMockExpect(UNITY_LINE_TYPE cmock_line, TickType_t xTicksToDelay, List_t* pxEventList)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE));
  CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE* cmock_call_instance = (CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.vCoRoutineAddToDelayedList_CallInstance = CMock_Guts_MemChain(Mock.vCoRoutineAddToDelayedList_CallInstance, cmock_guts_index);
  Mock.vCoRoutineAddToDelayedList_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_vCoRoutineAddToDelayedList(cmock_call_instance, xTicksToDelay, pxEventList, 1);
}

void vCoRoutineAddToDelayedList_CMockExpectWithArray(UNITY_LINE_TYPE cmock_line, TickType_t xTicksToDelay, List_t* pxEventList, int pxEventList_Depth)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE));
  CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE* cmock_call_instance = (CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.vCoRoutineAddToDelayedList_CallInstance = CMock_Guts_MemChain(Mock.vCoRoutineAddToDelayedList_CallInstance, cmock_guts_index);
  Mock.vCoRoutineAddToDelayedList_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_vCoRoutineAddToDelayedList(cmock_call_instance, xTicksToDelay, pxEventList, pxEventList_Depth);
}

void vCoRoutineAddToDelayedList_CMockIgnoreArg_xTicksToDelay(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE* cmock_call_instance = (CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.vCoRoutineAddToDelayedList_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_xTicksToDelay = 1;
}

void vCoRoutineAddToDelayedList_CMockIgnoreArg_pxEventList(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE* cmock_call_instance = (CMOCK_vCoRoutineAddToDelayedList_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.vCoRoutineAddToDelayedList_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_pxEventList = 1;
}

BaseType_t xCoRoutineRemoveFromEventList(const List_t* pxEventList)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_xCoRoutineRemoveFromEventList);
  cmock_call_instance = (CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.xCoRoutineRemoveFromEventList_CallInstance);
  Mock.xCoRoutineRemoveFromEventList_CallInstance = CMock_Guts_MemNext(Mock.xCoRoutineRemoveFromEventList_CallInstance);
  if (Mock.xCoRoutineRemoveFromEventList_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.xCoRoutineRemoveFromEventList_FinalReturn;
    memcpy((void*)(&Mock.xCoRoutineRemoveFromEventList_FinalReturn), (void*)(&cmock_call_instance->ReturnVal),
         sizeof(BaseType_t[sizeof(cmock_call_instance->ReturnVal) == sizeof(BaseType_t) ? 1 : -1])); /* add BaseType_t to :treat_as_array if this causes an error */
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  if (!cmock_call_instance->IgnoreArg_pxEventList)
  {
    UNITY_SET_DETAILS(CMockString_xCoRoutineRemoveFromEventList,CMockString_pxEventList);
    if (cmock_call_instance->Expected_pxEventList == NULL)
      { UNITY_TEST_ASSERT_NULL(pxEventList, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_MEMORY_ARRAY((void*)(cmock_call_instance->Expected_pxEventList), (void*)(pxEventList), sizeof(const List_t), cmock_call_instance->Expected_pxEventList_Depth, cmock_line, CMockStringMismatch); }
  }
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_xCoRoutineRemoveFromEventList(CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE* cmock_call_instance, const List_t* pxEventList, int pxEventList_Depth)
{
  cmock_call_instance->Expected_pxEventList = pxEventList;
  cmock_call_instance->Expected_pxEventList_Depth = pxEventList_Depth;
  cmock_call_instance->IgnoreArg_pxEventList = 0;
}

void xCoRoutineRemoveFromEventList_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, BaseType_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE));
  CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE* cmock_call_instance = (CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.xCoRoutineRemoveFromEventList_CallInstance = CMock_Guts_MemChain(Mock.xCoRoutineRemoveFromEventList_CallInstance, cmock_guts_index);
  Mock.xCoRoutineRemoveFromEventList_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.xCoRoutineRemoveFromEventList_IgnoreBool = (char)1;
}

void xCoRoutineRemoveFromEventList_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, BaseType_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE));
  CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE* cmock_call_instance = (CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.xCoRoutineRemoveFromEventList_CallInstance = CMock_Guts_MemChain(Mock.xCoRoutineRemoveFromEventList_CallInstance, cmock_guts_index);
  Mock.xCoRoutineRemoveFromEventList_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void xCoRoutineRemoveFromEventList_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const List_t* pxEventList, BaseType_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE));
  CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE* cmock_call_instance = (CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.xCoRoutineRemoveFromEventList_CallInstance = CMock_Guts_MemChain(Mock.xCoRoutineRemoveFromEventList_CallInstance, cmock_guts_index);
  Mock.xCoRoutineRemoveFromEventList_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_xCoRoutineRemoveFromEventList(cmock_call_instance, pxEventList, 1);
  memcpy((void*)(&cmock_call_instance->ReturnVal), (void*)(&cmock_to_return),
         sizeof(BaseType_t[sizeof(cmock_to_return) == sizeof(BaseType_t) ? 1 : -1])); /* add BaseType_t to :treat_as_array if this causes an error */
}

void xCoRoutineRemoveFromEventList_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, const List_t* pxEventList, int pxEventList_Depth, BaseType_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE));
  CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE* cmock_call_instance = (CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.xCoRoutineRemoveFromEventList_CallInstance = CMock_Guts_MemChain(Mock.xCoRoutineRemoveFromEventList_CallInstance, cmock_guts_index);
  Mock.xCoRoutineRemoveFromEventList_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_xCoRoutineRemoveFromEventList(cmock_call_instance, pxEventList, pxEventList_Depth);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void xCoRoutineRemoveFromEventList_CMockIgnoreArg_pxEventList(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE* cmock_call_instance = (CMOCK_xCoRoutineRemoveFromEventList_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.xCoRoutineRemoveFromEventList_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_pxEventList = 1;
}
