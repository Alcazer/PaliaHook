#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_CommonUIButtonPrompt

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_CommonUIButtonPrompt.F_CommonUIButtonPrompt
// 0x0040 (0x0040 - 0x0000)
struct FF_CommonUIButtonPrompt final 
{
public:
	class UInputAction*                           InputAction_6_BEC99F374ADBD465CE906D872E6A7D9A;    // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Description_7_CA83ADFD4C7F5C132B470D912C71A148;    // 0x0008(0x0018)(Edit, BlueprintVisible)
	bool                                          IsHold_1_AF83AE4C44C0A517CBE02F94AA399B84;         // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1110[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SpecialName_10_E7F5EF2C449A78C7A2977FB574BF9BD6;   // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FGameplayTag                           SpecialButtonTag_13_6258DB4F4E415C647F2FE5A035D1EDA7; // 0x0038(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_CommonUIButtonPrompt) == 0x000008, "Wrong alignment on FF_CommonUIButtonPrompt");
static_assert(sizeof(FF_CommonUIButtonPrompt) == 0x000040, "Wrong size on FF_CommonUIButtonPrompt");
static_assert(offsetof(FF_CommonUIButtonPrompt, InputAction_6_BEC99F374ADBD465CE906D872E6A7D9A) == 0x000000, "Member 'FF_CommonUIButtonPrompt::InputAction_6_BEC99F374ADBD465CE906D872E6A7D9A' has a wrong offset!");
static_assert(offsetof(FF_CommonUIButtonPrompt, Description_7_CA83ADFD4C7F5C132B470D912C71A148) == 0x000008, "Member 'FF_CommonUIButtonPrompt::Description_7_CA83ADFD4C7F5C132B470D912C71A148' has a wrong offset!");
static_assert(offsetof(FF_CommonUIButtonPrompt, IsHold_1_AF83AE4C44C0A517CBE02F94AA399B84) == 0x000020, "Member 'FF_CommonUIButtonPrompt::IsHold_1_AF83AE4C44C0A517CBE02F94AA399B84' has a wrong offset!");
static_assert(offsetof(FF_CommonUIButtonPrompt, SpecialName_10_E7F5EF2C449A78C7A2977FB574BF9BD6) == 0x000028, "Member 'FF_CommonUIButtonPrompt::SpecialName_10_E7F5EF2C449A78C7A2977FB574BF9BD6' has a wrong offset!");
static_assert(offsetof(FF_CommonUIButtonPrompt, SpecialButtonTag_13_6258DB4F4E415C647F2FE5A035D1EDA7) == 0x000038, "Member 'FF_CommonUIButtonPrompt::SpecialButtonTag_13_6258DB4F4E415C647F2FE5A035D1EDA7' has a wrong offset!");

}

