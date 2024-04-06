#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterPreview

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharacterPreview.BP_CharacterPreview_C
// 0x0020 (0x0438 - 0x0418)
class ABP_CharacterPreview_C final  : public AVAL_CharacterPreviewer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0418(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                    BackSpotLight;                                     // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    MainSpotLight;                                     // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    FillSpotLight;                                     // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void Stubbed_ADFF367E48A6AD181DA7749345B5AC98();
	void SetRotation(const struct FRotator& DeltaRotation, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
	void SetCharacterMetadata(const struct FVALDTOS_MetaCharacterFormat& NewMetaCharacterData);
	void Interrupted_ADFF367E48A6AD181DA7749345B5AC98();
	void GetValeriaCharacter(class AValeriaCharacter** Character, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess);
	void Failed_ADFF367E48A6AD181DA7749345B5AC98();
	void ExecuteUbergraph_BP_CharacterPreview(int32 EntryPoint, class AValeriaCharacter* CallFunc_GetValeriaCharacter_Character, class UVAL_CharacterCustomizationComponent* CallFunc_GetCharacterCustomizationComponent_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, const struct FVALDTOS_MetaCharacterFormat& K2Node_CustomEvent_NewMetaCharacterData, const struct FVAL_CharacterCustomizationLoadout& CallFunc_PersistenceDTOsToLoadout_ReturnValue, class UVAL_ApplyCustomizationsToActorProxy* CallFunc_ApplyCustomizationsToActor_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue);
	void Completed_ADFF367E48A6AD181DA7749345B5AC98();

	class AActor* GetPreviewCharacter() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharacterPreview_C">();
	}
	static class ABP_CharacterPreview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CharacterPreview_C>();
	}
};
static_assert(alignof(ABP_CharacterPreview_C) == 0x000008, "Wrong alignment on ABP_CharacterPreview_C");
static_assert(sizeof(ABP_CharacterPreview_C) == 0x000438, "Wrong size on ABP_CharacterPreview_C");
static_assert(offsetof(ABP_CharacterPreview_C, UberGraphFrame) == 0x000418, "Member 'ABP_CharacterPreview_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPreview_C, BackSpotLight) == 0x000420, "Member 'ABP_CharacterPreview_C::BackSpotLight' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPreview_C, MainSpotLight) == 0x000428, "Member 'ABP_CharacterPreview_C::MainSpotLight' has a wrong offset!");
static_assert(offsetof(ABP_CharacterPreview_C, FillSpotLight) == 0x000430, "Member 'ABP_CharacterPreview_C::FillSpotLight' has a wrong offset!");

}

