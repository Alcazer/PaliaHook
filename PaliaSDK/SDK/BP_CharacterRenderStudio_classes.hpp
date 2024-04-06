#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterRenderStudio

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "Palia_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharacterRenderStudio.BP_CharacterRenderStudio_C
// 0x0010 (0x0550 - 0x0540)
class ABP_CharacterRenderStudio_C final  : public AVAL_CharacterRenderStudio
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0540(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void InitializeValeriaCharacterForRenderStudio(class AValeriaCharacter* RenderStudioCharacter);
	void HandleOnCharacterRenderStateChanged(EVAL_CharacterRenderStudioState State);
	void ExecuteUbergraph_BP_CharacterRenderStudio(int32 EntryPoint, class AValeriaCharacter* K2Node_Event_RenderStudioCharacter, EVAL_CharacterRenderStudioState K2Node_Event_State, class ABP_ValeriaCharacter_C* K2Node_DynamicCast_AsBP_Valeria_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class AValeriaCharacter* CallFunc_GetCharacter_ReturnValue, float K2Node_Event_DeltaSeconds, class ABP_ValeriaCharacter_C* K2Node_DynamicCast_AsBP_Valeria_Character_1, bool K2Node_DynamicCast_bSuccess_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharacterRenderStudio_C">();
	}
	static class ABP_CharacterRenderStudio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CharacterRenderStudio_C>();
	}
};
static_assert(alignof(ABP_CharacterRenderStudio_C) == 0x000008, "Wrong alignment on ABP_CharacterRenderStudio_C");
static_assert(sizeof(ABP_CharacterRenderStudio_C) == 0x000550, "Wrong size on ABP_CharacterRenderStudio_C");
static_assert(offsetof(ABP_CharacterRenderStudio_C, UberGraphFrame) == 0x000540, "Member 'ABP_CharacterRenderStudio_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CharacterRenderStudio_C, DefaultSceneRoot) == 0x000548, "Member 'ABP_CharacterRenderStudio_C::DefaultSceneRoot' has a wrong offset!");

}

