#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CrossplayNotification_Console

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CrossplayNotification_Console.WBP_CrossplayNotification_Console_C
// 0x00D8 (0x0630 - 0x0558)
class UWBP_CrossplayNotification_Console_C final  : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                         RichTextBlock_Message;                             // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ScrollBox_Styled*                Scrollbox_Message;                                 // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_PopupSecondary_02_PF_C*   WBP_Template_PopupSecondary_02_PF;                 // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Header_Disabled_XSX;                               // 0x0578(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Header_Notification_XSX;                           // 0x0590(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Header_Notification_PS5;                           // 0x05A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Body_Disabled_XSX;                                 // 0x05C0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Body_Notification_XSX;                             // 0x05D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Body_Notification_PS5;                             // 0x05F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bEnabledCrossplay;                                 // 0x0608(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_509E[0x7];                                     // 0x0609(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnCrossplayRequired;                               // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCrossplayNotification;                           // 0x0620(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_CrossplayNotification_Console_WBP_Template_PopupSecondary_02_PF_K2Node_ComponentBoundEvent_1_Confirm__DelegateSignature();
	void ExecuteUbergraph_WBP_CrossplayNotification_Console(int32 EntryPoint, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, bool K2Node_CustomEvent_InEnabledCrossplay, bool CallFunc_Not_PreBool_ReturnValue);
	void GetCrossplayBodyText(class FText* BodyText, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPS5Platform_ReturnValue, bool CallFunc_IsXSXPlatform_ReturnValue);
	void GetCrossplayHeaderText(class FText* HeaderText, bool CallFunc_IsPS5Platform_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsXSXPlatform_ReturnValue);
	void InpActEvt_IA_UI_Confirm_Select_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void OnCrossplayNotification__DelegateSignature();
	void OnCrossplayRequired__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Update_Crossplay_Context(class FText CallFunc_GetCrossplayBodyText_BodyText, class FText CallFunc_GetCrossplayHeaderText_HeaderText);
	void UpdateCrossplayInfo(bool InEnabledCrossplay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CrossplayNotification_Console_C">();
	}
	static class UWBP_CrossplayNotification_Console_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CrossplayNotification_Console_C>();
	}
};
static_assert(alignof(UWBP_CrossplayNotification_Console_C) == 0x000008, "Wrong alignment on UWBP_CrossplayNotification_Console_C");
static_assert(sizeof(UWBP_CrossplayNotification_Console_C) == 0x000630, "Wrong size on UWBP_CrossplayNotification_Console_C");
static_assert(offsetof(UWBP_CrossplayNotification_Console_C, UberGraphFrame) == 0x000558, "Member 'UWBP_CrossplayNotification_Console_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CrossplayNotification_Console_C, RichTextBlock_Message) == 0x000560, "Member 'UWBP_CrossplayNotification_Console_C::RichTextBlock_Message' has a wrong offset!");
static_assert(offsetof(UWBP_CrossplayNotification_Console_C, Scrollbox_Message) == 0x000568, "Member 'UWBP_CrossplayNotification_Console_C::Scrollbox_Message' has a wrong offset!");
static_assert(offsetof(UWBP_CrossplayNotification_Console_C, WBP_Template_PopupSecondary_02_PF) == 0x000570, "Member 'UWBP_CrossplayNotification_Console_C::WBP_Template_PopupSecondary_02_PF' has a wrong offset!");
static_assert(offsetof(UWBP_CrossplayNotification_Console_C, Header_Disabled_XSX) == 0x000578, "Member 'UWBP_CrossplayNotification_Console_C::Header_Disabled_XSX' has a wrong offset!");
static_assert(offsetof(UWBP_CrossplayNotification_Console_C, Header_Notification_XSX) == 0x000590, "Member 'UWBP_CrossplayNotification_Console_C::Header_Notification_XSX' has a wrong offset!");
static_assert(offsetof(UWBP_CrossplayNotification_Console_C, Header_Notification_PS5) == 0x0005A8, "Member 'UWBP_CrossplayNotification_Console_C::Header_Notification_PS5' has a wrong offset!");
static_assert(offsetof(UWBP_CrossplayNotification_Console_C, Body_Disabled_XSX) == 0x0005C0, "Member 'UWBP_CrossplayNotification_Console_C::Body_Disabled_XSX' has a wrong offset!");
static_assert(offsetof(UWBP_CrossplayNotification_Console_C, Body_Notification_XSX) == 0x0005D8, "Member 'UWBP_CrossplayNotification_Console_C::Body_Notification_XSX' has a wrong offset!");
static_assert(offsetof(UWBP_CrossplayNotification_Console_C, Body_Notification_PS5) == 0x0005F0, "Member 'UWBP_CrossplayNotification_Console_C::Body_Notification_PS5' has a wrong offset!");
static_assert(offsetof(UWBP_CrossplayNotification_Console_C, bEnabledCrossplay) == 0x000608, "Member 'UWBP_CrossplayNotification_Console_C::bEnabledCrossplay' has a wrong offset!");
static_assert(offsetof(UWBP_CrossplayNotification_Console_C, OnCrossplayRequired) == 0x000610, "Member 'UWBP_CrossplayNotification_Console_C::OnCrossplayRequired' has a wrong offset!");
static_assert(offsetof(UWBP_CrossplayNotification_Console_C, OnCrossplayNotification) == 0x000620, "Member 'UWBP_CrossplayNotification_Console_C::OnCrossplayNotification' has a wrong offset!");

}

