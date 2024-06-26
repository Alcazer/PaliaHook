#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Comp_AkHomeRoom

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Comp_AkHomeRoom.Comp_AkHomeRoom_C.ExecuteUbergraph_Comp_AkHomeRoom
// 0x01A8 (0x01A8 - 0x0000)
struct Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5044[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_GetAttachParent_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_DynamicCast_AsPrimitive_Component;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5045[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5046[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_CustomEvent_OverlappedComponent_1;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor_1;                   // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherComp_1;                    // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_OtherBodyIndex_1;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bFromSweep;                     // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5047[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_CustomEvent_SweepResult;                    // 0x0050(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AValeriaCharacter*                      K2Node_DynamicCast_AsValeria_Character;            // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5048[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UComp_Actor_Audio_Data_C*               CallFunc_GetComponentByClass_ReturnValue;          // 0x0148(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5049[0x2];                                     // 0x0152(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0154(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_504A[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_CustomEvent_OverlappedComponent;            // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor;                     // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherComp;                      // 0x0178(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_OtherBodyIndex;                 // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_504B[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      K2Node_DynamicCast_AsValeria_Character_1;          // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_504C[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UComp_Actor_Audio_Data_C*               CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0198(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom) == 0x000008, "Wrong alignment on Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom");
static_assert(sizeof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom) == 0x0001A8, "Wrong size on Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, EntryPoint) == 0x000000, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::EntryPoint' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, CallFunc_GetAttachParent_ReturnValue) == 0x000008, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::CallFunc_GetAttachParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_DynamicCast_AsPrimitive_Component) == 0x000010, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_DynamicCast_AsPrimitive_Component' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_CustomEvent_OverlappedComponent_1) == 0x000030, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_CustomEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_CustomEvent_OtherActor_1) == 0x000038, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_CustomEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_CustomEvent_OtherComp_1) == 0x000040, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_CustomEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_CustomEvent_OtherBodyIndex_1) == 0x000048, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_CustomEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_CustomEvent_bFromSweep) == 0x00004C, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_CustomEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_CustomEvent_SweepResult) == 0x000050, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_CustomEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_DynamicCast_AsValeria_Character) == 0x000138, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_DynamicCast_AsValeria_Character' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_DynamicCast_bSuccess_1) == 0x000140, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, CallFunc_GetComponentByClass_ReturnValue) == 0x000148, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, CallFunc_IsLocallyControlled_ReturnValue) == 0x000150, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, CallFunc_IsValid_ReturnValue_1) == 0x000151, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_CreateDelegate_OutputDelegate_1) == 0x000154, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_CustomEvent_OverlappedComponent) == 0x000168, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_CustomEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_CustomEvent_OtherActor) == 0x000170, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_CustomEvent_OtherComp) == 0x000178, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_CustomEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_CustomEvent_OtherBodyIndex) == 0x000180, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_CustomEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_DynamicCast_AsValeria_Character_1) == 0x000188, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_DynamicCast_AsValeria_Character_1' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, K2Node_DynamicCast_bSuccess_2) == 0x000190, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000198, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x0001A0, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom, CallFunc_IsValid_ReturnValue_2) == 0x0001A1, "Member 'Comp_AkHomeRoom_C_ExecuteUbergraph_Comp_AkHomeRoom::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function Comp_AkHomeRoom.Comp_AkHomeRoom_C.HandleBeginOverlap
// 0x0108 (0x0108 - 0x0000)
struct Comp_AkHomeRoom_C_HandleBeginOverlap final 
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_504D[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Comp_AkHomeRoom_C_HandleBeginOverlap) == 0x000008, "Wrong alignment on Comp_AkHomeRoom_C_HandleBeginOverlap");
static_assert(sizeof(Comp_AkHomeRoom_C_HandleBeginOverlap) == 0x000108, "Wrong size on Comp_AkHomeRoom_C_HandleBeginOverlap");
static_assert(offsetof(Comp_AkHomeRoom_C_HandleBeginOverlap, OverlappedComponent) == 0x000000, "Member 'Comp_AkHomeRoom_C_HandleBeginOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_HandleBeginOverlap, OtherActor) == 0x000008, "Member 'Comp_AkHomeRoom_C_HandleBeginOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_HandleBeginOverlap, OtherComp) == 0x000010, "Member 'Comp_AkHomeRoom_C_HandleBeginOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_HandleBeginOverlap, OtherBodyIndex) == 0x000018, "Member 'Comp_AkHomeRoom_C_HandleBeginOverlap::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_HandleBeginOverlap, bFromSweep) == 0x00001C, "Member 'Comp_AkHomeRoom_C_HandleBeginOverlap::bFromSweep' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_HandleBeginOverlap, SweepResult) == 0x000020, "Member 'Comp_AkHomeRoom_C_HandleBeginOverlap::SweepResult' has a wrong offset!");

// Function Comp_AkHomeRoom.Comp_AkHomeRoom_C.HandleEndOverlap
// 0x0020 (0x0020 - 0x0000)
struct Comp_AkHomeRoom_C_HandleEndOverlap final 
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Comp_AkHomeRoom_C_HandleEndOverlap) == 0x000008, "Wrong alignment on Comp_AkHomeRoom_C_HandleEndOverlap");
static_assert(sizeof(Comp_AkHomeRoom_C_HandleEndOverlap) == 0x000020, "Wrong size on Comp_AkHomeRoom_C_HandleEndOverlap");
static_assert(offsetof(Comp_AkHomeRoom_C_HandleEndOverlap, OverlappedComponent) == 0x000000, "Member 'Comp_AkHomeRoom_C_HandleEndOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_HandleEndOverlap, OtherActor) == 0x000008, "Member 'Comp_AkHomeRoom_C_HandleEndOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_HandleEndOverlap, OtherComp) == 0x000010, "Member 'Comp_AkHomeRoom_C_HandleEndOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(Comp_AkHomeRoom_C_HandleEndOverlap, OtherBodyIndex) == 0x000018, "Member 'Comp_AkHomeRoom_C_HandleEndOverlap::OtherBodyIndex' has a wrong offset!");

}

