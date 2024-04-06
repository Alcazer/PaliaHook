#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteriorCameraVol

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function BP_InteriorCameraVol.BP_InteriorCameraVol_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final 
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_457A[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_InteriorCameraVol.BP_InteriorCameraVol_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final 
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_InteriorCameraVol_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_InteriorCameraVol.BP_InteriorCameraVol_C.ExecuteUbergraph_BP_InteriorCameraVol
// 0x01A8 (0x01A8 - 0x0000)
struct BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_457B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaCharacter_OutResult;            // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_457C[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_457D[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_457E[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0068(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	EValeriaFuncResult                            CallFunc_GetValeriaCharacter_OutResult_1;          // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_457F[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue_1;        // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4580[0x5];                                     // 0x0163(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_TargetArmLength_ImplicitCast;   // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4581[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_TargetArmLength_ImplicitCast_1; // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol) == 0x000008, "Wrong alignment on BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol");
static_assert(sizeof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol) == 0x0001A8, "Wrong size on BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, EntryPoint) == 0x000000, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000008, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000010, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000018, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000020, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000024, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, CallFunc_GetValeriaCharacter_OutResult) == 0x000025, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::CallFunc_GetValeriaCharacter_OutResult' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, CallFunc_GetValeriaCharacter_ReturnValue) == 0x000028, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::CallFunc_GetValeriaCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, CallFunc_IsLocallyControlled_ReturnValue) == 0x000030, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, K2Node_SwitchEnum_CmpSuccess) == 0x000031, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, CallFunc_FClamp_ReturnValue) == 0x000040, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000048, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, K2Node_ComponentBoundEvent_OtherActor) == 0x000050, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, K2Node_ComponentBoundEvent_OtherComp) == 0x000058, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000060, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, K2Node_ComponentBoundEvent_bFromSweep) == 0x000064, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, K2Node_ComponentBoundEvent_SweepResult) == 0x000068, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, CallFunc_GetValeriaCharacter_OutResult_1) == 0x000150, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::CallFunc_GetValeriaCharacter_OutResult_1' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, CallFunc_GetValeriaCharacter_ReturnValue_1) == 0x000158, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::CallFunc_GetValeriaCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x000160, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, K2Node_SwitchEnum_CmpSuccess_1) == 0x000161, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000162, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000168, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, CallFunc_FClamp_ReturnValue_1) == 0x000170, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000178, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000180, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, K2Node_VariableSet_TargetArmLength_ImplicitCast) == 0x000188, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::K2Node_VariableSet_TargetArmLength_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000190, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000198, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol, K2Node_VariableSet_TargetArmLength_ImplicitCast_1) == 0x0001A0, "Member 'BP_InteriorCameraVol_C_ExecuteUbergraph_BP_InteriorCameraVol::K2Node_VariableSet_TargetArmLength_ImplicitCast_1' has a wrong offset!");

}

