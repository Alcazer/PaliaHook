#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PhotosensitivityWarning_CM

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_PhotosensitivityWarning_CM.WBP_PhotosensitivityWarning_CM_C.ExecuteUbergraph_WBP_PhotosensitivityWarning_CM
// 0x0018 (0x0018 - 0x0000)
struct WBP_PhotosensitivityWarning_CM_C_ExecuteUbergraph_WBP_PhotosensitivityWarning_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CFB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PhotosensitivityWarning_CM_C_ExecuteUbergraph_WBP_PhotosensitivityWarning_CM) == 0x000008, "Wrong alignment on WBP_PhotosensitivityWarning_CM_C_ExecuteUbergraph_WBP_PhotosensitivityWarning_CM");
static_assert(sizeof(WBP_PhotosensitivityWarning_CM_C_ExecuteUbergraph_WBP_PhotosensitivityWarning_CM) == 0x000018, "Wrong size on WBP_PhotosensitivityWarning_CM_C_ExecuteUbergraph_WBP_PhotosensitivityWarning_CM");
static_assert(offsetof(WBP_PhotosensitivityWarning_CM_C_ExecuteUbergraph_WBP_PhotosensitivityWarning_CM, EntryPoint) == 0x000000, "Member 'WBP_PhotosensitivityWarning_CM_C_ExecuteUbergraph_WBP_PhotosensitivityWarning_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PhotosensitivityWarning_CM_C_ExecuteUbergraph_WBP_PhotosensitivityWarning_CM, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'WBP_PhotosensitivityWarning_CM_C_ExecuteUbergraph_WBP_PhotosensitivityWarning_CM::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PhotosensitivityWarning_CM_C_ExecuteUbergraph_WBP_PhotosensitivityWarning_CM, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000010, "Member 'WBP_PhotosensitivityWarning_CM_C_ExecuteUbergraph_WBP_PhotosensitivityWarning_CM::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

}

