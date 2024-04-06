#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Comp_CV_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Comp_CV_Parent.Comp_CV_Parent_C.ExecuteUbergraph_Comp_CV_Parent
// 0x0180 (0x0180 - 0x0000)
struct Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B61[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_GetAttachParent_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OverlappedComponent_1;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor_1;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherComp_1;                    // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_OtherBodyIndex_1;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bFromSweep;                     // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B62[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_CustomEvent_SweepResult;                    // 0x0030(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_DynamicCast_AsPrimitive_Component;          // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B63[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_CustomEvent_OverlappedComponent;            // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor;                     // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherComp;                      // 0x0138(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_OtherBodyIndex;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)> K2Node_CreateDelegate_OutputDelegate;              // 0x0144(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B64[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_GetAttachParent_ReturnValue_1;            // 0x0158(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_DynamicCast_AsPrimitive_Component_1;        // 0x0160(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B65[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x016C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent) == 0x000008, "Wrong alignment on Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent");
static_assert(sizeof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent) == 0x000180, "Wrong size on Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, EntryPoint) == 0x000000, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, CallFunc_GetAttachParent_ReturnValue) == 0x000008, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::CallFunc_GetAttachParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, K2Node_CustomEvent_OverlappedComponent_1) == 0x000010, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::K2Node_CustomEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, K2Node_CustomEvent_OtherActor_1) == 0x000018, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::K2Node_CustomEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, K2Node_CustomEvent_OtherComp_1) == 0x000020, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::K2Node_CustomEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, K2Node_CustomEvent_OtherBodyIndex_1) == 0x000028, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::K2Node_CustomEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, K2Node_CustomEvent_bFromSweep) == 0x00002C, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::K2Node_CustomEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, K2Node_CustomEvent_SweepResult) == 0x000030, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::K2Node_CustomEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, K2Node_DynamicCast_AsPrimitive_Component) == 0x000118, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::K2Node_DynamicCast_AsPrimitive_Component' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, K2Node_DynamicCast_bSuccess) == 0x000120, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, K2Node_CustomEvent_OverlappedComponent) == 0x000128, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::K2Node_CustomEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, K2Node_CustomEvent_OtherActor) == 0x000130, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, K2Node_CustomEvent_OtherComp) == 0x000138, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::K2Node_CustomEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, K2Node_CustomEvent_OtherBodyIndex) == 0x000140, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::K2Node_CustomEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, K2Node_CreateDelegate_OutputDelegate) == 0x000144, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, K2Node_Event_EndPlayReason) == 0x000154, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, CallFunc_GetAttachParent_ReturnValue_1) == 0x000158, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::CallFunc_GetAttachParent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, K2Node_DynamicCast_AsPrimitive_Component_1) == 0x000160, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::K2Node_DynamicCast_AsPrimitive_Component_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, K2Node_DynamicCast_bSuccess_1) == 0x000168, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent, K2Node_CreateDelegate_OutputDelegate_1) == 0x00016C, "Member 'Comp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function Comp_CV_Parent.Comp_CV_Parent_C.OverlapBegin
// 0x0108 (0x0108 - 0x0000)
struct Comp_CV_Parent_C_OverlapBegin final 
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B66[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Comp_CV_Parent_C_OverlapBegin) == 0x000008, "Wrong alignment on Comp_CV_Parent_C_OverlapBegin");
static_assert(sizeof(Comp_CV_Parent_C_OverlapBegin) == 0x000108, "Wrong size on Comp_CV_Parent_C_OverlapBegin");
static_assert(offsetof(Comp_CV_Parent_C_OverlapBegin, OverlappedComponent) == 0x000000, "Member 'Comp_CV_Parent_C_OverlapBegin::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_OverlapBegin, OtherActor) == 0x000008, "Member 'Comp_CV_Parent_C_OverlapBegin::OtherActor' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_OverlapBegin, OtherComp) == 0x000010, "Member 'Comp_CV_Parent_C_OverlapBegin::OtherComp' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_OverlapBegin, OtherBodyIndex) == 0x000018, "Member 'Comp_CV_Parent_C_OverlapBegin::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_OverlapBegin, bFromSweep) == 0x00001C, "Member 'Comp_CV_Parent_C_OverlapBegin::bFromSweep' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_OverlapBegin, SweepResult) == 0x000020, "Member 'Comp_CV_Parent_C_OverlapBegin::SweepResult' has a wrong offset!");

// Function Comp_CV_Parent.Comp_CV_Parent_C.OverlapEnd
// 0x0020 (0x0020 - 0x0000)
struct Comp_CV_Parent_C_OverlapEnd final 
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Comp_CV_Parent_C_OverlapEnd) == 0x000008, "Wrong alignment on Comp_CV_Parent_C_OverlapEnd");
static_assert(sizeof(Comp_CV_Parent_C_OverlapEnd) == 0x000020, "Wrong size on Comp_CV_Parent_C_OverlapEnd");
static_assert(offsetof(Comp_CV_Parent_C_OverlapEnd, OverlappedComponent) == 0x000000, "Member 'Comp_CV_Parent_C_OverlapEnd::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_OverlapEnd, OtherActor) == 0x000008, "Member 'Comp_CV_Parent_C_OverlapEnd::OtherActor' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_OverlapEnd, OtherComp) == 0x000010, "Member 'Comp_CV_Parent_C_OverlapEnd::OtherComp' has a wrong offset!");
static_assert(offsetof(Comp_CV_Parent_C_OverlapEnd, OtherBodyIndex) == 0x000018, "Member 'Comp_CV_Parent_C_OverlapEnd::OtherBodyIndex' has a wrong offset!");

// Function Comp_CV_Parent.Comp_CV_Parent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct Comp_CV_Parent_C_ReceiveEndPlay final 
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Comp_CV_Parent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on Comp_CV_Parent_C_ReceiveEndPlay");
static_assert(sizeof(Comp_CV_Parent_C_ReceiveEndPlay) == 0x000001, "Wrong size on Comp_CV_Parent_C_ReceiveEndPlay");
static_assert(offsetof(Comp_CV_Parent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'Comp_CV_Parent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}

