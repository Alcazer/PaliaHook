#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ToolTile_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "Palia_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ToolTile_CM.WBP_ToolTile_CM_C
// 0x00D8 (0x03C0 - 0x02E8)
class UWBP_ToolTile_CM_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HoverAnim;                                         // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_GamepadSelect;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonInputActionWidget_C*         WBP_CommonInputActionWidget;                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemSlot_CM_C*                     WBP_ItemSlot_CM;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolBacker_CM_C*                   WBP_ToolBacker_CM;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolItem_CM_C*                     WBP_ToolItem_CM;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         BagSlotIndex;                                      // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4CCA[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSecondaryClicked;                                // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bAllowDrag;                                        // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4CCB[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnToolClicked;                                     // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstanceDynamic*               DurabilityDynamicMaterial;                         // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               WaterDynamicMaterial;                              // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseEquippedToolAsSelected;                        // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4CCC[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnToolGamepadSelected;                             // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnToolGamepadCanceld;                              // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsGamepadSelected;                                 // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CCD[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Hold_Widget_Name;                                  // 0x0390(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnToolTileGamepadFocused;                          // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnToolTileTouchEnded;                              // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_ToolTile_CM_WBP_ItemSlot_CM_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot);
	void BndEvt__WBP_ToolTile_CM_WBP_ItemSlot_CM_K2Node_ComponentBoundEvent_12_OnRightClicked__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot);
	void BndEvt__WBP_ToolTile_CM_WBP_ItemSlot_CM_K2Node_ComponentBoundEvent_17_OnDragged__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot);
	void BndEvt__WBP_ToolTile_CM_WBP_ItemSlot_CM_K2Node_ComponentBoundEvent_18_OnItemDropped__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot, class UVALUI_ItemDragDrop* Operation);
	void BndEvt__WBP_ToolTile_CM_WBP_ItemSlot_CM_K2Node_ComponentBoundEvent_19_OnGlobalDragDetected__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot, class UVALUI_ItemDragDrop* Operation);
	void BndEvt__WBP_ToolTile_CM_WBP_ItemSlot_CM_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot);
	void BndEvt__WBP_ToolTile_CM_WBP_ItemSlot_CM_K2Node_ComponentBoundEvent_9_OnLeftClicked__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot);
	void CanSwapWithDragged(class UBP_ItemDrag_Inventory_C* Drag, bool* bCanSwap, class UPlayerInventoryComponent* CallFunc_GetInventory_Inventory, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsBagSlotLocationValid_ReturnValue, class UPlayerInventoryComponent* CallFunc_GetInventory_Inventory_1, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayTag& CallFunc_GetBagTypeForBagIndex_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void CanUpgradeWithDragged(class UBP_ItemDrag_Inventory_C* Drag, bool* CanUpgrade, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UItemUpgradeComponent* CallFunc_GetItemUpgradeComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerInventoryComponent* CallFunc_GetInventory_Inventory, bool CallFunc_IsSlotUpgradeKit_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FBagSlotLocation& CallFunc_GetBagSlotLocation_BagSlotLocation, bool CallFunc_CanUpgradeToolWithKit_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void Clear_Selected_Dragged_Item_In_Subsystem(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UVAL_GameUISubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class UDragDropOperation* CallFunc_GetDraggedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Construct();
	void Destruct();
	void Do_Gamepad_Cancel();
	void Do_Gamepad_Select();
	void ExecuteUbergraph_WBP_ToolTile_CM(int32 EntryPoint, int32 CallFunc_AkEventGlobal_ReturnValue, class UBP_ItemDrag_Inventory_C* CallFunc_CreateDragDropOperation_ReturnValue, const struct FBagSlotLocation& CallFunc_GetBagSlotLocation_BagSlotLocation, class UPlayerInventoryComponent* CallFunc_GetInventory_Inventory, const struct FBagSlotLocation& CallFunc_GetBagSlotLocation_BagSlotLocation_1, const struct FValeriaItem& CallFunc_GetItemAt_ReturnValue, class UWBP_ItemSlot_CM_C* K2Node_ComponentBoundEvent_Slot_6, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, struct FValeriaGameplaySettings& K2Node_CustomEvent_GameplaySettings, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_1, const struct FBagSlotLocation& CallFunc_GetBagSlotLocation_BagSlotLocation_2, class UEquipmentComponent* CallFunc_Get_Equipment_ReturnValue, const struct FEquipmentItem& CallFunc_GetEquippedItem_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_AreBagSlotsEqual_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FBagSlotLocation& CallFunc_GetBagSlotLocation_BagSlotLocation_3, class UPlayerInventoryComponent* CallFunc_GetInventory_Inventory_1, const struct FValeriaItem& CallFunc_GetItem_Item, bool CallFunc_HasItem_bHasItem, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasItem_bHasItem_1, bool CallFunc_SetTool_IsVisible, class UWBP_ItemSlot_CM_C* K2Node_ComponentBoundEvent_Slot_5, class UWBP_ItemSlot_CM_C* K2Node_ComponentBoundEvent_Slot_4, class UWBP_ItemSlot_CM_C* K2Node_ComponentBoundEvent_Slot_3, class UWBP_ItemSlot_CM_C* K2Node_ComponentBoundEvent_Slot_2, const struct FValeriaItem& CallFunc_GetItem_Item_1, const struct FValeriaItem& CallFunc_GetItem_Item_2, class UWBP_ItemSlot_CM_C* K2Node_ComponentBoundEvent_Slot_1, class UVALUI_ItemDragDrop* K2Node_ComponentBoundEvent_Operation_1, class UWBP_ItemSlot_CM_C* K2Node_ComponentBoundEvent_Slot, class UVALUI_ItemDragDrop* K2Node_ComponentBoundEvent_Operation, class UBP_ItemDrag_Inventory_C* K2Node_DynamicCast_AsBP_Item_Drag_Inventory, bool K2Node_DynamicCast_bSuccess, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_CanUpgradeWithDragged_CanUpgrade, class UWBP_DraggedItem_CM_C* CallFunc_Create_ReturnValue, bool CallFunc_HasItem_bHasItem_2, TDelegate<void(struct FValeriaGameplaySettings& GameplaySettings)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsSwitchPlatform_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, int32 CallFunc_AkEventGlobal_ReturnValue_2);
	class UEquipmentComponent* Get_Equipment(EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UEquipmentComponent* CallFunc_GetEquipment_ReturnValue);
	void Get_Item(struct FValeriaItem* Item, const struct FValeriaItem& CallFunc_GetItem_Item);
	void GetBagSlotLocation(struct FBagSlotLocation* BagSlotLocation, class UPlayerInventoryComponent* CallFunc_GetInventory_Inventory, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 CallFunc_GetBagIndexForGamePlayTag_ReturnValue, const struct FBagSlotLocation& K2Node_MakeStruct_BagSlotLocation);
	void GetInventory(class UPlayerInventoryComponent** Inventory, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue);
	void HandleDrop(class UObject* Object, class UBP_ItemDrag_Inventory_C* K2Node_DynamicCast_AsBP_Item_Drag_Inventory, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanUpgradeWithDragged_CanUpgrade, bool CallFunc_CanSwapWithDragged_bCanSwap, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UItemUpgradeComponent* CallFunc_GetItemUpgradeComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, const struct FBagSlotLocation& CallFunc_GetBagSlotLocation_BagSlotLocation, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_UpgradeToolWithKit_ReturnValue, const struct FBagSlotLocation& CallFunc_GetBagSlotLocation_BagSlotLocation_1);
	void HandleSettingsChanged(struct FValeriaGameplaySettings& GameplaySettings);
	void HasItem(bool* bHasItem, const struct FValeriaItem& CallFunc_GetItem_Item, bool CallFunc_ItemIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Hover(bool CallFunc_HasItem_bHasItem);
	void On_Gamepad_Selected(class UBP_ItemDrag_Inventory_C* CallFunc_CreateDragDropOperation_ReturnValue, class UPlayerInventoryComponent* CallFunc_GetInventory_Inventory, const struct FBagSlotLocation& CallFunc_GetBagSlotLocation_BagSlotLocation, bool CallFunc_HasItem_bHasItem, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UVAL_GameUISubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UDragDropOperation* CallFunc_GetDraggedItem_ReturnValue, class UVALUI_ItemDragDrop* K2Node_DynamicCast_AsVALUI_Item_Drag_Drop, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnSecondaryClicked__DelegateSignature(const struct FGeometry& My_Geometry, const struct FValeriaItem& Valeria_Item, const struct FBagSlotLocation& Bag_Slot_Location);
	void OnToolClicked__DelegateSignature(const struct FValeriaItem& Item);
	void OnToolGamepadCanceld__DelegateSignature();
	void OnToolGamepadSelected__DelegateSignature(class UWBP_ToolTile_CM_C* ToolTile);
	void OnToolTileGamepadFocused__DelegateSignature(class UWidget* FocusItem);
	void OnToolTileTouchEnded__DelegateSignature(class UWBP_ToolTile_CM_C* ToolTile);
	void Set_Gamepad_Selected(bool Selected, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
	void Set_Selected(bool bSelected);
	void Set_Use_Equipped_Tool_As_Selected(bool Param_bUseEquippedToolAsSelected);
	void SetAllowDrag(bool Param_bAllowDrag);
	void SetStyle(class UVALUI_ItemSlotStyle* ToolStyleOverride);
	void Unhover();
	void Update();
	void Update_Shortcut(const struct FValeriaItem& ValeriaItem, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, class UInputAction* CallFunc_GetInputActionForAnyTagFromItem_ReturnValue, bool CallFunc_IsValid_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ToolTile_CM_C">();
	}
	static class UWBP_ToolTile_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ToolTile_CM_C>();
	}
};
static_assert(alignof(UWBP_ToolTile_CM_C) == 0x000008, "Wrong alignment on UWBP_ToolTile_CM_C");
static_assert(sizeof(UWBP_ToolTile_CM_C) == 0x0003C0, "Wrong size on UWBP_ToolTile_CM_C");
static_assert(offsetof(UWBP_ToolTile_CM_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_ToolTile_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, HoverAnim) == 0x0002F0, "Member 'UWBP_ToolTile_CM_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, Image_GamepadSelect) == 0x0002F8, "Member 'UWBP_ToolTile_CM_C::Image_GamepadSelect' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, WBP_CommonInputActionWidget) == 0x000300, "Member 'UWBP_ToolTile_CM_C::WBP_CommonInputActionWidget' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, WBP_ItemSlot_CM) == 0x000308, "Member 'UWBP_ToolTile_CM_C::WBP_ItemSlot_CM' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, WBP_ToolBacker_CM) == 0x000310, "Member 'UWBP_ToolTile_CM_C::WBP_ToolBacker_CM' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, WBP_ToolItem_CM) == 0x000318, "Member 'UWBP_ToolTile_CM_C::WBP_ToolItem_CM' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, BagSlotIndex) == 0x000320, "Member 'UWBP_ToolTile_CM_C::BagSlotIndex' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, OnSecondaryClicked) == 0x000328, "Member 'UWBP_ToolTile_CM_C::OnSecondaryClicked' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, bAllowDrag) == 0x000338, "Member 'UWBP_ToolTile_CM_C::bAllowDrag' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, OnToolClicked) == 0x000340, "Member 'UWBP_ToolTile_CM_C::OnToolClicked' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, DurabilityDynamicMaterial) == 0x000350, "Member 'UWBP_ToolTile_CM_C::DurabilityDynamicMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, WaterDynamicMaterial) == 0x000358, "Member 'UWBP_ToolTile_CM_C::WaterDynamicMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, bUseEquippedToolAsSelected) == 0x000360, "Member 'UWBP_ToolTile_CM_C::bUseEquippedToolAsSelected' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, OnToolGamepadSelected) == 0x000368, "Member 'UWBP_ToolTile_CM_C::OnToolGamepadSelected' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, OnToolGamepadCanceld) == 0x000378, "Member 'UWBP_ToolTile_CM_C::OnToolGamepadCanceld' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, IsGamepadSelected) == 0x000388, "Member 'UWBP_ToolTile_CM_C::IsGamepadSelected' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, Hold_Widget_Name) == 0x000390, "Member 'UWBP_ToolTile_CM_C::Hold_Widget_Name' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, OnToolTileGamepadFocused) == 0x0003A0, "Member 'UWBP_ToolTile_CM_C::OnToolTileGamepadFocused' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTile_CM_C, OnToolTileTouchEnded) == 0x0003B0, "Member 'UWBP_ToolTile_CM_C::OnToolTileTouchEnded' has a wrong offset!");

}

