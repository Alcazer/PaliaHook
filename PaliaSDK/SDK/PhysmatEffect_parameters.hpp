#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhysmatEffect

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "Struct_Physmat_structs.hpp"


namespace SDK::Params
{

// Function PhysmatEffect.PhysmatEffect_C.GetSurfaceEffect
// 0x0080 (0x0080 - 0x0000)
struct PhysmatEffect_C_GetSurfaceEffect final 
{
public:
	class UPhysicalMaterial*                      PhysMat;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Physmat                        Value;                                             // 0x0008(0x0020)(Parm, OutParm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              Temp_byte_Variable;                                // 0x0029(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FE3[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_Physmat                        CallFunc_Map_Find_Value;                           // 0x0030(0x0020)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FE4[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_Physmat                        CallFunc_Map_Find_Value_1;                         // 0x0058(0x0020)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PhysmatEffect_C_GetSurfaceEffect) == 0x000008, "Wrong alignment on PhysmatEffect_C_GetSurfaceEffect");
static_assert(sizeof(PhysmatEffect_C_GetSurfaceEffect) == 0x000080, "Wrong size on PhysmatEffect_C_GetSurfaceEffect");
static_assert(offsetof(PhysmatEffect_C_GetSurfaceEffect, PhysMat) == 0x000000, "Member 'PhysmatEffect_C_GetSurfaceEffect::PhysMat' has a wrong offset!");
static_assert(offsetof(PhysmatEffect_C_GetSurfaceEffect, Value) == 0x000008, "Member 'PhysmatEffect_C_GetSurfaceEffect::Value' has a wrong offset!");
static_assert(offsetof(PhysmatEffect_C_GetSurfaceEffect, ReturnValue) == 0x000028, "Member 'PhysmatEffect_C_GetSurfaceEffect::ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysmatEffect_C_GetSurfaceEffect, Temp_byte_Variable) == 0x000029, "Member 'PhysmatEffect_C_GetSurfaceEffect::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PhysmatEffect_C_GetSurfaceEffect, CallFunc_Map_Find_Value) == 0x000030, "Member 'PhysmatEffect_C_GetSurfaceEffect::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(PhysmatEffect_C_GetSurfaceEffect, CallFunc_Map_Find_ReturnValue) == 0x000050, "Member 'PhysmatEffect_C_GetSurfaceEffect::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysmatEffect_C_GetSurfaceEffect, CallFunc_Map_Find_Value_1) == 0x000058, "Member 'PhysmatEffect_C_GetSurfaceEffect::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(PhysmatEffect_C_GetSurfaceEffect, CallFunc_Map_Find_ReturnValue_1) == 0x000078, "Member 'PhysmatEffect_C_GetSurfaceEffect::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PhysmatEffect_C_GetSurfaceEffect, CallFunc_IsValid_ReturnValue) == 0x000079, "Member 'PhysmatEffect_C_GetSurfaceEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysmatEffect_C_GetSurfaceEffect, CallFunc_BooleanAND_ReturnValue) == 0x00007A, "Member 'PhysmatEffect_C_GetSurfaceEffect::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}
