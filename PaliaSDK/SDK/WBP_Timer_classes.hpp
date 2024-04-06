#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Timer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Timer.WBP_Timer_C
// 0x0020 (0x0298 - 0x0278)
class UWBP_Timer_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_TextBlock_Styled*                TimerText;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVAL_TimerComponent*                    TimerComponent;                                    // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVAL_TimerDefinition*                   TimerToDisplay;                                    // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Timer(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
	void HandleTimerHidden(int32 CallFunc_AkEventGlobal_ReturnValue, bool CallFunc_HasTimerStarted_ReturnValue);
	void HideTimer(ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update_Timer_to_Display(class UVAL_TimerComponent* Param_TimerComponent, class UVAL_TimerDefinition* TimerDefinition, int64 Hours, int64 Minutes, int64 Seconds);
	void UpdateText(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int64 CallFunc_GetSecondsOnTimer_ReturnValue, class FText CallFunc_FormatTime_HHMMSS_FormattedTime);
	void UpdateVisibility(bool CallFunc_HasTimerStarted_ReturnValue, int64 CallFunc_GetSecondsOnTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_Int64Int64_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Timer_C">();
	}
	static class UWBP_Timer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Timer_C>();
	}
};
static_assert(alignof(UWBP_Timer_C) == 0x000008, "Wrong alignment on UWBP_Timer_C");
static_assert(sizeof(UWBP_Timer_C) == 0x000298, "Wrong size on UWBP_Timer_C");
static_assert(offsetof(UWBP_Timer_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Timer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Timer_C, TimerText) == 0x000280, "Member 'UWBP_Timer_C::TimerText' has a wrong offset!");
static_assert(offsetof(UWBP_Timer_C, TimerComponent) == 0x000288, "Member 'UWBP_Timer_C::TimerComponent' has a wrong offset!");
static_assert(offsetof(UWBP_Timer_C, TimerToDisplay) == 0x000290, "Member 'UWBP_Timer_C::TimerToDisplay' has a wrong offset!");

}

