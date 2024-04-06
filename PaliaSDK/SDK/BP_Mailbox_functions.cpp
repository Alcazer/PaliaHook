#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Mailbox

#include "Basic.hpp"

#include "BP_Mailbox_classes.hpp"
#include "BP_Mailbox_parameters.hpp"


namespace SDK
{

// Function BP_Mailbox.BP_Mailbox_C.ClearListenForNewMail
// (BlueprintCallable, BlueprintEvent)

void ABP_Mailbox_C::ClearListenForNewMail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "ClearListenForNewMail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Mailbox.BP_Mailbox_C.client_setGotMail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                CallFunc_GetPlayerControllerFromID_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaPlayerController*         K2Node_DynamicCast_AsValeria_Player_Controller         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EHousingPermissionLevel                 CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHousingOwnershipActor*           CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue  (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mailbox_C::Client_setGotMail(class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, class AValeriaPlayerController* K2Node_DynamicCast_AsValeria_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, EHousingPermissionLevel CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel, class AHousingOwnershipActor* CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "client_setGotMail");

	Params::BP_Mailbox_C_Client_setGotMail Parms{};

	Parms.CallFunc_GetPlayerControllerFromID_ReturnValue = CallFunc_GetPlayerControllerFromID_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Player_Controller = K2Node_DynamicCast_AsValeria_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel = CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel;
	Parms.CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue = CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mailbox.BP_Mailbox_C.client_setNoMail
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Mailbox_C::Client_setNoMail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "client_setNoMail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Mailbox.BP_Mailbox_C.ExecuteUbergraph_BP_Mailbox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaPlayerController*         K2Node_Event_player                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FServerUseEventParams            K2Node_Event_params                                    (NoDestructor)
// TDelegate<void(class UVillagerMailInboxComponent* Inbox)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                K2Node_CustomEvent_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVillagerMailInboxComponent*      K2Node_CustomEvent_inbox                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_HasNewMail_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVillagerMailInboxComponent*      CallFunc_GetVillagerMailInbox_ReturnValue              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVillagerMailInboxComponent*      CallFunc_GetVillagerMailInbox_ReturnValue_1            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Mailbox_C::ExecuteUbergraph_BP_Mailbox(int32 EntryPoint, class AValeriaPlayerController* K2Node_Event_player, const struct FServerUseEventParams& K2Node_Event_params, TDelegate<void(class UVillagerMailInboxComponent* Inbox)> K2Node_CreateDelegate_OutputDelegate, class AValeriaCharacter* K2Node_CustomEvent_Character, class UVillagerMailInboxComponent* K2Node_CustomEvent_inbox, bool CallFunc_HasNewMail_ReturnValue, class UVillagerMailInboxComponent* CallFunc_GetVillagerMailInbox_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UVillagerMailInboxComponent* CallFunc_GetVillagerMailInbox_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "ExecuteUbergraph_BP_Mailbox");

	Params::BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_player = K2Node_Event_player;
	Parms.K2Node_Event_params = std::move(K2Node_Event_params);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.K2Node_CustomEvent_inbox = K2Node_CustomEvent_inbox;
	Parms.CallFunc_HasNewMail_ReturnValue = CallFunc_HasNewMail_ReturnValue;
	Parms.CallFunc_GetVillagerMailInbox_ReturnValue = CallFunc_GetVillagerMailInbox_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVillagerMailInbox_ReturnValue_1 = CallFunc_GetVillagerMailInbox_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mailbox.BP_Mailbox_C.ListenForNewMail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValeriaCharacter*                Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Mailbox_C::ListenForNewMail(class AValeriaCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "ListenForNewMail");

	Params::BP_Mailbox_C_ListenForNewMail Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mailbox.BP_Mailbox_C.OnClientInteract
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractableComponent*           Param_Interactable                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaPlayerController*         Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractEventParams             Params_0                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FUseEventResult                  ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)
// struct FUseEventResult                  CallFunc_UseEventResult_Handled_ReturnValue            (NoDestructor)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_Subsystem_GameplayUIBridge*  CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IVAL_GameplayUIBridgeInterface>CallFunc_GetUIInterface_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FUseEventResult                  CallFunc_UseEventResult_Unhandled_ReturnValue          (NoDestructor)

struct FUseEventResult ABP_Mailbox_C::OnClientInteract(class UInteractableComponent* Param_Interactable, class AValeriaPlayerController* Player, const struct FInteractEventParams& Params_0, const struct FUseEventResult& CallFunc_UseEventResult_Handled_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UVAL_Subsystem_GameplayUIBridge* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, TScriptInterface<class IVAL_GameplayUIBridgeInterface> CallFunc_GetUIInterface_ReturnValue, const struct FUseEventResult& CallFunc_UseEventResult_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "OnClientInteract");

	Params::BP_Mailbox_C_OnClientInteract Parms{};

	Parms.Param_Interactable = Param_Interactable;
	Parms.Player = Player;
	Parms.Params_0 = std::move(Params_0);
	Parms.CallFunc_UseEventResult_Handled_ReturnValue = std::move(CallFunc_UseEventResult_Handled_ReturnValue);
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_GetUIInterface_ReturnValue = CallFunc_GetUIInterface_ReturnValue;
	Parms.CallFunc_UseEventResult_Unhandled_ReturnValue = std::move(CallFunc_UseEventResult_Unhandled_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Mailbox.BP_Mailbox_C.OnClientUsedEquippedOnMe
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValeriaPlayerController*         Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUseEventParams                  Params_0                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FUseEventResult                  ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)
// struct FUseEventResult                  K2Node_MakeStruct_UseEventResult                       (NoDestructor)

struct FUseEventResult ABP_Mailbox_C::OnClientUsedEquippedOnMe(class AValeriaPlayerController* Player, const struct FUseEventParams& Params_0, const struct FUseEventResult& K2Node_MakeStruct_UseEventResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "OnClientUsedEquippedOnMe");

	Params::BP_Mailbox_C_OnClientUsedEquippedOnMe Parms{};

	Parms.Player = Player;
	Parms.Params_0 = std::move(Params_0);
	Parms.K2Node_MakeStruct_UseEventResult = std::move(K2Node_MakeStruct_UseEventResult);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Mailbox.BP_Mailbox_C.OnMailChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVillagerMailInboxComponent*      Inbox                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Mailbox_C::OnMailChanged(class UVillagerMailInboxComponent* Inbox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "OnMailChanged");

	Params::BP_Mailbox_C_OnMailChanged Parms{};

	Parms.Inbox = Inbox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mailbox.BP_Mailbox_C.OnRep_RepHasMail
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                     CallFunc_K2_SetTimer_ReturnValue                       (NoDestructor, HasGetValueTypeHash)

void ABP_Mailbox_C::OnRep_RepHasMail(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "OnRep_RepHasMail");

	Params::BP_Mailbox_C_OnRep_RepHasMail Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = std::move(CallFunc_K2_SetTimer_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mailbox.BP_Mailbox_C.OnServerInteract
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractableComponent*           Param_Interactable                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractEventParams             EventParams                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FServerUseEventResult            ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)

struct FServerUseEventResult ABP_Mailbox_C::OnServerInteract(class UInteractableComponent* Param_Interactable, class AValeriaCharacter* Character, const struct FInteractEventParams& EventParams)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "OnServerInteract");

	Params::BP_Mailbox_C_OnServerInteract Parms{};

	Parms.Param_Interactable = Param_Interactable;
	Parms.Character = Character;
	Parms.EventParams = std::move(EventParams);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Mailbox.BP_Mailbox_C.OnServerUsedEquippedOnMe
// (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValeriaPlayerController*         Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FServerUseEventParams            Params_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_Mailbox_C::OnServerUsedEquippedOnMe(class AValeriaPlayerController* Player, const struct FServerUseEventParams& Params_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "OnServerUsedEquippedOnMe");

	Params::BP_Mailbox_C_OnServerUsedEquippedOnMe Parms{};

	Parms.Player = Player;
	Parms.Params_0 = std::move(Params_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mailbox.BP_Mailbox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mailbox_C::UserConstructionScript(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "UserConstructionScript");

	Params::BP_Mailbox_C_UserConstructionScript Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mailbox.BP_Mailbox_C.GetEventIndexForInputAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AValeriaCharacter*                Character                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UInputAction>      InputAction                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// EInteractEventIndex                     OutEventIndex                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Mailbox_C::GetEventIndexForInputAction(class AValeriaCharacter* Character, TSoftObjectPtr<class UInputAction>& InputAction, EInteractEventIndex* OutEventIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "GetEventIndexForInputAction");

	Params::BP_Mailbox_C_GetEventIndexForInputAction Parms{};

	Parms.Character = Character;
	Parms.InputAction = InputAction;

	UObject::ProcessEvent(Func, &Parms);

	if (OutEventIndex != nullptr)
		*OutEventIndex = Parms.OutEventIndex;

	return Parms.ReturnValue;
}


// Function BP_Mailbox.BP_Mailbox_C.GetInputActionForEventIndex
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AValeriaCharacter*                Character                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EInteractEventIndex                     EventIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UInputAction>      ReturnValue                                            (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash)

TSoftObjectPtr<class UInputAction> ABP_Mailbox_C::GetInputActionForEventIndex(class AValeriaCharacter* Character, EInteractEventIndex EventIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "GetInputActionForEventIndex");

	Params::BP_Mailbox_C_GetInputActionForEventIndex Parms{};

	Parms.Character = Character;
	Parms.EventIndex = EventIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Mailbox.BP_Mailbox_C.GetText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AValeriaCharacter*                Character                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EInteractEventIndex                     EventIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGetTextParams                   Params_0                                               (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FShopItemAdditionalCost>  K2Node_MakeArray_Array                                 (ReferenceParm)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGetTextParams                   K2Node_MakeStruct_GetTextParams                        ()

bool ABP_Mailbox_C::GetText(class AValeriaCharacter* Character, EInteractEventIndex EventIndex, struct FGetTextParams* Params_0, TArray<struct FShopItemAdditionalCost>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGetTextParams& K2Node_MakeStruct_GetTextParams) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "GetText");

	Params::BP_Mailbox_C_GetText Parms{};

	Parms.Character = Character;
	Parms.EventIndex = EventIndex;
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeStruct_GetTextParams = std::move(K2Node_MakeStruct_GetTextParams);

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (Params_0 != nullptr)
		*Params_0 = std::move(Parms.Params_0);

	return Parms.ReturnValue;
}


// Function BP_Mailbox.BP_Mailbox_C.GetUseableIMC
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AValeriaCharacter*                Character                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EInteractEventIndex                     InteractIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputMappingPriorityData        OutMappingData                                         (Parm, OutParm)
// struct FModifyContextOptions            OutOptions                                             (Parm, OutParm, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Mailbox_C::GetUseableIMC(class AValeriaCharacter* Character, EInteractEventIndex InteractIndex, struct FInputMappingPriorityData* OutMappingData, struct FModifyContextOptions* OutOptions) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "GetUseableIMC");

	Params::BP_Mailbox_C_GetUseableIMC Parms{};

	Parms.Character = Character;
	Parms.InteractIndex = InteractIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (OutMappingData != nullptr)
		*OutMappingData = std::move(Parms.OutMappingData);

	if (OutOptions != nullptr)
		*OutOptions = std::move(Parms.OutOptions);

	return Parms.ReturnValue;
}


// Function BP_Mailbox.BP_Mailbox_C.InteractPriority
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AValeriaCharacter*                Character                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_Mailbox_C::InteractPriority(class AValeriaCharacter* Character) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "InteractPriority");

	Params::BP_Mailbox_C_InteractPriority Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Mailbox.BP_Mailbox_C.IsInteractable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AValeriaCharacter*                Character                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractEventParams             EventParams                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EHousingPermissionLevel                 Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EHousingPermissionLevel                 CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHousingOwnershipActor*           CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue  (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Mailbox_C::IsInteractable(class AValeriaCharacter* Character, const struct FInteractEventParams& EventParams, EHousingPermissionLevel Temp_byte_Variable, EHousingPermissionLevel CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel, class AHousingOwnershipActor* CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mailbox_C", "IsInteractable");

	Params::BP_Mailbox_C_IsInteractable Parms{};

	Parms.Character = Character;
	Parms.EventParams = std::move(EventParams);
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel = CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel;
	Parms.CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue = CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

