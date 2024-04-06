#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoginFlow_PF

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LoginFlow_PF.WBP_LoginFlow_PF_C
// 0x00D0 (0x04A8 - 0x03D8)
class UWBP_LoginFlow_PF_C final  : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_TextBlock_Styled*                BuildVersionNumber;                                // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IconButton_CM_C*                   Button_Help;                                       // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IconButton_CM_C*                   Button_Setting;                                    // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              Button_Start;                                      // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         MainLoginPanel;                                    // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LinkAccount_PF_C*                  Panel_Link;                                        // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginScreen_PF_C*                  Panel_Login;                                       // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginRetryPanel_PF_C*              Panel_Retry;                                       // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SettingButtons;                                    // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*       Switcher;                                          // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MaintenanceMessage_CM_C*           WBP_MaintenanceMessage_CM;                         // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Login_PF_C*                        LoginPanelPtr;                                     // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLoading;                                         // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugUI;                                           // 0x0441(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShowOptionMenu;                                  // 0x0442(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5229[0x5];                                     // 0x0443(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSkipLink;                                        // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<int32, class FText>                      ErrorCodeConfigMap;                                // 0x0458(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__WBP_Login_PF_WBP_LinkAccount_PF_K2Node_ComponentBoundEvent_2_OnLinkClicked__DelegateSignature();
	void BndEvt__WBP_Login_PF_WBP_LinkAccount_PF_K2Node_ComponentBoundEvent_3_OnSkipClicked__DelegateSignature();
	void BndEvt__WBP_Login_PF_WBP_LoginRetryPanel_PF_K2Node_ComponentBoundEvent_5_OnRetryClicked__DelegateSignature();
	void BndEvt__WBP_Login_PF_WBP_LoginScreen_PF_K2Node_ComponentBoundEvent_4_OnBackClick__DelegateSignature();
	void BndEvt__WBP_LoginFlow_PF_Button_Help_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_LoginFlow_PF_Button_Setting_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_LoginFlow_PF_Button_Start_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_LoginFlow_PF_WBP_LoginScreen_PF_K2Node_ComponentBoundEvent_6_OnSubmitClick__DelegateSignature();
	void BP_OnActivated();
	void Construct();
	void DoLogin();
	void DoSkipLink();
	void ExecuteUbergraph_WBP_LoginFlow_PF(int32 EntryPoint, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, TDelegate<void(const class FString& ErrorMessage, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_1, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_4, TDelegate<void(const class FString& ErrorMessage, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_2, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_5, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_6, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void GoLinkPanel();
	void GoLoignPanel();
	void GoRetryPanel(class FText ErrorMsg, bool bUseDefaultMsg);
	void GoTitlePanel();
	void HandleLinkedFailure(const class FString& ErrorMessage, int32 ErrorCode, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_PopupLinkSuccess_PF_C* CallFunc_Create_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_IsPasswordChangeRequired_IsRequired, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void HandleLoggedInFailure(const class FString& ErrorMessage, int32 ErrorCode, int32 IncorrectPasswordCode, bool CallFunc_IsPasswordChangeRequired_IsRequired, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void HandleLoggedInSuccess();
	void IsPasswordChangeRequired(int32 Code, const class FString& Message, bool* IsRequired, const class FString& PasswordChangeRequiredMessage, int32 PasswordChangeRequiredCode, bool CallFunc_Contains_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnInitialized();
	void OnSkipLink__DelegateSignature();
	class UWidget* OnStartButtonNavigation(EUINavigation Param_Navigation);
	void ToggleOptions(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_SettingsPanel_PF_C* CallFunc_Create_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue);
	void UpdateBuildVersion(const class FString& CallFunc_GetVersionString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LoginFlow_PF_C">();
	}
	static class UWBP_LoginFlow_PF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LoginFlow_PF_C>();
	}
};
static_assert(alignof(UWBP_LoginFlow_PF_C) == 0x000008, "Wrong alignment on UWBP_LoginFlow_PF_C");
static_assert(sizeof(UWBP_LoginFlow_PF_C) == 0x0004A8, "Wrong size on UWBP_LoginFlow_PF_C");
static_assert(offsetof(UWBP_LoginFlow_PF_C, UberGraphFrame) == 0x0003D8, "Member 'UWBP_LoginFlow_PF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_LoginFlow_PF_C, BuildVersionNumber) == 0x0003E0, "Member 'UWBP_LoginFlow_PF_C::BuildVersionNumber' has a wrong offset!");
static_assert(offsetof(UWBP_LoginFlow_PF_C, Button_Help) == 0x0003E8, "Member 'UWBP_LoginFlow_PF_C::Button_Help' has a wrong offset!");
static_assert(offsetof(UWBP_LoginFlow_PF_C, Button_Setting) == 0x0003F0, "Member 'UWBP_LoginFlow_PF_C::Button_Setting' has a wrong offset!");
static_assert(offsetof(UWBP_LoginFlow_PF_C, Button_Start) == 0x0003F8, "Member 'UWBP_LoginFlow_PF_C::Button_Start' has a wrong offset!");
static_assert(offsetof(UWBP_LoginFlow_PF_C, MainLoginPanel) == 0x000400, "Member 'UWBP_LoginFlow_PF_C::MainLoginPanel' has a wrong offset!");
static_assert(offsetof(UWBP_LoginFlow_PF_C, Panel_Link) == 0x000408, "Member 'UWBP_LoginFlow_PF_C::Panel_Link' has a wrong offset!");
static_assert(offsetof(UWBP_LoginFlow_PF_C, Panel_Login) == 0x000410, "Member 'UWBP_LoginFlow_PF_C::Panel_Login' has a wrong offset!");
static_assert(offsetof(UWBP_LoginFlow_PF_C, Panel_Retry) == 0x000418, "Member 'UWBP_LoginFlow_PF_C::Panel_Retry' has a wrong offset!");
static_assert(offsetof(UWBP_LoginFlow_PF_C, SettingButtons) == 0x000420, "Member 'UWBP_LoginFlow_PF_C::SettingButtons' has a wrong offset!");
static_assert(offsetof(UWBP_LoginFlow_PF_C, Switcher) == 0x000428, "Member 'UWBP_LoginFlow_PF_C::Switcher' has a wrong offset!");
static_assert(offsetof(UWBP_LoginFlow_PF_C, WBP_MaintenanceMessage_CM) == 0x000430, "Member 'UWBP_LoginFlow_PF_C::WBP_MaintenanceMessage_CM' has a wrong offset!");
static_assert(offsetof(UWBP_LoginFlow_PF_C, LoginPanelPtr) == 0x000438, "Member 'UWBP_LoginFlow_PF_C::LoginPanelPtr' has a wrong offset!");
static_assert(offsetof(UWBP_LoginFlow_PF_C, IsLoading) == 0x000440, "Member 'UWBP_LoginFlow_PF_C::IsLoading' has a wrong offset!");
static_assert(offsetof(UWBP_LoginFlow_PF_C, DebugUI) == 0x000441, "Member 'UWBP_LoginFlow_PF_C::DebugUI' has a wrong offset!");
static_assert(offsetof(UWBP_LoginFlow_PF_C, IsShowOptionMenu) == 0x000442, "Member 'UWBP_LoginFlow_PF_C::IsShowOptionMenu' has a wrong offset!");
static_assert(offsetof(UWBP_LoginFlow_PF_C, OnSkipLink) == 0x000448, "Member 'UWBP_LoginFlow_PF_C::OnSkipLink' has a wrong offset!");
static_assert(offsetof(UWBP_LoginFlow_PF_C, ErrorCodeConfigMap) == 0x000458, "Member 'UWBP_LoginFlow_PF_C::ErrorCodeConfigMap' has a wrong offset!");

}

