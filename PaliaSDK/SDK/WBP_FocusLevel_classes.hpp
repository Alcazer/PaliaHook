#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FocusLevel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FocusLevel.WBP_FocusLevel_C
// 0x0118 (0x03D8 - 0x02C0)
class UWBP_FocusLevel_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OutOfFocus;                                        // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 FocusIcon;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FocusIconBacker;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           FocusProgressBar;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           FocusProgressBar_1;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor_Popin_C*                    MenuAnchor_Popin;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor_Popin_C*                    MenuAnchor_Popin_1;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_PlayerName;                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_UnderFocusbar;                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_SkillLevel;                               // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_FocusBar;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_SkillLevel;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_PlayerContainer;                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BasicHighlightDecorator_C*         WBP_BasicHighlightDecorator;                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BasicHighlightDecorator_C*         WBP_BasicHighlightDecorator_1;                     // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillLevel_HUD_C*                  WBP_SkillLevel_HUD;                                // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVitalsComponent*                       CachedVitals;                                      // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         PreviousFocusAmount;                               // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PreviousStaminaAmount;                             // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UVAL_TutorialFlagDefinition> FocusFlag;                                         // 0x0358(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UWBP_PopinCalloutWidget_C*              MenuContent;                                       // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          DepletedSFXPlayed;                                 // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_509D[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        PopinDisplayDuration;                              // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PreviousMaxFocusAmount;                            // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PreviousMaxStaminaAmount;                          // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinFocusDisplayPercent;                            // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SkillLevelSizeOverride;                            // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMargin                                PlayerContainerPadding;                            // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FVector2D                              FocusBarSizeOverride;                              // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BindEventsToPawn(TDelegate<void(class USkillLevelsComponent* SkillLevels)> K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess);
	void Construct();
	void CreateSkillLevelWidget(class USkillLevelsComponent* SkillLevels, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_SkillLevel_HUD_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void ExecuteUbergraph_WBP_FocusLevel(int32 EntryPoint, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TDelegate<void(class AValeriaPlayerController* Vpc, class AValeriaCharacter* Ctxt)> K2Node_CreateDelegate_OutputDelegate, class AValeriaPlayerController* K2Node_DynamicCast_AsValeria_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, EValeriaFuncResult CallFunc_FindVitalConfigByType_OutResult, const struct FVitalConfig& CallFunc_FindVitalConfigByType_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast_1, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast_1);
	void HandleCharacterWasSpawned(class AValeriaPlayerController* Vpc, class AValeriaCharacter* Ctxt);
	void HandlePlayerSkillLevelChanged(class USkillLevelsComponent* SkillLevels);
	void On_Tags_Changed(class UPersistentTagMapComponent* TagMap, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UVitalsComponent* CallFunc_GetVitals_ReturnValue);
	class UUserWidget* On_MenuAnchor_Popin_GetUserMenuContent_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, TScriptInterface<class IBPI_GameplayUIManagerTutorial_CM_C> K2Node_DynamicCast_AsBPI_Gameplay_UIManager_Tutorial_CM, bool K2Node_DynamicCast_bSuccess, class UWBP_FTUEPopin_CM_C* CallFunc_Redirect_FTUEPopin_Type_FTUEPopin, class UPanelSlot* CallFunc_SetContent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_PopinCalloutWidget_C* CallFunc_Create_ReturnValue);
	void OnInitialized();
	void OnVitalEmptyNotification(EVitalType VitalType, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnVitalsChanged(class UVitalsComponent* Vitals);
	void PreConstruct(bool IsDesignTime);
	void Setup(class UVitalsComponent* Vitals, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, TDelegate<void(EVitalType VitalType)> K2Node_CreateDelegate_OutputDelegate, class UPersistentTagMapComponent* CallFunc_GetPersistentTags_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TDelegate<void(EVitalType VitalType)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(class UPersistentTagMapComponent* TagMap)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void(class UVitalsComponent* Vitals)> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void(class UVitalsComponent* Vitals)> K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue);
	void TryShowFocusWarning();
	void TryShowFTUE();
	void UpdateFocus(class UVitalsComponent* Vitals, double FocusPercent, int32 CurrentMaxFocusAmount, int32 CurrentFocusAmount, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_GetVitalMax_ReturnValue, int32 CallFunc_GetVital_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_CanStartTutorialForFlag_ReturnValue, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, bool CallFunc_CanStartTutorialForFlag_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_4, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void UpdateSkillLevels(EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class USkillLevelsComponent* CallFunc_GetSkillLevels_ReturnValue);
	void UpdateStamina(class UVitalsComponent* Vitals, int32 CurrentMaxStaminaAmount, int32 CurrentStaminaAmount, int32 CallFunc_GetVitalMax_ReturnValue, int32 CallFunc_GetVital_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void WBP_FocusLevel_AutoGenFunc(class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FocusLevel_C">();
	}
	static class UWBP_FocusLevel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FocusLevel_C>();
	}
};
static_assert(alignof(UWBP_FocusLevel_C) == 0x000008, "Wrong alignment on UWBP_FocusLevel_C");
static_assert(sizeof(UWBP_FocusLevel_C) == 0x0003D8, "Wrong size on UWBP_FocusLevel_C");
static_assert(offsetof(UWBP_FocusLevel_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_FocusLevel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, OutOfFocus) == 0x0002C8, "Member 'UWBP_FocusLevel_C::OutOfFocus' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, FocusIcon) == 0x0002D0, "Member 'UWBP_FocusLevel_C::FocusIcon' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, FocusIconBacker) == 0x0002D8, "Member 'UWBP_FocusLevel_C::FocusIconBacker' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, FocusProgressBar) == 0x0002E0, "Member 'UWBP_FocusLevel_C::FocusProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, FocusProgressBar_1) == 0x0002E8, "Member 'UWBP_FocusLevel_C::FocusProgressBar_1' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, MenuAnchor_Popin) == 0x0002F0, "Member 'UWBP_FocusLevel_C::MenuAnchor_Popin' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, MenuAnchor_Popin_1) == 0x0002F8, "Member 'UWBP_FocusLevel_C::MenuAnchor_Popin_1' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, NamedSlot_PlayerName) == 0x000300, "Member 'UWBP_FocusLevel_C::NamedSlot_PlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, NamedSlot_UnderFocusbar) == 0x000308, "Member 'UWBP_FocusLevel_C::NamedSlot_UnderFocusbar' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, ScaleBox_SkillLevel) == 0x000310, "Member 'UWBP_FocusLevel_C::ScaleBox_SkillLevel' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, SizeBox_FocusBar) == 0x000318, "Member 'UWBP_FocusLevel_C::SizeBox_FocusBar' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, SizeBox_SkillLevel) == 0x000320, "Member 'UWBP_FocusLevel_C::SizeBox_SkillLevel' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, VBox_PlayerContainer) == 0x000328, "Member 'UWBP_FocusLevel_C::VBox_PlayerContainer' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, WBP_BasicHighlightDecorator) == 0x000330, "Member 'UWBP_FocusLevel_C::WBP_BasicHighlightDecorator' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, WBP_BasicHighlightDecorator_1) == 0x000338, "Member 'UWBP_FocusLevel_C::WBP_BasicHighlightDecorator_1' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, WBP_SkillLevel_HUD) == 0x000340, "Member 'UWBP_FocusLevel_C::WBP_SkillLevel_HUD' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, CachedVitals) == 0x000348, "Member 'UWBP_FocusLevel_C::CachedVitals' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, PreviousFocusAmount) == 0x000350, "Member 'UWBP_FocusLevel_C::PreviousFocusAmount' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, PreviousStaminaAmount) == 0x000354, "Member 'UWBP_FocusLevel_C::PreviousStaminaAmount' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, FocusFlag) == 0x000358, "Member 'UWBP_FocusLevel_C::FocusFlag' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, MenuContent) == 0x000380, "Member 'UWBP_FocusLevel_C::MenuContent' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, DepletedSFXPlayed) == 0x000388, "Member 'UWBP_FocusLevel_C::DepletedSFXPlayed' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, PopinDisplayDuration) == 0x000390, "Member 'UWBP_FocusLevel_C::PopinDisplayDuration' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, PreviousMaxFocusAmount) == 0x000398, "Member 'UWBP_FocusLevel_C::PreviousMaxFocusAmount' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, PreviousMaxStaminaAmount) == 0x00039C, "Member 'UWBP_FocusLevel_C::PreviousMaxStaminaAmount' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, MinFocusDisplayPercent) == 0x0003A0, "Member 'UWBP_FocusLevel_C::MinFocusDisplayPercent' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, SkillLevelSizeOverride) == 0x0003A8, "Member 'UWBP_FocusLevel_C::SkillLevelSizeOverride' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, PlayerContainerPadding) == 0x0003B8, "Member 'UWBP_FocusLevel_C::PlayerContainerPadding' has a wrong offset!");
static_assert(offsetof(UWBP_FocusLevel_C, FocusBarSizeOverride) == 0x0003C8, "Member 'UWBP_FocusLevel_C::FocusBarSizeOverride' has a wrong offset!");

}

