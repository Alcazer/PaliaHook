#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InventoryBag_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "ValeriaUI_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InventoryBag_CM.WBP_InventoryBag_CM_C
// 0x0180 (0x0468 - 0x02E8)
class UWBP_InventoryBag_CM_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               ActionBarIndexSizeBox;                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   Border_ActionBar;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                InventoryOverflowing_TextBlock;                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   InventoryOverflowingAnchor;                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Bag;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_ActionBarIndex;                               // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      UGrid_Slots;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryComponent*                    Inventory;                                         // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         LocalBagIndex;                                     // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         BagIndex;                                          // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 SlotType;                                          // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSlotLeftClicked;                                 // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSlotRightClicked;                                // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         MaxSlotsPerRow;                                    // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bSlotsDraggable;                                   // 0x0364(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5773[0x3];                                     // 0x0365(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                Slot_Padding;                                      // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnSlotGamepadSelect;                               // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSlotGamepadCancel;                               // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnOpenActionMenu;                                  // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSlotFocused;                                     // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_InventorySlot_CM_C*                FirstInventorySlot;                                // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EVALUI_UISize                                 UiSize;                                            // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          HideActionBarIndex;                                // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5774[0x6];                                     // 0x03C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EVALUI_UISize, double>                   InventorySlotSideMarginSizeMap;                    // 0x03C8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EVALUI_UISize, struct FMargin>           GridOverlayBaseMarginSizeMap;                      // 0x0418(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnSlotFocused__DelegateSignature(class UWidget* Widget);
	void OnOpenActionMenu__DelegateSignature(class UWBP_InventorySlot_CM_C* Param_Slot);
	void OnSlotGamepadSelect__DelegateSignature(class UWBP_InventorySlot_CM_C* Param_Slot, class UWBP_InventoryBag_CM_C* Bag);
	void OnSlotGamepadCancel__DelegateSignature(class UWBP_InventorySlot_CM_C* Param_Slot, class UWBP_InventoryBag_CM_C* Bag);
	void OnSlotLeftClicked__DelegateSignature(class UWBP_InventoryBag_CM_C* Bag, class UWBP_InventorySlot_CM_C* Param_Slot);
	void OnSlotRightClicked__DelegateSignature(class UWBP_InventoryBag_CM_C* Bag, class UWBP_InventorySlot_CM_C* Param_Slot);
	void Construct();
	void Destruct();
	void DetermineInventorySlotPadding(class UWBP_InventorySlot_CM_C* InventorySlot, int32 RowIndex, struct FMargin* Param_Padding, double SidePadding, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_4, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast_3, double CallFunc_Add_DoubleDouble_A_ImplicitCast_4, float K2Node_MakeStruct_Right_ImplicitCast, float K2Node_MakeStruct_Bottom_ImplicitCast, float K2Node_MakeStruct_Right_ImplicitCast_1, float K2Node_MakeStruct_Left_ImplicitCast, float K2Node_MakeStruct_Left_ImplicitCast_1);
	void ExecuteUbergraph_WBP_InventoryBag_CM(int32 EntryPoint, TDelegate<void(class UWBP_InventorySlot_CM_C* Slot)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class UWBP_InventorySlot_CM_C* Slot)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(class UWBP_InventorySlot_CM_C* Slot)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void(class UWBP_InventorySlot_CM_C* Slot)> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void(class UWBP_InventorySlot_CM_C* Slot)> K2Node_CreateDelegate_OutputDelegate_4, TDelegate<void(class UWidget* Slot)> K2Node_CreateDelegate_OutputDelegate_5, class UPanelSlot* CallFunc_GetContentSlot_ReturnValue, bool CallFunc_IsBagInActionBar_ReturnValue, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess, class UVALUI_BorderStyle* CallFunc_GetDesiredBorderStyle_BorderStyle, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, struct FValeriaGameplaySettings& K2Node_CustomEvent_GameplaySettings, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_1, TDelegate<void(class UInventoryComponent* Inventory)> K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_Variable, class UWBP_InventorySlot_CM_C* CallFunc_Create_ReturnValue, ESlateVisibility Temp_byte_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, int32 Temp_int_Variable, const struct FBagSlotLocation& K2Node_MakeStruct_BagSlotLocation, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, const struct FMargin& CallFunc_DetermineInventorySlotPadding_Padding, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UInventoryComponent* K2Node_CustomEvent_Inventory, int32 CallFunc_GetTotalMaxSlotsInBag_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FGameplayTag& CallFunc_GetBagType_Type, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class UWBP_InventorySlot_CM_C* K2Node_CustomEvent_Slot_5, class UWBP_InventorySlot_CM_C* K2Node_CustomEvent_Slot_4, ESlateVisibility Temp_byte_Variable_1, class UWBP_InventorySlot_CM_C* K2Node_CustomEvent_Slot_3, class UWBP_InventorySlot_CM_C* K2Node_CustomEvent_Slot_2, class UWBP_InventorySlot_CM_C* K2Node_CustomEvent_Slot_1, class UWidget* K2Node_CustomEvent_Slot, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default, TDelegate<void(struct FValeriaGameplaySettings& GameplaySettings)> K2Node_CreateDelegate_OutputDelegate_7, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_IsValid_ReturnValue, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, ESlateVisibility K2Node_Select_Default_1, const struct FMargin& CallFunc_GetGridOverlayPadding_Padding, bool K2Node_Event_IsDesignTime, bool CallFunc_IsConsole_ReturnValue);
	void GetAllSlots(TArray<class UWBP_InventorySlot_CM_C*>* Slots, const TArray<class UWBP_InventorySlot_CM_C*>& Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_InventorySlot_CM_C* K2Node_DynamicCast_AsWBP_Inventory_Slot_CM, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
	void GetBagType(struct FGameplayTag* Type, const struct FGameplayTag& CallFunc_GetBagTypeForBagIndex_ReturnValue);
	void GetDesiredBorderStyle(bool bIsShowStyle, class UVALUI_BorderStyle** BorderStyle, class UVALUI_BorderStyle* OutStyle, TSoftObjectPtr<class UVALUI_BorderStyle> L_ActionSlotBorderStyle_Console, TSoftObjectPtr<class UVALUI_BorderStyle> L_ActionSlotBorderStyle, bool CallFunc_IsDesktop_ReturnValue, bool CallFunc_IsConsole_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVALUI_BorderStyle* K2Node_DynamicCast_AsVALUI_Border_Style, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UVALUI_BorderStyle* K2Node_DynamicCast_AsVALUI_Border_Style_1, bool K2Node_DynamicCast_bSuccess_1);
	void GetFirstInventorySlot(class UWBP_InventorySlot_CM_C** FirstSlot);
	void GetGridOverlayPadding(struct FMargin* Param_Padding, const struct FMargin& CurrentPadding, double AdditionalRightPadding, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_Right_ImplicitCast);
	void GetSlotsForBorderNavigationType(EUINavigation Param_Navigation, TArray<class UWBP_InventorySlot_CM_C*>* InventorySlots, const TArray<class UWBP_InventorySlot_CM_C*>& ValidInventorySlots, int32 CurrentRow, int32 NumSlots, int32 NumRows, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_InventorySlot_CM_C* K2Node_DynamicCast_AsWBP_Inventory_Slot_CM, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class UWBP_InventorySlot_CM_C* K2Node_DynamicCast_AsWBP_Inventory_Slot_CM_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_2, class UWBP_InventorySlot_CM_C* K2Node_DynamicCast_AsWBP_Inventory_Slot_CM_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class UWidget* CallFunc_GetChildAt_ReturnValue_3, class UWBP_InventorySlot_CM_C* K2Node_DynamicCast_AsWBP_Inventory_Slot_CM_3, bool K2Node_DynamicCast_bSuccess_3, int32 Temp_int_Variable_1, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Percent_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Divide_IntInt_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue);
	void HandleInventorySettingsChanged(struct FValeriaGameplaySettings& GameplaySettings);
	void HandleOpenActionMenu(class UWBP_InventorySlot_CM_C* Param_Slot);
	void HandleSlotFocused(class UWidget* Param_Slot);
	void HandleSlotGamepadCancel(class UWBP_InventorySlot_CM_C* Param_Slot);
	void HandleSlotGamepadSelect(class UWBP_InventorySlot_CM_C* Param_Slot);
	void HandleSlotLeftClicked(class UWBP_InventorySlot_CM_C* Param_Slot);
	void HandleSlotRightClicked(class UWBP_InventorySlot_CM_C* Param_Slot);
	void PreConstruct(bool IsDesignTime);
	void RecreateSlots(class UInventoryComponent* Param_Inventory);
	void UpdateStyle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InventoryBag_CM_C">();
	}
	static class UWBP_InventoryBag_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InventoryBag_CM_C>();
	}
};
static_assert(alignof(UWBP_InventoryBag_CM_C) == 0x000008, "Wrong alignment on UWBP_InventoryBag_CM_C");
static_assert(sizeof(UWBP_InventoryBag_CM_C) == 0x000468, "Wrong size on UWBP_InventoryBag_CM_C");
static_assert(offsetof(UWBP_InventoryBag_CM_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_InventoryBag_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, ActionBarIndexSizeBox) == 0x0002F0, "Member 'UWBP_InventoryBag_CM_C::ActionBarIndexSizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, Border_ActionBar) == 0x0002F8, "Member 'UWBP_InventoryBag_CM_C::Border_ActionBar' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, InventoryOverflowing_TextBlock) == 0x000300, "Member 'UWBP_InventoryBag_CM_C::InventoryOverflowing_TextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, InventoryOverflowingAnchor) == 0x000308, "Member 'UWBP_InventoryBag_CM_C::InventoryOverflowingAnchor' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, SizeBox_Bag) == 0x000310, "Member 'UWBP_InventoryBag_CM_C::SizeBox_Bag' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, Text_ActionBarIndex) == 0x000318, "Member 'UWBP_InventoryBag_CM_C::Text_ActionBarIndex' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, UGrid_Slots) == 0x000320, "Member 'UWBP_InventoryBag_CM_C::UGrid_Slots' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, Inventory) == 0x000328, "Member 'UWBP_InventoryBag_CM_C::Inventory' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, LocalBagIndex) == 0x000330, "Member 'UWBP_InventoryBag_CM_C::LocalBagIndex' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, BagIndex) == 0x000334, "Member 'UWBP_InventoryBag_CM_C::BagIndex' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, SlotType) == 0x000338, "Member 'UWBP_InventoryBag_CM_C::SlotType' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, OnSlotLeftClicked) == 0x000340, "Member 'UWBP_InventoryBag_CM_C::OnSlotLeftClicked' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, OnSlotRightClicked) == 0x000350, "Member 'UWBP_InventoryBag_CM_C::OnSlotRightClicked' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, MaxSlotsPerRow) == 0x000360, "Member 'UWBP_InventoryBag_CM_C::MaxSlotsPerRow' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, bSlotsDraggable) == 0x000364, "Member 'UWBP_InventoryBag_CM_C::bSlotsDraggable' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, Slot_Padding) == 0x000368, "Member 'UWBP_InventoryBag_CM_C::Slot_Padding' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, OnSlotGamepadSelect) == 0x000378, "Member 'UWBP_InventoryBag_CM_C::OnSlotGamepadSelect' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, OnSlotGamepadCancel) == 0x000388, "Member 'UWBP_InventoryBag_CM_C::OnSlotGamepadCancel' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, OnOpenActionMenu) == 0x000398, "Member 'UWBP_InventoryBag_CM_C::OnOpenActionMenu' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, OnSlotFocused) == 0x0003A8, "Member 'UWBP_InventoryBag_CM_C::OnSlotFocused' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, FirstInventorySlot) == 0x0003B8, "Member 'UWBP_InventoryBag_CM_C::FirstInventorySlot' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, UiSize) == 0x0003C0, "Member 'UWBP_InventoryBag_CM_C::UiSize' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, HideActionBarIndex) == 0x0003C1, "Member 'UWBP_InventoryBag_CM_C::HideActionBarIndex' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, InventorySlotSideMarginSizeMap) == 0x0003C8, "Member 'UWBP_InventoryBag_CM_C::InventorySlotSideMarginSizeMap' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryBag_CM_C, GridOverlayBaseMarginSizeMap) == 0x000418, "Member 'UWBP_InventoryBag_CM_C::GridOverlayBaseMarginSizeMap' has a wrong offset!");

}

