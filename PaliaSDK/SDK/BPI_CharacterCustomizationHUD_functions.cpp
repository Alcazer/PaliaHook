#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CharacterCustomizationHUD

#include "Basic.hpp"

#include "BPI_CharacterCustomizationHUD_classes.hpp"
#include "BPI_CharacterCustomizationHUD_parameters.hpp"


namespace SDK
{

// Function BPI_CharacterCustomizationHUD.BPI_CharacterCustomizationHUD_C.InitCharacterCustomizationHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValeriaCharacter*                TargetCharacterActor                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVAL_CharacterCustomizationModeConfigModeConfig                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void IBPI_CharacterCustomizationHUD_C::InitCharacterCustomizationHUD(class AValeriaCharacter* TargetCharacterActor, const struct FVAL_CharacterCustomizationModeConfig& ModeConfig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharacterCustomizationHUD_C", "InitCharacterCustomizationHUD");

	Params::BPI_CharacterCustomizationHUD_C_InitCharacterCustomizationHUD Parms{};

	Parms.TargetCharacterActor = TargetCharacterActor;
	Parms.ModeConfig = std::move(ModeConfig);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CharacterCustomizationHUD.BPI_CharacterCustomizationHUD_C.InitCharacterRenderStudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVAL_CharacterRenderStudio*       CharacterRenderStudio                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_CharacterCustomizationHUD_C::InitCharacterRenderStudio(class AVAL_CharacterRenderStudio* CharacterRenderStudio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharacterCustomizationHUD_C", "InitCharacterRenderStudio");

	Params::BPI_CharacterCustomizationHUD_C_InitCharacterRenderStudio Parms{};

	Parms.CharacterRenderStudio = CharacterRenderStudio;

	UObject::ProcessEvent(Func, &Parms);
}

}

