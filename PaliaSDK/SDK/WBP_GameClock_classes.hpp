#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GameClock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GameClock.WBP_GameClock_C
// 0x01B0 (0x0470 - 0x02C0)
class UWBP_GameClock_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewHousingVisitAnim;                               // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NewMailAnim;                                       // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVALUI_Image_Styled*                    Backer_Opacity;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                ClockTimePeriod;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                ClockTimeText;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DayClockDial;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                DebugWeatherStateText;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Decor;                                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Decor_1;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_HousingVillagerVisit_Icon;                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_MailIcon;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor_Popin_C*                    MenuAnchor_Popin_HousingVillagerVisit;             // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor_Popin_C*                    MenuAnchor_Popin_Mail;                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor_Popin_C*                    MenuAnchor_Popin_SalesBin;                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                RealTimeText;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Clock;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TimeWarpText;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_Time;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BasicHighlightDecorator_C*         WBP_BasicHighlightDecorator_HousingVillagerVisit;  // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BasicHighlightDecorator_C*         WBP_BasicHighlightDecorator_Mail;                  // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BasicHighlightDecorator_C*         WBP_BasicHighlightDecorator_Sales;                 // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ClockArrow_C*                      WBP_ClockArrow;                                    // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WeatherImagePrimary;                               // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         LastTimeRecvd;                                     // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F99[0x4];                                     // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UVAL_TutorialFlagDefinition> MailFlag;                                          // 0x0388(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UVAL_TutorialFlagDefinition> HousingVillagerVisitFlag;                          // 0x03B0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UWBP_PopinCalloutWidget_C*              MenuContent;                                       // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UVAL_TutorialFlagDefinition> SalesFlag;                                         // 0x03E0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int64                                         LastTimeWarpRecvd;                                 // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         LatestMailRecvdTime;                               // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ClockSizeOverride;                                 // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              ClockPositionOverride;                             // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              HousingPlotVisitationIconPositionOverride;         // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              MailIconPositionOverride;                          // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              TimeContainerPositionOverride;                     // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UVALUI_TextBlockStyle*                  TimeTextStyleOverride;                             // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_GameClock(int32 EntryPoint, const struct FTimeOfDayFilter& K2Node_MakeStruct_TimeOfDayFilter, const struct FTimeOfDayFilter& K2Node_MakeStruct_TimeOfDayFilter_1, const struct FTimeOfDayFilter& K2Node_MakeStruct_TimeOfDayFilter_2, const struct FTimeOfDayFilter& K2Node_MakeStruct_TimeOfDayFilter_3, bool CallFunc_IsValid_ReturnValue, class UVillagerMailInboxComponent* K2Node_CustomEvent_inbox, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UVillagerVisitComponent* CallFunc_GetVillagerVisitComponent_ReturnValue, class UVillagerMailInboxComponent* CallFunc_GetVillagerMailInbox_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TDelegate<void(bool bNewHousingVillagerVisitReady)> K2Node_CreateDelegate_OutputDelegate, const struct FDateTime& CallFunc_Now_ReturnValue, bool CallFunc_IsDebuggingOn__IsDebuggingOn, int32 CallFunc_GetSecond_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetMinute_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue_1, int32 CallFunc_GetHour_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_IntToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, int64 CallFunc_Multiply_Int64Int64_ReturnValue, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue, const struct FWeatherStateProperties& CallFunc_GetCurrentWorldWeatherState_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, class UValeriaTimeManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, int32 CallFunc_GetTotalSecondsInADay_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_Format_ReturnValue_1, int64 CallFunc_Divide_Int64Int64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, const class FString& CallFunc_FormatDuration_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, bool CallFunc_IsDebuggingOn__IsDebuggingOn_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_CanStartTutorialForFlag_ReturnValue, bool CallFunc_NotEqual_Int64Int64_ReturnValue, bool K2Node_CustomEvent_bNewHousingVillagerVisitReady, bool K2Node_Event_IsDesignTime, class UValeriaTimeManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, int64 CallFunc_GetTimeWarpSecs_ReturnValue, bool CallFunc_NotEqual_Int64Int64_ReturnValue_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue_2, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue_3, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_3, bool CallFunc_CanStartTutorialForFlag_ReturnValue_1, class UValeriaTimeManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_IsWithinTimeOfDayFilter_ReturnValue, bool CallFunc_IsWithinTimeOfDayFilter_ReturnValue_1, bool CallFunc_IsWithinTimeOfDayFilter_ReturnValue_2, bool CallFunc_IsWithinTimeOfDayFilter_ReturnValue_3, float CallFunc_GetTimeOfDayLerp_ReturnValue, const struct FClockTimeInValeria& CallFunc_GetClockTimeOfDay_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const class FString& CallFunc_FormatClockTimeInValeria_Result, double CallFunc_Add_DoubleDouble_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, int32 CallFunc_GetSecondsSinceTodayStarted_ReturnValue, bool CallFunc_IsValeriaTimeValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue_4, TDelegate<void(class UVillagerMailInboxComponent* InBox)> K2Node_CreateDelegate_OutputDelegate_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
	class UWidget* MA_OnPopin(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, TScriptInterface<class IBPI_GameplayUIManagerTutorial_CM_C> K2Node_DynamicCast_AsBPI_Gameplay_UIManager_Tutorial_CM, bool K2Node_DynamicCast_bSuccess, class UWBP_FTUEPopin_CM_C* CallFunc_Redirect_FTUEPopin_Type_FTUEPopin, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_PopinCalloutWidget_C* CallFunc_Create_ReturnValue);
	class UUserWidget* OnGetUserMenuContent_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, TScriptInterface<class IBPI_GameplayUIManagerTutorial_CM_C> K2Node_DynamicCast_AsBPI_Gameplay_UIManager_Tutorial_CM, bool K2Node_DynamicCast_bSuccess, class UWBP_FTUEPopin_CM_C* CallFunc_Redirect_FTUEPopin_Type_FTUEPopin, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_PopinCalloutWidget_C* CallFunc_Create_ReturnValue);
	void OnHousingVillagerVisitReadyChanged(bool bNewHousingVillagerVisitReady);
	void OnMailChanged(class UVillagerMailInboxComponent* InBox);
	void PlayNewHousingVisitAnim();
	void PlayNewMailAnim();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TryShowHousingVillagerVisitFTUE();
	void TryShowMailFTUE();
	void UpdateNewHousingVillagerVisitStatus(bool NewHousingVillagerVisitReady, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
	void UpdateNewMailStatus(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UVillagerMailInboxComponent* CallFunc_GetVillagerMailInbox_ReturnValue, bool CallFunc_HasNewMail_ReturnValue, int64 CallFunc_FindMostRecentDeliveredMailTimestamp_ReturnValue, bool CallFunc_Greater_Int64Int64_ReturnValue, ESlateVisibility K2Node_Select_Default);
	void WBP_GameClock_AutoGenFunc(class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue);
	void WBP_GameClock_AutoGenFunc1(class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GameClock_C">();
	}
	static class UWBP_GameClock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GameClock_C>();
	}
};
static_assert(alignof(UWBP_GameClock_C) == 0x000008, "Wrong alignment on UWBP_GameClock_C");
static_assert(sizeof(UWBP_GameClock_C) == 0x000470, "Wrong size on UWBP_GameClock_C");
static_assert(offsetof(UWBP_GameClock_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_GameClock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, NewHousingVisitAnim) == 0x0002C8, "Member 'UWBP_GameClock_C::NewHousingVisitAnim' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, NewMailAnim) == 0x0002D0, "Member 'UWBP_GameClock_C::NewMailAnim' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, Backer_Opacity) == 0x0002D8, "Member 'UWBP_GameClock_C::Backer_Opacity' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, ClockTimePeriod) == 0x0002E0, "Member 'UWBP_GameClock_C::ClockTimePeriod' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, ClockTimeText) == 0x0002E8, "Member 'UWBP_GameClock_C::ClockTimeText' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, DayClockDial) == 0x0002F0, "Member 'UWBP_GameClock_C::DayClockDial' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, DebugWeatherStateText) == 0x0002F8, "Member 'UWBP_GameClock_C::DebugWeatherStateText' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, Decor) == 0x000300, "Member 'UWBP_GameClock_C::Decor' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, Decor_1) == 0x000308, "Member 'UWBP_GameClock_C::Decor_1' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, Image_HousingVillagerVisit_Icon) == 0x000310, "Member 'UWBP_GameClock_C::Image_HousingVillagerVisit_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, Image_MailIcon) == 0x000318, "Member 'UWBP_GameClock_C::Image_MailIcon' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, MenuAnchor_Popin_HousingVillagerVisit) == 0x000320, "Member 'UWBP_GameClock_C::MenuAnchor_Popin_HousingVillagerVisit' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, MenuAnchor_Popin_Mail) == 0x000328, "Member 'UWBP_GameClock_C::MenuAnchor_Popin_Mail' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, MenuAnchor_Popin_SalesBin) == 0x000330, "Member 'UWBP_GameClock_C::MenuAnchor_Popin_SalesBin' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, RealTimeText) == 0x000338, "Member 'UWBP_GameClock_C::RealTimeText' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, SizeBox_Clock) == 0x000340, "Member 'UWBP_GameClock_C::SizeBox_Clock' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, TimeWarpText) == 0x000348, "Member 'UWBP_GameClock_C::TimeWarpText' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, VBox_Time) == 0x000350, "Member 'UWBP_GameClock_C::VBox_Time' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, WBP_BasicHighlightDecorator_HousingVillagerVisit) == 0x000358, "Member 'UWBP_GameClock_C::WBP_BasicHighlightDecorator_HousingVillagerVisit' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, WBP_BasicHighlightDecorator_Mail) == 0x000360, "Member 'UWBP_GameClock_C::WBP_BasicHighlightDecorator_Mail' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, WBP_BasicHighlightDecorator_Sales) == 0x000368, "Member 'UWBP_GameClock_C::WBP_BasicHighlightDecorator_Sales' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, WBP_ClockArrow) == 0x000370, "Member 'UWBP_GameClock_C::WBP_ClockArrow' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, WeatherImagePrimary) == 0x000378, "Member 'UWBP_GameClock_C::WeatherImagePrimary' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, LastTimeRecvd) == 0x000380, "Member 'UWBP_GameClock_C::LastTimeRecvd' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, MailFlag) == 0x000388, "Member 'UWBP_GameClock_C::MailFlag' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, HousingVillagerVisitFlag) == 0x0003B0, "Member 'UWBP_GameClock_C::HousingVillagerVisitFlag' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, MenuContent) == 0x0003D8, "Member 'UWBP_GameClock_C::MenuContent' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, SalesFlag) == 0x0003E0, "Member 'UWBP_GameClock_C::SalesFlag' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, LastTimeWarpRecvd) == 0x000408, "Member 'UWBP_GameClock_C::LastTimeWarpRecvd' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, LatestMailRecvdTime) == 0x000410, "Member 'UWBP_GameClock_C::LatestMailRecvdTime' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, ClockSizeOverride) == 0x000418, "Member 'UWBP_GameClock_C::ClockSizeOverride' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, ClockPositionOverride) == 0x000428, "Member 'UWBP_GameClock_C::ClockPositionOverride' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, HousingPlotVisitationIconPositionOverride) == 0x000438, "Member 'UWBP_GameClock_C::HousingPlotVisitationIconPositionOverride' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, MailIconPositionOverride) == 0x000448, "Member 'UWBP_GameClock_C::MailIconPositionOverride' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, TimeContainerPositionOverride) == 0x000458, "Member 'UWBP_GameClock_C::TimeContainerPositionOverride' has a wrong offset!");
static_assert(offsetof(UWBP_GameClock_C, TimeTextStyleOverride) == 0x000468, "Member 'UWBP_GameClock_C::TimeTextStyleOverride' has a wrong offset!");

}

