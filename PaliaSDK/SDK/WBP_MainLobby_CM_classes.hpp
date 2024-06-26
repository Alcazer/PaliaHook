#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainLobby_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MainLobby_CM.WBP_MainLobby_CM_C
// 0x0110 (0x0620 - 0x0510)
class UWBP_MainLobby_CM_C final  : public UMainLobbyBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class WBP_TextButton_CM_0::UWBP_TextButton_CM_C* AccountButton;                                     // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_MainPanel;                                     // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                BuildVersionNumber;                                // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              Button_Exit;                                       // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              Button_Help;                                       // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              Button_Settings;                                   // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           DefaultLogin;                                      // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBox_LoginUI;                                      // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_76;                                          // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_78;                                          // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_199;                                         // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        LoginFlowSwitcher;                                 // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Right;                                     // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           PressKeyToStart;                                   // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Start_Menu_Error_Text_Box;                         // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   VALUI_Border_Styled_0;                             // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                VALUI_TextBlock_BuildInfo;                         // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonUIButtonPrompt_C*            WBP_CommonUIButtonPrompt;                          // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Connecting_PF_C*                   WBP_Connecting_PF;                                 // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SteamAccountLanding_CM_C*          WBP_LinkSteam_CM;                                  // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginScreen_CM_C*                  WBP_LoginScreen;                                   // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginVideo_C*                      WBP_LoginVideo;                                    // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MaintenanceMessage_CM_C*           WBP_MaintenanceMessage_CM;                         // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Notification_Basic_Error_C* WBP_Template_Notification_Basic_Error_1;           // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_ConnectingState;                    // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 CharacterSelectMap;                                // 0x05E0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 LevelLaunchOptions;                                // 0x05F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          MenuWidgetState;                                   // 0x0600(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BDE[0x7];                                     // 0x0601(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_EscapeMenu_CM_C*                   MenuWidget;                                        // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          HidenState;                                        // 0x0610(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AnyKeyGuard;                                       // 0x0611(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BDF[0x6];                                     // 0x0612(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_SteamAccountLanding_CM_C*          WBP_Link_Steam_CM;                                 // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_MainLobby_CM_AccountButton_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_MainLobby_CM_AccountButton_K2Node_ComponentBoundEvent_1_ButtonHovered__DelegateSignature();
	void BndEvt__WBP_MainLobby_CM_Button_Exit_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainLobby_CM_Button_Exit_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainLobby_CM_Button_Help_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainLobby_CM_Button_Help_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainLobby_CM_Button_Settings_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainLobby_CM_Button_Settings_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MainLobby_CM_WBP_LoginScreen_K2Node_ComponentBoundEvent_2_LoginScreen_LogInFailure__DelegateSignature();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_MainLobby_CM(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class US6UI_ModalWidgetBase* K2Node_CustomEvent_ModalWidget_1, TDelegate<void(class US6UI_ModalWidgetBase* ModalWidget)> K2Node_CreateDelegate_OutputDelegate_1, class US6UI_ModalWidgetBase* Temp_object_Variable, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, class UWBP_PopupEULA_CM_C* K2Node_DynamicCast_AsWBP_Popup_EULA_CM, bool K2Node_DynamicCast_bSuccess, class US6UI_ModalWidgetBase* K2Node_CustomEvent_ModalWidget, TDelegate<void(class US6UI_ModalWidgetBase* ModalWidget)> K2Node_CreateDelegate_OutputDelegate_3, class US6UI_ModalWidgetBase* Temp_object_Variable_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_4, class UWBP_PrivacyPolicy_CM_C* K2Node_DynamicCast_AsWBP_Privacy_Policy_CM, bool K2Node_DynamicCast_bSuccess_1, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_3, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_4, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_5, bool CallFunc_BuildIsShipping_ReturnValue, const class FString& CallFunc_GetValeriaBuildInfoString_ReturnValue, const class FString& CallFunc_GetVersionString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_IsValidVersionString_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_6, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_7, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, int32 CallFunc_AkEventGlobal_ReturnValue_2, int32 CallFunc_AkEventGlobal_ReturnValue_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, int32 CallFunc_AkEventGlobal_ReturnValue_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, int32 CallFunc_AkEventGlobal_ReturnValue_5, int32 CallFunc_AkEventGlobal_ReturnValue_6, ESlateVisibility Temp_byte_Variable_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_8, TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_5, bool Temp_bool_Variable, ECommonInputType K2Node_CustomEvent_bNewInputType, TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_6, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, class UWidget* CallFunc_GetHoveredInputBox_OutWidget, double Temp_real_Variable, bool CallFunc_IsValid_ReturnValue, double Temp_real_Variable_1, class UWidget* K2Node_CustomEvent_Widget, class UInputAction* Temp_object_Variable_2, TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_7, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, double Temp_real_Variable_1_0, double Temp_real_Variable_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable_1, class US6UI_AsyncAction_OpenModal* CallFunc_OpenModal_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_8, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_9, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class US6UI_AsyncAction_OpenModal* CallFunc_OpenModal_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_7, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_IsSteamEnabled_ReturnValue, TDelegate<void(const class FString& ErrorMessage, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_10, const class FString& K2Node_CustomEvent_ErrorMessage_1, int32 K2Node_CustomEvent_ErrorCode, class FText K2Node_CustomEvent_ErrorMessage, TDelegate<void(class FText ErrorMessage)> K2Node_CreateDelegate_OutputDelegate_11, TDelegate<void(class FText ErrorMessage)> K2Node_CreateDelegate_OutputDelegate_12, bool Temp_bool_Variable_2, double Temp_real_Variable_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_13, double Temp_real_Variable_3, TDelegate<void(const class FString& ErrorMessage, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_14, class UInputAction* Temp_object_Variable_3, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText K2Node_Event_Msg, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, TDelegate<void(const class FString& ErrorMessage, int32 ErrorCode)> K2Node_CreateDelegate_OutputDelegate_15, double Temp_real_Variable_3_0, double Temp_real_Variable_2_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, bool CallFunc_ShouldRecommendRestart_ShouldRecommend, float K2Node_MakeStruct_Left_ImplicitCast);
	void GetHoveredInputBox(class UWidget** OutWidget, bool CallFunc_IsValid_ReturnValue);
	void HandleOnEnterLoginLobbyState();
	void HandleOnInputMethodChanged(ECommonInputType bNewInputType);
	void HandleOpenEULA();
	void HandleOpenPrivacyPolicy();
	void HandleOptionFinishedClosing(class UWidget* Widget);
	void InpActEvt_IA_UI_Option_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_SwitchItem_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void On_Initial_Steam_Login_Failure(const class FString& ErrorMessage, int32 ErrorCode);
	void OnFailed_283B896B45D3DA6BF41F30BCEF4DBFD4();
	void OnFailed_D539824F456D7152D458F38F38FF9BD5();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnLoginSuccess();
	void OnOpened_283B896B45D3DA6BF41F30BCEF4DBFD4(class US6UI_ModalWidgetBase* ModalWidget);
	void OnOpened_D539824F456D7152D458F38F38FF9BD5(class US6UI_ModalWidgetBase* ModalWidget);
	void OnPressedAnyKey_Event();
	void OnSpecifyNavigationRules();
	void OnSteamFlowFailure(class FText ErrorMessage);
	void OnSteamInitializationFailure();
	void OnSteamLoginError(class FText& Msg);
	void OnSteamLoginNotFound();
	void PPAccepted();
	void PreConstruct(bool IsDesignTime);
	void RecommendRestartForSettings(class UWBP_GraphicsSettings_RestartWindow_CM_C* Widget_RestartWindow, class UWBP_GraphicsSettings_RestartWindow_CM_C* CallFunc_Create_ReturnValue, bool CallFunc_ShouldRecommendRestart_ShouldRecommend, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue);
	void SetSteamLoginError(class FText ErrorText);
	void ShouldRecommendRestart(bool* ShouldRecommend, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool CallFunc_GetFirstRunSetupNeedRestart_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue);
	void ToggleConnectingScreen(bool ShowConnecting);
	void ToggleLoginHiden(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
	void ToggleOptions(TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate, class UWBP_EscapeMenu_CM_C* CallFunc_Create_ReturnValue, TDelegate<void(class UWidget* Widget)> K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue);

	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_Get_Focued_Child_Widget_out, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1) const;
	void Get_Focued_Child_Widget(class UWidget** Out, bool CallFunc_IsFocused_out, bool CallFunc_IsFocused_out_1, bool CallFunc_IsFocused_out_2, class UWidget* CallFunc_Get_Focued_Child_Widget_out, bool CallFunc_IsValid_ReturnValue) const;
	void IsFocused(class UWidget* In, bool* Out, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MainLobby_CM_C">();
	}
	static class UWBP_MainLobby_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MainLobby_CM_C>();
	}
};
static_assert(alignof(UWBP_MainLobby_CM_C) == 0x000008, "Wrong alignment on UWBP_MainLobby_CM_C");
static_assert(sizeof(UWBP_MainLobby_CM_C) == 0x000620, "Wrong size on UWBP_MainLobby_CM_C");
static_assert(offsetof(UWBP_MainLobby_CM_C, UberGraphFrame) == 0x000510, "Member 'UWBP_MainLobby_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, AccountButton) == 0x000518, "Member 'UWBP_MainLobby_CM_C::AccountButton' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, Box_MainPanel) == 0x000520, "Member 'UWBP_MainLobby_CM_C::Box_MainPanel' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, BuildVersionNumber) == 0x000528, "Member 'UWBP_MainLobby_CM_C::BuildVersionNumber' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, Button_Exit) == 0x000530, "Member 'UWBP_MainLobby_CM_C::Button_Exit' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, Button_Help) == 0x000538, "Member 'UWBP_MainLobby_CM_C::Button_Help' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, Button_Settings) == 0x000540, "Member 'UWBP_MainLobby_CM_C::Button_Settings' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, DefaultLogin) == 0x000548, "Member 'UWBP_MainLobby_CM_C::DefaultLogin' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, HBox_LoginUI) == 0x000550, "Member 'UWBP_MainLobby_CM_C::HBox_LoginUI' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, Image_76) == 0x000558, "Member 'UWBP_MainLobby_CM_C::Image_76' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, Image_78) == 0x000560, "Member 'UWBP_MainLobby_CM_C::Image_78' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, Image_199) == 0x000568, "Member 'UWBP_MainLobby_CM_C::Image_199' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, LoginFlowSwitcher) == 0x000570, "Member 'UWBP_MainLobby_CM_C::LoginFlowSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, Overlay_Right) == 0x000578, "Member 'UWBP_MainLobby_CM_C::Overlay_Right' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, PressKeyToStart) == 0x000580, "Member 'UWBP_MainLobby_CM_C::PressKeyToStart' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, Start_Menu_Error_Text_Box) == 0x000588, "Member 'UWBP_MainLobby_CM_C::Start_Menu_Error_Text_Box' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, VALUI_Border_Styled_0) == 0x000590, "Member 'UWBP_MainLobby_CM_C::VALUI_Border_Styled_0' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, VALUI_TextBlock_BuildInfo) == 0x000598, "Member 'UWBP_MainLobby_CM_C::VALUI_TextBlock_BuildInfo' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, WBP_CommonUIButtonPrompt) == 0x0005A0, "Member 'UWBP_MainLobby_CM_C::WBP_CommonUIButtonPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, WBP_Connecting_PF) == 0x0005A8, "Member 'UWBP_MainLobby_CM_C::WBP_Connecting_PF' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, WBP_LinkSteam_CM) == 0x0005B0, "Member 'UWBP_MainLobby_CM_C::WBP_LinkSteam_CM' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, WBP_LoginScreen) == 0x0005B8, "Member 'UWBP_MainLobby_CM_C::WBP_LoginScreen' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, WBP_LoginVideo) == 0x0005C0, "Member 'UWBP_MainLobby_CM_C::WBP_LoginVideo' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, WBP_MaintenanceMessage_CM) == 0x0005C8, "Member 'UWBP_MainLobby_CM_C::WBP_MaintenanceMessage_CM' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, WBP_Template_Notification_Basic_Error_1) == 0x0005D0, "Member 'UWBP_MainLobby_CM_C::WBP_Template_Notification_Basic_Error_1' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, WidgetSwitcher_ConnectingState) == 0x0005D8, "Member 'UWBP_MainLobby_CM_C::WidgetSwitcher_ConnectingState' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, CharacterSelectMap) == 0x0005E0, "Member 'UWBP_MainLobby_CM_C::CharacterSelectMap' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, LevelLaunchOptions) == 0x0005F0, "Member 'UWBP_MainLobby_CM_C::LevelLaunchOptions' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, MenuWidgetState) == 0x000600, "Member 'UWBP_MainLobby_CM_C::MenuWidgetState' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, MenuWidget) == 0x000608, "Member 'UWBP_MainLobby_CM_C::MenuWidget' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, HidenState) == 0x000610, "Member 'UWBP_MainLobby_CM_C::HidenState' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, AnyKeyGuard) == 0x000611, "Member 'UWBP_MainLobby_CM_C::AnyKeyGuard' has a wrong offset!");
static_assert(offsetof(UWBP_MainLobby_CM_C, WBP_Link_Steam_CM) == 0x000618, "Member 'UWBP_MainLobby_CM_C::WBP_Link_Steam_CM' has a wrong offset!");

}

