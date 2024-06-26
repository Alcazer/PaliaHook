#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Guild_TransferOwnershipConfirmation_Modal_PF

#include "Basic.hpp"

#include "WBP_Guild_TransferOwnershipConfirmation_Modal_PF_classes.hpp"
#include "WBP_Guild_TransferOwnershipConfirmation_Modal_PF_parameters.hpp"


namespace SDK
{

// Function WBP_Guild_TransferOwnershipConfirmation_Modal_PF.WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C.BndEvt__WBP_Guild_TransferOwnershipConfirmation_Modal_PF_WBP_Template_PopupSecondary_02_PF_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature
// (BlueprintEvent)

void UWBP_Guild_TransferOwnershipConfirmation_Modal_PF_C::BndEvt__WBP_Guild_TransferOwnershipConfirmation_Modal_PF_WBP_Template_PopupSecondary_02_PF_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C", "BndEvt__WBP_Guild_TransferOwnershipConfirmation_Modal_PF_WBP_Template_PopupSecondary_02_PF_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Guild_TransferOwnershipConfirmation_Modal_PF.WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C.BndEvt__WBP_Guild_TransferOwnershipConfirmation_Modal_PF_WBP_Template_PopupSecondary_02_PF_K2Node_ComponentBoundEvent_1_Cancel__DelegateSignature
// (BlueprintEvent)

void UWBP_Guild_TransferOwnershipConfirmation_Modal_PF_C::BndEvt__WBP_Guild_TransferOwnershipConfirmation_Modal_PF_WBP_Template_PopupSecondary_02_PF_K2Node_ComponentBoundEvent_1_Cancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C", "BndEvt__WBP_Guild_TransferOwnershipConfirmation_Modal_PF_WBP_Template_PopupSecondary_02_PF_K2Node_ComponentBoundEvent_1_Cancel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Guild_TransferOwnershipConfirmation_Modal_PF.WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Guild_TransferOwnershipConfirmation_Modal_PF_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Guild_TransferOwnershipConfirmation_Modal_PF.WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C.ExecuteUbergraph_WBP_Guild_TransferOwnershipConfirmation_Modal_PF
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            K2Node_CustomEvent_AccountId_1                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(struct FGuid& AccountId)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            K2Node_CustomEvent_AccountId                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOSSVAL_CharacterNameAndId>K2Node_CustomEvent_Names                               (ConstParm, ReferenceParm)
// TDelegate<void(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOSSVAL_CharacterNameAndId>Temp_struct_Variable                                   (ReferenceParm)
// struct FGuid                            Temp_struct_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()
// class FText                             CallFunc_Conv_StringToText_ReturnValue_1               ()
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class US6UI_UIManagerWidgetBase*        CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            CallFunc_GetAccountId_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_AkEventGlobal_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOSSVAL_GetCharacterNamesByAccountIdProxy*CallFunc_GetCharacterNamesByAccountId_ReturnValue      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_TransferOwnershipConfirmation_Modal_PF_C::ExecuteUbergraph_WBP_Guild_TransferOwnershipConfirmation_Modal_PF(int32 EntryPoint, struct FGuid& K2Node_CustomEvent_AccountId_1, TDelegate<void(struct FGuid& AccountId)> K2Node_CreateDelegate_OutputDelegate, struct FGuid& K2Node_CustomEvent_AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& K2Node_CustomEvent_Names, TDelegate<void(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names)> K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FOSSVAL_CharacterNameAndId>& Temp_struct_Variable, const struct FGuid& Temp_struct_Variable_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGuid& CallFunc_GetAccountId_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, class UOSSVAL_GetCharacterNamesByAccountIdProxy* CallFunc_GetCharacterNamesByAccountId_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C", "ExecuteUbergraph_WBP_Guild_TransferOwnershipConfirmation_Modal_PF");

	Params::WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C_ExecuteUbergraph_WBP_Guild_TransferOwnershipConfirmation_Modal_PF Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_AccountId_1 = std::move(K2Node_CustomEvent_AccountId_1);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_AccountId = std::move(K2Node_CustomEvent_AccountId);
	Parms.K2Node_CustomEvent_Names = std::move(K2Node_CustomEvent_Names);
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.Temp_struct_Variable_1 = std::move(Temp_struct_Variable_1);
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetAccountId_ReturnValue = std::move(CallFunc_GetAccountId_ReturnValue);
	Parms.CallFunc_AkEventGlobal_ReturnValue = CallFunc_AkEventGlobal_ReturnValue;
	Parms.CallFunc_GetCharacterNamesByAccountId_ReturnValue = CallFunc_GetCharacterNamesByAccountId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	Temp_struct_Variable = std::move(Parms.Temp_struct_Variable);
}


// Function WBP_Guild_TransferOwnershipConfirmation_Modal_PF.WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C.HandleTransferFailure
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ErrorMessage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Guild_TransferOwnershipConfirmation_Modal_PF_C::HandleTransferFailure(const class FString& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C", "HandleTransferFailure");

	Params::WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C_HandleTransferFailure Parms{};

	Parms.ErrorMessage = std::move(ErrorMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Guild_TransferOwnershipConfirmation_Modal_PF.WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C.HandleTransferSuccess
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Guild_TransferOwnershipConfirmation_Modal_PF_C::HandleTransferSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C", "HandleTransferSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Guild_TransferOwnershipConfirmation_Modal_PF.WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C.OnFailure_B93A118A441B40CAA7E2C98B133D7F5E
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            AccountId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_TransferOwnershipConfirmation_Modal_PF_C::OnFailure_B93A118A441B40CAA7E2C98B133D7F5E(struct FGuid& AccountId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C", "OnFailure_B93A118A441B40CAA7E2C98B133D7F5E");

	Params::WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C_OnFailure_B93A118A441B40CAA7E2C98B133D7F5E Parms{};

	Parms.AccountId = std::move(AccountId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Guild_TransferOwnershipConfirmation_Modal_PF.WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C.OnSuccess_B93A118A441B40CAA7E2C98B133D7F5E
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            AccountId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOSSVAL_CharacterNameAndId>Names                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Guild_TransferOwnershipConfirmation_Modal_PF_C::OnSuccess_B93A118A441B40CAA7E2C98B133D7F5E(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C", "OnSuccess_B93A118A441B40CAA7E2C98B133D7F5E");

	Params::WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C_OnSuccess_B93A118A441B40CAA7E2C98B133D7F5E Parms{};

	Parms.AccountId = std::move(AccountId);
	Parms.Names = std::move(Names);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Guild_TransferOwnershipConfirmation_Modal_PF.WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_TransferOwnershipConfirmation_Modal_PF_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C", "PreConstruct");

	Params::WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Guild_TransferOwnershipConfirmation_Modal_PF.WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C.TransferOwnership
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVAL_PlayerGuildSubsystem*        CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVAL_PlayerGuildSubsystem*        CallFunc_GetLocalPlayerSubsystem_ReturnValue_1         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAuthManager*                     CallFunc_GetLocalPlayerSubsystem_ReturnValue_2         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl                 CallFunc_GetNetId_ReturnValue                          (HasGetValueTypeHash)
// TDelegate<void(const class FString& ErrorMessage)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_TryGetUserMembership_bOutHasMembership        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVAL_PlayerGuild                 CallFunc_TryGetUserMembership_PlayerGuild              ()
// bool                                    CallFunc_TryGetUserMembership_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVAL_PlayerGuild                 K2Node_SetFieldsInStruct_StructOut                     ()
// class UVAL_PlayerGuildSubsystem*        CallFunc_GetLocalPlayerSubsystem_ReturnValue_3         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_CanTransferGuildOwnership_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Guild_TransferOwnershipConfirmation_Modal_PF_C::TransferOwnership(class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, const struct FUniqueNetIdRepl& CallFunc_GetNetId_ReturnValue, TDelegate<void(const class FString& ErrorMessage)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_TryGetUserMembership_bOutHasMembership, const struct FVAL_PlayerGuild& CallFunc_TryGetUserMembership_PlayerGuild, bool CallFunc_TryGetUserMembership_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, const struct FVAL_PlayerGuild& K2Node_SetFieldsInStruct_StructOut, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_3, bool CallFunc_CanTransferGuildOwnership_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C", "TransferOwnership");

	Params::WBP_Guild_TransferOwnershipConfirmation_Modal_PF_C_TransferOwnership Parms{};

	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_1 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_2 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_2;
	Parms.CallFunc_GetNetId_ReturnValue = std::move(CallFunc_GetNetId_ReturnValue);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_TryGetUserMembership_bOutHasMembership = CallFunc_TryGetUserMembership_bOutHasMembership;
	Parms.CallFunc_TryGetUserMembership_PlayerGuild = std::move(CallFunc_TryGetUserMembership_PlayerGuild);
	Parms.CallFunc_TryGetUserMembership_ReturnValue = CallFunc_TryGetUserMembership_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_SetFieldsInStruct_StructOut = std::move(K2Node_SetFieldsInStruct_StructOut);
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_3 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_3;
	Parms.CallFunc_CanTransferGuildOwnership_ReturnValue = CallFunc_CanTransferGuildOwnership_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}

}

