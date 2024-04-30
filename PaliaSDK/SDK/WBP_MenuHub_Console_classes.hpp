#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MenuHub_Console

#include "Basic.hpp"

#include "MenuHubListEntryStruct_structs.hpp"
#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"
#include "SlateCore_structs.hpp"
#include "Palia_structs.hpp"
#include "MenuHubOtherMenuType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MenuHub_Console.WBP_MenuHub_Console_C
// 0x0100 (0x0658 - 0x0558)
class UWBP_MenuHub_Console_C final  : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OpenAnim;                                          // 0x0560(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTileView*                        HousingMenusTileGroup;                             // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MenuHub;                                           // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTileView*                        OtherMenusTileGroup;                               // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Panel_HousingPlot;                                 // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Panel_OtherMenus;                                  // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Panel_PlayerMenus;                                 // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Panel_SocialMenu;                                  // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTileView*                        PlayerMenusTileGroup;                              // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonHierarchicalScrollBox*           ScrollBox;                                         // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTileView*                        SocialMenusTileGroup;                              // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTileView*                        StoreMenusTileGroup;                               // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonUIButtonPrompt_C*            WBP_CommonUIButtonPrompt;                          // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ServerRegion_C*                    WBP_ServerRegion;                                  // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FMenuHubListEntryStruct>        Data_PlayerMenus;                                  // 0x05D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FMenuHubListEntryStruct>        Data_SocialMenus;                                  // 0x05E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FMenuHubListEntryStruct>        Data_HousingPlotMenus;                             // 0x05F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FMenuHubListEntryStruct>        Data_StoreMenus;                                   // 0x0600(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FMenuHubListEntryStruct>        Data_OtherMenus;                                   // 0x0610(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWidget*                                NavLeftFocus;                                      // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bNewScreenOpening;                                 // 0x0628(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4384[0x7];                                     // 0x0629(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   UXIntent_PhotographyMode;                          // 0x0630(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)

public:
	void Allow_Cheats(bool* Allowed, bool CallFunc_BuildIsShipping_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool CallFunc_AreCheatsEnabled_Result, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void BndEvt__WBP_MenuHub_Console_HousingMenusTileGroup_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void BndEvt__WBP_MenuHub_Console_HousingMenusTileGroup_K2Node_ComponentBoundEvent_6_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BndEvt__WBP_MenuHub_Console_OtherMenusTileGroup_K2Node_ComponentBoundEvent_10_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BndEvt__WBP_MenuHub_Console_OtherMenusTileGroup_K2Node_ComponentBoundEvent_9_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void BndEvt__WBP_MenuHub_Console_PlayerMenusTileGroup_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void BndEvt__WBP_MenuHub_Console_PlayerMenusTileGroup_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BndEvt__WBP_MenuHub_Console_SocialMenusTileGroup_K2Node_ComponentBoundEvent_3_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void BndEvt__WBP_MenuHub_Console_SocialMenusTileGroup_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BndEvt__WBP_MenuHub_Console_StoreMenusTileGroup_K2Node_ComponentBoundEvent_7_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void BP_OnActivated();
	bool BP_OnHandleBackAction();
	void CheckEventAvailability(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ULimitedEventSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsAnyEventActive_ReturnValue, const struct FMenuHubListEntryStruct& CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FMenuHubListEntryStruct& K2Node_MakeStruct_MenuHubListEntryStruct, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FMenuHubListEntryStruct& K2Node_SetFieldsInStruct_StructOut, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Close_Self(TArray<EVAL_CharacterRenderStudioState>& K2Node_MakeArray_Array, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCharacterCustomManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AVAL_CharacterRenderStudio* CallFunc_GetCharacterRenderStudio_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, EVAL_CharacterRenderStudioState CallFunc_GetRenderStudioState_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void Construct();
	void CreateAllMenus();
	void CreateHousingMenus(const TArray<class UBP_ListEntry_MenuHub_C*>& ListEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Is_on_Occupied_Housing_Plot_ReturnValue, class UBP_ListEntry_MenuHub_C* CallFunc_SpawnObject_ReturnValue, const struct FMenuHubListEntryStruct& CallFunc_Array_Get_Item, bool CallFunc_IsMenuHidden_Hidden, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void CreatePlayerMenus(const TArray<class UBP_ListEntry_MenuHub_C*>& ListEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_ListEntry_MenuHub_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FMenuHubListEntryStruct& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsPlayerMenuAllowed_Allowed, bool CallFunc_IsMenuHidden_Hidden, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void CreateStandardMenus(TArray<struct FMenuHubListEntryStruct>& Data, class UCommonTileView* TileGroup, const TArray<class UBP_ListEntry_MenuHub_C*>& ListEntries, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FMenuHubListEntryStruct& CallFunc_Array_Get_Item, bool CallFunc_IsMenuHidden_Hidden, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_ListEntry_MenuHub_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Destruct();
	class UWidget* DoCustomNavigation(EUINavigation Param_Navigation, bool K2Node_SwitchEnum_CmpSuccess);
	void ExecuteUbergraph_WBP_MenuHub_Console(int32 EntryPoint, double Temp_real_Variable, bool Temp_bool_Variable, class US6UXIntentSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class US6GenericAssetRegistrySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, TDelegate<void(class US6UXIntentSubsystem* UXIntentSubsystem, TSoftClassPtr<class UClass>& UXIntentType)> K2Node_CreateDelegate_OutputDelegate, class US6GenericAssetRegistryInstance* CallFunc_GetRegistryInstance_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<TSoftObjectPtr<class UObject>>& CallFunc_Set_ToArray_Result, TSoftObjectPtr<class UObject> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, double Temp_real_Variable_1, class UBP_MenuHubSocialWindowTileDataAsset_C* K2Node_DynamicCast_AsBP_Menu_Hub_Social_Window_Tile_Data_Asset, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_ComponentBoundEvent_Item_8, class UUserWidget* K2Node_ComponentBoundEvent_Widget_4, const struct FMenuHubListEntryStruct& K2Node_MakeStruct_MenuHubListEntryStruct, class UWBP_MenuHubItem_Console_C* K2Node_DynamicCast_AsWBP_Menu_Hub_Item_Console, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue, TDelegate<void(class UBP_ListEntry_MenuHub_C* EntryData)> K2Node_CreateDelegate_OutputDelegate_1, class UObject* K2Node_ComponentBoundEvent_Item_7, bool K2Node_ComponentBoundEvent_bIsSelected_3, class UObject* K2Node_ComponentBoundEvent_Item_6, class UUserWidget* K2Node_ComponentBoundEvent_Widget_3, class UObject* K2Node_ComponentBoundEvent_Item_5, bool K2Node_ComponentBoundEvent_bIsSelected_2, class UWBP_MenuHubItem_Console_C* K2Node_DynamicCast_AsWBP_Menu_Hub_Item_Console_1, bool K2Node_DynamicCast_bSuccess_2, class UObject* K2Node_ComponentBoundEvent_Item_4, class UUserWidget* K2Node_ComponentBoundEvent_Widget_2, class UObject* K2Node_ComponentBoundEvent_Item_3, bool K2Node_ComponentBoundEvent_bIsSelected_1, class UWBP_MenuHubItem_Console_C* K2Node_DynamicCast_AsWBP_Menu_Hub_Item_Console_2, bool K2Node_DynamicCast_bSuccess_3, class UObject* K2Node_ComponentBoundEvent_Item_2, class UUserWidget* K2Node_ComponentBoundEvent_Widget_1, class UWBP_MenuHubItem_Console_C* K2Node_DynamicCast_AsWBP_Menu_Hub_Item_Console_3, bool K2Node_DynamicCast_bSuccess_4, TDelegate<void(class UBP_ListEntry_MenuHub_C* EntryData)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void(class UBP_ListEntry_MenuHub_C* EntryData)> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void(class UBP_ListEntry_MenuHub_C* EntryData)> K2Node_CreateDelegate_OutputDelegate_4, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item_1, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UWBP_MenuHubItem_Console_C* K2Node_DynamicCast_AsWBP_Menu_Hub_Item_Console_4, bool K2Node_DynamicCast_bSuccess_5, TDelegate<void(class UBP_ListEntry_MenuHub_C* EntryData)> K2Node_CreateDelegate_OutputDelegate_5, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, TDelegate<void(class UWidget* ReadyWidget)> K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue, class UInputAction* Temp_object_Variable, class US6UXIntentSubsystem* K2Node_CustomEvent_UXIntentSubsystem, TSoftClassPtr<class UClass> K2Node_CustomEvent_UXIntentType, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable_1_0, double Temp_real_Variable_0);
	void GetNumTileViewColumns(int32* NumColumns, const struct FGeometry& NewLocalVar_0, float CallFunc_GetEntryWidth_ReturnValue, struct FGeometry& CallFunc_GetPaintSpaceGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Max_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void HandleDifferentPhotoModeUXActivityRegistered(class US6UXIntentSubsystem* UXIntentSubsystem, TSoftClassPtr<class UClass>& UXIntentType);
	void HandleOnChildWidgetLoadComplete(class UWidget* ReadyWidget);
	void HandleOnInventoryButtonPressed(class UVAL_Subsystem_GameplayUIBridge* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TScriptInterface<class IVAL_GameplayUIBridgeInterface> CallFunc_GetUIInterface_ReturnValue);
	void HousingMenuButtonPressed(class UBP_ListEntry_MenuHub_C* EntryData, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void InpActEvt_IA_UI_Store_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	bool Is_on_Occupied_Housing_Plot(EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class AHousingPlotActor* CallFunc_GetOccupiedHousingPlot_ReturnValue, EHousingPermissionLevel CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel, class AHousingOwnershipActor* CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue, class ABP_HousingPlotActor_C* K2Node_DynamicCast_AsBP_Housing_Plot_Actor, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsLocalCharacterAtThisPlot__IsInside, bool CallFunc_IsLocalCharacterAtThisPlot__HasCharacterLoaded, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInHousingEditMode_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAtHome_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1);
	void IsMenuHidden(const struct FMenuHubListEntryStruct& NewParam, bool* Hidden, bool NewLocalVar, bool IsHidden, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, bool CallFunc_BuildIsShipping_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void IsPlayerMenuAllowed(const struct FMenuHubListEntryStruct& MenuData, bool* Allowed, bool K2Node_SwitchEnum_CmpSuccess, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool CallFunc_Allow_Cheats_Allowed, bool CallFunc_IsFTUEComplete_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1);
	void NavigateDownFromHousingMenus(EUINavigation Param_Navigation, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void NavigateDownFromPlayerMenus(EUINavigation Param_Navigation, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void NavigateDownFromSocialMenus(EUINavigation Param_Navigation, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void NavigateDownFromTileView(class UListView* CurrentTileView, class UListView* NewTileView, class UWidget* NewPanel, int32 Selected_Column, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, int32 CallFunc_GetIndexForItem_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, int32 CallFunc_GetNumTileViewColumns_NumColumns, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Max_ReturnValue);
	void NavigateUpFromHousingMenus(EUINavigation Param_Navigation, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void NavigateUpFromOtherMenus(EUINavigation Param_Navigation, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void NavigateUpFromSocialMenus(EUINavigation Param_Navigation, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void NavigateUpFromTileView(class UListView* CurrentTileView, class UListView* NewTileView, class UWidget* NewPanel, int32 NewTileView_SelectedIndex, int32 CurrentTileView_SelectedColumn, int32 NewTileView_NumItemsInLastRow, int32 Selected_Column, int32 CallFunc_GetNumItems_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_GetIndexForItem_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_GetNumTileViewColumns_NumColumns, int32 CallFunc_GetNumTileViewColumns_NumColumns_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue_1, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_1);
	void OnInitialized();
	void OpenPaliaPass(class UVAL_Subsystem_GameplayUIBridge* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TScriptInterface<class IVAL_GameplayUIBridgeInterface> CallFunc_GetUIInterface_ReturnValue);
	void OpenStore(EVAL_OpenStoreContext PayloadContext, const struct FVAL_OpenStorePayload& K2Node_MakeStruct_VAL_OpenStorePayload, class UVAL_Subsystem_GameplayUIBridge* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TScriptInterface<class IVAL_GameplayUIBridgeInterface> CallFunc_GetUIInterface_ReturnValue);
	void OtherMenuButtonPressed(class UBP_ListEntry_MenuHub_C* EntryData, EMenuHubOtherMenuType Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, class UClass* Temp_class_Variable_2, class UClass* Temp_class_Variable_3, class UClass* Temp_class_Variable_4, class UClass* Temp_class_Variable_5, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UClass* K2Node_Select_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue);
	void PlayerMenuButtonPressed(class UBP_ListEntry_MenuHub_C* EntryData, EVAL_CollectionsTabState EmoteState, class UVAL_Subsystem_GameplayUIBridge* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TScriptInterface<class IVAL_GameplayUIBridgeInterface> CallFunc_GetUIInterface_ReturnValue, class UVAL_Subsystem_GameplayUIBridge* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, TScriptInterface<class IVAL_GameplayUIBridgeInterface> CallFunc_GetUIInterface_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void SocialMenuButtonPressed(class UBP_ListEntry_MenuHub_C* EntryData, class FName TabName, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UXIntentSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UBP_UXIntent_PhotographyMode_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_TryStartUXActivity_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, class UWBP_MainWidget_Console_C* K2Node_DynamicCast_AsWBP_Main_Widget_Console, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	void StoreMenuButtonPressed(class UBP_ListEntry_MenuHub_C* EntryData, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdatePhotographyButtonVisibility(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class US6UXIntentSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_CanStartUXActivity_ReturnValue, const struct FMenuHubListEntryStruct& CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, const struct FMenuHubListEntryStruct& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);

	class UWidget* BP_GetDesiredFocusTarget(bool CallFunc_IsValid_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MenuHub_Console_C">();
	}
	static class UWBP_MenuHub_Console_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MenuHub_Console_C>();
	}
};
static_assert(alignof(UWBP_MenuHub_Console_C) == 0x000008, "Wrong alignment on UWBP_MenuHub_Console_C");
static_assert(sizeof(UWBP_MenuHub_Console_C) == 0x000658, "Wrong size on UWBP_MenuHub_Console_C");
static_assert(offsetof(UWBP_MenuHub_Console_C, UberGraphFrame) == 0x000558, "Member 'UWBP_MenuHub_Console_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, OpenAnim) == 0x000560, "Member 'UWBP_MenuHub_Console_C::OpenAnim' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, HousingMenusTileGroup) == 0x000568, "Member 'UWBP_MenuHub_Console_C::HousingMenusTileGroup' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, MenuHub) == 0x000570, "Member 'UWBP_MenuHub_Console_C::MenuHub' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, OtherMenusTileGroup) == 0x000578, "Member 'UWBP_MenuHub_Console_C::OtherMenusTileGroup' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, Panel_HousingPlot) == 0x000580, "Member 'UWBP_MenuHub_Console_C::Panel_HousingPlot' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, Panel_OtherMenus) == 0x000588, "Member 'UWBP_MenuHub_Console_C::Panel_OtherMenus' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, Panel_PlayerMenus) == 0x000590, "Member 'UWBP_MenuHub_Console_C::Panel_PlayerMenus' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, Panel_SocialMenu) == 0x000598, "Member 'UWBP_MenuHub_Console_C::Panel_SocialMenu' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, PlayerMenusTileGroup) == 0x0005A0, "Member 'UWBP_MenuHub_Console_C::PlayerMenusTileGroup' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, ScrollBox) == 0x0005A8, "Member 'UWBP_MenuHub_Console_C::ScrollBox' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, SocialMenusTileGroup) == 0x0005B0, "Member 'UWBP_MenuHub_Console_C::SocialMenusTileGroup' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, StoreMenusTileGroup) == 0x0005B8, "Member 'UWBP_MenuHub_Console_C::StoreMenusTileGroup' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, WBP_CommonUIButtonPrompt) == 0x0005C0, "Member 'UWBP_MenuHub_Console_C::WBP_CommonUIButtonPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, WBP_ServerRegion) == 0x0005C8, "Member 'UWBP_MenuHub_Console_C::WBP_ServerRegion' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, Data_PlayerMenus) == 0x0005D0, "Member 'UWBP_MenuHub_Console_C::Data_PlayerMenus' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, Data_SocialMenus) == 0x0005E0, "Member 'UWBP_MenuHub_Console_C::Data_SocialMenus' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, Data_HousingPlotMenus) == 0x0005F0, "Member 'UWBP_MenuHub_Console_C::Data_HousingPlotMenus' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, Data_StoreMenus) == 0x000600, "Member 'UWBP_MenuHub_Console_C::Data_StoreMenus' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, Data_OtherMenus) == 0x000610, "Member 'UWBP_MenuHub_Console_C::Data_OtherMenus' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, NavLeftFocus) == 0x000620, "Member 'UWBP_MenuHub_Console_C::NavLeftFocus' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, bNewScreenOpening) == 0x000628, "Member 'UWBP_MenuHub_Console_C::bNewScreenOpening' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHub_Console_C, UXIntent_PhotographyMode) == 0x000630, "Member 'UWBP_MenuHub_Console_C::UXIntent_PhotographyMode' has a wrong offset!");

}

