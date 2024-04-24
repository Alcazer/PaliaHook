#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ReportNoiseEvent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ReportNoiseEvent.BP_ReportNoiseEvent_C.Received_Notify
// 0x00A8 (0x00A8 - 0x0000)
struct BP_ReportNoiseEvent_C_Received_Notify final 
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StealthMask;                                       // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50C8[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimeOfDayFilter                       TimeOfDay;                                         // 0x0044(0x0018)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_50C9[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DesiredEventRange;                                 // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaNoiseEventType                        Temp_byte_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50CA[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EValeriaNoiseEventVolume                      Temp_byte_Variable_1;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50CB[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStealthMaskFromActor_StealthMask;      // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaNoiseEventVolume                      Temp_byte_Variable_2;                              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaNoiseEventVolume                      Temp_byte_Variable_3;                              // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaNoiseEventVolume                      Temp_byte_Variable_4;                              // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaNoiseEventVolume                      Temp_byte_Variable_5;                              // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaNoiseEventVolume                      Temp_byte_Variable_6;                              // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaNoiseEventVolume                      Temp_byte_Variable_7;                              // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x009E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaNoiseEventVolume                      K2Node_Select_Default;                             // 0x009F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaNoiseEventVolume                      K2Node_Select_Default_1;                           // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ReportNoiseEvent_C_Received_Notify) == 0x000008, "Wrong alignment on BP_ReportNoiseEvent_C_Received_Notify");
static_assert(sizeof(BP_ReportNoiseEvent_C_Received_Notify) == 0x0000A8, "Wrong size on BP_ReportNoiseEvent_C_Received_Notify");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, MeshComp) == 0x000000, "Member 'BP_ReportNoiseEvent_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, Animation) == 0x000008, "Member 'BP_ReportNoiseEvent_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, EventReference) == 0x000010, "Member 'BP_ReportNoiseEvent_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, ReturnValue) == 0x000040, "Member 'BP_ReportNoiseEvent_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, StealthMask) == 0x000041, "Member 'BP_ReportNoiseEvent_C_Received_Notify::StealthMask' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, TimeOfDay) == 0x000044, "Member 'BP_ReportNoiseEvent_C_Received_Notify::TimeOfDay' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, DesiredEventRange) == 0x000060, "Member 'BP_ReportNoiseEvent_C_Received_Notify::DesiredEventRange' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, Temp_byte_Variable) == 0x000068, "Member 'BP_ReportNoiseEvent_C_Received_Notify::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000070, "Member 'BP_ReportNoiseEvent_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, Temp_byte_Variable_1) == 0x000078, "Member 'BP_ReportNoiseEvent_C_Received_Notify::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, CallFunc_GetStealthMaskFromActor_StealthMask) == 0x00007C, "Member 'BP_ReportNoiseEvent_C_Received_Notify::CallFunc_GetStealthMaskFromActor_StealthMask' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000080, "Member 'BP_ReportNoiseEvent_C_Received_Notify::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, Temp_byte_Variable_2) == 0x000098, "Member 'BP_ReportNoiseEvent_C_Received_Notify::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, Temp_byte_Variable_3) == 0x000099, "Member 'BP_ReportNoiseEvent_C_Received_Notify::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, Temp_byte_Variable_4) == 0x00009A, "Member 'BP_ReportNoiseEvent_C_Received_Notify::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, Temp_byte_Variable_5) == 0x00009B, "Member 'BP_ReportNoiseEvent_C_Received_Notify::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, Temp_byte_Variable_6) == 0x00009C, "Member 'BP_ReportNoiseEvent_C_Received_Notify::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, Temp_byte_Variable_7) == 0x00009D, "Member 'BP_ReportNoiseEvent_C_Received_Notify::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, Temp_bool_Variable) == 0x00009E, "Member 'BP_ReportNoiseEvent_C_Received_Notify::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, K2Node_Select_Default) == 0x00009F, "Member 'BP_ReportNoiseEvent_C_Received_Notify::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A0, "Member 'BP_ReportNoiseEvent_C_Received_Notify::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ReportNoiseEvent_C_Received_Notify, K2Node_Select_Default_1) == 0x0000A1, "Member 'BP_ReportNoiseEvent_C_Received_Notify::K2Node_Select_Default_1' has a wrong offset!");

}

