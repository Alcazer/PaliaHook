#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GraphicsSettings_RestartWindow_CM

#include "Basic.hpp"

#include "S6UICore_structs.hpp"


namespace SDK::Params
{

// Function WBP_GraphicsSettings_RestartWindow_CM.WBP_GraphicsSettings_RestartWindow_CM_C.CanClose
// 0x0003 (0x0003 - 0x0000)
struct WBP_GraphicsSettings_RestartWindow_CM_C_CanClose final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ES6UI_ModalWidgetState                        CallFunc_GetModalWidgetState_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GraphicsSettings_RestartWindow_CM_C_CanClose) == 0x000001, "Wrong alignment on WBP_GraphicsSettings_RestartWindow_CM_C_CanClose");
static_assert(sizeof(WBP_GraphicsSettings_RestartWindow_CM_C_CanClose) == 0x000003, "Wrong size on WBP_GraphicsSettings_RestartWindow_CM_C_CanClose");
static_assert(offsetof(WBP_GraphicsSettings_RestartWindow_CM_C_CanClose, ReturnValue) == 0x000000, "Member 'WBP_GraphicsSettings_RestartWindow_CM_C_CanClose::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_RestartWindow_CM_C_CanClose, CallFunc_GetModalWidgetState_ReturnValue) == 0x000001, "Member 'WBP_GraphicsSettings_RestartWindow_CM_C_CanClose::CallFunc_GetModalWidgetState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_RestartWindow_CM_C_CanClose, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'WBP_GraphicsSettings_RestartWindow_CM_C_CanClose::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_GraphicsSettings_RestartWindow_CM.WBP_GraphicsSettings_RestartWindow_CM_C.ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM
// 0x0028 (0x0028 - 0x0000)
struct WBP_GraphicsSettings_RestartWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47DD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UValeriaGameUserSettings*               CallFunc_GetValeriaGameUserSettings_ReturnValue;   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GraphicsSettings_RestartWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM) == 0x000008, "Wrong alignment on WBP_GraphicsSettings_RestartWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM");
static_assert(sizeof(WBP_GraphicsSettings_RestartWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM) == 0x000028, "Wrong size on WBP_GraphicsSettings_RestartWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM");
static_assert(offsetof(WBP_GraphicsSettings_RestartWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM, EntryPoint) == 0x000000, "Member 'WBP_GraphicsSettings_RestartWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_RestartWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'WBP_GraphicsSettings_RestartWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_RestartWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000010, "Member 'WBP_GraphicsSettings_RestartWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_RestartWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM, CallFunc_GetValeriaGameUserSettings_ReturnValue) == 0x000018, "Member 'WBP_GraphicsSettings_RestartWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM::CallFunc_GetValeriaGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_RestartWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'WBP_GraphicsSettings_RestartWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_GraphicsSettings_RestartWindow_CM.WBP_GraphicsSettings_RestartWindow_CM_C.HandleStartClosing_BP
// 0x0002 (0x0002 - 0x0000)
struct WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartClosing_BP final 
{
public:
	bool                                          bPermitLatentClosing;                              // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOutHasLatentClosingLogic;                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartClosing_BP) == 0x000001, "Wrong alignment on WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartClosing_BP");
static_assert(sizeof(WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartClosing_BP) == 0x000002, "Wrong size on WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartClosing_BP");
static_assert(offsetof(WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartClosing_BP, bPermitLatentClosing) == 0x000000, "Member 'WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartClosing_BP::bPermitLatentClosing' has a wrong offset!");
static_assert(offsetof(WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartClosing_BP, bOutHasLatentClosingLogic) == 0x000001, "Member 'WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartClosing_BP::bOutHasLatentClosingLogic' has a wrong offset!");

// Function WBP_GraphicsSettings_RestartWindow_CM.WBP_GraphicsSettings_RestartWindow_CM_C.HandleStartOpening_BP
// 0x0001 (0x0001 - 0x0000)
struct WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartOpening_BP final 
{
public:
	bool                                          bOutHasLatentOpeningLogic;                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartOpening_BP) == 0x000001, "Wrong alignment on WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartOpening_BP");
static_assert(sizeof(WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartOpening_BP) == 0x000001, "Wrong size on WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartOpening_BP");
static_assert(offsetof(WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartOpening_BP, bOutHasLatentOpeningLogic) == 0x000000, "Member 'WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartOpening_BP::bOutHasLatentOpeningLogic' has a wrong offset!");

}

