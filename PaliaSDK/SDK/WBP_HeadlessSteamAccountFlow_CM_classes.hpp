#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HeadlessSteamAccountFlow_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HeadlessSteamAccountFlow_CM.WBP_HeadlessSteamAccountFlow_CM_C
// 0x00F8 (0x05D8 - 0x04E0)
class UWBP_HeadlessSteamAccountFlow_CM_C final  : public UHeadlessSteamAccountFlowBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           Complete;                                          // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AnimatedLoading_Chapaa_C*          ConnectingIcon;                                    // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Primary_01_CM_C*   ContinueButton;                                    // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_EditableTextBox_Styled*          Email_Text_Box;                                    // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           EmailNews;                                         // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Notification_Basic_Error_C* Error_Notification_Box;                            // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Error_Notification_Text;                           // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Secondary_01_CM_C* Final_Back_Button;                                 // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Primary_01_CM_C*   Final_Continue_Button;                             // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Primary_01_CM_C*   Play_Button;                                       // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_EditableTextBox_Styled*          Referral_Text_Box;                                 // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ReviewEULA;                                        // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ReviewPrivacyNotice;                               // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Step1;                                             // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Checkmark_CM_C*                    Subscribed_Checkbox;                               // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Secondary_01_CM_C* WBP_Template_Button_Secondary_01_CM;               // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_ProgressTracker_CM_C*     WBP_Template_ProgressTracker_CM;                   // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_1;                                  // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OpenEULA;                                          // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EULA_Confirmed;                                    // 0x0588(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             PrivacyPolicyConfirmed;                            // 0x0598(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnBackPressed;                                     // 0x05A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSteamHeadlessAccountCreation;                    // 0x05B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPlatformRegisterFailurePropagate;                // 0x05C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_HeadlessSteamAccountFlow_CM_Play_Button_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_HeadlessSteamAccountFlow_CM_WBP_Template_Button_Secondary_01_CM_1_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_HeadlessSteamAccountFlow_CM_WBP_Template_Button_Secondary_01_CM_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_HeadlessSteamAccountFlow_CM_WBP_Template_Button_Step1_Continue_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_LinkSteamFlow_CM_WBP_Template_Button_Step1_Continue_1_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature();
	void Clear_Error_Message();
	void Construct();
	void EULA_Confirmed__DelegateSignature();
	void ExecuteUbergraph_WBP_HeadlessSteamAccountFlow_CM(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FGuid& CallFunc_NewGuid_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, const struct FGuid& CallFunc_Parse_StringToGuid_OutGuid, bool CallFunc_Parse_StringToGuid_Success, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const class FString& K2Node_Event_ErrorMessage_1, int32 K2Node_Event_ErrorCode_1, const class FString& K2Node_Event_ErrorMessage, int32 K2Node_Event_ErrorCode);
	void HandleEULAConfirmed();
	void HandleLoginError(int32 Code, const class FString& Msg, class FText Error_Message, const class FString& CallFunc_GetErrorMessageFromResponse_ReturnValue, bool CallFunc_IsErrorRetriable_ReturnValue, class FText CallFunc_LoginErrorMessage_ReturnValue);
	void HandlePrivacyPolicyConfirmed();
	void HandleRegistrationError(int32 Code, const class FString& Msg, class FText Error_Message, const class FString& CallFunc_GetErrorMessageFromResponse_ReturnValue, class FText CallFunc_RegistrationErrorMessage_ReturnValue, bool CallFunc_IsErrorRetriable_ReturnValue);
	void OnBackPressed__DelegateSignature();
	void OnPlatformLoggedInFailure(const class FString& ErrorMessage, int32 ErrorCode);
	void OnPlatformLoggedInSuccess();
	void OnPlatformRegisterFailure(const class FString& ErrorMessage, int32 ErrorCode);
	void OnPlatformRegisterFailurePropagate__DelegateSignature(class FText ErrorMessage);
	void OnPlatformRegisterSuccess();
	void OnSteamHeadlessAccountCreation__DelegateSignature();
	void OpenEULA__DelegateSignature();
	void PlatformFailure(int32 Code, class FText Msg, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void PrivacyPolicyConfirmed__DelegateSignature();
	void Set_Error_Message(class FText Message);
	void SetPage(class UWidget* Widget, int32 ActivePage);
	void StartRegistration(bool HasReferral, const struct FGuid& ReferralID, const class FString& CallFunc_GetCurrentCulture_ReturnValue, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HeadlessSteamAccountFlow_CM_C">();
	}
	static class UWBP_HeadlessSteamAccountFlow_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HeadlessSteamAccountFlow_CM_C>();
	}
};
static_assert(alignof(UWBP_HeadlessSteamAccountFlow_CM_C) == 0x000008, "Wrong alignment on UWBP_HeadlessSteamAccountFlow_CM_C");
static_assert(sizeof(UWBP_HeadlessSteamAccountFlow_CM_C) == 0x0005D8, "Wrong size on UWBP_HeadlessSteamAccountFlow_CM_C");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, UberGraphFrame) == 0x0004E0, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, Complete) == 0x0004E8, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::Complete' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, ConnectingIcon) == 0x0004F0, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::ConnectingIcon' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, ContinueButton) == 0x0004F8, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::ContinueButton' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, Email_Text_Box) == 0x000500, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::Email_Text_Box' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, EmailNews) == 0x000508, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::EmailNews' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, Error_Notification_Box) == 0x000510, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::Error_Notification_Box' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, Error_Notification_Text) == 0x000518, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::Error_Notification_Text' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, Final_Back_Button) == 0x000520, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::Final_Back_Button' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, Final_Continue_Button) == 0x000528, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::Final_Continue_Button' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, Play_Button) == 0x000530, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::Play_Button' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, Referral_Text_Box) == 0x000538, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::Referral_Text_Box' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, ReviewEULA) == 0x000540, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::ReviewEULA' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, ReviewPrivacyNotice) == 0x000548, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::ReviewPrivacyNotice' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, Step1) == 0x000550, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::Step1' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, Subscribed_Checkbox) == 0x000558, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::Subscribed_Checkbox' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, WBP_Template_Button_Secondary_01_CM) == 0x000560, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::WBP_Template_Button_Secondary_01_CM' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, WBP_Template_ProgressTracker_CM) == 0x000568, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::WBP_Template_ProgressTracker_CM' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, WidgetSwitcher_1) == 0x000570, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::WidgetSwitcher_1' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, OpenEULA) == 0x000578, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::OpenEULA' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, EULA_Confirmed) == 0x000588, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::EULA_Confirmed' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, PrivacyPolicyConfirmed) == 0x000598, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::PrivacyPolicyConfirmed' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, OnBackPressed) == 0x0005A8, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::OnBackPressed' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, OnSteamHeadlessAccountCreation) == 0x0005B8, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::OnSteamHeadlessAccountCreation' has a wrong offset!");
static_assert(offsetof(UWBP_HeadlessSteamAccountFlow_CM_C, OnPlatformRegisterFailurePropagate) == 0x0005C8, "Member 'UWBP_HeadlessSteamAccountFlow_CM_C::OnPlatformRegisterFailurePropagate' has a wrong offset!");

}

