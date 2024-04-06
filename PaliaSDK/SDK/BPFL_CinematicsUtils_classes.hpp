#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_CinematicsUtils

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPFL_CinematicsUtils.BPFL_CinematicsUtils_C
// 0x0000 (0x0028 - 0x0028)
class UBPFL_CinematicsUtils_C final  : public UBlueprintFunctionLibrary
{
public:
	static void GetActiveCinematicsConfig(class UObject* __WorldContext, class UCinematicSequenceConfig** NewParam, class UCinematicManagerComponent* CallFunc_GetCinematicsManager_CinematicsManager, bool CallFunc_GetCinematicsManager_bIsValid);
	static void GetCinematicsManager(class UObject* __WorldContext, class UCinematicManagerComponent** CinematicsManager, bool* bIsValid, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AValeriaPlayerController* K2Node_DynamicCast_AsValeria_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UCinematicManagerComponent* CallFunc_GetCinematicManager_ReturnValue);
	static void IsPlayerVisibleForLocalCinematicState(class AValeriaCharacter* ValeriaCharacter, class UObject* __WorldContext, bool* bVisible, bool bPlayerIsLocal, bool bPlayerIsVisible, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class UCinematicSequenceConfig* CallFunc_GetActiveCinematicsConfig_NewParam, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPFL_CinematicsUtils_C">();
	}
	static class UBPFL_CinematicsUtils_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPFL_CinematicsUtils_C>();
	}
};
static_assert(alignof(UBPFL_CinematicsUtils_C) == 0x000008, "Wrong alignment on UBPFL_CinematicsUtils_C");
static_assert(sizeof(UBPFL_CinematicsUtils_C) == 0x000028, "Wrong size on UBPFL_CinematicsUtils_C");

}

