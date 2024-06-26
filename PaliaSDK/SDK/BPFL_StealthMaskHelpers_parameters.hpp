#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_StealthMaskHelpers

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPFL_StealthMaskHelpers.BPFL_StealthMaskHelpers_C.GetStealthMaskFromActor
// 0x0058 (0x0058 - 0x0000)
struct BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor final 
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         StealthMask;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5083[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                ASC;                                               // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5084[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5085[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Or_IntInt_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor) == 0x000008, "Wrong alignment on BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor");
static_assert(sizeof(BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor) == 0x000058, "Wrong size on BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor");
static_assert(offsetof(BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor, Actor) == 0x000000, "Member 'BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor::Actor' has a wrong offset!");
static_assert(offsetof(BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor, __WorldContext) == 0x000008, "Member 'BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor, StealthMask) == 0x000010, "Member 'BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor::StealthMask' has a wrong offset!");
static_assert(offsetof(BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor, ASC) == 0x000018, "Member 'BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor::ASC' has a wrong offset!");
static_assert(offsetof(BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor, Temp_bool_Variable) == 0x000020, "Member 'BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor, Temp_int_Variable) == 0x000030, "Member 'BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor, Temp_int_Variable_1) == 0x000034, "Member 'BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000038, "Member 'BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000048, "Member 'BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor, K2Node_Select_Default) == 0x00004C, "Member 'BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor, CallFunc_Or_IntInt_ReturnValue) == 0x000050, "Member 'BPFL_StealthMaskHelpers_C_GetStealthMaskFromActor::CallFunc_Or_IntInt_ReturnValue' has a wrong offset!");

}

