#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharacterCustomization_TabButton_CM

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_CharacterCustomization_TabButton_CM.WBP_CharacterCustomization_TabButton_CM_C.BndEvt__WBP_CharacterCustomization_TabButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_CharacterCustomization_TabButton_CM_C_BndEvt__WBP_CharacterCustomization_TabButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final 
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterCustomization_TabButton_CM_C_BndEvt__WBP_CharacterCustomization_TabButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_CharacterCustomization_TabButton_CM_C_BndEvt__WBP_CharacterCustomization_TabButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_CharacterCustomization_TabButton_CM_C_BndEvt__WBP_CharacterCustomization_TabButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_CharacterCustomization_TabButton_CM_C_BndEvt__WBP_CharacterCustomization_TabButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_BndEvt__WBP_CharacterCustomization_TabButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_CharacterCustomization_TabButton_CM_C_BndEvt__WBP_CharacterCustomization_TabButton_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_CharacterCustomization_TabButton_CM.WBP_CharacterCustomization_TabButton_CM_C.ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM
// 0x0148 (0x0148 - 0x0000)
struct WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5944[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5945[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0014(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_5946[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0050(0x0078)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00C8(0x0078)(ConstParm)
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventGlobal_ReturnValue_1;              // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM) == 0x000008, "Wrong alignment on WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM");
static_assert(sizeof(WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM) == 0x000148, "Wrong size on WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM, EntryPoint) == 0x000000, "Member 'WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM, K2Node_Event_IsDesignTime) == 0x000010, "Member 'WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM, K2Node_Event_MyGeometry) == 0x000014, "Member 'WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM, K2Node_Event_MouseEvent_1) == 0x000050, "Member 'WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM, K2Node_Event_MouseEvent) == 0x0000C8, "Member 'WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM, CallFunc_AkEventGlobal_ReturnValue) == 0x000140, "Member 'WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM, CallFunc_AkEventGlobal_ReturnValue_1) == 0x000144, "Member 'WBP_CharacterCustomization_TabButton_CM_C_ExecuteUbergraph_WBP_CharacterCustomization_TabButton_CM::CallFunc_AkEventGlobal_ReturnValue_1' has a wrong offset!");

// Function WBP_CharacterCustomization_TabButton_CM.WBP_CharacterCustomization_TabButton_CM_C.OnButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_CharacterCustomization_TabButton_CM_C_OnButtonClicked__DelegateSignature final 
{
public:
	class UWBP_CharacterCustomization_TabButton_CM_C* Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterCustomization_TabButton_CM_C_OnButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_CharacterCustomization_TabButton_CM_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(WBP_CharacterCustomization_TabButton_CM_C_OnButtonClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_CharacterCustomization_TabButton_CM_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_OnButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_CharacterCustomization_TabButton_CM_C_OnButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_CharacterCustomization_TabButton_CM.WBP_CharacterCustomization_TabButton_CM_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_CharacterCustomization_TabButton_CM_C_OnMouseEnter final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_CharacterCustomization_TabButton_CM_C_OnMouseEnter) == 0x000008, "Wrong alignment on WBP_CharacterCustomization_TabButton_CM_C_OnMouseEnter");
static_assert(sizeof(WBP_CharacterCustomization_TabButton_CM_C_OnMouseEnter) == 0x0000B0, "Wrong size on WBP_CharacterCustomization_TabButton_CM_C_OnMouseEnter");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WBP_CharacterCustomization_TabButton_CM_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'WBP_CharacterCustomization_TabButton_CM_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function WBP_CharacterCustomization_TabButton_CM.WBP_CharacterCustomization_TabButton_CM_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct WBP_CharacterCustomization_TabButton_CM_C_OnMouseLeave final 
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_CharacterCustomization_TabButton_CM_C_OnMouseLeave) == 0x000008, "Wrong alignment on WBP_CharacterCustomization_TabButton_CM_C_OnMouseLeave");
static_assert(sizeof(WBP_CharacterCustomization_TabButton_CM_C_OnMouseLeave) == 0x000078, "Wrong size on WBP_CharacterCustomization_TabButton_CM_C_OnMouseLeave");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'WBP_CharacterCustomization_TabButton_CM_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function WBP_CharacterCustomization_TabButton_CM.WBP_CharacterCustomization_TabButton_CM_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CharacterCustomization_TabButton_CM_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterCustomization_TabButton_CM_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_CharacterCustomization_TabButton_CM_C_PreConstruct");
static_assert(sizeof(WBP_CharacterCustomization_TabButton_CM_C_PreConstruct) == 0x000001, "Wrong size on WBP_CharacterCustomization_TabButton_CM_C_PreConstruct");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_CharacterCustomization_TabButton_CM_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_CharacterCustomization_TabButton_CM.WBP_CharacterCustomization_TabButton_CM_C.SetActive
// 0x0020 (0x0020 - 0x0000)
struct WBP_CharacterCustomization_TabButton_CM_C_SetActive final 
{
public:
	bool                                          Param_Active;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WasActive;                                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5947[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterCustomization_TabButton_CM_C_SetActive) == 0x000008, "Wrong alignment on WBP_CharacterCustomization_TabButton_CM_C_SetActive");
static_assert(sizeof(WBP_CharacterCustomization_TabButton_CM_C_SetActive) == 0x000020, "Wrong size on WBP_CharacterCustomization_TabButton_CM_C_SetActive");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_SetActive, Param_Active) == 0x000000, "Member 'WBP_CharacterCustomization_TabButton_CM_C_SetActive::Param_Active' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_SetActive, WasActive) == 0x000001, "Member 'WBP_CharacterCustomization_TabButton_CM_C_SetActive::WasActive' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_SetActive, Temp_bool_Variable) == 0x000002, "Member 'WBP_CharacterCustomization_TabButton_CM_C_SetActive::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_SetActive, CallFunc_AkEventGlobal_ReturnValue) == 0x000004, "Member 'WBP_CharacterCustomization_TabButton_CM_C_SetActive::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_SetActive, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_CharacterCustomization_TabButton_CM_C_SetActive::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_SetActive, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'WBP_CharacterCustomization_TabButton_CM_C_SetActive::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_SetActive, K2Node_Select_Default) == 0x000018, "Member 'WBP_CharacterCustomization_TabButton_CM_C_SetActive::K2Node_Select_Default' has a wrong offset!");

// Function WBP_CharacterCustomization_TabButton_CM.WBP_CharacterCustomization_TabButton_CM_C.SetColor
// 0x0014 (0x0014 - 0x0000)
struct WBP_CharacterCustomization_TabButton_CM_C_SetColor final 
{
public:
	bool                                          Param_Active;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5948[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterCustomization_TabButton_CM_C_SetColor) == 0x000004, "Wrong alignment on WBP_CharacterCustomization_TabButton_CM_C_SetColor");
static_assert(sizeof(WBP_CharacterCustomization_TabButton_CM_C_SetColor) == 0x000014, "Wrong size on WBP_CharacterCustomization_TabButton_CM_C_SetColor");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_SetColor, Param_Active) == 0x000000, "Member 'WBP_CharacterCustomization_TabButton_CM_C_SetColor::Param_Active' has a wrong offset!");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_SetColor, CallFunc_SelectColor_ReturnValue) == 0x000004, "Member 'WBP_CharacterCustomization_TabButton_CM_C_SetColor::CallFunc_SelectColor_ReturnValue' has a wrong offset!");

// Function WBP_CharacterCustomization_TabButton_CM.WBP_CharacterCustomization_TabButton_CM_C.UpdateBadgeCount
// 0x0004 (0x0004 - 0x0000)
struct WBP_CharacterCustomization_TabButton_CM_C_UpdateBadgeCount final 
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterCustomization_TabButton_CM_C_UpdateBadgeCount) == 0x000004, "Wrong alignment on WBP_CharacterCustomization_TabButton_CM_C_UpdateBadgeCount");
static_assert(sizeof(WBP_CharacterCustomization_TabButton_CM_C_UpdateBadgeCount) == 0x000004, "Wrong size on WBP_CharacterCustomization_TabButton_CM_C_UpdateBadgeCount");
static_assert(offsetof(WBP_CharacterCustomization_TabButton_CM_C_UpdateBadgeCount, Count) == 0x000000, "Member 'WBP_CharacterCustomization_TabButton_CM_C_UpdateBadgeCount::Count' has a wrong offset!");

}

