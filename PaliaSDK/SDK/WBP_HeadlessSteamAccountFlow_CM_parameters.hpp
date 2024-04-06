#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HeadlessSteamAccountFlow_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_HeadlessSteamAccountFlow_CM.WBP_HeadlessSteamAccountFlow_CM_C.ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_NewGuid_ReturnValue;                      // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C74[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0028(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C75[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_Parse_StringToGuid_OutGuid;               // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Parse_StringToGuid_Success;               // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C76[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAuthManager*                           CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_ErrorMessage_1;                       // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_ErrorCode_1;                          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C77[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_ErrorMessage;                         // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_ErrorCode;                            // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM) == 0x000008, "Wrong alignment on WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM");
static_assert(sizeof(WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM) == 0x0000B0, "Wrong size on WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM, EntryPoint) == 0x000000, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM, CallFunc_NewGuid_ReturnValue) == 0x000014, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM::CallFunc_NewGuid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM, CallFunc_GetText_ReturnValue) == 0x000028, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM, CallFunc_TextIsEmpty_ReturnValue) == 0x000050, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM, CallFunc_Parse_StringToGuid_OutGuid) == 0x000054, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM::CallFunc_Parse_StringToGuid_OutGuid' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM, CallFunc_Parse_StringToGuid_Success) == 0x000064, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM::CallFunc_Parse_StringToGuid_Success' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM, K2Node_CreateDelegate_OutputDelegate_1) == 0x000068, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000078, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM, K2Node_Event_ErrorMessage_1) == 0x000080, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM::K2Node_Event_ErrorMessage_1' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM, K2Node_Event_ErrorCode_1) == 0x000090, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM::K2Node_Event_ErrorCode_1' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM, K2Node_Event_ErrorMessage) == 0x000098, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM::K2Node_Event_ErrorMessage' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM, K2Node_Event_ErrorCode) == 0x0000A8, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM::K2Node_Event_ErrorCode' has a wrong offset!");

// Function WBP_HeadlessSteamAccountFlow_CM.WBP_HeadlessSteamAccountFlow_CM_C.HandleLoginError
// 0x0060 (0x0060 - 0x0000)
struct WBP_HeadlessSteamAccountFlow_CM_C_HandleLoginError final 
{
public:
	int32                                         Code;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C78[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Msg;                                               // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   Error_Message;                                     // 0x0018(0x0018)(Edit, BlueprintVisible)
	class FString                                 CallFunc_GetErrorMessageFromResponse_ReturnValue;  // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsErrorRetriable_ReturnValue;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C79[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_LoginErrorMessage_ReturnValue;            // 0x0048(0x0018)()
};
static_assert(alignof(WBP_HeadlessSteamAccountFlow_CM_C_HandleLoginError) == 0x000008, "Wrong alignment on WBP_HeadlessSteamAccountFlow_CM_C_HandleLoginError");
static_assert(sizeof(WBP_HeadlessSteamAccountFlow_CM_C_HandleLoginError) == 0x000060, "Wrong size on WBP_HeadlessSteamAccountFlow_CM_C_HandleLoginError");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_HandleLoginError, Code) == 0x000000, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_HandleLoginError::Code' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_HandleLoginError, Msg) == 0x000008, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_HandleLoginError::Msg' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_HandleLoginError, Error_Message) == 0x000018, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_HandleLoginError::Error_Message' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_HandleLoginError, CallFunc_GetErrorMessageFromResponse_ReturnValue) == 0x000030, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_HandleLoginError::CallFunc_GetErrorMessageFromResponse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_HandleLoginError, CallFunc_IsErrorRetriable_ReturnValue) == 0x000040, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_HandleLoginError::CallFunc_IsErrorRetriable_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_HandleLoginError, CallFunc_LoginErrorMessage_ReturnValue) == 0x000048, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_HandleLoginError::CallFunc_LoginErrorMessage_ReturnValue' has a wrong offset!");

// Function WBP_HeadlessSteamAccountFlow_CM.WBP_HeadlessSteamAccountFlow_CM_C.HandleRegistrationError
// 0x0060 (0x0060 - 0x0000)
struct WBP_HeadlessSteamAccountFlow_CM_C_HandleRegistrationError final 
{
public:
	int32                                         Code;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C7A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Msg;                                               // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   Error_Message;                                     // 0x0018(0x0018)(Edit, BlueprintVisible)
	class FString                                 CallFunc_GetErrorMessageFromResponse_ReturnValue;  // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_RegistrationErrorMessage_ReturnValue;     // 0x0040(0x0018)()
	bool                                          CallFunc_IsErrorRetriable_ReturnValue;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HeadlessSteamAccountFlow_CM_C_HandleRegistrationError) == 0x000008, "Wrong alignment on WBP_HeadlessSteamAccountFlow_CM_C_HandleRegistrationError");
static_assert(sizeof(WBP_HeadlessSteamAccountFlow_CM_C_HandleRegistrationError) == 0x000060, "Wrong size on WBP_HeadlessSteamAccountFlow_CM_C_HandleRegistrationError");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_HandleRegistrationError, Code) == 0x000000, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_HandleRegistrationError::Code' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_HandleRegistrationError, Msg) == 0x000008, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_HandleRegistrationError::Msg' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_HandleRegistrationError, Error_Message) == 0x000018, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_HandleRegistrationError::Error_Message' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_HandleRegistrationError, CallFunc_GetErrorMessageFromResponse_ReturnValue) == 0x000030, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_HandleRegistrationError::CallFunc_GetErrorMessageFromResponse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_HandleRegistrationError, CallFunc_RegistrationErrorMessage_ReturnValue) == 0x000040, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_HandleRegistrationError::CallFunc_RegistrationErrorMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_HandleRegistrationError, CallFunc_IsErrorRetriable_ReturnValue) == 0x000058, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_HandleRegistrationError::CallFunc_IsErrorRetriable_ReturnValue' has a wrong offset!");

// Function WBP_HeadlessSteamAccountFlow_CM.WBP_HeadlessSteamAccountFlow_CM_C.OnPlatformLoggedInFailure
// 0x0018 (0x0018 - 0x0000)
struct WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformLoggedInFailure final 
{
public:
	class FString                                 ErrorMessage;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         ErrorCode;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformLoggedInFailure) == 0x000008, "Wrong alignment on WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformLoggedInFailure");
static_assert(sizeof(WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformLoggedInFailure) == 0x000018, "Wrong size on WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformLoggedInFailure");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformLoggedInFailure, ErrorMessage) == 0x000000, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformLoggedInFailure::ErrorMessage' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformLoggedInFailure, ErrorCode) == 0x000010, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformLoggedInFailure::ErrorCode' has a wrong offset!");

// Function WBP_HeadlessSteamAccountFlow_CM.WBP_HeadlessSteamAccountFlow_CM_C.OnPlatformRegisterFailure
// 0x0018 (0x0018 - 0x0000)
struct WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformRegisterFailure final 
{
public:
	class FString                                 ErrorMessage;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         ErrorCode;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformRegisterFailure) == 0x000008, "Wrong alignment on WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformRegisterFailure");
static_assert(sizeof(WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformRegisterFailure) == 0x000018, "Wrong size on WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformRegisterFailure");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformRegisterFailure, ErrorMessage) == 0x000000, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformRegisterFailure::ErrorMessage' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformRegisterFailure, ErrorCode) == 0x000010, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformRegisterFailure::ErrorCode' has a wrong offset!");

// Function WBP_HeadlessSteamAccountFlow_CM.WBP_HeadlessSteamAccountFlow_CM_C.OnPlatformRegisterFailurePropagate__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformRegisterFailurePropagate__DelegateSignature final 
{
public:
	class FText                                   ErrorMessage;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformRegisterFailurePropagate__DelegateSignature) == 0x000008, "Wrong alignment on WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformRegisterFailurePropagate__DelegateSignature");
static_assert(sizeof(WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformRegisterFailurePropagate__DelegateSignature) == 0x000018, "Wrong size on WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformRegisterFailurePropagate__DelegateSignature");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformRegisterFailurePropagate__DelegateSignature, ErrorMessage) == 0x000000, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_OnPlatformRegisterFailurePropagate__DelegateSignature::ErrorMessage' has a wrong offset!");

// Function WBP_HeadlessSteamAccountFlow_CM.WBP_HeadlessSteamAccountFlow_CM_C.PlatformFailure
// 0x0100 (0x0100 - 0x0000)
struct WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure final 
{
public:
	int32                                         Code;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C7B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Msg;                                               // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0078(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure) == 0x000008, "Wrong alignment on WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure");
static_assert(sizeof(WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure) == 0x000100, "Wrong size on WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure, Code) == 0x000000, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure::Code' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure, Msg) == 0x000008, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure::Msg' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000020, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure, K2Node_MakeStruct_FormatArgumentData_1) == 0x000078, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure, K2Node_MakeArray_Array) == 0x0000C8, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure, CallFunc_Format_ReturnValue) == 0x0000D8, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure, CallFunc_Conv_TextToString_ReturnValue) == 0x0000F0, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_PlatformFailure::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function WBP_HeadlessSteamAccountFlow_CM.WBP_HeadlessSteamAccountFlow_CM_C.Set Error Message
// 0x0018 (0x0018 - 0x0000)
struct WBP_HeadlessSteamAccountFlow_CM_C_Set_Error_Message final 
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_HeadlessSteamAccountFlow_CM_C_Set_Error_Message) == 0x000008, "Wrong alignment on WBP_HeadlessSteamAccountFlow_CM_C_Set_Error_Message");
static_assert(sizeof(WBP_HeadlessSteamAccountFlow_CM_C_Set_Error_Message) == 0x000018, "Wrong size on WBP_HeadlessSteamAccountFlow_CM_C_Set_Error_Message");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_Set_Error_Message, Message) == 0x000000, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_Set_Error_Message::Message' has a wrong offset!");

// Function WBP_HeadlessSteamAccountFlow_CM.WBP_HeadlessSteamAccountFlow_CM_C.SetPage
// 0x0010 (0x0010 - 0x0000)
struct WBP_HeadlessSteamAccountFlow_CM_C_SetPage final 
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         ActivePage;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HeadlessSteamAccountFlow_CM_C_SetPage) == 0x000008, "Wrong alignment on WBP_HeadlessSteamAccountFlow_CM_C_SetPage");
static_assert(sizeof(WBP_HeadlessSteamAccountFlow_CM_C_SetPage) == 0x000010, "Wrong size on WBP_HeadlessSteamAccountFlow_CM_C_SetPage");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_SetPage, Widget) == 0x000000, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_SetPage::Widget' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_SetPage, ActivePage) == 0x000008, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_SetPage::ActivePage' has a wrong offset!");

// Function WBP_HeadlessSteamAccountFlow_CM.WBP_HeadlessSteamAccountFlow_CM_C.StartRegistration
// 0x0058 (0x0058 - 0x0000)
struct WBP_HeadlessSteamAccountFlow_CM_C_StartRegistration final 
{
public:
	bool                                          HasReferral;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C7C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  ReferralID;                                        // 0x0004(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C7D[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentCulture_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UAuthManager*                           CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0030(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HeadlessSteamAccountFlow_CM_C_StartRegistration) == 0x000008, "Wrong alignment on WBP_HeadlessSteamAccountFlow_CM_C_StartRegistration");
static_assert(sizeof(WBP_HeadlessSteamAccountFlow_CM_C_StartRegistration) == 0x000058, "Wrong size on WBP_HeadlessSteamAccountFlow_CM_C_StartRegistration");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_StartRegistration, HasReferral) == 0x000000, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_StartRegistration::HasReferral' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_StartRegistration, ReferralID) == 0x000004, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_StartRegistration::ReferralID' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_StartRegistration, CallFunc_GetCurrentCulture_ReturnValue) == 0x000018, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_StartRegistration::CallFunc_GetCurrentCulture_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_StartRegistration, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000028, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_StartRegistration::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_StartRegistration, CallFunc_GetText_ReturnValue) == 0x000030, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_StartRegistration::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HeadlessSteamAccountFlow_CM_C_StartRegistration, CallFunc_Conv_TextToString_ReturnValue) == 0x000048, "Member 'WBP_HeadlessSteamAccountFlow_CM_C_StartRegistration::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

