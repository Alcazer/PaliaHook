#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BuffSlotTooltip

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BuffSlotTooltip.WBP_BuffSlotTooltip_C
// 0x0018 (0x0290 - 0x0278)
class UWBP_BuffSlotTooltip_C final  : public UUserWidget
{
public:
	class UVALUI_TextBlock_Styled*                TextBlock_Styled_Description;                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_Styled_Title;                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CountdownTimerTextOnly_C*          TimeRemainTextBox;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetBuffActivationForTooltip(const struct FBuffActivation& BuffActivation, const struct FInt64Split& CallFunc_CastInt64ToInt64Split_ReturnValue, const struct FBuffConfig& CallFunc_GetBuffConfigById_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BuffSlotTooltip_C">();
	}
	static class UWBP_BuffSlotTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BuffSlotTooltip_C>();
	}
};
static_assert(alignof(UWBP_BuffSlotTooltip_C) == 0x000008, "Wrong alignment on UWBP_BuffSlotTooltip_C");
static_assert(sizeof(UWBP_BuffSlotTooltip_C) == 0x000290, "Wrong size on UWBP_BuffSlotTooltip_C");
static_assert(offsetof(UWBP_BuffSlotTooltip_C, TextBlock_Styled_Description) == 0x000278, "Member 'UWBP_BuffSlotTooltip_C::TextBlock_Styled_Description' has a wrong offset!");
static_assert(offsetof(UWBP_BuffSlotTooltip_C, TextBlock_Styled_Title) == 0x000280, "Member 'UWBP_BuffSlotTooltip_C::TextBlock_Styled_Title' has a wrong offset!");
static_assert(offsetof(UWBP_BuffSlotTooltip_C, TimeRemainTextBox) == 0x000288, "Member 'UWBP_BuffSlotTooltip_C::TimeRemainTextBox' has a wrong offset!");

}

