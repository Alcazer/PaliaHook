#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_CinematicsUtils

#include "Basic.hpp"

#include "BPFL_CinematicsUtils_classes.hpp"
#include "BPFL_CinematicsUtils_parameters.hpp"


namespace SDK
{

// Function BPFL_CinematicsUtils.BPFL_CinematicsUtils_C.GetActiveCinematicsConfig
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCinematicSequenceConfig*         NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCinematicManagerComponent*       CallFunc_GetCinematicsManager_CinematicsManager        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetCinematicsManager_bIsValid                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_CinematicsUtils_C::GetActiveCinematicsConfig(class UObject* __WorldContext, class UCinematicSequenceConfig** NewParam, class UCinematicManagerComponent* CallFunc_GetCinematicsManager_CinematicsManager, bool CallFunc_GetCinematicsManager_bIsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_CinematicsUtils_C", "GetActiveCinematicsConfig");

	Params::BPFL_CinematicsUtils_C_GetActiveCinematicsConfig Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCinematicsManager_CinematicsManager = CallFunc_GetCinematicsManager_CinematicsManager;
	Parms.CallFunc_GetCinematicsManager_bIsValid = CallFunc_GetCinematicsManager_bIsValid;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BPFL_CinematicsUtils.BPFL_CinematicsUtils_C.GetCinematicsManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCinematicManagerComponent*       CinematicsManager                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetPlayerController_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaPlayerController*         K2Node_DynamicCast_AsValeria_Player_Controller         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCinematicManagerComponent*       CallFunc_GetCinematicManager_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPFL_CinematicsUtils_C::GetCinematicsManager(class UObject* __WorldContext, class UCinematicManagerComponent** CinematicsManager, bool* bIsValid, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AValeriaPlayerController* K2Node_DynamicCast_AsValeria_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UCinematicManagerComponent* CallFunc_GetCinematicManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_CinematicsUtils_C", "GetCinematicsManager");

	Params::BPFL_CinematicsUtils_C_GetCinematicsManager Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Player_Controller = K2Node_DynamicCast_AsValeria_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCinematicManager_ReturnValue = CallFunc_GetCinematicManager_ReturnValue;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (CinematicsManager != nullptr)
		*CinematicsManager = Parms.CinematicsManager;

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;
}


// Function BPFL_CinematicsUtils.BPFL_CinematicsUtils_C.IsPlayerVisibleForLocalCinematicState
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValeriaCharacter*                ValeriaCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bVisible                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bPlayerIsLocal                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bPlayerIsVisible                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsLocallyControlled_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCinematicSequenceConfig*         CallFunc_GetActiveCinematicsConfig_NewParam            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_CinematicsUtils_C::IsPlayerVisibleForLocalCinematicState(class AValeriaCharacter* ValeriaCharacter, class UObject* __WorldContext, bool* bVisible, bool bPlayerIsLocal, bool bPlayerIsVisible, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class UCinematicSequenceConfig* CallFunc_GetActiveCinematicsConfig_NewParam, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_CinematicsUtils_C", "IsPlayerVisibleForLocalCinematicState");

	Params::BPFL_CinematicsUtils_C_IsPlayerVisibleForLocalCinematicState Parms{};

	Parms.ValeriaCharacter = ValeriaCharacter;
	Parms.__WorldContext = __WorldContext;
	Parms.bPlayerIsLocal = bPlayerIsLocal;
	Parms.bPlayerIsVisible = bPlayerIsVisible;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetActiveCinematicsConfig_NewParam = CallFunc_GetActiveCinematicsConfig_NewParam;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bVisible != nullptr)
		*bVisible = Parms.bVisible;
}

}

