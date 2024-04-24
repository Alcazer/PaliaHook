#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cooking_Minigame_Chopping_ProgressMarker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Cooking_Minigame_Chopping_ProgressMarker.WBP_Cooking_Minigame_Chopping_ProgressMarker_C
// 0x0028 (0x02E8 - 0x02C0)
class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SuccessfulHitAnimation;                            // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Success;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Unfullfilled;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ProgressSwitcher;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Cooking_Minigame_Chopping_ProgressMarker(int32 EntryPoint);
	void PlaySuccessfulHitAnimationFromDelay(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void Reset();
	void SuccessfulHit(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Cooking_Minigame_Chopping_ProgressMarker_C">();
	}
	static class UWBP_Cooking_Minigame_Chopping_ProgressMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Cooking_Minigame_Chopping_ProgressMarker_C>();
	}
};
static_assert(alignof(UWBP_Cooking_Minigame_Chopping_ProgressMarker_C) == 0x000008, "Wrong alignment on UWBP_Cooking_Minigame_Chopping_ProgressMarker_C");
static_assert(sizeof(UWBP_Cooking_Minigame_Chopping_ProgressMarker_C) == 0x0002E8, "Wrong size on UWBP_Cooking_Minigame_Chopping_ProgressMarker_C");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_ProgressMarker_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_Cooking_Minigame_Chopping_ProgressMarker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_ProgressMarker_C, SuccessfulHitAnimation) == 0x0002C8, "Member 'UWBP_Cooking_Minigame_Chopping_ProgressMarker_C::SuccessfulHitAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_ProgressMarker_C, Image_Success) == 0x0002D0, "Member 'UWBP_Cooking_Minigame_Chopping_ProgressMarker_C::Image_Success' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_ProgressMarker_C, Image_Unfullfilled) == 0x0002D8, "Member 'UWBP_Cooking_Minigame_Chopping_ProgressMarker_C::Image_Unfullfilled' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_ProgressMarker_C, ProgressSwitcher) == 0x0002E0, "Member 'UWBP_Cooking_Minigame_Chopping_ProgressMarker_C::ProgressSwitcher' has a wrong offset!");

}
