#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TypedElementRuntime

#include "Basic.hpp"


namespace SDK
{

// Enum TypedElementRuntime.ETypedElementChildInclusionMethod
// NumValues: 0x0004
enum class ETypedElementChildInclusionMethod : uint8
{
	None                                     = 0,
	Immediate                                = 1,
	Recursive                                = 2,
	ETypedElementChildInclusionMethod_MAX    = 3,
};

// Enum TypedElementRuntime.ETypedElementSelectionMethod
// NumValues: 0x0003
enum class ETypedElementSelectionMethod : uint8
{
	Primary                                  = 0,
	Secondary                                = 1,
	ETypedElementSelectionMethod_MAX         = 2,
};

// ScriptStruct TypedElementRuntime.TypedElementSelectionOptions
// 0x0005 (0x0005 - 0x0000)
struct FTypedElementSelectionOptions final 
{
public:
	bool                                          bAllowHidden;                                      // 0x0000(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bAllowGroups;                                      // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bAllowLegacyNotifications;                         // 0x0002(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bWarnIfLocked;                                     // 0x0003(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ETypedElementChildInclusionMethod             ChildElementInclusionMethod;                       // 0x0004(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FTypedElementSelectionOptions) == 0x000001, "Wrong alignment on FTypedElementSelectionOptions");
static_assert(sizeof(FTypedElementSelectionOptions) == 0x000005, "Wrong size on FTypedElementSelectionOptions");
static_assert(offsetof(FTypedElementSelectionOptions, bAllowHidden) == 0x000000, "Member 'FTypedElementSelectionOptions::bAllowHidden' has a wrong offset!");
static_assert(offsetof(FTypedElementSelectionOptions, bAllowGroups) == 0x000001, "Member 'FTypedElementSelectionOptions::bAllowGroups' has a wrong offset!");
static_assert(offsetof(FTypedElementSelectionOptions, bAllowLegacyNotifications) == 0x000002, "Member 'FTypedElementSelectionOptions::bAllowLegacyNotifications' has a wrong offset!");
static_assert(offsetof(FTypedElementSelectionOptions, bWarnIfLocked) == 0x000003, "Member 'FTypedElementSelectionOptions::bWarnIfLocked' has a wrong offset!");
static_assert(offsetof(FTypedElementSelectionOptions, ChildElementInclusionMethod) == 0x000004, "Member 'FTypedElementSelectionOptions::ChildElementInclusionMethod' has a wrong offset!");

// ScriptStruct TypedElementRuntime.TypedElementSelectionSetState
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FTypedElementSelectionSetState final 
{
public:
	TWeakObjectPtr<class UTypedElementSelectionSet> CreatedFromSelectionSet;                           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_125B[0x10];                                    // 0x0008(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTypedElementSelectionSetState) == 0x000008, "Wrong alignment on FTypedElementSelectionSetState");
static_assert(sizeof(FTypedElementSelectionSetState) == 0x000018, "Wrong size on FTypedElementSelectionSetState");
static_assert(offsetof(FTypedElementSelectionSetState, CreatedFromSelectionSet) == 0x000000, "Member 'FTypedElementSelectionSetState::CreatedFromSelectionSet' has a wrong offset!");

// ScriptStruct TypedElementRuntime.TypedElementIsSelectedOptions
// 0x0001 (0x0001 - 0x0000)
struct FTypedElementIsSelectedOptions final 
{
public:
	bool                                          bAllowIndirect;                                    // 0x0000(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FTypedElementIsSelectedOptions) == 0x000001, "Wrong alignment on FTypedElementIsSelectedOptions");
static_assert(sizeof(FTypedElementIsSelectedOptions) == 0x000001, "Wrong size on FTypedElementIsSelectedOptions");
static_assert(offsetof(FTypedElementIsSelectedOptions, bAllowIndirect) == 0x000000, "Member 'FTypedElementIsSelectedOptions::bAllowIndirect' has a wrong offset!");

// ScriptStruct TypedElementRuntime.TypedElementSelectionNormalizationOptions
// 0x0002 (0x0002 - 0x0000)
struct FTypedElementSelectionNormalizationOptions final 
{
public:
	bool                                          bExpandGroups;                                     // 0x0000(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bFollowAttachment;                                 // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FTypedElementSelectionNormalizationOptions) == 0x000001, "Wrong alignment on FTypedElementSelectionNormalizationOptions");
static_assert(sizeof(FTypedElementSelectionNormalizationOptions) == 0x000002, "Wrong size on FTypedElementSelectionNormalizationOptions");
static_assert(offsetof(FTypedElementSelectionNormalizationOptions, bExpandGroups) == 0x000000, "Member 'FTypedElementSelectionNormalizationOptions::bExpandGroups' has a wrong offset!");
static_assert(offsetof(FTypedElementSelectionNormalizationOptions, bFollowAttachment) == 0x000001, "Member 'FTypedElementSelectionNormalizationOptions::bFollowAttachment' has a wrong offset!");

}

