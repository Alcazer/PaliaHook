#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InventorySlot_CM

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "Engine_structs.hpp"
#include "ValeriaUI_structs.hpp"
#include "Palia_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "S6Core_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InventorySlot_CM.WBP_InventorySlot_CM_C
// 0x0148 (0x03E8 - 0x02A0)
class UWBP_InventorySlot_CM_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hover;                                             // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   Border_Overflow;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_DestroyWarning;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ErrorBorder;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               InventorySlotSizeBox;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                            MenuAnchor_Tooltip;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_Hotkey;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Item_CM_C*                         WBP_Item_CM;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemSlot_CM_C*                     WBP_ItemSlot_CM;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnLeftClicked;                                     // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRightClicked;                                    // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UInventoryComponent*                    Inventory;                                         // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FBagSlotLocation                       SlotLocation;                                      // 0x0318(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn)
	bool                                          bDraggable;                                        // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_467A[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnGamepadSelect;                                   // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnGamepadCancel;                                   // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsSelected;                                        // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_467B[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnOpenActionMenu;                                  // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSlotFocused;                                     // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_ItemTooltip_C*                     ItemTooltip;                                       // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EVALUI_UISize                                 UiSize;                                            // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_467C[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EVALUI_UISize, struct FVector2D>         UISizeMap;                                         // 0x0380(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnContentChanged;                                  // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bQueuedInventoryUpdateForVisiblityChange;          // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSelfOrParentVisible;                            // 0x03E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bParentWidgetDoesntTriggerVisibleEvents;           // 0x03E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BindInventoryChanged();
	void BindInventoryVisibilityToggled();
	void BndEvt__WBP_InventorySlot_CM_WBP_ItemSlot_CM_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot);
	void BndEvt__WBP_InventorySlot_CM_WBP_ItemSlot_CM_K2Node_ComponentBoundEvent_11_OnUnhovered__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot);
	void BndEvt__WBP_InventorySlot_CM_WBP_ItemSlot_CM_K2Node_ComponentBoundEvent_1_OnItemDropped__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot, class UVALUI_ItemDragDrop* Operation);
	void BndEvt__WBP_InventorySlot_CM_WBP_ItemSlot_CM_K2Node_ComponentBoundEvent_3_OnLeftClicked__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot);
	void BndEvt__WBP_InventorySlot_CM_WBP_ItemSlot_CM_K2Node_ComponentBoundEvent_7_OnRightClicked__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot);
	void BndEvt__WBP_InventorySlot_CM_WBP_ItemSlot_CM_K2Node_ComponentBoundEvent_8_OnDragged__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot);
	void CanOpenTooltip(bool* CanOpen, const struct FValeriaItem& CallFunc_GetItem_Item, bool CallFunc_ItemIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void CloseTooltip();
	void Construct();
	void CustomEvent(class UWBP_InventorySlot_CM_C* Param_Slot);
	void Destruct();
	void ExecuteUbergraph_WBP_InventorySlot_CM(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class UVALUI_BorderStyle* Temp_object_Variable, class UVALUI_BorderStyle* Temp_object_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, TDelegate<void(class UWBP_InventorySlot_CM_C* Slot)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class UInventoryComponent* Inventory)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(class UCommonUserWidget* Widget, bool bIsVisible)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void(ESlateVisibility InVisibility)> K2Node_CreateDelegate_OutputDelegate_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsShiftDown__Result, uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FValeriaItem& CallFunc_GetItem_Item, bool CallFunc_ItemIsEmpty_ReturnValue, const struct FGameplayTag& CallFunc_GetBagType_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, class UVALUI_BorderStyle* K2Node_Select_Default, struct FValeriaGameplaySettings& K2Node_CustomEvent_GameplaySettings, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue_1, const struct FValeriaItem& CallFunc_GetItem_Item_1, bool CallFunc_ItemIsEmpty_ReturnValue_1, bool Temp_bool_Variable_3, class UWBP_DraggedItem_CM_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FValeriaItem& CallFunc_GetItem_Item_2, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_ItemIsEmpty_ReturnValue_2, TDelegate<void(struct FValeriaGameplaySettings& GameplaySettings)> K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_ShouldShowDestroyWarning_bShow, ESlateVisibility K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FValeriaItem& CallFunc_GetItem_Item_3, class UBP_ItemDrag_Inventory_C* CallFunc_CreateDragDropOperation_ReturnValue, bool CallFunc_ItemIsEmpty_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default_2, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_1, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_1, class UStorageComponent* CallFunc_GetStorage_ReturnValue, class UStorageComponent* CallFunc_GetStorage_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UVAL_GameUISubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, const struct FValeriaItem& CallFunc_GetItem_Item_4, bool CallFunc_ItemIsEmpty_ReturnValue_4, bool CallFunc_IsSelected_bSelected, bool CallFunc_IsSelected_bSelected_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, bool CallFunc_IsSelected_bSelected_2, bool K2Node_Event_IsDesignTime, class UWBP_ItemSlot_CM_C* K2Node_ComponentBoundEvent_Slot_5, class UVALUI_ItemDragDrop* K2Node_ComponentBoundEvent_Operation, bool CallFunc_HandleDrop_ReturnValue, class UWBP_ItemSlot_CM_C* K2Node_ComponentBoundEvent_Slot_4, class UWBP_ItemSlot_CM_C* K2Node_ComponentBoundEvent_Slot_3, class UWBP_ItemSlot_CM_C* K2Node_ComponentBoundEvent_Slot_2, class UWBP_ItemSlot_CM_C* K2Node_ComponentBoundEvent_Slot_1, class UWBP_ItemSlot_CM_C* K2Node_ComponentBoundEvent_Slot, bool CallFunc_ShouldShowHotkeyText_ShouldShow, class UWBP_InventorySlot_CM_C* K2Node_CustomEvent_Slot, const struct FValeriaItem& CallFunc_GetItem_Item_5, ESlateVisibility K2Node_Select_Default_3, int32 CallFunc_AkEventGlobal_ReturnValue, bool CallFunc_IsEmpty_bEmpty, class UInventoryComponent* K2Node_CustomEvent_Inventory, bool K2Node_Event_bIsShow, bool CallFunc_ShouldUpdateSlotFromEvent_UpdateNow, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonUserWidget* K2Node_CustomEvent_Widget, bool K2Node_CustomEvent_bIsVisible, class UVALUI_UIManagerWidgetBase* K2Node_DynamicCast_AsVALUI_UIManager_Widget_Base, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue_1, class UVALUI_UIManagerWidgetBase* K2Node_DynamicCast_AsVALUI_UIManager_Widget_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsChildOf_StandaloneInventory_FoundStandaloneInventory, bool CallFunc_Not_PreBool_ReturnValue_3, ESlateVisibility K2Node_CustomEvent_InVisibility);
	void GamepadCancel();
	void GamepadSelect();
	struct FGameplayTag GetBagType(const struct FGameplayTag& CallFunc_GetBagTypeForBagIndex_ReturnValue);
	void GetInventory(class UInventoryComponent** Param_Inventory);
	void GetItem(struct FValeriaItem* Item, const struct FValeriaItem& CallFunc_GetItemAt_ReturnValue);
	void GetItemAudioConfig(struct FValeriaItem& ValeriaItem, struct FItemAudioConfig* AudioConfig, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FItemAudioConfig& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	class UUserWidget* GetTooltipWidget();
	void HandleAccept();
	bool HandleDrop(class UVALUI_ItemDragDrop* Operation, class UBP_ItemDrag_Inventory_C* DragFromInventory, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_ItemDrag_Storage_C* K2Node_DynamicCast_AsBP_Item_Drag_Storage, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanAddItemTypeHere_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_ItemDrag_Inventory_C* K2Node_DynamicCast_AsBP_Item_Drag_Inventory, bool K2Node_DynamicCast_bSuccess_1, class UBP_ItemDrag_Gear_C* K2Node_DynamicCast_AsBP_Item_Drag_Gear, bool K2Node_DynamicCast_bSuccess_2, class UBP_ItemDrag_Storage_C* K2Node_DynamicCast_AsBP_Item_Drag_Storage_1, bool K2Node_DynamicCast_bSuccess_3, class UWidget* CallFunc_UnequipGear_Widget, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult_1, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue_1, const struct FValeriaItem& CallFunc_GetItemAt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_CanAddItemTypeHere_ReturnValue_1, EInventoryAmount Temp_byte_Variable, EInventoryAmount Temp_byte_Variable_1, bool Temp_bool_Variable, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_1, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_1, class UItemUpgradeComponent* CallFunc_GetItemUpgradeComponent_ReturnValue, bool CallFunc_UpgradeToolWithKit_ReturnValue, bool CallFunc_IsSlotUpgradeKit_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult_2, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_4, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult_3, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue_3, EInventoryAmount K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess_5);
	void HandleInventoryChanged(class UInventoryComponent* Param_Inventory);
	void HandleInventorySettingsChanged(struct FValeriaGameplaySettings& GameplaySettings);
	void HandleVisibilityToggled(ESlateVisibility InVisibility);
	void HandleWarpItem(const struct FValeriaItem& CallFunc_GetItem_Item, class UBP_ItemDrag_Inventory_C* CallFunc_CreateDragDropOperation_ReturnValue, bool CallFunc_ItemIsEmpty_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UVAL_GameUISubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class UDragDropOperation* CallFunc_GetDraggedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UVALUI_ItemDragDrop* K2Node_DynamicCast_AsVALUI_Item_Drag_Drop, bool K2Node_DynamicCast_bSuccess, class UBP_ItemDrag_Inventory_C* K2Node_DynamicCast_AsBP_Item_Drag_Inventory, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HandleDrop_ReturnValue);
	void InventoryChanged();
	void InventoryVisibilityToggled(class UCommonUserWidget* Widget, bool bIsVisible);
	void IsChildOf_StandaloneInventory(bool* FoundStandaloneInventory, class UObject* OuterObjectToCheck, class UObject* CallFunc_GetOuterObject_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1);
	void IsInActionBar(bool* bInActionBar, bool CallFunc_IsBagInActionBar_ReturnValue);
	void OnContentChanged__DelegateSignature(const struct FValeriaItem& Item, class UWBP_InventorySlot_CM_C* InventorySlot);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnGamepadCancel__DelegateSignature(class UWBP_InventorySlot_CM_C* Param_Slot);
	void OnGamepadSelect__DelegateSignature(class UWBP_InventorySlot_CM_C* Param_Slot);
	void OnLeftClicked__DelegateSignature(class UWBP_InventorySlot_CM_C* Param_Slot);
	void OnOpenActionMenu__DelegateSignature(class UWBP_InventorySlot_CM_C* Param_Slot);
	void OnRightClicked__DelegateSignature(class UWBP_InventorySlot_CM_C* Param_Slot);
	void OnSlotFocused__DelegateSignature(class UWidget* Param_Slot);
	void OpenActionMenu();
	void OpenTooltip(const struct FValeriaItem& CallFunc_GetItem_Item, bool CallFunc_ShouldShowDestroyWarning_bShow, bool CallFunc_CanOpenTooltip_CanOpen);
	void PlayClickSound(struct FValeriaItem& ValeriaItem, int32 CallFunc_AkEventGlobal_ReturnValue, const struct FItemAudioConfig& CallFunc_GetItemAudioConfig_AudioConfig, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_AkEventGlobal_ReturnValue_2);
	void PreConstruct(bool IsDesignTime);
	void SetDraggable(bool Param_bDraggable);
	void SetFaded();
	void SetSelected(bool bSelected, bool CallFunc_IsEmpty_bEmpty, const struct FValeriaItem& CallFunc_GetItem_Item, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetSlotStyle(class UVALUI_ItemSlotStyle* L_ActionSlotStyle, class UVALUI_ItemSlotStyle* L_DefaultSlotStyle, bool CallFunc_IsConsole_ReturnValue, bool CallFunc_IsDesktop_ReturnValue, bool CallFunc_IsInActionBar_bInActionBar);
	void SetSolid();
	void ShouldShowDestroyWarning(bool* bShow, const struct FGameplayTag& CallFunc_GetBagType_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ShouldShowHotkeyText(bool* ShouldShow, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, bool CallFunc_IsInActionBar_bInActionBar, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ShouldUpdateSlotFromEvent(bool* UpdateNow, bool CallFunc_IsVisible_ReturnValue);
	void ShowFocusTip(bool bIsShow);
	void UnbindInventoryChanged();
	void UnbindInventoryVisibilityToggled();
	void UpdateContent();
	void UpdateSize(const struct FVector2D& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void UpdateStyle();
	void UpdateTextStyle(bool IsHighlighted, class UVALUI_TextBlockStyle* TextBlockStyle, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsSelected_bSelected, bool CallFunc_BooleanOR_ReturnValue);
	void UpdateVisibilityAndContent(bool LocalIsVisible, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsSelfOrParentHidden_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);

	void IsEmpty(bool* bIsEmpty, bool CallFunc_IsEmpty_bEmpty) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InventorySlot_CM_C">();
	}
	static class UWBP_InventorySlot_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InventorySlot_CM_C>();
	}
};
static_assert(alignof(UWBP_InventorySlot_CM_C) == 0x000008, "Wrong alignment on UWBP_InventorySlot_CM_C");
static_assert(sizeof(UWBP_InventorySlot_CM_C) == 0x0003E8, "Wrong size on UWBP_InventorySlot_CM_C");
static_assert(offsetof(UWBP_InventorySlot_CM_C, UberGraphFrame) == 0x0002A0, "Member 'UWBP_InventorySlot_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, Hover) == 0x0002A8, "Member 'UWBP_InventorySlot_CM_C::Hover' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, Border_Overflow) == 0x0002B0, "Member 'UWBP_InventorySlot_CM_C::Border_Overflow' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, Image_DestroyWarning) == 0x0002B8, "Member 'UWBP_InventorySlot_CM_C::Image_DestroyWarning' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, Image_ErrorBorder) == 0x0002C0, "Member 'UWBP_InventorySlot_CM_C::Image_ErrorBorder' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, InventorySlotSizeBox) == 0x0002C8, "Member 'UWBP_InventorySlot_CM_C::InventorySlotSizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, MenuAnchor_Tooltip) == 0x0002D0, "Member 'UWBP_InventorySlot_CM_C::MenuAnchor_Tooltip' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, Text_Hotkey) == 0x0002D8, "Member 'UWBP_InventorySlot_CM_C::Text_Hotkey' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, WBP_Item_CM) == 0x0002E0, "Member 'UWBP_InventorySlot_CM_C::WBP_Item_CM' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, WBP_ItemSlot_CM) == 0x0002E8, "Member 'UWBP_InventorySlot_CM_C::WBP_ItemSlot_CM' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, OnLeftClicked) == 0x0002F0, "Member 'UWBP_InventorySlot_CM_C::OnLeftClicked' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, OnRightClicked) == 0x000300, "Member 'UWBP_InventorySlot_CM_C::OnRightClicked' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, Inventory) == 0x000310, "Member 'UWBP_InventorySlot_CM_C::Inventory' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, SlotLocation) == 0x000318, "Member 'UWBP_InventorySlot_CM_C::SlotLocation' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, bDraggable) == 0x000320, "Member 'UWBP_InventorySlot_CM_C::bDraggable' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, OnGamepadSelect) == 0x000328, "Member 'UWBP_InventorySlot_CM_C::OnGamepadSelect' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, OnGamepadCancel) == 0x000338, "Member 'UWBP_InventorySlot_CM_C::OnGamepadCancel' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, IsSelected) == 0x000348, "Member 'UWBP_InventorySlot_CM_C::IsSelected' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, OnOpenActionMenu) == 0x000350, "Member 'UWBP_InventorySlot_CM_C::OnOpenActionMenu' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, OnSlotFocused) == 0x000360, "Member 'UWBP_InventorySlot_CM_C::OnSlotFocused' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, ItemTooltip) == 0x000370, "Member 'UWBP_InventorySlot_CM_C::ItemTooltip' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, UiSize) == 0x000378, "Member 'UWBP_InventorySlot_CM_C::UiSize' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, UISizeMap) == 0x000380, "Member 'UWBP_InventorySlot_CM_C::UISizeMap' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, OnContentChanged) == 0x0003D0, "Member 'UWBP_InventorySlot_CM_C::OnContentChanged' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, bQueuedInventoryUpdateForVisiblityChange) == 0x0003E0, "Member 'UWBP_InventorySlot_CM_C::bQueuedInventoryUpdateForVisiblityChange' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, bIsSelfOrParentVisible) == 0x0003E1, "Member 'UWBP_InventorySlot_CM_C::bIsSelfOrParentVisible' has a wrong offset!");
static_assert(offsetof(UWBP_InventorySlot_CM_C, bParentWidgetDoesntTriggerVisibleEvents) == 0x0003E2, "Member 'UWBP_InventorySlot_CM_C::bParentWidgetDoesntTriggerVisibleEvents' has a wrong offset!");

}

