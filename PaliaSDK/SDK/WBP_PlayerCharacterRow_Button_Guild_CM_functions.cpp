#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerCharacterRow_Button_Guild_CM

#include "Basic.hpp"

#include "WBP_PlayerCharacterRow_Button_Guild_CM_classes.hpp"
#include "WBP_PlayerCharacterRow_Button_Guild_CM_parameters.hpp"


namespace SDK
{

// Function WBP_PlayerCharacterRow_Button_Guild_CM.WBP_PlayerCharacterRow_Button_Guild_CM_C.BndEvt__WBP_PlayerCharacterRow_Button_Guild_CM_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerCharacterRow_Button_Guild_CM_C::BndEvt__WBP_PlayerCharacterRow_Button_Guild_CM_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Button_Guild_CM_C", "BndEvt__WBP_PlayerCharacterRow_Button_Guild_CM_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_PlayerCharacterRow_Button_Guild_CM_C_BndEvt__WBP_PlayerCharacterRow_Button_Guild_CM_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerCharacterRow_Button_Guild_CM.WBP_PlayerCharacterRow_Button_Guild_CM_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerCharacterRow_Button_Guild_CM_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Button_Guild_CM_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerCharacterRow_Button_Guild_CM.WBP_PlayerCharacterRow_Button_Guild_CM_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerCharacterRow_Button_Guild_CM_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Button_Guild_CM_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerCharacterRow_Button_Guild_CM.WBP_PlayerCharacterRow_Button_Guild_CM_C.ExecuteUbergraph_WBP_PlayerCharacterRow_Button_Guild_CM
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UVAL_PlayerGuildSubsystem* PlayerGuildSubsystem, const struct FGuid& PlayerGuildId)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(const class FString& ErrorMessage)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UVAL_PlayerGuildSubsystem* PlayerGuildSubsystem, const struct FGuid& PlayerGuildId)>K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVAL_PlayerGuildSubsystem*        CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UVAL_PlayerGuildSubsystem* PlayerGuildSubsystem)>K2Node_CreateDelegate_OutputDelegate_4                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVAL_PlayerGuildSubsystem*        CallFunc_GetLocalPlayerSubsystem_ReturnValue_1         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVAL_PlayerGuildSubsystem*        CallFunc_GetLocalPlayerSubsystem_ReturnValue_2         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UVAL_PlayerGuildSubsystem* PlayerGuildSubsystem)>K2Node_CreateDelegate_OutputDelegate_5                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_Guid_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           K2Node_CustomEvent_ErrorMessage                        (ZeroConstructor, HasGetValueTypeHash)
// class UCommonButtonBase*                K2Node_ComponentBoundEvent_Button                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                      K2Node_Event_InFocusEvent                              (NoDestructor)

void UWBP_PlayerCharacterRow_Button_Guild_CM_C::ExecuteUbergraph_WBP_PlayerCharacterRow_Button_Guild_CM(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, TDelegate<void(class UVAL_PlayerGuildSubsystem* PlayerGuildSubsystem, const struct FGuid& PlayerGuildId)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(const class FString& ErrorMessage)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(class UVAL_PlayerGuildSubsystem* PlayerGuildSubsystem, const struct FGuid& PlayerGuildId)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TDelegate<void(class UVAL_PlayerGuildSubsystem* PlayerGuildSubsystem)> K2Node_CreateDelegate_OutputDelegate_4, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, TDelegate<void(class UVAL_PlayerGuildSubsystem* PlayerGuildSubsystem)> K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_Guid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& K2Node_CustomEvent_ErrorMessage, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const struct FFocusEvent& K2Node_Event_InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Button_Guild_CM_C", "ExecuteUbergraph_WBP_PlayerCharacterRow_Button_Guild_CM");

	Params::WBP_PlayerCharacterRow_Button_Guild_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Button_Guild_CM Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_1 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_2 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_ErrorMessage = std::move(K2Node_CustomEvent_ErrorMessage);
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_InFocusEvent = std::move(K2Node_Event_InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerCharacterRow_Button_Guild_CM.WBP_PlayerCharacterRow_Button_Guild_CM_C.Handle On Player Guild Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVAL_PlayerGuildSubsystem*        PlayerGuildManager                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            Param_PlayerGuildId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerCharacterRow_Button_Guild_CM_C::Handle_On_Player_Guild_Changed(class UVAL_PlayerGuildSubsystem* PlayerGuildManager, const struct FGuid& Param_PlayerGuildId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Button_Guild_CM_C", "Handle On Player Guild Changed");

	Params::WBP_PlayerCharacterRow_Button_Guild_CM_C_Handle_On_Player_Guild_Changed Parms{};

	Parms.PlayerGuildManager = PlayerGuildManager;
	Parms.Param_PlayerGuildId = std::move(Param_PlayerGuildId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerCharacterRow_Button_Guild_CM.WBP_PlayerCharacterRow_Button_Guild_CM_C.Handle On Query Player Guild Membership Success
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bHasMembership                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVAL_PlayerGuild                 PlayerGuild                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PlayerCharacterRow_Button_Guild_CM_C::Handle_On_Query_Player_Guild_Membership_Success(bool bHasMembership, const struct FVAL_PlayerGuild& PlayerGuild)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Button_Guild_CM_C", "Handle On Query Player Guild Membership Success");

	Params::WBP_PlayerCharacterRow_Button_Guild_CM_C_Handle_On_Query_Player_Guild_Membership_Success Parms{};

	Parms.bHasMembership = bHasMembership;
	Parms.PlayerGuild = std::move(PlayerGuild);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerCharacterRow_Button_Guild_CM.WBP_PlayerCharacterRow_Button_Guild_CM_C.HandleOnFocused
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerCharacterRow_Button_Guild_CM_C::HandleOnFocused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Button_Guild_CM_C", "HandleOnFocused");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerCharacterRow_Button_Guild_CM.WBP_PlayerCharacterRow_Button_Guild_CM_C.HandleOnInviteSentFail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ErrorMessage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_PlayerCharacterRow_Button_Guild_CM_C::HandleOnInviteSentFail(const class FString& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Button_Guild_CM_C", "HandleOnInviteSentFail");

	Params::WBP_PlayerCharacterRow_Button_Guild_CM_C_HandleOnInviteSentFail Parms{};

	Parms.ErrorMessage = std::move(ErrorMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerCharacterRow_Button_Guild_CM.WBP_PlayerCharacterRow_Button_Guild_CM_C.HandleOnInviteSentSuccess
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerCharacterRow_Button_Guild_CM_C::HandleOnInviteSentSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Button_Guild_CM_C", "HandleOnInviteSentSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerCharacterRow_Button_Guild_CM.WBP_PlayerCharacterRow_Button_Guild_CM_C.HandleOnOutboundInvitesChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVAL_PlayerGuildSubsystem*        PlayerGuildManager                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerCharacterRow_Button_Guild_CM_C::HandleOnOutboundInvitesChanged(class UVAL_PlayerGuildSubsystem* PlayerGuildManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Button_Guild_CM_C", "HandleOnOutboundInvitesChanged");

	Params::WBP_PlayerCharacterRow_Button_Guild_CM_C_HandleOnOutboundInvitesChanged Parms{};

	Parms.PlayerGuildManager = PlayerGuildManager;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerCharacterRow_Button_Guild_CM.WBP_PlayerCharacterRow_Button_Guild_CM_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PlayerCharacterRow_Button_Guild_CM_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Button_Guild_CM_C", "OnFocusLost");

	Params::WBP_PlayerCharacterRow_Button_Guild_CM_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerCharacterRow_Button_Guild_CM.WBP_PlayerCharacterRow_Button_Guild_CM_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)
// struct FEventReply                      CallFunc_Handled_ReturnValue                           ()

struct FEventReply UWBP_PlayerCharacterRow_Button_Guild_CM_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Button_Guild_CM_C", "OnFocusReceived");

	Params::WBP_PlayerCharacterRow_Button_Guild_CM_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);
	Parms.CallFunc_Handled_ReturnValue = std::move(CallFunc_Handled_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PlayerCharacterRow_Button_Guild_CM.WBP_PlayerCharacterRow_Button_Guild_CM_C.OnMarkFocusUI__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FF_CommonUIButtonPrompt>  UIPrompt                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PlayerCharacterRow_Button_Guild_CM_C::OnMarkFocusUI__DelegateSignature(class UWidget* Widget, TArray<struct FF_CommonUIButtonPrompt>& UIPrompt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Button_Guild_CM_C", "OnMarkFocusUI__DelegateSignature");

	Params::WBP_PlayerCharacterRow_Button_Guild_CM_C_OnMarkFocusUI__DelegateSignature Parms{};

	Parms.Widget = Widget;
	Parms.UIPrompt = std::move(UIPrompt);

	UObject::ProcessEvent(Func, &Parms);

	UIPrompt = std::move(Parms.UIPrompt);
}


// Function WBP_PlayerCharacterRow_Button_Guild_CM.WBP_PlayerCharacterRow_Button_Guild_CM_C.SetParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 Param_UserId                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UVAL_PlayerGuildSubsystem*        CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAuthManager*                     CallFunc_GetLocalPlayerSubsystem_ReturnValue_1         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl                 CallFunc_GetNetId_ReturnValue                          (HasGetValueTypeHash)
// bool                                    CallFunc_TryGetUserMembership_bOutHasMembership        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVAL_PlayerGuild                 CallFunc_TryGetUserMembership_PlayerGuild              ()
// bool                                    CallFunc_TryGetUserMembership_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerCharacterRow_Button_Guild_CM_C::SetParameters(const struct FUniqueNetIdRepl& Param_UserId, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetNetId_ReturnValue, bool CallFunc_TryGetUserMembership_bOutHasMembership, const struct FVAL_PlayerGuild& CallFunc_TryGetUserMembership_PlayerGuild, bool CallFunc_TryGetUserMembership_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Button_Guild_CM_C", "SetParameters");

	Params::WBP_PlayerCharacterRow_Button_Guild_CM_C_SetParameters Parms{};

	Parms.Param_UserId = std::move(Param_UserId);
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_1 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	Parms.CallFunc_GetNetId_ReturnValue = std::move(CallFunc_GetNetId_ReturnValue);
	Parms.CallFunc_TryGetUserMembership_bOutHasMembership = CallFunc_TryGetUserMembership_bOutHasMembership;
	Parms.CallFunc_TryGetUserMembership_PlayerGuild = std::move(CallFunc_TryGetUserMembership_PlayerGuild);
	Parms.CallFunc_TryGetUserMembership_ReturnValue = CallFunc_TryGetUserMembership_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerCharacterRow_Button_Guild_CM.WBP_PlayerCharacterRow_Button_Guild_CM_C.UpdateState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInvitedAlready                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsMember                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_True_if_break_was_hit_Variable               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_CommonUIButtonPrompt          K2Node_MakeStruct_F_CommonUIButtonPrompt               (HasGetValueTypeHash)
// TArray<struct FF_CommonUIButtonPrompt>  K2Node_MakeArray_Array                                 (ReferenceParm)
// struct FF_CommonUIButtonPrompt          K2Node_MakeStruct_F_CommonUIButtonPrompt_1             (HasGetValueTypeHash)
// struct FF_CommonUIButtonPrompt          K2Node_MakeStruct_F_CommonUIButtonPrompt_2             (HasGetValueTypeHash)
// TArray<struct FF_CommonUIButtonPrompt>  K2Node_MakeArray_Array_1                               (ReferenceParm)
// bool                                    Temp_bool_True_if_break_was_hit_Variable_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_MakeLiteralText_ReturnValue                   ()
// class FText                             CallFunc_MakeLiteralText_ReturnValue_1                 ()
// int32                                   Temp_int_Array_Index_Variable_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAuthManager*                     CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVAL_PlayerGuildSubsystem*        CallFunc_GetLocalPlayerSubsystem_ReturnValue_1         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl                 CallFunc_GetNetId_ReturnValue                          (HasGetValueTypeHash)
// class UAuthManager*                     CallFunc_GetLocalPlayerSubsystem_ReturnValue_2         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl                 CallFunc_GetNetId_ReturnValue_1                        (HasGetValueTypeHash)
// struct FVAL_PlayerGuild                 CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo          ()
// bool                                    CallFunc_TryGetPlayerGuild_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_PlayerGuildSubsystem*        CallFunc_GetLocalPlayerSubsystem_ReturnValue_3         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EVAL_PlayerGuildMemberRole              CallFunc_TryGetRoleForUserId_OutRole                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_TryGetRoleForUserId_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVAL_PlayerGuildRosterEntry      CallFunc_Array_Get_Item                                (HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_CanRoleSendInvites_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_Guid_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_PlayerGuildSubsystem*        CallFunc_GetLocalPlayerSubsystem_ReturnValue_4         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVAL_PlayerGuildInvitationList   CallFunc_TryGetOutboundInvitations_OutInvitations      ()
// bool                                    CallFunc_TryGetOutboundInvitations_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVAL_PlayerGuildInvitation       CallFunc_Array_Get_Item_1                              ()
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerCharacterRow_Button_Guild_CM_C::UpdateState(bool IsInvitedAlready, bool IsMember, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FF_CommonUIButtonPrompt& K2Node_MakeStruct_F_CommonUIButtonPrompt, TArray<struct FF_CommonUIButtonPrompt>& K2Node_MakeArray_Array, const struct FF_CommonUIButtonPrompt& K2Node_MakeStruct_F_CommonUIButtonPrompt_1, const struct FF_CommonUIButtonPrompt& K2Node_MakeStruct_F_CommonUIButtonPrompt_2, TArray<struct FF_CommonUIButtonPrompt>& K2Node_MakeArray_Array_1, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetNetId_ReturnValue, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, const struct FUniqueNetIdRepl& CallFunc_GetNetId_ReturnValue_1, const struct FVAL_PlayerGuild& CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo, bool CallFunc_TryGetPlayerGuild_ReturnValue, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_3, EVAL_PlayerGuildMemberRole CallFunc_TryGetRoleForUserId_OutRole, bool CallFunc_TryGetRoleForUserId_ReturnValue, const struct FVAL_PlayerGuildRosterEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanRoleSendInvites_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_4, const struct FVAL_PlayerGuildInvitationList& CallFunc_TryGetOutboundInvitations_OutInvitations, bool CallFunc_TryGetOutboundInvitations_ReturnValue, bool CallFunc_EqualEqual_ReturnValue_1, const struct FVAL_PlayerGuildInvitation& CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Button_Guild_CM_C", "UpdateState");

	Params::WBP_PlayerCharacterRow_Button_Guild_CM_C_UpdateState Parms{};

	Parms.IsInvitedAlready = IsInvitedAlready;
	Parms.IsMember = IsMember;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_F_CommonUIButtonPrompt = std::move(K2Node_MakeStruct_F_CommonUIButtonPrompt);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.K2Node_MakeStruct_F_CommonUIButtonPrompt_1 = std::move(K2Node_MakeStruct_F_CommonUIButtonPrompt_1);
	Parms.K2Node_MakeStruct_F_CommonUIButtonPrompt_2 = std::move(K2Node_MakeStruct_F_CommonUIButtonPrompt_2);
	Parms.K2Node_MakeArray_Array_1 = std::move(K2Node_MakeArray_Array_1);
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_1 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	Parms.CallFunc_GetNetId_ReturnValue = std::move(CallFunc_GetNetId_ReturnValue);
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_2 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_2;
	Parms.CallFunc_GetNetId_ReturnValue_1 = std::move(CallFunc_GetNetId_ReturnValue_1);
	Parms.CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo = std::move(CallFunc_TryGetPlayerGuild_OutPlayerGuildInfo);
	Parms.CallFunc_TryGetPlayerGuild_ReturnValue = CallFunc_TryGetPlayerGuild_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_3 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_3;
	Parms.CallFunc_TryGetRoleForUserId_OutRole = CallFunc_TryGetRoleForUserId_OutRole;
	Parms.CallFunc_TryGetRoleForUserId_ReturnValue = CallFunc_TryGetRoleForUserId_ReturnValue;
	Parms.CallFunc_Array_Get_Item = std::move(CallFunc_Array_Get_Item);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ReturnValue = CallFunc_EqualEqual_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_CanRoleSendInvites_ReturnValue = CallFunc_CanRoleSendInvites_ReturnValue;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_4 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_4;
	Parms.CallFunc_TryGetOutboundInvitations_OutInvitations = std::move(CallFunc_TryGetOutboundInvitations_OutInvitations);
	Parms.CallFunc_TryGetOutboundInvitations_ReturnValue = CallFunc_TryGetOutboundInvitations_ReturnValue;
	Parms.CallFunc_EqualEqual_ReturnValue_1 = CallFunc_EqualEqual_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = std::move(CallFunc_Array_Get_Item_1);
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ReturnValue_2 = CallFunc_EqualEqual_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
	K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);
}

}
