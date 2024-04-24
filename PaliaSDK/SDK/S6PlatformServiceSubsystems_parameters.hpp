#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S6PlatformServiceSubsystems

#include "Basic.hpp"

#include "S6PlatformServiceSubsystems_structs.hpp"


namespace SDK::Params
{

// Function S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.GetValidReportCategoriesByType
// 0x0058 (0x0058 - 0x0000)
struct S6PLAT_PlayerBehaviorSubsystem_GetValidReportCategoriesByType final 
{
public:
	ES6PLAT_PlayerBehaviorReportType              ReportType;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C2D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FS6PLAT_PlayerBehaviorReportCategoryInfo> ReturnValue;                                       // 0x0008(0x0050)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(S6PLAT_PlayerBehaviorSubsystem_GetValidReportCategoriesByType) == 0x000008, "Wrong alignment on S6PLAT_PlayerBehaviorSubsystem_GetValidReportCategoriesByType");
static_assert(sizeof(S6PLAT_PlayerBehaviorSubsystem_GetValidReportCategoriesByType) == 0x000058, "Wrong size on S6PLAT_PlayerBehaviorSubsystem_GetValidReportCategoriesByType");
static_assert(offsetof(S6PLAT_PlayerBehaviorSubsystem_GetValidReportCategoriesByType, ReportType) == 0x000000, "Member 'S6PLAT_PlayerBehaviorSubsystem_GetValidReportCategoriesByType::ReportType' has a wrong offset!");
static_assert(offsetof(S6PLAT_PlayerBehaviorSubsystem_GetValidReportCategoriesByType, ReturnValue) == 0x000008, "Member 'S6PLAT_PlayerBehaviorSubsystem_GetValidReportCategoriesByType::ReturnValue' has a wrong offset!");

// Function S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.ReportPlayerBehavior
// 0x00B8 (0x00B8 - 0x0000)
struct S6PLAT_PlayerBehaviorSubsystem_ReportPlayerBehavior final 
{
public:
	struct FS6PLAT_PlayerBehaviorReportForm       ReportForm;                                        // 0x0000(0x00B8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(S6PLAT_PlayerBehaviorSubsystem_ReportPlayerBehavior) == 0x000008, "Wrong alignment on S6PLAT_PlayerBehaviorSubsystem_ReportPlayerBehavior");
static_assert(sizeof(S6PLAT_PlayerBehaviorSubsystem_ReportPlayerBehavior) == 0x0000B8, "Wrong size on S6PLAT_PlayerBehaviorSubsystem_ReportPlayerBehavior");
static_assert(offsetof(S6PLAT_PlayerBehaviorSubsystem_ReportPlayerBehavior, ReportForm) == 0x000000, "Member 'S6PLAT_PlayerBehaviorSubsystem_ReportPlayerBehavior::ReportForm' has a wrong offset!");

// DelegateFunction S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.ReportSubmitedDelegate__DelegateSignature
// 0x00C8 (0x00C8 - 0x0000)
struct S6PLAT_PlayerBehaviorSubsystem_ReportSubmitedDelegate__DelegateSignature final 
{
public:
	class US6PLAT_PlayerBehaviorSubsystem*        PlayerBehaviorSubsystem;                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6PLAT_PlayerBehaviorReportForm       ReportForm;                                        // 0x0008(0x00B8)(ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                          bDidSucceed;                                       // 0x00C0(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C2E[0x7];                                     // 0x00C1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(S6PLAT_PlayerBehaviorSubsystem_ReportSubmitedDelegate__DelegateSignature) == 0x000008, "Wrong alignment on S6PLAT_PlayerBehaviorSubsystem_ReportSubmitedDelegate__DelegateSignature");
static_assert(sizeof(S6PLAT_PlayerBehaviorSubsystem_ReportSubmitedDelegate__DelegateSignature) == 0x0000C8, "Wrong size on S6PLAT_PlayerBehaviorSubsystem_ReportSubmitedDelegate__DelegateSignature");
static_assert(offsetof(S6PLAT_PlayerBehaviorSubsystem_ReportSubmitedDelegate__DelegateSignature, PlayerBehaviorSubsystem) == 0x000000, "Member 'S6PLAT_PlayerBehaviorSubsystem_ReportSubmitedDelegate__DelegateSignature::PlayerBehaviorSubsystem' has a wrong offset!");
static_assert(offsetof(S6PLAT_PlayerBehaviorSubsystem_ReportSubmitedDelegate__DelegateSignature, ReportForm) == 0x000008, "Member 'S6PLAT_PlayerBehaviorSubsystem_ReportSubmitedDelegate__DelegateSignature::ReportForm' has a wrong offset!");
static_assert(offsetof(S6PLAT_PlayerBehaviorSubsystem_ReportSubmitedDelegate__DelegateSignature, bDidSucceed) == 0x0000C0, "Member 'S6PLAT_PlayerBehaviorSubsystem_ReportSubmitedDelegate__DelegateSignature::bDidSucceed' has a wrong offset!");

// Function S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.GetValidReportCategories
// 0x0050 (0x0050 - 0x0000)
struct S6PLAT_PlayerBehaviorSubsystem_GetValidReportCategories final 
{
public:
	TMap<class FName, struct FS6PLAT_PlayerBehaviorReportCategoryInfo> ReturnValue;                                       // 0x0000(0x0050)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(S6PLAT_PlayerBehaviorSubsystem_GetValidReportCategories) == 0x000008, "Wrong alignment on S6PLAT_PlayerBehaviorSubsystem_GetValidReportCategories");
static_assert(sizeof(S6PLAT_PlayerBehaviorSubsystem_GetValidReportCategories) == 0x000050, "Wrong size on S6PLAT_PlayerBehaviorSubsystem_GetValidReportCategories");
static_assert(offsetof(S6PLAT_PlayerBehaviorSubsystem_GetValidReportCategories, ReturnValue) == 0x000000, "Member 'S6PLAT_PlayerBehaviorSubsystem_GetValidReportCategories::ReturnValue' has a wrong offset!");

// Function S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.IsReady
// 0x0001 (0x0001 - 0x0000)
struct S6PLAT_PlayerBehaviorSubsystem_IsReady final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S6PLAT_PlayerBehaviorSubsystem_IsReady) == 0x000001, "Wrong alignment on S6PLAT_PlayerBehaviorSubsystem_IsReady");
static_assert(sizeof(S6PLAT_PlayerBehaviorSubsystem_IsReady) == 0x000001, "Wrong size on S6PLAT_PlayerBehaviorSubsystem_IsReady");
static_assert(offsetof(S6PLAT_PlayerBehaviorSubsystem_IsReady, ReturnValue) == 0x000000, "Member 'S6PLAT_PlayerBehaviorSubsystem_IsReady::ReturnValue' has a wrong offset!");

// Function S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.ValidateReportForm
// 0x00C0 (0x00C0 - 0x0000)
struct S6PLAT_PlayerBehaviorSubsystem_ValidateReportForm final 
{
public:
	struct FS6PLAT_PlayerBehaviorReportForm       ReportForm;                                        // 0x0000(0x00B8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x00B8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C2F[0x7];                                     // 0x00B9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(S6PLAT_PlayerBehaviorSubsystem_ValidateReportForm) == 0x000008, "Wrong alignment on S6PLAT_PlayerBehaviorSubsystem_ValidateReportForm");
static_assert(sizeof(S6PLAT_PlayerBehaviorSubsystem_ValidateReportForm) == 0x0000C0, "Wrong size on S6PLAT_PlayerBehaviorSubsystem_ValidateReportForm");
static_assert(offsetof(S6PLAT_PlayerBehaviorSubsystem_ValidateReportForm, ReportForm) == 0x000000, "Member 'S6PLAT_PlayerBehaviorSubsystem_ValidateReportForm::ReportForm' has a wrong offset!");
static_assert(offsetof(S6PLAT_PlayerBehaviorSubsystem_ValidateReportForm, ReturnValue) == 0x0000B8, "Member 'S6PLAT_PlayerBehaviorSubsystem_ValidateReportForm::ReturnValue' has a wrong offset!");

}

