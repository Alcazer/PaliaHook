#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlateWidgetComponent

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PlateWidgetComponent.BP_PlateWidgetComponent_C.CheckWidgetCreation
// 0x0028 (0x0028 - 0x0000)
struct BP_PlateWidgetComponent_C_CheckWidgetCreation final 
{
public:
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4545[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4546[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue_1;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlateWidgetComponent_C_CheckWidgetCreation) == 0x000008, "Wrong alignment on BP_PlateWidgetComponent_C_CheckWidgetCreation");
static_assert(sizeof(BP_PlateWidgetComponent_C_CheckWidgetCreation) == 0x000028, "Wrong size on BP_PlateWidgetComponent_C_CheckWidgetCreation");
static_assert(offsetof(BP_PlateWidgetComponent_C_CheckWidgetCreation, CallFunc_GetGameInstance_ReturnValue) == 0x000000, "Member 'BP_PlateWidgetComponent_C_CheckWidgetCreation::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateWidgetComponent_C_CheckWidgetCreation, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_PlateWidgetComponent_C_CheckWidgetCreation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateWidgetComponent_C_CheckWidgetCreation, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000010, "Member 'BP_PlateWidgetComponent_C_CheckWidgetCreation::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateWidgetComponent_C_CheckWidgetCreation, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'BP_PlateWidgetComponent_C_CheckWidgetCreation::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlateWidgetComponent_C_CheckWidgetCreation, CallFunc_GetUserWidgetObject_ReturnValue_1) == 0x000020, "Member 'BP_PlateWidgetComponent_C_CheckWidgetCreation::CallFunc_GetUserWidgetObject_ReturnValue_1' has a wrong offset!");

// Function BP_PlateWidgetComponent.BP_PlateWidgetComponent_C.ExecuteUbergraph_BP_PlateWidgetComponent
// 0x0028 (0x0028 - 0x0000)
struct BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DisableIfServer_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4547[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4548[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsVisibleToPlayer_IsVisible;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4549[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent) == 0x000008, "Wrong alignment on BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent");
static_assert(sizeof(BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent) == 0x000028, "Wrong size on BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent");
static_assert(offsetof(BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent, EntryPoint) == 0x000000, "Member 'BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent, CallFunc_DisableIfServer_ReturnValue) == 0x000005, "Member 'BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent::CallFunc_DisableIfServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000018, "Member 'BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent, CallFunc_GetIsVisibleToPlayer_IsVisible) == 0x000020, "Member 'BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent::CallFunc_GetIsVisibleToPlayer_IsVisible' has a wrong offset!");
static_assert(offsetof(BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent, CallFunc_Delay_Duration_ImplicitCast) == 0x000024, "Member 'BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function BP_PlateWidgetComponent.BP_PlateWidgetComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PlateWidgetComponent_C_ReceiveTick final 
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlateWidgetComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PlateWidgetComponent_C_ReceiveTick");
static_assert(sizeof(BP_PlateWidgetComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_PlateWidgetComponent_C_ReceiveTick");
static_assert(offsetof(BP_PlateWidgetComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PlateWidgetComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PlateWidgetComponent.BP_PlateWidgetComponent_C.SetShouldPlateBeVisible
// 0x0004 (0x0004 - 0x0000)
struct BP_PlateWidgetComponent_C_SetShouldPlateBeVisible final 
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlateWidgetComponent_C_SetShouldPlateBeVisible) == 0x000001, "Wrong alignment on BP_PlateWidgetComponent_C_SetShouldPlateBeVisible");
static_assert(sizeof(BP_PlateWidgetComponent_C_SetShouldPlateBeVisible) == 0x000004, "Wrong size on BP_PlateWidgetComponent_C_SetShouldPlateBeVisible");
static_assert(offsetof(BP_PlateWidgetComponent_C_SetShouldPlateBeVisible, Param_IsVisible) == 0x000000, "Member 'BP_PlateWidgetComponent_C_SetShouldPlateBeVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(BP_PlateWidgetComponent_C_SetShouldPlateBeVisible, CallFunc_IsDedicatedServer_ReturnValue) == 0x000001, "Member 'BP_PlateWidgetComponent_C_SetShouldPlateBeVisible::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateWidgetComponent_C_SetShouldPlateBeVisible, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'BP_PlateWidgetComponent_C_SetShouldPlateBeVisible::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateWidgetComponent_C_SetShouldPlateBeVisible, CallFunc_BooleanAND_ReturnValue) == 0x000003, "Member 'BP_PlateWidgetComponent_C_SetShouldPlateBeVisible::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_PlateWidgetComponent.BP_PlateWidgetComponent_C.ShouldPlateBeVisible
// 0x0002 (0x0002 - 0x0000)
struct BP_PlateWidgetComponent_C_ShouldPlateBeVisible final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldPlateBeVisible_ReturnValue;         // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlateWidgetComponent_C_ShouldPlateBeVisible) == 0x000001, "Wrong alignment on BP_PlateWidgetComponent_C_ShouldPlateBeVisible");
static_assert(sizeof(BP_PlateWidgetComponent_C_ShouldPlateBeVisible) == 0x000002, "Wrong size on BP_PlateWidgetComponent_C_ShouldPlateBeVisible");
static_assert(offsetof(BP_PlateWidgetComponent_C_ShouldPlateBeVisible, ReturnValue) == 0x000000, "Member 'BP_PlateWidgetComponent_C_ShouldPlateBeVisible::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlateWidgetComponent_C_ShouldPlateBeVisible, CallFunc_ShouldPlateBeVisible_ReturnValue) == 0x000001, "Member 'BP_PlateWidgetComponent_C_ShouldPlateBeVisible::CallFunc_ShouldPlateBeVisible_ReturnValue' has a wrong offset!");

}

