#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CircularToolWheel

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonWidgetInputExtended_classes.hpp"
#include "S6Core_structs.hpp"
#include "Palia_structs.hpp"
#include "UMG_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CircularToolWheel.WBP_CircularToolWheel_C
// 0x0158 (0x0638 - 0x04E0)
class UWBP_CircularToolWheel_C final  : public UCommonActivatableWidgetInputExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CommonUIButtonPrompt_C*            WBP_CommonUIButtonPrompt;                          // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RadialMenuWheel_Circular_C*        WBP_RadialMenuWheel_Circular;                      // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolWheelUtilityButton_C*          WBP_ToolCancelButton;                              // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolWheelUtilityButton_C*          WBP_ToolEquipButton;                               // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolTile_CM_C*                     WBP_ToolTile_Left;                                 // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolTile_CM_C*                     WBP_ToolTile_LowerLeft;                            // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolTile_CM_C*                     WBP_ToolTile_LowerRight;                           // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolTile_CM_C*                     WBP_ToolTile_Right;                                // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolTile_CM_C*                     WBP_ToolTile_Top;                                  // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolTile_CM_C*                     WBP_ToolTile_UpperLeft;                            // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolTile_CM_C*                     WBP_ToolTile_UpperRight;                           // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bEditMode;                                         // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50C0[0x7];                                     // 0x0541(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnToolSecondaryClick;                              // 0x0548(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnToolClicked;                                     // 0x0558(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsSelecting;                                       // 0x0568(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50C1[0x7];                                     // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVALUI_ItemSlotStyle*                   ToolStyleOverride;                                 // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bAllowDrag;                                        // 0x0578(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseEquippedToolAsSelected;                        // 0x0579(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHideSlotNumbers;                                  // 0x057A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50C2[0x5];                                     // 0x057B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ToolTile_CM_C*                     GamepadSelectedToolTile;                           // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCancelNavigationInWrap;                          // 0x0588(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnToolTileFocused;                                 // 0x0598(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        RadialSelectVectorX;                               // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRadialSelectUpdate;                              // 0x05B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50C3[0x7];                                     // 0x05B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RadialSelectVectorY;                               // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           WateringCanTimer;                                  // 0x05C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_ToolTile_CM_C*                     CurrentToolSelection;                              // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_ToolTile_CM_C*                     HoveredToolTile;                                   // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_ToolTile_CM_C*                     MostRecentTool;                                    // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bShouldDisplayUtilityButtons;                      // 0x05E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50C4[0x7];                                     // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DeadzoneAmount;                                    // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InputDelayTime;                                    // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WantsToSelect;                                     // 0x05F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50C5[0x7];                                     // 0x05F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnRadialMenuSelect;                                // 0x0600(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCancelToolWheel;                                 // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnToolTileBeTouchEnded;                            // 0x0620(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          InventoryUpdateQueued;                             // 0x0630(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EquipmentChangeQueued;                             // 0x0631(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowClickToSelect;                                // 0x0632(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_CircularToolWheel_CM_WBP_RadialMenuWheel_Circular_K2Node_ComponentBoundEvent_2_OnChoiceHovered__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_CircularToolWheel_WBP_RadialMenuWheel_Circular_K2Node_ComponentBoundEvent_0_OnChoiceUnhovered__DelegateSignature(class UWidget* Widget);
	void Clear_Gamepad_Dragged_Item(bool CallFunc_IsValid_ReturnValue);
	void Construct();
	bool DeadzoneCheck(ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void Deselect_All_Tools(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllSlotWidgets_Widgets, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ToolTile_CM_C* K2Node_DynamicCast_AsWBP_Tool_Tile_CM, bool K2Node_DynamicCast_bSuccess);
	void Destruct();
	void EquipTool(const struct FBagSlotLocation& BagSlot, bool CallFunc_K2_IsTimerPausedHandle_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_InteractablePlateWidgetComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UEquipmentComponent* CallFunc_GetEquipment_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool CallFunc_Client_TryEquipItemFromInventory_ReturnValue, bool CallFunc_Client_TryUnequip_ReturnValue, const struct FEquipmentItem& CallFunc_GetEquippedItem_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_HasTag_ReturnValue);
	void ExecuteUbergraph_WBP_CircularToolWheel(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FBagSlotLocation& CallFunc_GetBagSlotLocation_BagSlotLocation, bool CallFunc_HasItem_bHasItem, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable_1, TDelegate<void(class UWBP_ToolTile_CM_C* ToolTile)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class UEquipmentComponent* EquipmentComponent, const struct FEquipmentItem& Item)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(class UInventoryComponent* Inventory)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_AkEventGlobal_ReturnValue, const struct FGeometry& K2Node_CustomEvent_My_Geometry, const struct FValeriaItem& K2Node_CustomEvent_Valeria_Item, const struct FBagSlotLocation& K2Node_CustomEvent_Bag_Slot_Location, const struct FValeriaItem& K2Node_CustomEvent_Item_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UWBP_ToolTile_CM_C* K2Node_CustomEvent_ToolTile_1, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, TDelegate<void(class UEquipmentComponent* EquipmentComponent, bool bIsUsingEquipped)> K2Node_CreateDelegate_OutputDelegate_5, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue, class UEquipmentComponent* CallFunc_GetEquipment_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TDelegate<void(class UWidget* FocusItem)> K2Node_CreateDelegate_OutputDelegate_6, int32 Temp_int_Array_Index_Variable, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_7, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, TDelegate<void(class UWBP_ToolTile_CM_C* ToolTile)> K2Node_CreateDelegate_OutputDelegate_8, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_6, class UWidget* CallFunc_FinishSelecting_SelectedWidget, bool CallFunc_FinishSelecting_SelectionCancelled, TArray<class UWidget*>& CallFunc_GetAllSlotWidgets_Widgets, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_ToolTile_CM_C* K2Node_DynamicCast_AsWBP_Tool_Tile_CM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, class UWidget* K2Node_ComponentBoundEvent_Widget_1, class UWBP_ToolWheelUtilityButton_C* K2Node_DynamicCast_AsWBP_Tool_Wheel_Utility_Button, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_7, class UWBP_ToolTile_CM_C* K2Node_DynamicCast_AsWBP_Tool_Tile_CM_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_BooleanOR_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_3, double Temp_real_Variable_2, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, TDelegate<void(const struct FValeriaItem& Item)> K2Node_CreateDelegate_OutputDelegate_9, double Temp_real_Variable_3, double Temp_real_Variable_4, class UInputAction* Temp_object_Variable_1, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, double Temp_real_Variable_5, double Temp_real_Variable_4_0, double Temp_real_Variable_3_0, double CallFunc_Conv_InputActionValueToAxis1D_ReturnValue, double Temp_real_Variable_6, double Temp_real_Variable_7, class UWidget* K2Node_ComponentBoundEvent_Widget, class UInputAction* Temp_object_Variable_2, class UWBP_ToolWheelUtilityButton_C* K2Node_DynamicCast_AsWBP_Tool_Wheel_Utility_Button_1, bool K2Node_DynamicCast_bSuccess_3, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_2, float K2Node_EnhancedInputActionEvent_ElapsedTime_2, float K2Node_EnhancedInputActionEvent_TriggeredTime_2, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_2, double Temp_real_Variable_7_0, double Temp_real_Variable_6_0, double CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_1, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_1, class UEquipmentComponent* CallFunc_GetEquipment_ReturnValue_1, ESlateVisibility K2Node_Select_Default, bool CallFunc_HasEquippedItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool Temp_bool_Variable_2, double Temp_real_Variable_8, double Temp_real_Variable_9, class UInputAction* Temp_object_Variable_3, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_3, float K2Node_EnhancedInputActionEvent_ElapsedTime_3, float K2Node_EnhancedInputActionEvent_TriggeredTime_3, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_3, double Temp_real_Variable_9_0, double Temp_real_Variable_8_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, TDelegate<void(const struct FGeometry& My_Geometry, const struct FValeriaItem& Valeria_Item, const struct FBagSlotLocation& Bag_Slot_Location)> K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_DeadzoneCheck_ReturnValue, class UWBP_ToolTile_CM_C* K2Node_CustomEvent_ToolTile, class UEquipmentComponent* K2Node_CustomEvent_EquipmentComponent, const struct FEquipmentItem& K2Node_CustomEvent_Item, bool CallFunc_BooleanOR_ReturnValue_1, class UInventoryComponent* K2Node_CustomEvent_Inventory, float CallFunc_Delay_Duration_ImplicitCast);
	void FinishSelecting();
	void Get_Tool_Tile_By_Index(int32 Param_Index, class UWBP_ToolTile_CM_C** Out, bool K2Node_SwitchInteger_CmpSuccess);
	void GetInitialFocusWidget(class UWidget** FocusWidget);
	void Handle_On_Tool_Tile_Focused(class UWidget* FocusItem);
	void HandleActivationChanged();
	void HandleCanChangeEquippedUpdated(class UEquipmentComponent* EquipmentComponent, bool bCanChangeEquipped, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllSlotWidgets_Widgets, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ToolTile_CM_C* K2Node_DynamicCast_AsWBP_Tool_Tile_CM, bool K2Node_DynamicCast_bSuccess);
	void HandleEquipmentChanged(class UEquipmentComponent* EquipmentComponent, const struct FEquipmentItem& Item);
	void HandleGamepadToolCanceled();
	void HandleGamepadToolSelected(class UWBP_ToolTile_CM_C* ToolTile);
	void HandleInputAction_ToolWheel_Released(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime);
	void HandleInventoryChanged(class UInventoryComponent* Inventory);
	void HandleOnInputMethodChanged(ECommonInputType bNewInputType, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleToolClick(const struct FValeriaItem& Item);
	void HandleToolSecondaryClick(const struct FGeometry& My_Geometry, const struct FValeriaItem& Valeria_Item, const struct FBagSlotLocation& Bag_Slot_Location);
	void HandleToolTouch(class UWBP_ToolTile_CM_C* ToolTile);
	void InpActEvt_IA_RadialMenuNavigate_X_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_RadialMenuNavigate_Y_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_RadialMenuSelect_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UIBack_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void OnCancelNavigationInWrap__DelegateSignature();
	void OnCancelToolWheel__DelegateSignature();
	void OnRadialMenuSelect__DelegateSignature();
	void OnToolClicked__DelegateSignature(const struct FValeriaItem& Item);
	void OnToolSecondaryClick__DelegateSignature(const struct FGeometry& My_Geometry, const struct FValeriaItem& Valeria_Item, const struct FBagSlotLocation& Bag_Slot_Location);
	void OnToolTileBeTouchEnded__DelegateSignature(class UWBP_ToolTile_CM_C* ToolTile);
	void OnToolTileFocused__DelegateSignature(class UWidget* Focus_Item);
	void ReequipMostRecentTool(bool CallFunc_HasItem_bHasItem, bool CallFunc_IsValid_ReturnValue, const struct FBagSlotLocation& CallFunc_GetBagSlotLocation_BagSlotLocation);
	void Select_All_Tools(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllSlotWidgets_Widgets, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ToolTile_CM_C* K2Node_DynamicCast_AsWBP_Tool_Tile_CM, bool K2Node_DynamicCast_bSuccess);
	void Select_Tool(const struct FValeriaItem& Tool, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllSlotWidgets_Widgets, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_ToolTile_CM_C* K2Node_DynamicCast_AsWBP_Tool_Tile_CM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasItem_bHasItem, const struct FValeriaItem& CallFunc_Get_Item_Item, bool CallFunc_EqualEqual_SoftObjectReference_ReturnValue);
	void Set_Gamepad_Navigation_In_Wrap();
	void Set_Tool_Tile_Focus_By_Index(int32 Param_Index, class UWBP_ToolTile_CM_C* CallFunc_Get_Tool_Tile_By_Index_Out);
	void Set_Tool_Tile_Navigation_Explicit(int32 ToolTileIndex, EUINavigation Direction, class UWidget* Object, class UWBP_ToolTile_CM_C* CallFunc_Get_Tool_Tile_By_Index_Out);
	void StartSelecting();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TryUnhoverCancelButton();
	void UnequipReequipTool(EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UEquipmentComponent* CallFunc_GetEquipment_ReturnValue, bool CallFunc_HasEquippedItem_ReturnValue, bool CallFunc_Client_TryUnequip_ReturnValue);
	void UpdateToolTiles(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllSlotWidgets_Widgets, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ToolTile_CM_C* K2Node_DynamicCast_AsWBP_Tool_Tile_CM, bool K2Node_DynamicCast_bSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CircularToolWheel_C">();
	}
	static class UWBP_CircularToolWheel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CircularToolWheel_C>();
	}
};
static_assert(alignof(UWBP_CircularToolWheel_C) == 0x000008, "Wrong alignment on UWBP_CircularToolWheel_C");
static_assert(sizeof(UWBP_CircularToolWheel_C) == 0x000638, "Wrong size on UWBP_CircularToolWheel_C");
static_assert(offsetof(UWBP_CircularToolWheel_C, UberGraphFrame) == 0x0004E0, "Member 'UWBP_CircularToolWheel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, WBP_CommonUIButtonPrompt) == 0x0004E8, "Member 'UWBP_CircularToolWheel_C::WBP_CommonUIButtonPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, WBP_RadialMenuWheel_Circular) == 0x0004F0, "Member 'UWBP_CircularToolWheel_C::WBP_RadialMenuWheel_Circular' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, WBP_ToolCancelButton) == 0x0004F8, "Member 'UWBP_CircularToolWheel_C::WBP_ToolCancelButton' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, WBP_ToolEquipButton) == 0x000500, "Member 'UWBP_CircularToolWheel_C::WBP_ToolEquipButton' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, WBP_ToolTile_Left) == 0x000508, "Member 'UWBP_CircularToolWheel_C::WBP_ToolTile_Left' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, WBP_ToolTile_LowerLeft) == 0x000510, "Member 'UWBP_CircularToolWheel_C::WBP_ToolTile_LowerLeft' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, WBP_ToolTile_LowerRight) == 0x000518, "Member 'UWBP_CircularToolWheel_C::WBP_ToolTile_LowerRight' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, WBP_ToolTile_Right) == 0x000520, "Member 'UWBP_CircularToolWheel_C::WBP_ToolTile_Right' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, WBP_ToolTile_Top) == 0x000528, "Member 'UWBP_CircularToolWheel_C::WBP_ToolTile_Top' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, WBP_ToolTile_UpperLeft) == 0x000530, "Member 'UWBP_CircularToolWheel_C::WBP_ToolTile_UpperLeft' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, WBP_ToolTile_UpperRight) == 0x000538, "Member 'UWBP_CircularToolWheel_C::WBP_ToolTile_UpperRight' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, bEditMode) == 0x000540, "Member 'UWBP_CircularToolWheel_C::bEditMode' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, OnToolSecondaryClick) == 0x000548, "Member 'UWBP_CircularToolWheel_C::OnToolSecondaryClick' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, OnToolClicked) == 0x000558, "Member 'UWBP_CircularToolWheel_C::OnToolClicked' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, IsSelecting) == 0x000568, "Member 'UWBP_CircularToolWheel_C::IsSelecting' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, ToolStyleOverride) == 0x000570, "Member 'UWBP_CircularToolWheel_C::ToolStyleOverride' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, bAllowDrag) == 0x000578, "Member 'UWBP_CircularToolWheel_C::bAllowDrag' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, bUseEquippedToolAsSelected) == 0x000579, "Member 'UWBP_CircularToolWheel_C::bUseEquippedToolAsSelected' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, bHideSlotNumbers) == 0x00057A, "Member 'UWBP_CircularToolWheel_C::bHideSlotNumbers' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, GamepadSelectedToolTile) == 0x000580, "Member 'UWBP_CircularToolWheel_C::GamepadSelectedToolTile' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, OnCancelNavigationInWrap) == 0x000588, "Member 'UWBP_CircularToolWheel_C::OnCancelNavigationInWrap' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, OnToolTileFocused) == 0x000598, "Member 'UWBP_CircularToolWheel_C::OnToolTileFocused' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, RadialSelectVectorX) == 0x0005A8, "Member 'UWBP_CircularToolWheel_C::RadialSelectVectorX' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, IsRadialSelectUpdate) == 0x0005B0, "Member 'UWBP_CircularToolWheel_C::IsRadialSelectUpdate' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, RadialSelectVectorY) == 0x0005B8, "Member 'UWBP_CircularToolWheel_C::RadialSelectVectorY' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, WateringCanTimer) == 0x0005C0, "Member 'UWBP_CircularToolWheel_C::WateringCanTimer' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, CurrentToolSelection) == 0x0005C8, "Member 'UWBP_CircularToolWheel_C::CurrentToolSelection' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, HoveredToolTile) == 0x0005D0, "Member 'UWBP_CircularToolWheel_C::HoveredToolTile' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, MostRecentTool) == 0x0005D8, "Member 'UWBP_CircularToolWheel_C::MostRecentTool' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, bShouldDisplayUtilityButtons) == 0x0005E0, "Member 'UWBP_CircularToolWheel_C::bShouldDisplayUtilityButtons' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, DeadzoneAmount) == 0x0005E8, "Member 'UWBP_CircularToolWheel_C::DeadzoneAmount' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, InputDelayTime) == 0x0005F0, "Member 'UWBP_CircularToolWheel_C::InputDelayTime' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, WantsToSelect) == 0x0005F8, "Member 'UWBP_CircularToolWheel_C::WantsToSelect' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, OnRadialMenuSelect) == 0x000600, "Member 'UWBP_CircularToolWheel_C::OnRadialMenuSelect' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, OnCancelToolWheel) == 0x000610, "Member 'UWBP_CircularToolWheel_C::OnCancelToolWheel' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, OnToolTileBeTouchEnded) == 0x000620, "Member 'UWBP_CircularToolWheel_C::OnToolTileBeTouchEnded' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, InventoryUpdateQueued) == 0x000630, "Member 'UWBP_CircularToolWheel_C::InventoryUpdateQueued' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, EquipmentChangeQueued) == 0x000631, "Member 'UWBP_CircularToolWheel_C::EquipmentChangeQueued' has a wrong offset!");
static_assert(offsetof(UWBP_CircularToolWheel_C, AllowClickToSelect) == 0x000632, "Member 'UWBP_CircularToolWheel_C::AllowClickToSelect' has a wrong offset!");

}

