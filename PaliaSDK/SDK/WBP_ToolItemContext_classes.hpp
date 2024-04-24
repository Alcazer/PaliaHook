#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ToolItemContext

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "S6Core_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ToolItemContext.WBP_ToolItemContext_C
// 0x0098 (0x0358 - 0x02C0)
class UWBP_ToolItemContext_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ContextImage;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                ContextLabel;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FValeriaItem                           CurrentItem;                                       // 0x02D8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UVAL_ItemTypeDefinitionAsset*           CurrentItemType;                                   // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bFishingListenersBound;                            // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLauncherListenersBound;                           // 0x0341(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEquipmentListenersBound;                          // 0x0342(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInventoryListenersBound;                          // 0x0343(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_441A[0x4];                                     // 0x0344(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             UpdateContextData;                                 // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void UpdateContextData__DelegateSignature(const struct FValeriaItem& AmmoItem, bool bShowAmount, const struct FValeriaItem& ToolItem);
	void UnbindLauncherListeners();
	void UnbindInventoryListeners();
	void UnbindFishingListeners();
	void UnbindEquipmentListeners();
	void SetToLauncherTool(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FValeriaItem& CallFunc_GetSelectedLauncherAmmo_Ammo, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, TArray<struct FBagSlotLocation>& CallFunc_GetToolsForToolWheel_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FBagSlotLocation& CallFunc_Array_Get_Item, const struct FValeriaItem& CallFunc_GetItemAt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsCompatibleLauncher_bMatch, bool K2Node_SwitchEnum_CmpSuccess);
	void SetToLauncherAmmo(const struct FValeriaItem& CallFunc_GetSelectedLauncherAmmo_Ammo, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCompatibleLauncher_bMatch);
	void SetToFishingTool(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue, class UFishingComponent* CallFunc_GetFishing_ReturnValue, TArray<struct FBagSlotLocation>& CallFunc_GetToolsForToolWheel_ReturnValue, const struct FValeriaItem& CallFunc_GetSelectedBait_ReturnValue, const struct FBagSlotLocation& CallFunc_Array_Get_Item, const struct FValeriaItem& CallFunc_GetItemAt_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFishingRod_bMatch, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	void SetToFishingBait(EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFishingComponent* CallFunc_GetFishing_ReturnValue, const struct FValeriaItem& CallFunc_GetSelectedBait_ReturnValue);
	void SetItemIcon(const struct FValeriaItem& Item, bool bShowAmount, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ItemIsEmpty_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, bool Temp_bool_Variable_8, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, ERedirectsPlatform Temp_byte_Variable, bool K2Node_Select_Default);
	void SetItem(const struct FValeriaItem& Item, class UVAL_ItemTypeDefinitionAsset* ItemType);
	void Refresh(bool CallFunc_ItemIsEmpty_ReturnValue, bool CallFunc_IsFishingRod_bMatch, bool CallFunc_IsWateringCan_bMatch, bool CallFunc_IsHoe_bMatch, bool CallFunc_IsFishingBait_bMatch, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsAmmo_bMatch, bool CallFunc_IsLauncher_bMatch);
	void IsWateringCan(struct FValeriaItem& Item, bool* bMatch, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void IsLauncher(struct FValeriaItem& Item, bool* bMatch, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLauncher_ReturnValue);
	void IsHoe(struct FValeriaItem& Item, bool* bMatch, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void IsFishingRod(struct FValeriaItem& Item, bool* bMatch, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_FNameIsNone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void IsFishingBait(struct FValeriaItem& Item, bool* bMatch, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void IsCompatibleLauncher(struct FValeriaItem& Item, class UVAL_ItemTypeDefinitionAsset* AmmoType, bool* bMatch, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, const struct FLauncherConfig& CallFunc_GetLauncherConfig_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue);
	void IsAmmo(struct FValeriaItem& Item, bool* bMatch, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleSelectedNoBait();
	void HandleSelectedBait(const struct FValeriaItem& Bait);
	void HandleSelectedAmmo(const struct FValeriaItem& Ammo);
	void HandleInventoryChanged(class UInventoryComponent* Inventory);
	void HandleEquipmentChanged(class UEquipmentComponent* EquipmentComponent, const struct FEquipmentItem& Item);
	void GetSelectedLauncherAmmo(struct FValeriaItem* Ammo, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UProjectileFiringComponent* CallFunc_GetFiringComponent_ReturnValue, const struct FValeriaItem& CallFunc_GetSelectedAmmo_ReturnValue);
	void ExecuteUbergraph_WBP_ToolItemContext(int32 EntryPoint, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, const struct FValeriaItem& CallFunc_GetEquippedItem_ReturnValue, TDelegate<void(const struct FValeriaItem& Ammo)> K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(class UInventoryComponent* Inventory)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void(class UEquipmentComponent* EquipmentComponent, const struct FEquipmentItem& Item)> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void(const struct FValeriaItem& Bait)> K2Node_CreateDelegate_OutputDelegate_4, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_1, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_1, const struct FValeriaItem& K2Node_CustomEvent_Bait, class UFishingComponent* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_2, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_2, const struct FValeriaItem& K2Node_CustomEvent_Ammo, class UProjectileFiringComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_3, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_3, class UProjectileFiringComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_3, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_4, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_4, class UEquipmentComponent* CallFunc_GetEquipment_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_4, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_5, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_5, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_6, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_6, class UEquipmentComponent* CallFunc_GetEquipment_ReturnValue_1, class UFishingComponent* CallFunc_GetComponentByClass_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_5, bool K2Node_SwitchEnum_CmpSuccess_6, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_7, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_7, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_7, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_8, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_8, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_8, class UInventoryComponent* K2Node_CustomEvent_Inventory, class UEquipmentComponent* K2Node_CustomEvent_EquipmentComponent, const struct FEquipmentItem& K2Node_CustomEvent_Item);
	void BindLauncherListeners();
	void BindInventoryListeners();
	void BindFishingListeners();
	void BindEquipmentListeners();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ToolItemContext_C">();
	}
	static class UWBP_ToolItemContext_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ToolItemContext_C>();
	}
};
static_assert(alignof(UWBP_ToolItemContext_C) == 0x000008, "Wrong alignment on UWBP_ToolItemContext_C");
static_assert(sizeof(UWBP_ToolItemContext_C) == 0x000358, "Wrong size on UWBP_ToolItemContext_C");
static_assert(offsetof(UWBP_ToolItemContext_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_ToolItemContext_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItemContext_C, ContextImage) == 0x0002C8, "Member 'UWBP_ToolItemContext_C::ContextImage' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItemContext_C, ContextLabel) == 0x0002D0, "Member 'UWBP_ToolItemContext_C::ContextLabel' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItemContext_C, CurrentItem) == 0x0002D8, "Member 'UWBP_ToolItemContext_C::CurrentItem' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItemContext_C, CurrentItemType) == 0x000338, "Member 'UWBP_ToolItemContext_C::CurrentItemType' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItemContext_C, bFishingListenersBound) == 0x000340, "Member 'UWBP_ToolItemContext_C::bFishingListenersBound' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItemContext_C, bLauncherListenersBound) == 0x000341, "Member 'UWBP_ToolItemContext_C::bLauncherListenersBound' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItemContext_C, bEquipmentListenersBound) == 0x000342, "Member 'UWBP_ToolItemContext_C::bEquipmentListenersBound' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItemContext_C, bInventoryListenersBound) == 0x000343, "Member 'UWBP_ToolItemContext_C::bInventoryListenersBound' has a wrong offset!");
static_assert(offsetof(UWBP_ToolItemContext_C, UpdateContextData) == 0x000348, "Member 'UWBP_ToolItemContext_C::UpdateContextData' has a wrong offset!");

}

