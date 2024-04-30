#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S6EnhancedInputExtended

#include "Basic.hpp"

#include "EnhancedInput_structs.hpp"
#include "S6EnhancedInputExtended_structs.hpp"


namespace SDK::Params
{

// Function S6EnhancedInputExtended.S6EnhancedInputExtendedSubsystem.AddMappingContextByType
// 0x0040 (0x0040 - 0x0000)
struct S6EnhancedInputExtendedSubsystem_AddMappingContextByType final 
{
public:
	struct FInputMappingPriorityData              InputMappingPriorityData;                          // 0x0000(0x0038)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FModifyContextOptions                  Options;                                           // 0x0038(0x0001)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CF3[0x7];                                     // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(S6EnhancedInputExtendedSubsystem_AddMappingContextByType) == 0x000008, "Wrong alignment on S6EnhancedInputExtendedSubsystem_AddMappingContextByType");
static_assert(sizeof(S6EnhancedInputExtendedSubsystem_AddMappingContextByType) == 0x000040, "Wrong size on S6EnhancedInputExtendedSubsystem_AddMappingContextByType");
static_assert(offsetof(S6EnhancedInputExtendedSubsystem_AddMappingContextByType, InputMappingPriorityData) == 0x000000, "Member 'S6EnhancedInputExtendedSubsystem_AddMappingContextByType::InputMappingPriorityData' has a wrong offset!");
static_assert(offsetof(S6EnhancedInputExtendedSubsystem_AddMappingContextByType, Options) == 0x000038, "Member 'S6EnhancedInputExtendedSubsystem_AddMappingContextByType::Options' has a wrong offset!");

// Function S6EnhancedInputExtended.S6EnhancedInputExtendedSubsystem.RemoveMappingContext
// 0x0010 (0x0010 - 0x0000)
struct S6EnhancedInputExtendedSubsystem_RemoveMappingContext final 
{
public:
	class UInputMappingContext*                   MappingContext;                                    // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModifyContextOptions                  Options;                                           // 0x0008(0x0001)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CF4[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(S6EnhancedInputExtendedSubsystem_RemoveMappingContext) == 0x000008, "Wrong alignment on S6EnhancedInputExtendedSubsystem_RemoveMappingContext");
static_assert(sizeof(S6EnhancedInputExtendedSubsystem_RemoveMappingContext) == 0x000010, "Wrong size on S6EnhancedInputExtendedSubsystem_RemoveMappingContext");
static_assert(offsetof(S6EnhancedInputExtendedSubsystem_RemoveMappingContext, MappingContext) == 0x000000, "Member 'S6EnhancedInputExtendedSubsystem_RemoveMappingContext::MappingContext' has a wrong offset!");
static_assert(offsetof(S6EnhancedInputExtendedSubsystem_RemoveMappingContext, Options) == 0x000008, "Member 'S6EnhancedInputExtendedSubsystem_RemoveMappingContext::Options' has a wrong offset!");

}

