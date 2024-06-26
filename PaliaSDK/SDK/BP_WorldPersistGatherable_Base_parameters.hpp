#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WorldPersistGatherable_Base

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_WorldPersistGatherable_Base.BP_WorldPersistGatherable_Base_C.BPIE_GatherableGathered
// 0x0008 (0x0008 - 0x0000)
struct BP_WorldPersistGatherable_Base_C_BPIE_GatherableGathered final 
{
public:
	class AValeriaCharacter*                      GatheringCharacter;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldPersistGatherable_Base_C_BPIE_GatherableGathered) == 0x000008, "Wrong alignment on BP_WorldPersistGatherable_Base_C_BPIE_GatherableGathered");
static_assert(sizeof(BP_WorldPersistGatherable_Base_C_BPIE_GatherableGathered) == 0x000008, "Wrong size on BP_WorldPersistGatherable_Base_C_BPIE_GatherableGathered");
static_assert(offsetof(BP_WorldPersistGatherable_Base_C_BPIE_GatherableGathered, GatheringCharacter) == 0x000000, "Member 'BP_WorldPersistGatherable_Base_C_BPIE_GatherableGathered::GatheringCharacter' has a wrong offset!");

// Function BP_WorldPersistGatherable_Base.BP_WorldPersistGatherable_Base_C.ExecuteUbergraph_BP_WorldPersistGatherable_Base
// 0x0038 (0x0038 - 0x0000)
struct BP_WorldPersistGatherable_Base_C_ExecuteUbergraph_BP_WorldPersistGatherable_Base final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AE6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      K2Node_Event_GatheringCharacter;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           CallFunc_AkEventLocation_AkComponent;              // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventLocation_Playing_ID;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WorldPersistGatherable_Base_C_ExecuteUbergraph_BP_WorldPersistGatherable_Base) == 0x000008, "Wrong alignment on BP_WorldPersistGatherable_Base_C_ExecuteUbergraph_BP_WorldPersistGatherable_Base");
static_assert(sizeof(BP_WorldPersistGatherable_Base_C_ExecuteUbergraph_BP_WorldPersistGatherable_Base) == 0x000038, "Wrong size on BP_WorldPersistGatherable_Base_C_ExecuteUbergraph_BP_WorldPersistGatherable_Base");
static_assert(offsetof(BP_WorldPersistGatherable_Base_C_ExecuteUbergraph_BP_WorldPersistGatherable_Base, EntryPoint) == 0x000000, "Member 'BP_WorldPersistGatherable_Base_C_ExecuteUbergraph_BP_WorldPersistGatherable_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_WorldPersistGatherable_Base_C_ExecuteUbergraph_BP_WorldPersistGatherable_Base, K2Node_Event_GatheringCharacter) == 0x000008, "Member 'BP_WorldPersistGatherable_Base_C_ExecuteUbergraph_BP_WorldPersistGatherable_Base::K2Node_Event_GatheringCharacter' has a wrong offset!");
static_assert(offsetof(BP_WorldPersistGatherable_Base_C_ExecuteUbergraph_BP_WorldPersistGatherable_Base, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_WorldPersistGatherable_Base_C_ExecuteUbergraph_BP_WorldPersistGatherable_Base::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WorldPersistGatherable_Base_C_ExecuteUbergraph_BP_WorldPersistGatherable_Base, CallFunc_AkEventLocation_AkComponent) == 0x000028, "Member 'BP_WorldPersistGatherable_Base_C_ExecuteUbergraph_BP_WorldPersistGatherable_Base::CallFunc_AkEventLocation_AkComponent' has a wrong offset!");
static_assert(offsetof(BP_WorldPersistGatherable_Base_C_ExecuteUbergraph_BP_WorldPersistGatherable_Base, CallFunc_AkEventLocation_Playing_ID) == 0x000030, "Member 'BP_WorldPersistGatherable_Base_C_ExecuteUbergraph_BP_WorldPersistGatherable_Base::CallFunc_AkEventLocation_Playing_ID' has a wrong offset!");

}

