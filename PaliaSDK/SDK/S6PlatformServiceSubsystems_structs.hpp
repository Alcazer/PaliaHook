#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S6PlatformServiceSubsystems

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum S6PlatformServiceSubsystems.ES6PLAT_PlayerBehaviorReportType
// NumValues: 0x0003
enum class ES6PLAT_PlayerBehaviorReportType : uint8
{
	Positive                                 = 0,
	Negative                                 = 1,
	ES6PLAT_MAX                              = 2,
};

// Enum S6PlatformServiceSubsystems.ES6PLAT_PlayerBehaviorReportSource
// NumValues: 0x0004
enum class ES6PLAT_PlayerBehaviorReportSource : uint8
{
	SocialPanel                              = 0,
	CharacterCard                            = 1,
	Chat                                     = 2,
	ES6PLAT_MAX                              = 3,
};

// ScriptStruct S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorReportCategoryInfo
// 0x0020 (0x0020 - 0x0000)
struct FS6PLAT_PlayerBehaviorReportCategoryInfo final 
{
public:
	class FText                                   DisplayName;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	ES6PLAT_PlayerBehaviorReportType              ReportType;                                        // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C29[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FS6PLAT_PlayerBehaviorReportCategoryInfo) == 0x000008, "Wrong alignment on FS6PLAT_PlayerBehaviorReportCategoryInfo");
static_assert(sizeof(FS6PLAT_PlayerBehaviorReportCategoryInfo) == 0x000020, "Wrong size on FS6PLAT_PlayerBehaviorReportCategoryInfo");
static_assert(offsetof(FS6PLAT_PlayerBehaviorReportCategoryInfo, DisplayName) == 0x000000, "Member 'FS6PLAT_PlayerBehaviorReportCategoryInfo::DisplayName' has a wrong offset!");
static_assert(offsetof(FS6PLAT_PlayerBehaviorReportCategoryInfo, ReportType) == 0x000018, "Member 'FS6PLAT_PlayerBehaviorReportCategoryInfo::ReportType' has a wrong offset!");

// ScriptStruct S6PlatformServiceSubsystems.S6PLAT_ChatMessage
// 0x0048 (0x0048 - 0x0000)
struct FS6PLAT_ChatMessage final 
{
public:
	struct FGuid                                  SenderId;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ChannelName;                                       // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Content;                                           // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              CreatedAt;                                         // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CharacterName;                                     // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FS6PLAT_ChatMessage) == 0x000008, "Wrong alignment on FS6PLAT_ChatMessage");
static_assert(sizeof(FS6PLAT_ChatMessage) == 0x000048, "Wrong size on FS6PLAT_ChatMessage");
static_assert(offsetof(FS6PLAT_ChatMessage, SenderId) == 0x000000, "Member 'FS6PLAT_ChatMessage::SenderId' has a wrong offset!");
static_assert(offsetof(FS6PLAT_ChatMessage, ChannelName) == 0x000010, "Member 'FS6PLAT_ChatMessage::ChannelName' has a wrong offset!");
static_assert(offsetof(FS6PLAT_ChatMessage, Content) == 0x000020, "Member 'FS6PLAT_ChatMessage::Content' has a wrong offset!");
static_assert(offsetof(FS6PLAT_ChatMessage, CreatedAt) == 0x000030, "Member 'FS6PLAT_ChatMessage::CreatedAt' has a wrong offset!");
static_assert(offsetof(FS6PLAT_ChatMessage, CharacterName) == 0x000038, "Member 'FS6PLAT_ChatMessage::CharacterName' has a wrong offset!");

// ScriptStruct S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorReportForm
// 0x00B8 (0x00B8 - 0x0000)
struct FS6PLAT_PlayerBehaviorReportForm final 
{
public:
	struct FGuid                                  TargetAccountId;                                   // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  TargetCharacterId;                                 // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ReporterAccountId;                                 // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ReporterCharacterId;                               // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ES6PLAT_PlayerBehaviorReportSource            ReportSource;                                      // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ES6PLAT_PlayerBehaviorReportType              ReportType;                                        // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C2A[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CategoryName;                                      // 0x0044(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C2B[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Comment;                                           // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6PLAT_ChatMessage                    ReportedMessage;                                   // 0x0060(0x0048)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FS6PLAT_ChatMessage>            SurroundingMessages;                               // 0x00A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FS6PLAT_PlayerBehaviorReportForm) == 0x000008, "Wrong alignment on FS6PLAT_PlayerBehaviorReportForm");
static_assert(sizeof(FS6PLAT_PlayerBehaviorReportForm) == 0x0000B8, "Wrong size on FS6PLAT_PlayerBehaviorReportForm");
static_assert(offsetof(FS6PLAT_PlayerBehaviorReportForm, TargetAccountId) == 0x000000, "Member 'FS6PLAT_PlayerBehaviorReportForm::TargetAccountId' has a wrong offset!");
static_assert(offsetof(FS6PLAT_PlayerBehaviorReportForm, TargetCharacterId) == 0x000010, "Member 'FS6PLAT_PlayerBehaviorReportForm::TargetCharacterId' has a wrong offset!");
static_assert(offsetof(FS6PLAT_PlayerBehaviorReportForm, ReporterAccountId) == 0x000020, "Member 'FS6PLAT_PlayerBehaviorReportForm::ReporterAccountId' has a wrong offset!");
static_assert(offsetof(FS6PLAT_PlayerBehaviorReportForm, ReporterCharacterId) == 0x000030, "Member 'FS6PLAT_PlayerBehaviorReportForm::ReporterCharacterId' has a wrong offset!");
static_assert(offsetof(FS6PLAT_PlayerBehaviorReportForm, ReportSource) == 0x000040, "Member 'FS6PLAT_PlayerBehaviorReportForm::ReportSource' has a wrong offset!");
static_assert(offsetof(FS6PLAT_PlayerBehaviorReportForm, ReportType) == 0x000041, "Member 'FS6PLAT_PlayerBehaviorReportForm::ReportType' has a wrong offset!");
static_assert(offsetof(FS6PLAT_PlayerBehaviorReportForm, CategoryName) == 0x000044, "Member 'FS6PLAT_PlayerBehaviorReportForm::CategoryName' has a wrong offset!");
static_assert(offsetof(FS6PLAT_PlayerBehaviorReportForm, Comment) == 0x000050, "Member 'FS6PLAT_PlayerBehaviorReportForm::Comment' has a wrong offset!");
static_assert(offsetof(FS6PLAT_PlayerBehaviorReportForm, ReportedMessage) == 0x000060, "Member 'FS6PLAT_PlayerBehaviorReportForm::ReportedMessage' has a wrong offset!");
static_assert(offsetof(FS6PLAT_PlayerBehaviorReportForm, SurroundingMessages) == 0x0000A8, "Member 'FS6PLAT_PlayerBehaviorReportForm::SurroundingMessages' has a wrong offset!");

}

