#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FishingEncouragementEmoji

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FishingEncouragementEmoji.WBP_FishingEncouragementEmoji_C
// 0x0028 (0x02E8 - 0x02C0)
class UWBP_FishingEncouragementEmoji_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PlayEncouragement;                                 // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_EmoteIcon;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     Images;                                            // 0x02D8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

public:
	void Construct();
	void ExecuteUbergraph_WBP_FishingEncouragementEmoji(int32 EntryPoint, double CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item, float CallFunc_Delay_Duration_ImplicitCast);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FishingEncouragementEmoji_C">();
	}
	static class UWBP_FishingEncouragementEmoji_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FishingEncouragementEmoji_C>();
	}
};
static_assert(alignof(UWBP_FishingEncouragementEmoji_C) == 0x000008, "Wrong alignment on UWBP_FishingEncouragementEmoji_C");
static_assert(sizeof(UWBP_FishingEncouragementEmoji_C) == 0x0002E8, "Wrong size on UWBP_FishingEncouragementEmoji_C");
static_assert(offsetof(UWBP_FishingEncouragementEmoji_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_FishingEncouragementEmoji_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_FishingEncouragementEmoji_C, PlayEncouragement) == 0x0002C8, "Member 'UWBP_FishingEncouragementEmoji_C::PlayEncouragement' has a wrong offset!");
static_assert(offsetof(UWBP_FishingEncouragementEmoji_C, Image_EmoteIcon) == 0x0002D0, "Member 'UWBP_FishingEncouragementEmoji_C::Image_EmoteIcon' has a wrong offset!");
static_assert(offsetof(UWBP_FishingEncouragementEmoji_C, Images) == 0x0002D8, "Member 'UWBP_FishingEncouragementEmoji_C::Images' has a wrong offset!");

}
