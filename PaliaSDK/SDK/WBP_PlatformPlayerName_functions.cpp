#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlatformPlayerName

#include "Basic.hpp"

#include "WBP_PlatformPlayerName_classes.hpp"
#include "WBP_PlatformPlayerName_parameters.hpp"


namespace SDK
{

// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlatformPlayerName_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlatformPlayerName_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.ExecuteUbergraph_WBP_PlatformPlayerName
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            K2Node_CustomEvent_AccountId_1                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            K2Node_CustomEvent_AccountId                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOSSVAL_CharacterNameAndId>K2Node_CustomEvent_Names                               (ConstParm, ReferenceParm)
// TDelegate<void(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOSSVAL_CharacterNameAndId>Temp_struct_Variable                                   (ReferenceParm)
// struct FGuid                            Temp_struct_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPresenceManager*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             K2Node_CustomEvent_Name                                ()
// TDelegate<void(struct FGuid& AccountId)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl                 K2Node_CustomEvent_NetId_1                             (HasGetValueTypeHash)
// class FText                             K2Node_CustomEvent_PlayerName                          ()
// struct FUniqueNetIdRepl                 K2Node_CustomEvent_NetId                               (HasGetValueTypeHash)
// struct FGuid                            CallFunc_GetAccountId_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOSSVAL_GetCharacterNamesByAccountIdProxy*CallFunc_GetCharacterNamesByAccountId_ReturnValue      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(const struct FPresence& OldPresence, const struct FPresence& NewPresence)>K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsPS5Platform_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlatformPlayerName_C::ExecuteUbergraph_WBP_PlatformPlayerName(int32 EntryPoint, struct FGuid& K2Node_CustomEvent_AccountId_1, struct FGuid& K2Node_CustomEvent_AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& K2Node_CustomEvent_Names, TDelegate<void(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names)> K2Node_CreateDelegate_OutputDelegate, TArray<struct FOSSVAL_CharacterNameAndId>& Temp_struct_Variable, const struct FGuid& Temp_struct_Variable_1, class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_Event_IsDesignTime, class FText K2Node_CustomEvent_Name, TDelegate<void(struct FGuid& AccountId)> K2Node_CreateDelegate_OutputDelegate_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_NetId_1, class FText K2Node_CustomEvent_PlayerName, const struct FUniqueNetIdRepl& K2Node_CustomEvent_NetId, const struct FGuid& CallFunc_GetAccountId_ReturnValue, class UOSSVAL_GetCharacterNamesByAccountIdProxy* CallFunc_GetCharacterNamesByAccountId_ReturnValue, bool CallFunc_IsValid_ReturnValue, TDelegate<void(const struct FPresence& OldPresence, const struct FPresence& NewPresence)> K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsPS5Platform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "ExecuteUbergraph_WBP_PlatformPlayerName");

	Params::WBP_PlatformPlayerName_C_ExecuteUbergraph_WBP_PlatformPlayerName Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_AccountId_1 = std::move(K2Node_CustomEvent_AccountId_1);
	Parms.K2Node_CustomEvent_AccountId = std::move(K2Node_CustomEvent_AccountId);
	Parms.K2Node_CustomEvent_Names = std::move(K2Node_CustomEvent_Names);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.Temp_struct_Variable_1 = std::move(Temp_struct_Variable_1);
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NetId_1 = std::move(K2Node_CustomEvent_NetId_1);
	Parms.K2Node_CustomEvent_PlayerName = K2Node_CustomEvent_PlayerName;
	Parms.K2Node_CustomEvent_NetId = std::move(K2Node_CustomEvent_NetId);
	Parms.CallFunc_GetAccountId_ReturnValue = std::move(CallFunc_GetAccountId_ReturnValue);
	Parms.CallFunc_GetCharacterNamesByAccountId_ReturnValue = CallFunc_GetCharacterNamesByAccountId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsPS5Platform_ReturnValue = CallFunc_IsPS5Platform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	Temp_struct_Variable = std::move(Parms.Temp_struct_Variable);
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.GetOwnerPlatform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ERedirectsPlatform                      OwnerPlatform                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPresenceManager*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPresence                        CallFunc_GetPresenceForUserId_ReturnValue              ()

void UWBP_PlatformPlayerName_C::GetOwnerPlatform(ERedirectsPlatform* OwnerPlatform, class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPresence& CallFunc_GetPresenceForUserId_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "GetOwnerPlatform");

	Params::WBP_PlatformPlayerName_C_GetOwnerPlatform Parms{};

	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPresenceForUserId_ReturnValue = std::move(CallFunc_GetPresenceForUserId_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	if (OwnerPlatform != nullptr)
		*OwnerPlatform = Parms.OwnerPlatform;
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.InitTextStyleAppearance
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlatformPlayerName_C::InitTextStyleAppearance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "InitTextStyleAppearance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.IsLocalPlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                     CallFunc_GetPlayerState_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl                 CallFunc_BP_GetUniqueId_ReturnValue                    (HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_PlatformPlayerName_C::IsLocalPlayer(class APlayerState* CallFunc_GetPlayerState_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_BP_GetUniqueId_ReturnValue, bool CallFunc_EqualEqual_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "IsLocalPlayer");

	Params::WBP_PlatformPlayerName_C_IsLocalPlayer Parms{};

	Parms.CallFunc_GetPlayerState_ReturnValue = CallFunc_GetPlayerState_ReturnValue;
	Parms.CallFunc_BP_GetUniqueId_ReturnValue = std::move(CallFunc_BP_GetUniqueId_ReturnValue);
	Parms.CallFunc_EqualEqual_ReturnValue = CallFunc_EqualEqual_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.IsOnline
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bOnline                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPresenceManager*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPresence                        CallFunc_GetPresenceForUserId_ReturnValue              ()
// bool                                    CallFunc_NotEqual_ByteByte_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlatformPlayerName_C::IsOnline(bool* bOnline, class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FPresence& CallFunc_GetPresenceForUserId_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "IsOnline");

	Params::WBP_PlatformPlayerName_C_IsOnline Parms{};

	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetPresenceForUserId_ReturnValue = std::move(CallFunc_GetPresenceForUserId_ReturnValue);
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOnline != nullptr)
		*bOnline = Parms.bOnline;
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.IsOverrideUsingPlatformId
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsLocalPlayer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERedirectsPlatform                      CallFunc_GetPlatformType_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsSamePlatformWithLocalPayer_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_PlatformPlayerName_C::IsOverrideUsingPlatformId(bool CallFunc_IsLocalPlayer_ReturnValue, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, bool CallFunc_IsSamePlatformWithLocalPayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "IsOverrideUsingPlatformId");

	Params::WBP_PlatformPlayerName_C_IsOverrideUsingPlatformId Parms{};

	Parms.CallFunc_IsLocalPlayer_ReturnValue = CallFunc_IsLocalPlayer_ReturnValue;
	Parms.CallFunc_GetPlatformType_ReturnValue = CallFunc_GetPlatformType_ReturnValue;
	Parms.CallFunc_IsSamePlatformWithLocalPayer_ReturnValue = CallFunc_IsSamePlatformWithLocalPayer_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.IsSamePlatformWithLocalPayer
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERedirectsPlatform                      CallFunc_GetOwnerPlatform_OwnerPlatform                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERedirectsPlatform                      CallFunc_GetPlatformType_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_PlatformPlayerName_C::IsSamePlatformWithLocalPayer(ERedirectsPlatform CallFunc_GetOwnerPlatform_OwnerPlatform, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "IsSamePlatformWithLocalPayer");

	Params::WBP_PlatformPlayerName_C_IsSamePlatformWithLocalPayer Parms{};

	Parms.CallFunc_GetOwnerPlatform_OwnerPlatform = CallFunc_GetOwnerPlatform_OwnerPlatform;
	Parms.CallFunc_GetPlatformType_ReturnValue = CallFunc_GetPlatformType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.OnFailure_5E7966E34BB7A82AC4C791BB7228478B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            AccountId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlatformPlayerName_C::OnFailure_5E7966E34BB7A82AC4C791BB7228478B(struct FGuid& AccountId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "OnFailure_5E7966E34BB7A82AC4C791BB7228478B");

	Params::WBP_PlatformPlayerName_C_OnFailure_5E7966E34BB7A82AC4C791BB7228478B Parms{};

	Parms.AccountId = std::move(AccountId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.OnPresenceChangeHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPresence                        OldPresence                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPresence                        NewPresence                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    CallFunc_EqualEqual_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlatformPlayerName_C::OnPresenceChangeHandle(const struct FPresence& OldPresence, const struct FPresence& NewPresence, bool CallFunc_EqualEqual_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "OnPresenceChangeHandle");

	Params::WBP_PlatformPlayerName_C_OnPresenceChangeHandle Parms{};

	Parms.OldPresence = std::move(OldPresence);
	Parms.NewPresence = std::move(NewPresence);
	Parms.CallFunc_EqualEqual_ReturnValue = CallFunc_EqualEqual_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.OnSuccess_5E7966E34BB7A82AC4C791BB7228478B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            AccountId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOSSVAL_CharacterNameAndId>Names                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PlatformPlayerName_C::OnSuccess_5E7966E34BB7A82AC4C791BB7228478B(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "OnSuccess_5E7966E34BB7A82AC4C791BB7228478B");

	Params::WBP_PlatformPlayerName_C_OnSuccess_5E7966E34BB7A82AC4C791BB7228478B Parms{};

	Parms.AccountId = std::move(AccountId);
	Parms.Names = std::move(Names);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.OverrideNameWithPlatformName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPresenceManager*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsOnline_bOnline                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsOverrideUsingPlatformId_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPresence                        CallFunc_GetPresenceForUserId_ReturnValue              ()
// bool                                    CallFunc_IsEmpty_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlatformPlayerName_C::OverrideNameWithPlatformName(class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsOnline_bOnline, bool CallFunc_IsOverrideUsingPlatformId_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FPresence& CallFunc_GetPresenceForUserId_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "OverrideNameWithPlatformName");

	Params::WBP_PlatformPlayerName_C_OverrideNameWithPlatformName Parms{};

	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_IsOnline_bOnline = CallFunc_IsOnline_bOnline;
	Parms.CallFunc_IsOverrideUsingPlatformId_ReturnValue = CallFunc_IsOverrideUsingPlatformId_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetPresenceForUserId_ReturnValue = std::move(CallFunc_GetPresenceForUserId_ReturnValue);
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlatformPlayerName_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "PreConstruct");

	Params::WBP_PlatformPlayerName_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.SetDefaultPlatformNameStyled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UVALUI_TextBlockStyle>Styled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
// TMap<ERedirectsPlatform, TSoftObjectPtr<class UVALUI_TextBlockStyle>>K2Node_MakeMap_Map                                     (ConstParm)

void UWBP_PlatformPlayerName_C::SetDefaultPlatformNameStyled(TSoftObjectPtr<class UVALUI_TextBlockStyle> Styled, TMap<ERedirectsPlatform, TSoftObjectPtr<class UVALUI_TextBlockStyle>>& K2Node_MakeMap_Map)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "SetDefaultPlatformNameStyled");

	Params::WBP_PlatformPlayerName_C_SetDefaultPlatformNameStyled Parms{};

	Parms.Styled = Styled;
	Parms.K2Node_MakeMap_Map = std::move(K2Node_MakeMap_Map);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.SetPlatformNameStyled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UVALUI_TextBlockStyle>Styled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
// ERedirectsPlatform                      Platform                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<ERedirectsPlatform, TSoftObjectPtr<class UVALUI_TextBlockStyle>>K2Node_MakeMap_Map                                     (ConstParm)

void UWBP_PlatformPlayerName_C::SetPlatformNameStyled(TSoftObjectPtr<class UVALUI_TextBlockStyle> Styled, ERedirectsPlatform Platform, TMap<ERedirectsPlatform, TSoftObjectPtr<class UVALUI_TextBlockStyle>>& K2Node_MakeMap_Map)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "SetPlatformNameStyled");

	Params::WBP_PlatformPlayerName_C_SetPlatformNameStyled Parms{};

	Parms.Styled = Styled;
	Parms.Platform = Platform;
	Parms.K2Node_MakeMap_Map = std::move(K2Node_MakeMap_Map);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.SetPlayerName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PlatformPlayerName_C::SetPlayerName(class FText Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "SetPlayerName");

	Params::WBP_PlatformPlayerName_C_SetPlayerName Parms{};

	Parms.Param_Name = Param_Name;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.Update Platform Data
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 NetId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_PlatformPlayerName_C::Update_Platform_Data(const struct FUniqueNetIdRepl& NetId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "Update Platform Data");

	Params::WBP_PlatformPlayerName_C_Update_Platform_Data Parms{};

	Parms.NetId = std::move(NetId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.Update Platform Data And Assign Name
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 NetId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                             PlayerName                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PlatformPlayerName_C::Update_Platform_Data_And_Assign_Name(const struct FUniqueNetIdRepl& NetId, class FText PlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "Update Platform Data And Assign Name");

	Params::WBP_PlatformPlayerName_C_Update_Platform_Data_And_Assign_Name Parms{};

	Parms.NetId = std::move(NetId);
	Parms.PlayerName = PlayerName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlatformPlayerName.WBP_PlatformPlayerName_C.UpdatePlatformIconAppearance
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<ERedirectsPlatform, TSoftObjectPtr<class UTexture2D>>PlatformIconMap                                        (Edit, BlueprintVisible)
// bool                                    CallFunc_IsLocalPlayer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsSamePlatformWithLocalPayer_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<ERedirectsPlatform, TSoftObjectPtr<class UTexture2D>>K2Node_MakeVariable_MakeVariableOutput                 ()
// bool                                    CallFunc_IsOnline_bOnline                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERedirectsPlatform                      CallFunc_GetPlatformType_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        CallFunc_Map_Find_Value                                (HasGetValueTypeHash)
// bool                                    CallFunc_Map_Find_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlatformPlayerName_C::UpdatePlatformIconAppearance(const TMap<ERedirectsPlatform, TSoftObjectPtr<class UTexture2D>>& PlatformIconMap, bool CallFunc_IsLocalPlayer_ReturnValue, bool CallFunc_IsSamePlatformWithLocalPayer_ReturnValue, const TMap<ERedirectsPlatform, TSoftObjectPtr<class UTexture2D>>& K2Node_MakeVariable_MakeVariableOutput, bool CallFunc_IsOnline_bOnline, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerName_C", "UpdatePlatformIconAppearance");

	Params::WBP_PlatformPlayerName_C_UpdatePlatformIconAppearance Parms{};

	Parms.PlatformIconMap = std::move(PlatformIconMap);
	Parms.CallFunc_IsLocalPlayer_ReturnValue = CallFunc_IsLocalPlayer_ReturnValue;
	Parms.CallFunc_IsSamePlatformWithLocalPayer_ReturnValue = CallFunc_IsSamePlatformWithLocalPayer_ReturnValue;
	Parms.K2Node_MakeVariable_MakeVariableOutput = std::move(K2Node_MakeVariable_MakeVariableOutput);
	Parms.CallFunc_IsOnline_bOnline = CallFunc_IsOnline_bOnline;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetPlatformType_ReturnValue = CallFunc_GetPlatformType_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

