#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cooking_Minigame_Chopping_Marker

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Cooking_Minigame_Chopping_Marker.WBP_Cooking_Minigame_Chopping_Marker_C
// 0x0050 (0x0310 - 0x02C0)
class UWBP_Cooking_Minigame_Chopping_Marker_C final  : public UUserWidget
{
public:
	class UImage*                                 Image_Hit;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Normal;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        StartTime;                                         // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Duration;                                          // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StartX;                                            // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DeltaX;                                            // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PositionY;                                         // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EndTime;                                           // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseFadeIn;                                         // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseFadeOut;                                        // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void _SetPosition(double In_X_Position, double In_Y_Position, double MarkerRightPosition, double MarkerLeftPosition, double StartFadeOut, double XMaxBounds, double FadeOutRangeDesired, double FadeInRange, double FullWidth, double HalfWidth, class UPanelWidget* CallFunc_GetParent_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1);
	void ForcePosition(double NormalizedTime, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void SetHit();
	void SetPositionByTime(double Time, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void Start(double In_StartTime, double In_TargetTime, double In_StartX, double In_TargetX, double In_EndTime, double In_PositionY, double Time, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Cooking_Minigame_Chopping_Marker_C">();
	}
	static class UWBP_Cooking_Minigame_Chopping_Marker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Cooking_Minigame_Chopping_Marker_C>();
	}
};
static_assert(alignof(UWBP_Cooking_Minigame_Chopping_Marker_C) == 0x000008, "Wrong alignment on UWBP_Cooking_Minigame_Chopping_Marker_C");
static_assert(sizeof(UWBP_Cooking_Minigame_Chopping_Marker_C) == 0x000310, "Wrong size on UWBP_Cooking_Minigame_Chopping_Marker_C");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_Marker_C, Image_Hit) == 0x0002C0, "Member 'UWBP_Cooking_Minigame_Chopping_Marker_C::Image_Hit' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_Marker_C, Image_Normal) == 0x0002C8, "Member 'UWBP_Cooking_Minigame_Chopping_Marker_C::Image_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_Marker_C, WidgetSwitcher) == 0x0002D0, "Member 'UWBP_Cooking_Minigame_Chopping_Marker_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_Marker_C, StartTime) == 0x0002D8, "Member 'UWBP_Cooking_Minigame_Chopping_Marker_C::StartTime' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_Marker_C, Duration) == 0x0002E0, "Member 'UWBP_Cooking_Minigame_Chopping_Marker_C::Duration' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_Marker_C, StartX) == 0x0002E8, "Member 'UWBP_Cooking_Minigame_Chopping_Marker_C::StartX' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_Marker_C, DeltaX) == 0x0002F0, "Member 'UWBP_Cooking_Minigame_Chopping_Marker_C::DeltaX' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_Marker_C, PositionY) == 0x0002F8, "Member 'UWBP_Cooking_Minigame_Chopping_Marker_C::PositionY' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_Marker_C, EndTime) == 0x000300, "Member 'UWBP_Cooking_Minigame_Chopping_Marker_C::EndTime' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_Marker_C, UseFadeIn) == 0x000308, "Member 'UWBP_Cooking_Minigame_Chopping_Marker_C::UseFadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigame_Chopping_Marker_C, UseFadeOut) == 0x000309, "Member 'UWBP_Cooking_Minigame_Chopping_Marker_C::UseFadeOut' has a wrong offset!");

}

