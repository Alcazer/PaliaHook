#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SimpleModalDialog_PF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SimpleModalDialog_PF.WBP_SimpleModalDialog_PF_C
// 0x0050 (0x05A8 - 0x0558)
class UWBP_SimpleModalDialog_PF_C final  : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_X_1;                                         // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_B_1;                                     // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_Message;                                 // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              WBP_Button_A;                                      // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   MessageText;                                       // 0x0580(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             CloseSelfSimpleDialogue;                           // 0x0598(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_SimpleModalDialog_PF_WBP_Button_A_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void CloseSelfSimpleDialogue__DelegateSignature();
	void ExecuteUbergraph_WBP_SimpleModalDialog_PF(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_Not_PreBool_ReturnValue);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SimpleModalDialog_PF_C">();
	}
	static class UWBP_SimpleModalDialog_PF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SimpleModalDialog_PF_C>();
	}
};
static_assert(alignof(UWBP_SimpleModalDialog_PF_C) == 0x000008, "Wrong alignment on UWBP_SimpleModalDialog_PF_C");
static_assert(sizeof(UWBP_SimpleModalDialog_PF_C) == 0x0005A8, "Wrong size on UWBP_SimpleModalDialog_PF_C");
static_assert(offsetof(UWBP_SimpleModalDialog_PF_C, UberGraphFrame) == 0x000558, "Member 'UWBP_SimpleModalDialog_PF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SimpleModalDialog_PF_C, Image_X_1) == 0x000560, "Member 'UWBP_SimpleModalDialog_PF_C::Image_X_1' has a wrong offset!");
static_assert(offsetof(UWBP_SimpleModalDialog_PF_C, TextBlock_B_1) == 0x000568, "Member 'UWBP_SimpleModalDialog_PF_C::TextBlock_B_1' has a wrong offset!");
static_assert(offsetof(UWBP_SimpleModalDialog_PF_C, TextBlock_Message) == 0x000570, "Member 'UWBP_SimpleModalDialog_PF_C::TextBlock_Message' has a wrong offset!");
static_assert(offsetof(UWBP_SimpleModalDialog_PF_C, WBP_Button_A) == 0x000578, "Member 'UWBP_SimpleModalDialog_PF_C::WBP_Button_A' has a wrong offset!");
static_assert(offsetof(UWBP_SimpleModalDialog_PF_C, MessageText) == 0x000580, "Member 'UWBP_SimpleModalDialog_PF_C::MessageText' has a wrong offset!");
static_assert(offsetof(UWBP_SimpleModalDialog_PF_C, CloseSelfSimpleDialogue) == 0x000598, "Member 'UWBP_SimpleModalDialog_PF_C::CloseSelfSimpleDialogue' has a wrong offset!");

}

