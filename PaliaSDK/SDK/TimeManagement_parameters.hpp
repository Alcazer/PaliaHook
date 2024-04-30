#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimeManagement

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
// 0x000C (0x000C - 0x0000)
struct TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber final 
{
public:
	struct FFrameNumber                           A;                                                 // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           B;                                                 // 0x0004(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber");
static_assert(sizeof(TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber) == 0x00000C, "Wrong size on TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber");
static_assert(offsetof(TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber, A) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber::A' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber, B) == 0x000004, "Member 'TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber::B' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber, ReturnValue) == 0x000008, "Member 'TimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber::ReturnValue' has a wrong offset!");

// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
// 0x000C (0x000C - 0x0000)
struct TimeManagementBlueprintLibrary_Add_FrameNumberInteger final 
{
public:
	struct FFrameNumber                           A;                                                 // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         B;                                                 // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManagementBlueprintLibrary_Add_FrameNumberInteger) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Add_FrameNumberInteger");
static_assert(sizeof(TimeManagementBlueprintLibrary_Add_FrameNumberInteger) == 0x00000C, "Wrong size on TimeManagementBlueprintLibrary_Add_FrameNumberInteger");
static_assert(offsetof(TimeManagementBlueprintLibrary_Add_FrameNumberInteger, A) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Add_FrameNumberInteger::A' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Add_FrameNumberInteger, B) == 0x000004, "Member 'TimeManagementBlueprintLibrary_Add_FrameNumberInteger::B' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Add_FrameNumberInteger, ReturnValue) == 0x000008, "Member 'TimeManagementBlueprintLibrary_Add_FrameNumberInteger::ReturnValue' has a wrong offset!");

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
// 0x0008 (0x0008 - 0x0000)
struct TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger final 
{
public:
	struct FFrameNumber                           InFrameNumber;                                     // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger");
static_assert(sizeof(TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger) == 0x000008, "Wrong size on TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger, InFrameNumber) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger::InFrameNumber' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger, ReturnValue) == 0x000004, "Member 'TimeManagementBlueprintLibrary_Conv_FrameNumberToInteger::ReturnValue' has a wrong offset!");

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToInterval
// 0x000C (0x000C - 0x0000)
struct TimeManagementBlueprintLibrary_Conv_FrameRateToInterval final 
{
public:
	struct FFrameRate                             InFrameRate;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManagementBlueprintLibrary_Conv_FrameRateToInterval) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Conv_FrameRateToInterval");
static_assert(sizeof(TimeManagementBlueprintLibrary_Conv_FrameRateToInterval) == 0x00000C, "Wrong size on TimeManagementBlueprintLibrary_Conv_FrameRateToInterval");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_FrameRateToInterval, InFrameRate) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Conv_FrameRateToInterval::InFrameRate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_FrameRateToInterval, ReturnValue) == 0x000008, "Member 'TimeManagementBlueprintLibrary_Conv_FrameRateToInterval::ReturnValue' has a wrong offset!");

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
// 0x000C (0x000C - 0x0000)
struct TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds final 
{
public:
	struct FFrameRate                             InFrameRate;                                       // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds");
static_assert(sizeof(TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds) == 0x00000C, "Wrong size on TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds, InFrameRate) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds::InFrameRate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds, ReturnValue) == 0x000008, "Member 'TimeManagementBlueprintLibrary_Conv_FrameRateToSeconds::ReturnValue' has a wrong offset!");

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
// 0x0014 (0x0014 - 0x0000)
struct TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds final 
{
public:
	struct FQualifiedFrameTime                    InFrameTime;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds");
static_assert(sizeof(TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds) == 0x000014, "Wrong size on TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds, InFrameTime) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds::InFrameTime' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds, ReturnValue) == 0x000010, "Member 'TimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds::ReturnValue' has a wrong offset!");

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
// 0x0028 (0x0028 - 0x0000)
struct TimeManagementBlueprintLibrary_Conv_TimecodeToString final 
{
public:
	struct FTimecode                              InTimecode;                                        // 0x0000(0x0014)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceSignDisplay;                                 // 0x0014(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13DA[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManagementBlueprintLibrary_Conv_TimecodeToString) == 0x000008, "Wrong alignment on TimeManagementBlueprintLibrary_Conv_TimecodeToString");
static_assert(sizeof(TimeManagementBlueprintLibrary_Conv_TimecodeToString) == 0x000028, "Wrong size on TimeManagementBlueprintLibrary_Conv_TimecodeToString");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_TimecodeToString, InTimecode) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Conv_TimecodeToString::InTimecode' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_TimecodeToString, bForceSignDisplay) == 0x000014, "Member 'TimeManagementBlueprintLibrary_Conv_TimecodeToString::bForceSignDisplay' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Conv_TimecodeToString, ReturnValue) == 0x000018, "Member 'TimeManagementBlueprintLibrary_Conv_TimecodeToString::ReturnValue' has a wrong offset!");

// Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
// 0x000C (0x000C - 0x0000)
struct TimeManagementBlueprintLibrary_Divide_FrameNumberInteger final 
{
public:
	struct FFrameNumber                           A;                                                 // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         B;                                                 // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManagementBlueprintLibrary_Divide_FrameNumberInteger) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Divide_FrameNumberInteger");
static_assert(sizeof(TimeManagementBlueprintLibrary_Divide_FrameNumberInteger) == 0x00000C, "Wrong size on TimeManagementBlueprintLibrary_Divide_FrameNumberInteger");
static_assert(offsetof(TimeManagementBlueprintLibrary_Divide_FrameNumberInteger, A) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Divide_FrameNumberInteger::A' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Divide_FrameNumberInteger, B) == 0x000004, "Member 'TimeManagementBlueprintLibrary_Divide_FrameNumberInteger::B' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Divide_FrameNumberInteger, ReturnValue) == 0x000008, "Member 'TimeManagementBlueprintLibrary_Divide_FrameNumberInteger::ReturnValue' has a wrong offset!");

// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
// 0x0014 (0x0014 - 0x0000)
struct TimeManagementBlueprintLibrary_GetTimecode final 
{
public:
	struct FTimecode                              ReturnValue;                                       // 0x0000(0x0014)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManagementBlueprintLibrary_GetTimecode) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_GetTimecode");
static_assert(sizeof(TimeManagementBlueprintLibrary_GetTimecode) == 0x000014, "Wrong size on TimeManagementBlueprintLibrary_GetTimecode");
static_assert(offsetof(TimeManagementBlueprintLibrary_GetTimecode, ReturnValue) == 0x000000, "Member 'TimeManagementBlueprintLibrary_GetTimecode::ReturnValue' has a wrong offset!");

// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
// 0x0008 (0x0008 - 0x0000)
struct TimeManagementBlueprintLibrary_GetTimecodeFrameRate final 
{
public:
	struct FFrameRate                             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManagementBlueprintLibrary_GetTimecodeFrameRate) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_GetTimecodeFrameRate");
static_assert(sizeof(TimeManagementBlueprintLibrary_GetTimecodeFrameRate) == 0x000008, "Wrong size on TimeManagementBlueprintLibrary_GetTimecodeFrameRate");
static_assert(offsetof(TimeManagementBlueprintLibrary_GetTimecodeFrameRate, ReturnValue) == 0x000000, "Member 'TimeManagementBlueprintLibrary_GetTimecodeFrameRate::ReturnValue' has a wrong offset!");

// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
// 0x000C (0x000C - 0x0000)
struct TimeManagementBlueprintLibrary_IsValid_Framerate final 
{
public:
	struct FFrameRate                             InFrameRate;                                       // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13DB[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TimeManagementBlueprintLibrary_IsValid_Framerate) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_IsValid_Framerate");
static_assert(sizeof(TimeManagementBlueprintLibrary_IsValid_Framerate) == 0x00000C, "Wrong size on TimeManagementBlueprintLibrary_IsValid_Framerate");
static_assert(offsetof(TimeManagementBlueprintLibrary_IsValid_Framerate, InFrameRate) == 0x000000, "Member 'TimeManagementBlueprintLibrary_IsValid_Framerate::InFrameRate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_IsValid_Framerate, ReturnValue) == 0x000008, "Member 'TimeManagementBlueprintLibrary_IsValid_Framerate::ReturnValue' has a wrong offset!");

// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
// 0x0014 (0x0014 - 0x0000)
struct TimeManagementBlueprintLibrary_IsValid_MultipleOf final 
{
public:
	struct FFrameRate                             InFrameRate;                                       // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                             OtherFramerate;                                    // 0x0008(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13DC[0x3];                                     // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TimeManagementBlueprintLibrary_IsValid_MultipleOf) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_IsValid_MultipleOf");
static_assert(sizeof(TimeManagementBlueprintLibrary_IsValid_MultipleOf) == 0x000014, "Wrong size on TimeManagementBlueprintLibrary_IsValid_MultipleOf");
static_assert(offsetof(TimeManagementBlueprintLibrary_IsValid_MultipleOf, InFrameRate) == 0x000000, "Member 'TimeManagementBlueprintLibrary_IsValid_MultipleOf::InFrameRate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_IsValid_MultipleOf, OtherFramerate) == 0x000008, "Member 'TimeManagementBlueprintLibrary_IsValid_MultipleOf::OtherFramerate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_IsValid_MultipleOf, ReturnValue) == 0x000010, "Member 'TimeManagementBlueprintLibrary_IsValid_MultipleOf::ReturnValue' has a wrong offset!");

// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
// 0x000C (0x000C - 0x0000)
struct TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger final 
{
public:
	struct FFrameNumber                           A;                                                 // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         B;                                                 // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger");
static_assert(sizeof(TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger) == 0x00000C, "Wrong size on TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger");
static_assert(offsetof(TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger, A) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger::A' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger, B) == 0x000004, "Member 'TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger::B' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger, ReturnValue) == 0x000008, "Member 'TimeManagementBlueprintLibrary_Multiply_FrameNumberInteger::ReturnValue' has a wrong offset!");

// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
// 0x0014 (0x0014 - 0x0000)
struct TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate final 
{
public:
	float                                         TimeInSeconds;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                             FrameRate;                                         // 0x0004(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameTime                             ReturnValue;                                       // 0x000C(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate");
static_assert(sizeof(TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate) == 0x000014, "Wrong size on TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate");
static_assert(offsetof(TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate, TimeInSeconds) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate::TimeInSeconds' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate, FrameRate) == 0x000004, "Member 'TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate::FrameRate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate, ReturnValue) == 0x00000C, "Member 'TimeManagementBlueprintLibrary_Multiply_SecondsFrameRate::ReturnValue' has a wrong offset!");

// Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
// 0x0020 (0x0020 - 0x0000)
struct TimeManagementBlueprintLibrary_SnapFrameTimeToRate final 
{
public:
	struct FFrameTime                             SourceTime;                                        // 0x0000(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                             SourceRate;                                        // 0x0008(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                             SnapToRate;                                        // 0x0010(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameTime                             ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManagementBlueprintLibrary_SnapFrameTimeToRate) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_SnapFrameTimeToRate");
static_assert(sizeof(TimeManagementBlueprintLibrary_SnapFrameTimeToRate) == 0x000020, "Wrong size on TimeManagementBlueprintLibrary_SnapFrameTimeToRate");
static_assert(offsetof(TimeManagementBlueprintLibrary_SnapFrameTimeToRate, SourceTime) == 0x000000, "Member 'TimeManagementBlueprintLibrary_SnapFrameTimeToRate::SourceTime' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_SnapFrameTimeToRate, SourceRate) == 0x000008, "Member 'TimeManagementBlueprintLibrary_SnapFrameTimeToRate::SourceRate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_SnapFrameTimeToRate, SnapToRate) == 0x000010, "Member 'TimeManagementBlueprintLibrary_SnapFrameTimeToRate::SnapToRate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_SnapFrameTimeToRate, ReturnValue) == 0x000018, "Member 'TimeManagementBlueprintLibrary_SnapFrameTimeToRate::ReturnValue' has a wrong offset!");

// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
// 0x000C (0x000C - 0x0000)
struct TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber final 
{
public:
	struct FFrameNumber                           A;                                                 // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           B;                                                 // 0x0004(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber");
static_assert(sizeof(TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber) == 0x00000C, "Wrong size on TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber");
static_assert(offsetof(TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber, A) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber::A' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber, B) == 0x000004, "Member 'TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber::B' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber, ReturnValue) == 0x000008, "Member 'TimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber::ReturnValue' has a wrong offset!");

// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
// 0x000C (0x000C - 0x0000)
struct TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger final 
{
public:
	struct FFrameNumber                           A;                                                 // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         B;                                                 // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger");
static_assert(sizeof(TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger) == 0x00000C, "Wrong size on TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger");
static_assert(offsetof(TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger, A) == 0x000000, "Member 'TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger::A' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger, B) == 0x000004, "Member 'TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger::B' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger, ReturnValue) == 0x000008, "Member 'TimeManagementBlueprintLibrary_Subtract_FrameNumberInteger::ReturnValue' has a wrong offset!");

// Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
// 0x0020 (0x0020 - 0x0000)
struct TimeManagementBlueprintLibrary_TransformTime final 
{
public:
	struct FFrameTime                             SourceTime;                                        // 0x0000(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                             SourceRate;                                        // 0x0008(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                             DestinationRate;                                   // 0x0010(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameTime                             ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TimeManagementBlueprintLibrary_TransformTime) == 0x000004, "Wrong alignment on TimeManagementBlueprintLibrary_TransformTime");
static_assert(sizeof(TimeManagementBlueprintLibrary_TransformTime) == 0x000020, "Wrong size on TimeManagementBlueprintLibrary_TransformTime");
static_assert(offsetof(TimeManagementBlueprintLibrary_TransformTime, SourceTime) == 0x000000, "Member 'TimeManagementBlueprintLibrary_TransformTime::SourceTime' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_TransformTime, SourceRate) == 0x000008, "Member 'TimeManagementBlueprintLibrary_TransformTime::SourceRate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_TransformTime, DestinationRate) == 0x000010, "Member 'TimeManagementBlueprintLibrary_TransformTime::DestinationRate' has a wrong offset!");
static_assert(offsetof(TimeManagementBlueprintLibrary_TransformTime, ReturnValue) == 0x000018, "Member 'TimeManagementBlueprintLibrary_TransformTime::ReturnValue' has a wrong offset!");

}

