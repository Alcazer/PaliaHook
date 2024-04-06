#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlateHealthBar_Tree

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PlateHealthBar_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlateHealthBar_Tree.BP_PlateHealthBar_Tree_C
// 0x0010 (0x0970 - 0x0960)
class UBP_PlateHealthBar_Tree_C final  : public UBP_PlateHealthBar_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PlateHealthBar_Tree_C;           // 0x0960(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          ShouldHide;                                        // 0x0968(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldPlayFadeOut;                                 // 0x0969(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CheckAndSetVisibility();
	void ExecuteUbergraph_BP_PlateHealthBar_Tree(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class UVitalsComponent* CallFunc_GetComponentByClass_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWBP_HealthBar_C* K2Node_DynamicCast_AsWBP_Health_Bar, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_GetVitalStart_ReturnValue, int32 CallFunc_GetVital_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_GetIsVisibleToPlayer_IsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlateHealthBar_Tree_C">();
	}
	static class UBP_PlateHealthBar_Tree_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlateHealthBar_Tree_C>();
	}
};
static_assert(alignof(UBP_PlateHealthBar_Tree_C) == 0x000010, "Wrong alignment on UBP_PlateHealthBar_Tree_C");
static_assert(sizeof(UBP_PlateHealthBar_Tree_C) == 0x000970, "Wrong size on UBP_PlateHealthBar_Tree_C");
static_assert(offsetof(UBP_PlateHealthBar_Tree_C, UberGraphFrame_BP_PlateHealthBar_Tree_C) == 0x000960, "Member 'UBP_PlateHealthBar_Tree_C::UberGraphFrame_BP_PlateHealthBar_Tree_C' has a wrong offset!");
static_assert(offsetof(UBP_PlateHealthBar_Tree_C, ShouldHide) == 0x000968, "Member 'UBP_PlateHealthBar_Tree_C::ShouldHide' has a wrong offset!");
static_assert(offsetof(UBP_PlateHealthBar_Tree_C, ShouldPlayFadeOut) == 0x000969, "Member 'UBP_PlateHealthBar_Tree_C::ShouldPlayFadeOut' has a wrong offset!");

}

