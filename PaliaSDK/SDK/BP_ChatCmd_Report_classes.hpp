#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChatCmd_Report

#include "Basic.hpp"

#include "Palia_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ChatCmd_Report.BP_ChatCmd_Report_C
// 0x0000 (0x0198 - 0x0198)
class UBP_ChatCmd_Report_C : public UVAL_ChatCommand_Report
{
public:
	void OpenCommandModalDialogue(class UUserWidget* CommandModalDialogue, struct FUniqueNetIdRepl& UserId, class UWBP_ReportPlayerModalDialog_PF_C* K2Node_DynamicCast_AsWBP_Report_Player_Modal_Dialog_PF, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetOuterObject_ReturnValue, class UWidget* K2Node_DynamicCast_AsWidget, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_ReportPlayerModalDialog_CM_C* K2Node_DynamicCast_AsWBP_Report_Player_Modal_Dialog_CM, bool K2Node_DynamicCast_bSuccess_2, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class UWidget* K2Node_DynamicCast_AsWidget_1, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue_1, bool CallFunc_IsConsole_ReturnValue, bool CallFunc_IsDesktop_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChatCmd_Report_C">();
	}
	static class UBP_ChatCmd_Report_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ChatCmd_Report_C>();
	}
};
static_assert(alignof(UBP_ChatCmd_Report_C) == 0x000008, "Wrong alignment on UBP_ChatCmd_Report_C");
static_assert(sizeof(UBP_ChatCmd_Report_C) == 0x000198, "Wrong size on UBP_ChatCmd_Report_C");

}

