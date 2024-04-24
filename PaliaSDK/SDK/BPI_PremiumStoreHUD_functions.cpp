#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_PremiumStoreHUD

#include "Basic.hpp"

#include "BPI_PremiumStoreHUD_classes.hpp"
#include "BPI_PremiumStoreHUD_parameters.hpp"


namespace SDK
{

// Function BPI_PremiumStoreHUD.BPI_PremiumStoreHUD_C.InitCharacterRenderStudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVAL_CharacterRenderStudio*       RenderStudio                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_PremiumStoreHUD_C::InitCharacterRenderStudio(class AVAL_CharacterRenderStudio* RenderStudio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_PremiumStoreHUD_C", "InitCharacterRenderStudio");

	Params::BPI_PremiumStoreHUD_C_InitCharacterRenderStudio Parms{};

	Parms.RenderStudio = RenderStudio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_PremiumStoreHUD.BPI_PremiumStoreHUD_C.InitPreOpenHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValeriaCharacter*                TargetCharacterActor                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVAL_OpenStorePayload            OpenStorePayload                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void IBPI_PremiumStoreHUD_C::InitPreOpenHUD(class AValeriaCharacter* TargetCharacterActor, const struct FVAL_OpenStorePayload& OpenStorePayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_PremiumStoreHUD_C", "InitPreOpenHUD");

	Params::BPI_PremiumStoreHUD_C_InitPreOpenHUD Parms{};

	Parms.TargetCharacterActor = TargetCharacterActor;
	Parms.OpenStorePayload = std::move(OpenStorePayload);

	UObject::ProcessEvent(Func, &Parms);
}

}

