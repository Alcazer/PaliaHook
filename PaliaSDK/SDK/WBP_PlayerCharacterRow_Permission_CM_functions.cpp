#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerCharacterRow_Permission_CM

#include "Basic.hpp"

#include "WBP_PlayerCharacterRow_Permission_CM_classes.hpp"
#include "WBP_PlayerCharacterRow_Permission_CM_parameters.hpp"


namespace SDK
{

// Function WBP_PlayerCharacterRow_Permission_CM.WBP_PlayerCharacterRow_Permission_CM_C.ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            K2Node_CustomEvent_CharacterId                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOSSVAL_CharacterNameAndId       K2Node_CustomEvent_FetchedCharacter                    (ConstParm)
// TDelegate<void(struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& FetchedCharacter)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FOSSVAL_CharacterNameAndId       Temp_struct_Variable                                   ()
// struct FGuid                            Temp_struct_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_PIEGetPlayerNameFromCharacterGuid_ReturnValue ()
// bool                                    CallFunc_TextIsEmpty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()
// class UPresenceManager*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UQueryManager*                    CallFunc_GetGameInstanceSubsystem_ReturnValue          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UQueryManager*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_FindValeriaCharacterByPlayerGuid_ReturnValue  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_FindValeriaCharacterByPlayerGuid_ReturnValue_1(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EHousingPermissionLevel                 CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHousingOwnershipActor*           CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue  (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EHousingPermissionLevel                 CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHousingOwnershipActor*           CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue_1(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Permission_Enum_To_Text_Text                  ()
// class FText                             CallFunc_Permission_Enum_To_Text_Text_1                ()
// struct FUniqueNetIdRepl                 K2Node_CustomEvent_PlayerNetId                         (HasGetValueTypeHash)
// struct FGuid                            K2Node_CustomEvent_CharacterId_1                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPresence                        CallFunc_GetPresenceForUserId_ReturnValue              ()
// class UOSSVAL_GetCharacterNameByCharacterIdProxy*CallFunc_GetCharacterNameByCharacterId_ReturnValue     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(struct FGuid& CharacterId)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerCharacterRow_Permission_CM_C::ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM(int32 EntryPoint, struct FGuid& K2Node_CustomEvent_CharacterId, struct FOSSVAL_CharacterNameAndId& K2Node_CustomEvent_FetchedCharacter, TDelegate<void(struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& FetchedCharacter)> K2Node_CreateDelegate_OutputDelegate, const struct FOSSVAL_CharacterNameAndId& Temp_struct_Variable, const struct FGuid& Temp_struct_Variable_1, class FText CallFunc_PIEGetPlayerNameFromCharacterGuid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UQueryManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UQueryManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class AValeriaCharacter* CallFunc_FindValeriaCharacterByPlayerGuid_ReturnValue, class AValeriaCharacter* CallFunc_FindValeriaCharacterByPlayerGuid_ReturnValue_1, EHousingPermissionLevel CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel, class AHousingOwnershipActor* CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue, EHousingPermissionLevel CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel_1, class AHousingOwnershipActor* CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue_1, class FText CallFunc_Permission_Enum_To_Text_Text, class FText CallFunc_Permission_Enum_To_Text_Text_1, const struct FUniqueNetIdRepl& K2Node_CustomEvent_PlayerNetId, struct FGuid& K2Node_CustomEvent_CharacterId_1, const struct FPresence& CallFunc_GetPresenceForUserId_ReturnValue, class UOSSVAL_GetCharacterNameByCharacterIdProxy* CallFunc_GetCharacterNameByCharacterId_ReturnValue, TDelegate<void(struct FGuid& CharacterId)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Permission_CM_C", "ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM");

	Params::WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_CharacterId = std::move(K2Node_CustomEvent_CharacterId);
	Parms.K2Node_CustomEvent_FetchedCharacter = std::move(K2Node_CustomEvent_FetchedCharacter);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.Temp_struct_Variable_1 = std::move(Temp_struct_Variable_1);
	Parms.CallFunc_PIEGetPlayerNameFromCharacterGuid_ReturnValue = CallFunc_PIEGetPlayerNameFromCharacterGuid_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_FindValeriaCharacterByPlayerGuid_ReturnValue = CallFunc_FindValeriaCharacterByPlayerGuid_ReturnValue;
	Parms.CallFunc_FindValeriaCharacterByPlayerGuid_ReturnValue_1 = CallFunc_FindValeriaCharacterByPlayerGuid_ReturnValue_1;
	Parms.CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel = CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel;
	Parms.CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue = CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue;
	Parms.CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel_1 = CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel_1;
	Parms.CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue_1 = CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue_1;
	Parms.CallFunc_Permission_Enum_To_Text_Text = CallFunc_Permission_Enum_To_Text_Text;
	Parms.CallFunc_Permission_Enum_To_Text_Text_1 = CallFunc_Permission_Enum_To_Text_Text_1;
	Parms.K2Node_CustomEvent_PlayerNetId = std::move(K2Node_CustomEvent_PlayerNetId);
	Parms.K2Node_CustomEvent_CharacterId_1 = std::move(K2Node_CustomEvent_CharacterId_1);
	Parms.CallFunc_GetPresenceForUserId_ReturnValue = std::move(CallFunc_GetPresenceForUserId_ReturnValue);
	Parms.CallFunc_GetCharacterNameByCharacterId_ReturnValue = CallFunc_GetCharacterNameByCharacterId_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerCharacterRow_Permission_CM.WBP_PlayerCharacterRow_Permission_CM_C.OnFailure_D0CAC5EB4B224CBA08A4F2A01D4F26FE
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            CharacterId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerCharacterRow_Permission_CM_C::OnFailure_D0CAC5EB4B224CBA08A4F2A01D4F26FE(struct FGuid& CharacterId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Permission_CM_C", "OnFailure_D0CAC5EB4B224CBA08A4F2A01D4F26FE");

	Params::WBP_PlayerCharacterRow_Permission_CM_C_OnFailure_D0CAC5EB4B224CBA08A4F2A01D4F26FE Parms{};

	Parms.CharacterId = std::move(CharacterId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerCharacterRow_Permission_CM.WBP_PlayerCharacterRow_Permission_CM_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)
// struct FEventReply                      CallFunc_Handled_ReturnValue                           ()

struct FEventReply UWBP_PlayerCharacterRow_Permission_CM_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Permission_CM_C", "OnFocusReceived");

	Params::WBP_PlayerCharacterRow_Permission_CM_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);
	Parms.CallFunc_Handled_ReturnValue = std::move(CallFunc_Handled_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PlayerCharacterRow_Permission_CM.WBP_PlayerCharacterRow_Permission_CM_C.OnSuccess_D0CAC5EB4B224CBA08A4F2A01D4F26FE
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            CharacterId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOSSVAL_CharacterNameAndId       FetchedCharacter                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PlayerCharacterRow_Permission_CM_C::OnSuccess_D0CAC5EB4B224CBA08A4F2A01D4F26FE(struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& FetchedCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Permission_CM_C", "OnSuccess_D0CAC5EB4B224CBA08A4F2A01D4F26FE");

	Params::WBP_PlayerCharacterRow_Permission_CM_C_OnSuccess_D0CAC5EB4B224CBA08A4F2A01D4F26FE Parms{};

	Parms.CharacterId = std::move(CharacterId);
	Parms.FetchedCharacter = std::move(FetchedCharacter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerCharacterRow_Permission_CM.WBP_PlayerCharacterRow_Permission_CM_C.UpdatePlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 PlayerNetId                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_PlayerCharacterRow_Permission_CM_C::UpdatePlayer(const struct FUniqueNetIdRepl& PlayerNetId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerCharacterRow_Permission_CM_C", "UpdatePlayer");

	Params::WBP_PlayerCharacterRow_Permission_CM_C_UpdatePlayer Parms{};

	Parms.PlayerNetId = std::move(PlayerNetId);

	UObject::ProcessEvent(Func, &Parms);
}

}

