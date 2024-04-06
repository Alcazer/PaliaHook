#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharacterActionToolUse_Console

#include "Basic.hpp"

#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_CharacterActionToolUse_Console.WBP_CharacterActionToolUse_Console_C.BndEvt__WBP_CharacterActionToolUse_Console_Button_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_CharacterActionToolUse_Console_C_BndEvt__WBP_CharacterActionToolUse_Console_Button_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final 
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterActionToolUse_Console_C_BndEvt__WBP_CharacterActionToolUse_Console_Button_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_CharacterActionToolUse_Console_C_BndEvt__WBP_CharacterActionToolUse_Console_Button_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_CharacterActionToolUse_Console_C_BndEvt__WBP_CharacterActionToolUse_Console_Button_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_CharacterActionToolUse_Console_C_BndEvt__WBP_CharacterActionToolUse_Console_Button_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_BndEvt__WBP_CharacterActionToolUse_Console_Button_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_CharacterActionToolUse_Console_C_BndEvt__WBP_CharacterActionToolUse_Console_Button_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_CharacterActionToolUse_Console.WBP_CharacterActionToolUse_Console_C.ExecuteUbergraph_WBP_CharacterActionToolUse_Console
// 0x0158 (0x0158 - 0x0000)
struct WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EDF[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInventoryComponent*                    K2Node_CustomEvent_Inventory;                      // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaCharacter_OutResult;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EE0[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FValeriaItem                           CallFunc_GetEquippedItem_ReturnValue;              // 0x0030(0x0068)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaCharacter_OutResult_1;          // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EE1[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue_1;        // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEquipmentComponent*                    CallFunc_GetEquipment_ReturnValue;                 // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayerInventoryComponent*              CallFunc_GetInventory_ReturnValue;                 // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EE2[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEquipmentComponent*                    K2Node_CustomEvent_EquipmentComponent;             // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FEquipmentItem                         K2Node_CustomEvent_Item;                           // 0x00C8(0x0058)()
	TDelegate<void(class UEquipmentComponent* EquipmentComponent, const struct FEquipmentItem& Item)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0120(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ItemEquals_ReturnValue;                   // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EE3[0x2];                                     // 0x0132(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UInventoryComponent* Inventory)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0134(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EE4[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0150(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console) == 0x000008, "Wrong alignment on WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console");
static_assert(sizeof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console) == 0x000158, "Wrong size on WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, EntryPoint) == 0x000000, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, K2Node_CustomEvent_Inventory) == 0x000018, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::K2Node_CustomEvent_Inventory' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, CallFunc_GetValeriaCharacter_OutResult) == 0x000020, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::CallFunc_GetValeriaCharacter_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, CallFunc_GetValeriaCharacter_ReturnValue) == 0x000028, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::CallFunc_GetValeriaCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, CallFunc_GetEquippedItem_ReturnValue) == 0x000030, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::CallFunc_GetEquippedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, K2Node_SwitchEnum_CmpSuccess) == 0x000098, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, CallFunc_GetValeriaCharacter_OutResult_1) == 0x000099, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::CallFunc_GetValeriaCharacter_OutResult_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, CallFunc_GetValeriaCharacter_ReturnValue_1) == 0x0000A0, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::CallFunc_GetValeriaCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, CallFunc_GetEquipment_ReturnValue) == 0x0000A8, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::CallFunc_GetEquipment_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, CallFunc_GetInventory_ReturnValue) == 0x0000B0, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, K2Node_SwitchEnum_CmpSuccess_1) == 0x0000B8, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, K2Node_CustomEvent_EquipmentComponent) == 0x0000C0, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::K2Node_CustomEvent_EquipmentComponent' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, K2Node_CustomEvent_Item) == 0x0000C8, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, K2Node_CreateDelegate_OutputDelegate_1) == 0x000120, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000130, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, CallFunc_ItemEquals_ReturnValue) == 0x000131, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::CallFunc_ItemEquals_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, K2Node_CreateDelegate_OutputDelegate_2) == 0x000134, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, CallFunc_PlayAnimation_ReturnValue) == 0x000148, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console, K2Node_ComponentBoundEvent_Button) == 0x000150, "Member 'WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function WBP_CharacterActionToolUse_Console.WBP_CharacterActionToolUse_Console_C.HandleEquipmentChanged
// 0x0060 (0x0060 - 0x0000)
struct WBP_CharacterActionToolUse_Console_C_HandleEquipmentChanged final 
{
public:
	class UEquipmentComponent*                    EquipmentComponent;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FEquipmentItem                         Item;                                              // 0x0008(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CharacterActionToolUse_Console_C_HandleEquipmentChanged) == 0x000008, "Wrong alignment on WBP_CharacterActionToolUse_Console_C_HandleEquipmentChanged");
static_assert(sizeof(WBP_CharacterActionToolUse_Console_C_HandleEquipmentChanged) == 0x000060, "Wrong size on WBP_CharacterActionToolUse_Console_C_HandleEquipmentChanged");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_HandleEquipmentChanged, EquipmentComponent) == 0x000000, "Member 'WBP_CharacterActionToolUse_Console_C_HandleEquipmentChanged::EquipmentComponent' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_HandleEquipmentChanged, Item) == 0x000008, "Member 'WBP_CharacterActionToolUse_Console_C_HandleEquipmentChanged::Item' has a wrong offset!");

// Function WBP_CharacterActionToolUse_Console.WBP_CharacterActionToolUse_Console_C.HandleEquippedItemUpdate
// 0x0020 (0x0020 - 0x0000)
struct WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate final 
{
public:
	bool                                          CallFunc_SetTool_IsVisible;                        // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EE5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_ItemTypeDefinitionAsset*           K2Node_DynamicCast_AsItem_Type_Definition;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate) == 0x000008, "Wrong alignment on WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate");
static_assert(sizeof(WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate) == 0x000020, "Wrong size on WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate, CallFunc_SetTool_IsVisible) == 0x000000, "Member 'WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate::CallFunc_SetTool_IsVisible' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000008, "Member 'WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate, K2Node_DynamicCast_AsItem_Type_Definition) == 0x000010, "Member 'WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate::K2Node_DynamicCast_AsItem_Type_Definition' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_CharacterActionToolUse_Console.WBP_CharacterActionToolUse_Console_C.HandleOnChanged
// 0x0008 (0x0008 - 0x0000)
struct WBP_CharacterActionToolUse_Console_C_HandleOnChanged final 
{
public:
	class UInventoryComponent*                    Inventory;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterActionToolUse_Console_C_HandleOnChanged) == 0x000008, "Wrong alignment on WBP_CharacterActionToolUse_Console_C_HandleOnChanged");
static_assert(sizeof(WBP_CharacterActionToolUse_Console_C_HandleOnChanged) == 0x000008, "Wrong size on WBP_CharacterActionToolUse_Console_C_HandleOnChanged");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_HandleOnChanged, Inventory) == 0x000000, "Member 'WBP_CharacterActionToolUse_Console_C_HandleOnChanged::Inventory' has a wrong offset!");

// Function WBP_CharacterActionToolUse_Console.WBP_CharacterActionToolUse_Console_C.UpdateCurrentEquipped
// 0x0098 (0x0098 - 0x0000)
struct WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped final 
{
public:
	struct FBagSlotLocation                       InventorySlot;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	EValeriaFuncResult                            CallFunc_GetValeriaCharacter_OutResult;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EE6[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EE7[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerInventoryComponent*              CallFunc_GetInventory_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FValeriaItem                           CallFunc_GetItemAt_ReturnValue;                    // 0x0028(0x0068)()
	bool                                          CallFunc_ItemEquals_ReturnValue;                   // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped) == 0x000008, "Wrong alignment on WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped");
static_assert(sizeof(WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped) == 0x000098, "Wrong size on WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped, InventorySlot) == 0x000000, "Member 'WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped::InventorySlot' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped, CallFunc_GetValeriaCharacter_OutResult) == 0x000008, "Member 'WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped::CallFunc_GetValeriaCharacter_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped, CallFunc_GetValeriaCharacter_ReturnValue) == 0x000010, "Member 'WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped::CallFunc_GetValeriaCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped, CallFunc_GetInventory_ReturnValue) == 0x000020, "Member 'WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped, CallFunc_GetItemAt_ReturnValue) == 0x000028, "Member 'WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped::CallFunc_GetItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped, CallFunc_ItemEquals_ReturnValue) == 0x000090, "Member 'WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped::CallFunc_ItemEquals_ReturnValue' has a wrong offset!");

}

