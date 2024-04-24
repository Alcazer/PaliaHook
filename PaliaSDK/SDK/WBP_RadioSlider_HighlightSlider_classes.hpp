#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RadioSlider_HighlightSlider

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RadioSlider_HighlightSlider.WBP_RadioSlider_HighlightSlider_C
// 0x0010 (0x02D0 - 0x02C0)
class UWBP_RadioSlider_HighlightSlider_C final  : public UUserWidget
{
public:
	class UImage*                                 Image_Background;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SBox_SliderSize;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetWidth(double Width, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RadioSlider_HighlightSlider_C">();
	}
	static class UWBP_RadioSlider_HighlightSlider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RadioSlider_HighlightSlider_C>();
	}
};
static_assert(alignof(UWBP_RadioSlider_HighlightSlider_C) == 0x000008, "Wrong alignment on UWBP_RadioSlider_HighlightSlider_C");
static_assert(sizeof(UWBP_RadioSlider_HighlightSlider_C) == 0x0002D0, "Wrong size on UWBP_RadioSlider_HighlightSlider_C");
static_assert(offsetof(UWBP_RadioSlider_HighlightSlider_C, Image_Background) == 0x0002C0, "Member 'UWBP_RadioSlider_HighlightSlider_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UWBP_RadioSlider_HighlightSlider_C, SBox_SliderSize) == 0x0002C8, "Member 'UWBP_RadioSlider_HighlightSlider_C::SBox_SliderSize' has a wrong offset!");

}

