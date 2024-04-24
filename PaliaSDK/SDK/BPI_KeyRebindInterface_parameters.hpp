#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_KeyRebindInterface

#include "Basic.hpp"

#include "E_CloseKeyRebindMenuType_structs.hpp"
#include "KeyRebinding_structs.hpp"


namespace SDK::Params
{

// Function BPI_KeyRebindInterface.BPI_KeyRebindInterface_C.ExecutePrePopupAction
// 0x0001 (0x0001 - 0x0000)
struct BPI_KeyRebindInterface_C_ExecutePrePopupAction final 
{
public:
	E_CloseKeyRebindMenuType                      PrePopupAction;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_KeyRebindInterface_C_ExecutePrePopupAction) == 0x000001, "Wrong alignment on BPI_KeyRebindInterface_C_ExecutePrePopupAction");
static_assert(sizeof(BPI_KeyRebindInterface_C_ExecutePrePopupAction) == 0x000001, "Wrong size on BPI_KeyRebindInterface_C_ExecutePrePopupAction");
static_assert(offsetof(BPI_KeyRebindInterface_C_ExecutePrePopupAction, PrePopupAction) == 0x000000, "Member 'BPI_KeyRebindInterface_C_ExecutePrePopupAction::PrePopupAction' has a wrong offset!");

// Function BPI_KeyRebindInterface.BPI_KeyRebindInterface_C.RefreshKeyRebindTips
// 0x00E0 (0x00E0 - 0x0000)
struct BPI_KeyRebindInterface_C_RefreshKeyRebindTips final 
{
public:
	struct FKeyRebind_DisplayResult               KeyRebindResultInfo;                               // 0x0000(0x00E0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BPI_KeyRebindInterface_C_RefreshKeyRebindTips) == 0x000008, "Wrong alignment on BPI_KeyRebindInterface_C_RefreshKeyRebindTips");
static_assert(sizeof(BPI_KeyRebindInterface_C_RefreshKeyRebindTips) == 0x0000E0, "Wrong size on BPI_KeyRebindInterface_C_RefreshKeyRebindTips");
static_assert(offsetof(BPI_KeyRebindInterface_C_RefreshKeyRebindTips, KeyRebindResultInfo) == 0x000000, "Member 'BPI_KeyRebindInterface_C_RefreshKeyRebindTips::KeyRebindResultInfo' has a wrong offset!");

// Function BPI_KeyRebindInterface.BPI_KeyRebindInterface_C.ToggleButtonCheckPopup
// 0x0018 (0x0018 - 0x0000)
struct BPI_KeyRebindInterface_C_ToggleButtonCheckPopup final 
{
public:
	TScriptInterface<class IBPI_KeyRebindInterface_C> OwnerWidget;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CloseKeyRebindMenuType                      PrePopupAction;                                    // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_KeyRebindInterface_C_ToggleButtonCheckPopup) == 0x000008, "Wrong alignment on BPI_KeyRebindInterface_C_ToggleButtonCheckPopup");
static_assert(sizeof(BPI_KeyRebindInterface_C_ToggleButtonCheckPopup) == 0x000018, "Wrong size on BPI_KeyRebindInterface_C_ToggleButtonCheckPopup");
static_assert(offsetof(BPI_KeyRebindInterface_C_ToggleButtonCheckPopup, OwnerWidget) == 0x000000, "Member 'BPI_KeyRebindInterface_C_ToggleButtonCheckPopup::OwnerWidget' has a wrong offset!");
static_assert(offsetof(BPI_KeyRebindInterface_C_ToggleButtonCheckPopup, PrePopupAction) == 0x000010, "Member 'BPI_KeyRebindInterface_C_ToggleButtonCheckPopup::PrePopupAction' has a wrong offset!");

}
