#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Bow_EquipView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_EquipViewActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Bow_EquipView.BP_Bow_EquipView_C
// 0x0038 (0x02E8 - 0x02B0)
class ABP_Bow_EquipView_C final  : public ABP_EquipViewActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAbilityAnimationComponent*             AbilityAnimation;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_DummyArrowAttachment_C*             DummyArrowAttachment;                              // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           AK;                                                // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsArrowVisible;                                    // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1E[0x3];                                     // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Socket_Name;                                       // 0x02DC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Bow_EquipView(int32 EntryPoint, TDelegate<void(class UInventoryComponent* Inventory)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, EEndPlayReason K2Node_Event_EndPlayReason, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_DummyArrowAttachment_C* CallFunc_FinishSpawningActor_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UProjectileFiringComponent* CallFunc_GetFiringComponent_ReturnValue, class UEquipmentComponent* CallFunc_GetEquipment_ReturnValue, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue, class UInventoryComponent* K2Node_CustomEvent_Inventory, class AActor* CallFunc_GetOwner_ReturnValue_1, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character_1, bool K2Node_DynamicCast_bSuccess_1, class UProjectileFiringComponent* CallFunc_GetFiringComponent_ReturnValue_1, class UEquipmentComponent* CallFunc_GetEquipment_ReturnValue_1, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue_1, TDelegate<void(class UEquipmentComponent* EquipmentComponent, const struct FEquipmentItem& Item)> K2Node_CreateDelegate_OutputDelegate_1, const struct FValeriaItem& K2Node_CustomEvent_Ammo, TDelegate<void(class UEquipmentComponent* EquipmentComponent, bool bHidden)> K2Node_CreateDelegate_OutputDelegate_2, class UEquipmentComponent* K2Node_CustomEvent_EquipmentComponent_1, bool K2Node_CustomEvent_bHidden, class UEquipmentComponent* K2Node_CustomEvent_EquipmentComponent, const struct FEquipmentItem& K2Node_CustomEvent_Item, TDelegate<void(const struct FValeriaItem& Ammo)> K2Node_CreateDelegate_OutputDelegate_3, const struct FEquipmentItem& CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Get_Arrow_Ak(class UAkComponent** Param_AK, class AActor* CallFunc_GetOwner_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AkGetComponent_ComponentCreated, class UAkComponent* CallFunc_AkGetComponent_AkComponent);
	void HandleEquipmentChanged(class UEquipmentComponent* EquipmentComponent, const struct FEquipmentItem& Item);
	void HandleInventoryChanged(class UInventoryComponent* Inventory);
	void HandleSelectedAmmo(const struct FValeriaItem& Ammo);
	void HandleVisibilityChanged(class UEquipmentComponent* EquipmentComponent, bool Param_bHidden);
	void HideDummyArrow();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ShowDummyArrow();
	void UpdateArrowVisuals(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UAkComponent* CallFunc_Get_Arrow_Ak_Ak, class UAkComponent* CallFunc_Get_Arrow_Ak_Ak_1, class AActor* CallFunc_GetOwner_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UProjectileFiringComponent* CallFunc_GetFiringComponent_ReturnValue, class UVAL_ItemTypeDefinitionAsset* CallFunc_GEtSelectedAmmoType_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess_1, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface_1, bool K2Node_DynamicCast_bSuccess_2, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_2, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_3, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_3, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess_4, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_4, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasUsableAmmoEquipped_ReturnValue);
	void UpdateDummyArrowVisibility(bool bNewHidden);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Bow_EquipView_C">();
	}
	static class ABP_Bow_EquipView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Bow_EquipView_C>();
	}
};
static_assert(alignof(ABP_Bow_EquipView_C) == 0x000008, "Wrong alignment on ABP_Bow_EquipView_C");
static_assert(sizeof(ABP_Bow_EquipView_C) == 0x0002E8, "Wrong size on ABP_Bow_EquipView_C");
static_assert(offsetof(ABP_Bow_EquipView_C, UberGraphFrame) == 0x0002B0, "Member 'ABP_Bow_EquipView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Bow_EquipView_C, AbilityAnimation) == 0x0002B8, "Member 'ABP_Bow_EquipView_C::AbilityAnimation' has a wrong offset!");
static_assert(offsetof(ABP_Bow_EquipView_C, SkeletalMesh) == 0x0002C0, "Member 'ABP_Bow_EquipView_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_Bow_EquipView_C, DummyArrowAttachment) == 0x0002C8, "Member 'ABP_Bow_EquipView_C::DummyArrowAttachment' has a wrong offset!");
static_assert(offsetof(ABP_Bow_EquipView_C, AK) == 0x0002D0, "Member 'ABP_Bow_EquipView_C::AK' has a wrong offset!");
static_assert(offsetof(ABP_Bow_EquipView_C, IsArrowVisible) == 0x0002D8, "Member 'ABP_Bow_EquipView_C::IsArrowVisible' has a wrong offset!");
static_assert(offsetof(ABP_Bow_EquipView_C, Socket_Name) == 0x0002DC, "Member 'ABP_Bow_EquipView_C::Socket_Name' has a wrong offset!");

}

