#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HousePlotMode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CommonInput_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HousePlotMode.WBP_HousePlotMode_C
// 0x01B0 (0x0470 - 0x02C0)
class UWBP_HousePlotMode_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_Button_Styled*                   Button_Connected_Normal;                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Button_Styled*                   Button_Connected_Pressed;                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Button_Styled*                   Button_EditMode_Normal;                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Button_Styled*                   Button_EditMode_Pressed;                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Button_Styled*                   Button_FreePlacement_Normal;                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Button_Styled*                   Button_FreePlacement_Pressed;                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonUIButtonPromptItem_C*        ExitPlacementModeImage;                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonUIButtonPromptItem_C*        FreePlacementImage;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonUIButtonPromptItem_C*        HMenuImage;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor_Popin_C*                    MenuAnchor_Popin_EditHousing_1;                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor_Popin_C*                    MenuAnchor_Popin_EditHousing_2;                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_ConnectedButton;                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_EditModeButton;                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_FreePlacement;                             // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_OverheadMode;                              // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Shift;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilitySwitcher*              PlacementModeIconSwitcher;                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonUIButtonPromptItem_C*        PlacementModeImage;                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Button_Styled*                   VALUI_Button_Styled_203;                           // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BasicHighlightDecorator_C*         WBP_BasicHighlightDecorator_1;                     // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BasicHighlightDecorator_C*         WBP_BasicHighlightDecorator_2;                     // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_ConnectedButton;                    // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_EditModeButton;                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_FreePlacement;                      // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UVAL_TutorialFlagDefinition> FTUEFlag_HousingPlotEdits2;                        // 0x0388(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UWBP_PopinCalloutWidget_C*              Menu_Content_2;                                    // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PopinCalloutWidget_C*              Menu_Content_1;                                    // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UVAL_TutorialFlagDefinition> FTUEFlag_HousingPlotEdits1;                        // 0x03C0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSet<TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset>> GardenTypes;                                       // 0x03E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             TryShowGardenPlotFTUE;                             // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EnableEditMode;                                    // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             DisableEditMode;                                   // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          PreventSoundSpam;                                  // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInMouseAndKeyBord;                               // 0x0469(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CloseHousingFTUE2();
	void Construct();
	void Destruct();
	void DisableEditMode__DelegateSignature();
	void EnableEditMode__DelegateSignature();
	void ExecuteUbergraph_WBP_HousePlotMode(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TDelegate<void(EHousingPermissionLevel Level)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, TDelegate<void(class AValeriaCharacter* Character, bool Flag)> K2Node_CreateDelegate_OutputDelegate_2, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, bool CallFunc_IsPlacementPickupModeActive_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, ESlateVisibility Temp_byte_Variable_3, TDelegate<void(class AValeriaPlayerController* PC)> K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsVisible_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue_1, bool CallFunc_IsConnectedButtonApplicable_bApplicable, bool CallFunc_IsInputKeyDown_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable_2, TDelegate<void(class UPlacementComponent* PC)> K2Node_CreateDelegate_OutputDelegate_4, int32 K2Node_Select_Default, bool CallFunc_IsFreePlacementButtonApplicable_bApplicable, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, bool CallFunc_CanStartTutorialForFlag_ReturnValue, ESlateVisibility K2Node_Select_Default_1, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, EHousingPermissionLevel K2Node_CustomEvent_level, bool K2Node_Event_IsDesignTime, ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default_2);
	bool Is_on_Occupied_Housing_Plot(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AValeriaPlayerController* K2Node_DynamicCast_AsValeria_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AHousingPlotActor* CallFunc_GetOccupiedHousingPlot_ReturnValue, bool CallFunc_IsAtHome_ReturnValue, class ABP_HousingPlotActor_C* K2Node_DynamicCast_AsBP_Housing_Plot_Actor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocalCharacterAtThisPlot__IsInside, bool CallFunc_IsLocalCharacterAtThisPlot__HasCharacterLoaded, bool CallFunc_IsValid_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool CallFunc_IsInHousingEditMode_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void IsConnectedButtonApplicable(bool* bApplicable, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInteractorComponent* CallFunc_GetInteractorComponent_ReturnValue, bool CallFunc_IsPlacementPickupModeActive_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UFenceMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void IsFreePlacementButtonApplicable(bool* bApplicable, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPlacementComponent* CallFunc_GetPlacement_ReturnValue, bool CallFunc_IsPlacementPickupModeActive_ReturnValue, bool CallFunc_IsPlacing_ReturnValue);
	class UUserWidget* On_Get_User_Menu_Content_2(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, TScriptInterface<class IBPI_GameplayUIManagerTutorial_CM_C> K2Node_DynamicCast_AsBPI_Gameplay_UIManager_Tutorial_CM, bool K2Node_DynamicCast_bSuccess, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UWBP_FTUEPopin_CM_C* CallFunc_Redirect_FTUEPopin_Type_FTUEPopin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_PopinCalloutWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue);
	class UUserWidget* On_GetUserMenuContent_1(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, TScriptInterface<class IBPI_GameplayUIManagerTutorial_CM_C> K2Node_DynamicCast_AsBPI_Gameplay_UIManager_Tutorial_CM, bool K2Node_DynamicCast_bSuccess, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UWBP_FTUEPopin_CM_C* CallFunc_Redirect_FTUEPopin_Type_FTUEPopin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_PopinCalloutWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue);
	void OnInputMethodChanged_Event(ECommonInputType bNewInputType);
	void PreConstruct(bool IsDesignTime);
	void ShowCurrentHousingPermission(EHousingPermissionLevel Level);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TryShowFTUE_HousingEdits2();
	void TryShowGardenPlotFTUE__DelegateSignature();
	void UpdateFreePlacementModeIcon(class UPlacementComponent* Placement, bool Temp_bool_Variable, bool CallFunc_IsFreePlacementModeActive_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default);
	void UpdatePermissionVisibility(EHousingPermissionLevel Permission, EHousingPermissionLevel Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, ESlateVisibility Temp_byte_Variable_10, EHousingPermissionLevel Temp_byte_Variable_11, ESlateVisibility K2Node_Select_Default, ESlateVisibility Temp_byte_Variable_12, ESlateVisibility Temp_byte_Variable_13, ESlateVisibility Temp_byte_Variable_14, ESlateVisibility Temp_byte_Variable_15, ESlateVisibility Temp_byte_Variable_16, ESlateVisibility Temp_byte_Variable_17, ESlateVisibility Temp_byte_Variable_18, ESlateVisibility Temp_byte_Variable_19, ESlateVisibility Temp_byte_Variable_20, ESlateVisibility Temp_byte_Variable_21, ESlateVisibility K2Node_Select_Default_1);
	void UpdatePlacementModeIcon(class AValeriaCharacter* Character, bool Flag, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 K2Node_Select_Default, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, bool Temp_bool_Variable_1, int32 K2Node_Select_Default_1);
	void UpdateVisibility(class AValeriaCharacter* ValeriaCharacter, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, bool Temp_bool_Variable_17, bool Temp_bool_Variable_18, bool Temp_bool_Variable_19, bool Temp_bool_Variable_20, bool Temp_bool_Variable_21, bool Temp_bool_Variable_22, bool Temp_bool_Variable_23, bool Temp_bool_Variable_24, bool Temp_bool_Variable_25, bool Temp_bool_Variable_26, bool Temp_bool_Variable_27, bool Temp_bool_Variable_28, bool Temp_bool_Variable_29, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, ECharacterState Temp_byte_Variable_2, class UCharacterStateMachineComponent* CallFunc_GetCSM_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, ECharacterState CallFunc_GetCurrentStateType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Select_Default, bool CallFunc_Is_on_Occupied_Housing_Plot_ReturnValue, bool CallFunc_Is_on_Occupied_Housing_Plot_ReturnValue_1, TArray<TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset>>& CallFunc_Set_ToArray_Result, bool CallFunc_BooleanAND_ReturnValue, TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> CallFunc_Array_Get_Item, bool CallFunc_ContainsItemByType_ReturnValue, ESlateVisibility K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2);
	void WBP_HousePlotMode_AutoGenFunc(class AValeriaPlayerController* PC);
	void WBP_HousePlotMode_AutoGenFunc1(class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue);
	void WBP_HousePlotMode_AutoGenFunc2();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HousePlotMode_C">();
	}
	static class UWBP_HousePlotMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HousePlotMode_C>();
	}
};
static_assert(alignof(UWBP_HousePlotMode_C) == 0x000008, "Wrong alignment on UWBP_HousePlotMode_C");
static_assert(sizeof(UWBP_HousePlotMode_C) == 0x000470, "Wrong size on UWBP_HousePlotMode_C");
static_assert(offsetof(UWBP_HousePlotMode_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_HousePlotMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, Button_Connected_Normal) == 0x0002C8, "Member 'UWBP_HousePlotMode_C::Button_Connected_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, Button_Connected_Pressed) == 0x0002D0, "Member 'UWBP_HousePlotMode_C::Button_Connected_Pressed' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, Button_EditMode_Normal) == 0x0002D8, "Member 'UWBP_HousePlotMode_C::Button_EditMode_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, Button_EditMode_Pressed) == 0x0002E0, "Member 'UWBP_HousePlotMode_C::Button_EditMode_Pressed' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, Button_FreePlacement_Normal) == 0x0002E8, "Member 'UWBP_HousePlotMode_C::Button_FreePlacement_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, Button_FreePlacement_Pressed) == 0x0002F0, "Member 'UWBP_HousePlotMode_C::Button_FreePlacement_Pressed' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, ExitPlacementModeImage) == 0x0002F8, "Member 'UWBP_HousePlotMode_C::ExitPlacementModeImage' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, FreePlacementImage) == 0x000300, "Member 'UWBP_HousePlotMode_C::FreePlacementImage' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, HMenuImage) == 0x000308, "Member 'UWBP_HousePlotMode_C::HMenuImage' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, MenuAnchor_Popin_EditHousing_1) == 0x000310, "Member 'UWBP_HousePlotMode_C::MenuAnchor_Popin_EditHousing_1' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, MenuAnchor_Popin_EditHousing_2) == 0x000318, "Member 'UWBP_HousePlotMode_C::MenuAnchor_Popin_EditHousing_2' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, Overlay_ConnectedButton) == 0x000320, "Member 'UWBP_HousePlotMode_C::Overlay_ConnectedButton' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, Overlay_EditModeButton) == 0x000328, "Member 'UWBP_HousePlotMode_C::Overlay_EditModeButton' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, Overlay_FreePlacement) == 0x000330, "Member 'UWBP_HousePlotMode_C::Overlay_FreePlacement' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, Overlay_OverheadMode) == 0x000338, "Member 'UWBP_HousePlotMode_C::Overlay_OverheadMode' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, Overlay_Shift) == 0x000340, "Member 'UWBP_HousePlotMode_C::Overlay_Shift' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, PlacementModeIconSwitcher) == 0x000348, "Member 'UWBP_HousePlotMode_C::PlacementModeIconSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, PlacementModeImage) == 0x000350, "Member 'UWBP_HousePlotMode_C::PlacementModeImage' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, VALUI_Button_Styled_203) == 0x000358, "Member 'UWBP_HousePlotMode_C::VALUI_Button_Styled_203' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, WBP_BasicHighlightDecorator_1) == 0x000360, "Member 'UWBP_HousePlotMode_C::WBP_BasicHighlightDecorator_1' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, WBP_BasicHighlightDecorator_2) == 0x000368, "Member 'UWBP_HousePlotMode_C::WBP_BasicHighlightDecorator_2' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, WidgetSwitcher_ConnectedButton) == 0x000370, "Member 'UWBP_HousePlotMode_C::WidgetSwitcher_ConnectedButton' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, WidgetSwitcher_EditModeButton) == 0x000378, "Member 'UWBP_HousePlotMode_C::WidgetSwitcher_EditModeButton' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, WidgetSwitcher_FreePlacement) == 0x000380, "Member 'UWBP_HousePlotMode_C::WidgetSwitcher_FreePlacement' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, FTUEFlag_HousingPlotEdits2) == 0x000388, "Member 'UWBP_HousePlotMode_C::FTUEFlag_HousingPlotEdits2' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, Menu_Content_2) == 0x0003B0, "Member 'UWBP_HousePlotMode_C::Menu_Content_2' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, Menu_Content_1) == 0x0003B8, "Member 'UWBP_HousePlotMode_C::Menu_Content_1' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, FTUEFlag_HousingPlotEdits1) == 0x0003C0, "Member 'UWBP_HousePlotMode_C::FTUEFlag_HousingPlotEdits1' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, GardenTypes) == 0x0003E8, "Member 'UWBP_HousePlotMode_C::GardenTypes' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, TryShowGardenPlotFTUE) == 0x000438, "Member 'UWBP_HousePlotMode_C::TryShowGardenPlotFTUE' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, EnableEditMode) == 0x000448, "Member 'UWBP_HousePlotMode_C::EnableEditMode' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, DisableEditMode) == 0x000458, "Member 'UWBP_HousePlotMode_C::DisableEditMode' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, PreventSoundSpam) == 0x000468, "Member 'UWBP_HousePlotMode_C::PreventSoundSpam' has a wrong offset!");
static_assert(offsetof(UWBP_HousePlotMode_C, IsInMouseAndKeyBord) == 0x000469, "Member 'UWBP_HousePlotMode_C::IsInMouseAndKeyBord' has a wrong offset!");

}
