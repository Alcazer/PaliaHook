#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_StoreButton

#include "Basic.hpp"

#include "ValeriaUI_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_StoreButton.WBP_StoreButton_C.BndEvt__WBP_StoreButton_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_StoreButton_C_BndEvt__WBP_StoreButton_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final 
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StoreButton_C_BndEvt__WBP_StoreButton_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StoreButton_C_BndEvt__WBP_StoreButton_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_StoreButton_C_BndEvt__WBP_StoreButton_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_StoreButton_C_BndEvt__WBP_StoreButton_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_StoreButton_C_BndEvt__WBP_StoreButton_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_StoreButton_C_BndEvt__WBP_StoreButton_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_StoreButton.WBP_StoreButton_C.DisplayNewStorePip
// 0x0090 (0x0090 - 0x0000)
struct WBP_StoreButton_C_DisplayNewStorePip final 
{
public:
	struct FVALUI_PremiumStorefrontResponse       PremiumStorefrontResponse;                         // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsNewStorefront;                                   // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_543D[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UValeriaGameUserSettings*               CallFunc_GetValeriaGameUserSettings_ReturnValue;   // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DateTimeDateTime_ReturnValue;    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StoreButton_C_DisplayNewStorePip) == 0x000008, "Wrong alignment on WBP_StoreButton_C_DisplayNewStorePip");
static_assert(sizeof(WBP_StoreButton_C_DisplayNewStorePip) == 0x000090, "Wrong size on WBP_StoreButton_C_DisplayNewStorePip");
static_assert(offsetof(WBP_StoreButton_C_DisplayNewStorePip, PremiumStorefrontResponse) == 0x000000, "Member 'WBP_StoreButton_C_DisplayNewStorePip::PremiumStorefrontResponse' has a wrong offset!");
static_assert(offsetof(WBP_StoreButton_C_DisplayNewStorePip, IsNewStorefront) == 0x000078, "Member 'WBP_StoreButton_C_DisplayNewStorePip::IsNewStorefront' has a wrong offset!");
static_assert(offsetof(WBP_StoreButton_C_DisplayNewStorePip, Temp_bool_Variable) == 0x000079, "Member 'WBP_StoreButton_C_DisplayNewStorePip::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StoreButton_C_DisplayNewStorePip, Temp_byte_Variable) == 0x00007A, "Member 'WBP_StoreButton_C_DisplayNewStorePip::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StoreButton_C_DisplayNewStorePip, Temp_byte_Variable_1) == 0x00007B, "Member 'WBP_StoreButton_C_DisplayNewStorePip::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StoreButton_C_DisplayNewStorePip, CallFunc_GetValeriaGameUserSettings_ReturnValue) == 0x000080, "Member 'WBP_StoreButton_C_DisplayNewStorePip::CallFunc_GetValeriaGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoreButton_C_DisplayNewStorePip, CallFunc_NotEqual_DateTimeDateTime_ReturnValue) == 0x000088, "Member 'WBP_StoreButton_C_DisplayNewStorePip::CallFunc_NotEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoreButton_C_DisplayNewStorePip, K2Node_Select_Default) == 0x000089, "Member 'WBP_StoreButton_C_DisplayNewStorePip::K2Node_Select_Default' has a wrong offset!");

// Function WBP_StoreButton.WBP_StoreButton_C.ExecuteUbergraph_WBP_StoreButton
// 0x0138 (0x0138 - 0x0000)
struct WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_543E[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVALUI_PremiumStorefrontResponse       K2Node_CustomEvent_Response;                       // 0x0018(0x0078)()
	TDelegate<void(const struct FVALUI_PremiumStorefrontResponse& Response)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVALUI_PremiumStorefrontResponse       Temp_struct_Variable;                              // 0x00A0(0x0078)()
	class ULocalPlayer*                           CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_AsyncActionRequestStorefront*      CallFunc_RequestStorefront_ReturnValue;            // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_543F[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0130(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton) == 0x000008, "Wrong alignment on WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton");
static_assert(sizeof(WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton) == 0x000138, "Wrong size on WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton");
static_assert(offsetof(WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton, EntryPoint) == 0x000000, "Member 'WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton, K2Node_CustomEvent_Response) == 0x000018, "Member 'WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton::K2Node_CustomEvent_Response' has a wrong offset!");
static_assert(offsetof(WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton, K2Node_CreateDelegate_OutputDelegate_1) == 0x000090, "Member 'WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton, Temp_struct_Variable) == 0x0000A0, "Member 'WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton, CallFunc_GetOwningLocalPlayer_ReturnValue) == 0x000118, "Member 'WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton::CallFunc_GetOwningLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton, CallFunc_RequestStorefront_ReturnValue) == 0x000120, "Member 'WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton::CallFunc_RequestStorefront_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton, CallFunc_IsValid_ReturnValue) == 0x000128, "Member 'WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton, K2Node_ComponentBoundEvent_Button) == 0x000130, "Member 'WBP_StoreButton_C_ExecuteUbergraph_WBP_StoreButton::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function WBP_StoreButton.WBP_StoreButton_C.Successful_67E2257B48A4DF88EAC2B38D7C6E43FC
// 0x0078 (0x0078 - 0x0000)
struct WBP_StoreButton_C_Successful_67E2257B48A4DF88EAC2B38D7C6E43FC final 
{
public:
	struct FVALUI_PremiumStorefrontResponse       Response;                                          // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_StoreButton_C_Successful_67E2257B48A4DF88EAC2B38D7C6E43FC) == 0x000008, "Wrong alignment on WBP_StoreButton_C_Successful_67E2257B48A4DF88EAC2B38D7C6E43FC");
static_assert(sizeof(WBP_StoreButton_C_Successful_67E2257B48A4DF88EAC2B38D7C6E43FC) == 0x000078, "Wrong size on WBP_StoreButton_C_Successful_67E2257B48A4DF88EAC2B38D7C6E43FC");
static_assert(offsetof(WBP_StoreButton_C_Successful_67E2257B48A4DF88EAC2B38D7C6E43FC, Response) == 0x000000, "Member 'WBP_StoreButton_C_Successful_67E2257B48A4DF88EAC2B38D7C6E43FC::Response' has a wrong offset!");

}

