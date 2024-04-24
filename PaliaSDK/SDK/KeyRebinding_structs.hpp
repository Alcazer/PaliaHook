#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KeyRebinding

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum KeyRebinding.EKeyRebind_BindingResultType
// NumValues: 0x000B
enum class EKeyRebind_BindingResultType : uint8
{
	Invalid                                  = 0,
	Fail_InavlidSlot                         = 1,
	Fail_CannotBeRebound                     = 2,
	Fail_InvalidKey                          = 3,
	Fail_UnavailableKey                      = 4,
	Fail_HasCoreConflict                     = 5,
	Fail_Shared_Conflictwitch_Normal         = 6,
	Fail_Normal_Conflictwitch_Shared         = 7,
	Fail_DisableKeyforSpecialAction          = 8,
	Success                                  = 9,
	EKeyRebind_MAX                           = 10,
};

// Enum KeyRebinding.EKeyRebind_KeySlot
// NumValues: 0x0003
enum class EKeyRebind_KeySlot : uint8
{
	First                                    = 0,
	Second                                   = 1,
	Max                                      = 2,
};

// Enum KeyRebinding.EKeyRebindValidationExcuteType
// NumValues: 0x0003
enum class EKeyRebindValidationExcuteType : uint8
{
	ReBinding                                = 0,
	UnBinding                                = 1,
	EKeyRebindValidationExcuteType_MAX       = 2,
};

// Enum KeyRebinding.EKeyRebindValidationResult
// NumValues: 0x0003
enum class EKeyRebindValidationResult : uint8
{
	InValid                                  = 0,
	Valid                                    = 1,
	EKeyRebindValidationResult_MAX           = 2,
};

// ScriptStruct KeyRebinding.KeyRebind_InputKey
// 0x0030 (0x0030 - 0x0000)
struct FKeyRebind_InputKey final 
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                   ChordKey;                                          // 0x0018(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyRebind_InputKey) == 0x000008, "Wrong alignment on FKeyRebind_InputKey");
static_assert(sizeof(FKeyRebind_InputKey) == 0x000030, "Wrong size on FKeyRebind_InputKey");
static_assert(offsetof(FKeyRebind_InputKey, Key) == 0x000000, "Member 'FKeyRebind_InputKey::Key' has a wrong offset!");
static_assert(offsetof(FKeyRebind_InputKey, ChordKey) == 0x000018, "Member 'FKeyRebind_InputKey::ChordKey' has a wrong offset!");

// ScriptStruct KeyRebinding.KeyRebind_KeyMappingEntry
// 0x0038 (0x0038 - 0x0000)
struct FKeyRebind_KeyMappingEntry final 
{
public:
	class UInputAction*                           InputAction;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RebindIdentifier;                                  // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RebindGroup;                                       // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanBeUnbind;                                      // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E14[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FKeyRebind_InputKey>            InputKeys;                                         // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UKeyRebindValidatorBase*>        Validators;                                        // 0x0028(0x0010)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyRebind_KeyMappingEntry) == 0x000008, "Wrong alignment on FKeyRebind_KeyMappingEntry");
static_assert(sizeof(FKeyRebind_KeyMappingEntry) == 0x000038, "Wrong size on FKeyRebind_KeyMappingEntry");
static_assert(offsetof(FKeyRebind_KeyMappingEntry, InputAction) == 0x000000, "Member 'FKeyRebind_KeyMappingEntry::InputAction' has a wrong offset!");
static_assert(offsetof(FKeyRebind_KeyMappingEntry, RebindIdentifier) == 0x000008, "Member 'FKeyRebind_KeyMappingEntry::RebindIdentifier' has a wrong offset!");
static_assert(offsetof(FKeyRebind_KeyMappingEntry, RebindGroup) == 0x00000C, "Member 'FKeyRebind_KeyMappingEntry::RebindGroup' has a wrong offset!");
static_assert(offsetof(FKeyRebind_KeyMappingEntry, bCanBeUnbind) == 0x000010, "Member 'FKeyRebind_KeyMappingEntry::bCanBeUnbind' has a wrong offset!");
static_assert(offsetof(FKeyRebind_KeyMappingEntry, InputKeys) == 0x000018, "Member 'FKeyRebind_KeyMappingEntry::InputKeys' has a wrong offset!");
static_assert(offsetof(FKeyRebind_KeyMappingEntry, Validators) == 0x000028, "Member 'FKeyRebind_KeyMappingEntry::Validators' has a wrong offset!");

// ScriptStruct KeyRebinding.KeyRebind_CachedKeyRebindingMappings
// 0x0018 (0x0018 - 0x0000)
struct FKeyRebind_CachedKeyRebindingMappings final 
{
public:
	uint8                                         Pad_1E15[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FKeyRebind_KeyMappingEntry>     MappingEntries;                                    // 0x0008(0x0010)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyRebind_CachedKeyRebindingMappings) == 0x000008, "Wrong alignment on FKeyRebind_CachedKeyRebindingMappings");
static_assert(sizeof(FKeyRebind_CachedKeyRebindingMappings) == 0x000018, "Wrong size on FKeyRebind_CachedKeyRebindingMappings");
static_assert(offsetof(FKeyRebind_CachedKeyRebindingMappings, MappingEntries) == 0x000008, "Member 'FKeyRebind_CachedKeyRebindingMappings::MappingEntries' has a wrong offset!");

// ScriptStruct KeyRebinding.KeyRebind_RebindResult
// 0x0078 (0x0078 - 0x0000)
struct FKeyRebind_RebindResult final 
{
public:
	struct FKeyRebind_InputKey                    RebindKey;                                         // 0x0000(0x0030)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	EKeyRebind_BindingResultType                  BindingType;                                       // 0x0030(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E16[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UInputAction*>                   ConflictActions;                                   // 0x0038(0x0010)(BlueprintVisible, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	class FText                                   ConflictActionDesc;                                // 0x0048(0x0018)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	class FText                                   ErrorMessage;                                      // 0x0060(0x0018)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyRebind_RebindResult) == 0x000008, "Wrong alignment on FKeyRebind_RebindResult");
static_assert(sizeof(FKeyRebind_RebindResult) == 0x000078, "Wrong size on FKeyRebind_RebindResult");
static_assert(offsetof(FKeyRebind_RebindResult, RebindKey) == 0x000000, "Member 'FKeyRebind_RebindResult::RebindKey' has a wrong offset!");
static_assert(offsetof(FKeyRebind_RebindResult, BindingType) == 0x000030, "Member 'FKeyRebind_RebindResult::BindingType' has a wrong offset!");
static_assert(offsetof(FKeyRebind_RebindResult, ConflictActions) == 0x000038, "Member 'FKeyRebind_RebindResult::ConflictActions' has a wrong offset!");
static_assert(offsetof(FKeyRebind_RebindResult, ConflictActionDesc) == 0x000048, "Member 'FKeyRebind_RebindResult::ConflictActionDesc' has a wrong offset!");
static_assert(offsetof(FKeyRebind_RebindResult, ErrorMessage) == 0x000060, "Member 'FKeyRebind_RebindResult::ErrorMessage' has a wrong offset!");

// ScriptStruct KeyRebinding.KeyRebind_UnbindResult
// 0x0038 (0x0038 - 0x0000)
struct FKeyRebind_UnbindResult final 
{
public:
	bool                                          bUnbindingSuccessed;                               // 0x0000(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFailedUnboundbyCoreAction;                        // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E17[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyRebind_InputKey                    UnbindKey;                                         // 0x0008(0x0030)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyRebind_UnbindResult) == 0x000008, "Wrong alignment on FKeyRebind_UnbindResult");
static_assert(sizeof(FKeyRebind_UnbindResult) == 0x000038, "Wrong size on FKeyRebind_UnbindResult");
static_assert(offsetof(FKeyRebind_UnbindResult, bUnbindingSuccessed) == 0x000000, "Member 'FKeyRebind_UnbindResult::bUnbindingSuccessed' has a wrong offset!");
static_assert(offsetof(FKeyRebind_UnbindResult, bFailedUnboundbyCoreAction) == 0x000001, "Member 'FKeyRebind_UnbindResult::bFailedUnboundbyCoreAction' has a wrong offset!");
static_assert(offsetof(FKeyRebind_UnbindResult, UnbindKey) == 0x000008, "Member 'FKeyRebind_UnbindResult::UnbindKey' has a wrong offset!");

// ScriptStruct KeyRebinding.KeyRebind_DisplayResult
// 0x00E0 (0x00E0 - 0x0000)
struct FKeyRebind_DisplayResult final 
{
public:
	bool                                          bIsRebinding;                                      // 0x0000(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E18[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputAction*                           InputAction;                                       // 0x0008(0x0008)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   ActionDesc;                                        // 0x0010(0x0018)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	int32                                         GroupID;                                           // 0x0028(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E19[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyRebind_RebindResult                RebindingInfo;                                     // 0x0030(0x0078)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FKeyRebind_UnbindResult                UnbindingInfo;                                     // 0x00A8(0x0038)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyRebind_DisplayResult) == 0x000008, "Wrong alignment on FKeyRebind_DisplayResult");
static_assert(sizeof(FKeyRebind_DisplayResult) == 0x0000E0, "Wrong size on FKeyRebind_DisplayResult");
static_assert(offsetof(FKeyRebind_DisplayResult, bIsRebinding) == 0x000000, "Member 'FKeyRebind_DisplayResult::bIsRebinding' has a wrong offset!");
static_assert(offsetof(FKeyRebind_DisplayResult, InputAction) == 0x000008, "Member 'FKeyRebind_DisplayResult::InputAction' has a wrong offset!");
static_assert(offsetof(FKeyRebind_DisplayResult, ActionDesc) == 0x000010, "Member 'FKeyRebind_DisplayResult::ActionDesc' has a wrong offset!");
static_assert(offsetof(FKeyRebind_DisplayResult, GroupID) == 0x000028, "Member 'FKeyRebind_DisplayResult::GroupID' has a wrong offset!");
static_assert(offsetof(FKeyRebind_DisplayResult, RebindingInfo) == 0x000030, "Member 'FKeyRebind_DisplayResult::RebindingInfo' has a wrong offset!");
static_assert(offsetof(FKeyRebind_DisplayResult, UnbindingInfo) == 0x0000A8, "Member 'FKeyRebind_DisplayResult::UnbindingInfo' has a wrong offset!");

// ScriptStruct KeyRebinding.KeyRebind_UnbindingResult
// 0x0030 (0x0030 - 0x0000)
struct FKeyRebind_UnbindingResult final 
{
public:
	int32                                         GroupID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Identifier;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EKeyRebind_KeySlot                            Slot;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanBeUnbind;                                      // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E1A[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UInputAction*>                   UnbindingArray;                                    // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                           ErrorMessages;                                     // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyRebind_UnbindingResult) == 0x000008, "Wrong alignment on FKeyRebind_UnbindingResult");
static_assert(sizeof(FKeyRebind_UnbindingResult) == 0x000030, "Wrong size on FKeyRebind_UnbindingResult");
static_assert(offsetof(FKeyRebind_UnbindingResult, GroupID) == 0x000000, "Member 'FKeyRebind_UnbindingResult::GroupID' has a wrong offset!");
static_assert(offsetof(FKeyRebind_UnbindingResult, Identifier) == 0x000004, "Member 'FKeyRebind_UnbindingResult::Identifier' has a wrong offset!");
static_assert(offsetof(FKeyRebind_UnbindingResult, Slot) == 0x000008, "Member 'FKeyRebind_UnbindingResult::Slot' has a wrong offset!");
static_assert(offsetof(FKeyRebind_UnbindingResult, bCanBeUnbind) == 0x000009, "Member 'FKeyRebind_UnbindingResult::bCanBeUnbind' has a wrong offset!");
static_assert(offsetof(FKeyRebind_UnbindingResult, UnbindingArray) == 0x000010, "Member 'FKeyRebind_UnbindingResult::UnbindingArray' has a wrong offset!");
static_assert(offsetof(FKeyRebind_UnbindingResult, ErrorMessages) == 0x000020, "Member 'FKeyRebind_UnbindingResult::ErrorMessages' has a wrong offset!");

// ScriptStruct KeyRebinding.InputKeysIcon
// 0x01A0 (0x01A0 - 0x0000)
struct FInputKeysIcon final 
{
public:
	struct FSlateBrush                            SourceIcon;                                        // 0x0000(0x00D0)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FSlateBrush                            ChordIcon;                                         // 0x00D0(0x00D0)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInputKeysIcon) == 0x000010, "Wrong alignment on FInputKeysIcon");
static_assert(sizeof(FInputKeysIcon) == 0x0001A0, "Wrong size on FInputKeysIcon");
static_assert(offsetof(FInputKeysIcon, SourceIcon) == 0x000000, "Member 'FInputKeysIcon::SourceIcon' has a wrong offset!");
static_assert(offsetof(FInputKeysIcon, ChordIcon) == 0x0000D0, "Member 'FInputKeysIcon::ChordIcon' has a wrong offset!");

// ScriptStruct KeyRebinding.KeyRebind_BindingResult
// 0x0070 (0x0070 - 0x0000)
struct FKeyRebind_BindingResult final 
{
public:
	int32                                         GroupID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E1B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputAction*                           InputAction;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EKeyRebind_KeySlot                            Slot;                                              // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E1C[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyRebind_InputKey                    Keys;                                              // 0x0018(0x0030)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<class UInputAction*>                   ConflictActions;                                   // 0x0048(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	EKeyRebind_BindingResultType                  ResultType;                                        // 0x0058(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E1D[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           ErrorMesssages;                                    // 0x0060(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyRebind_BindingResult) == 0x000008, "Wrong alignment on FKeyRebind_BindingResult");
static_assert(sizeof(FKeyRebind_BindingResult) == 0x000070, "Wrong size on FKeyRebind_BindingResult");
static_assert(offsetof(FKeyRebind_BindingResult, GroupID) == 0x000000, "Member 'FKeyRebind_BindingResult::GroupID' has a wrong offset!");
static_assert(offsetof(FKeyRebind_BindingResult, InputAction) == 0x000008, "Member 'FKeyRebind_BindingResult::InputAction' has a wrong offset!");
static_assert(offsetof(FKeyRebind_BindingResult, Slot) == 0x000010, "Member 'FKeyRebind_BindingResult::Slot' has a wrong offset!");
static_assert(offsetof(FKeyRebind_BindingResult, Keys) == 0x000018, "Member 'FKeyRebind_BindingResult::Keys' has a wrong offset!");
static_assert(offsetof(FKeyRebind_BindingResult, ConflictActions) == 0x000048, "Member 'FKeyRebind_BindingResult::ConflictActions' has a wrong offset!");
static_assert(offsetof(FKeyRebind_BindingResult, ResultType) == 0x000058, "Member 'FKeyRebind_BindingResult::ResultType' has a wrong offset!");
static_assert(offsetof(FKeyRebind_BindingResult, ErrorMesssages) == 0x000060, "Member 'FKeyRebind_BindingResult::ErrorMesssages' has a wrong offset!");

// ScriptStruct KeyRebinding.KeyRebind_CustomKeyMappingEntry
// 0x0018 (0x0018 - 0x0000)
struct FKeyRebind_CustomKeyMappingEntry final 
{
public:
	class FName                                   InputAction;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKeyRebind_InputKey>            InputKeys;                                         // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyRebind_CustomKeyMappingEntry) == 0x000008, "Wrong alignment on FKeyRebind_CustomKeyMappingEntry");
static_assert(sizeof(FKeyRebind_CustomKeyMappingEntry) == 0x000018, "Wrong size on FKeyRebind_CustomKeyMappingEntry");
static_assert(offsetof(FKeyRebind_CustomKeyMappingEntry, InputAction) == 0x000000, "Member 'FKeyRebind_CustomKeyMappingEntry::InputAction' has a wrong offset!");
static_assert(offsetof(FKeyRebind_CustomKeyMappingEntry, InputKeys) == 0x000008, "Member 'FKeyRebind_CustomKeyMappingEntry::InputKeys' has a wrong offset!");

// ScriptStruct KeyRebinding.KeyRebind_CustomKeyMappings
// 0x0018 (0x0018 - 0x0000)
struct FKeyRebind_CustomKeyMappings final 
{
public:
	int32                                         Version;                                           // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonInputType                              InputType;                                         // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E1E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FKeyRebind_CustomKeyMappingEntry> MappingEntries;                                    // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyRebind_CustomKeyMappings) == 0x000008, "Wrong alignment on FKeyRebind_CustomKeyMappings");
static_assert(sizeof(FKeyRebind_CustomKeyMappings) == 0x000018, "Wrong size on FKeyRebind_CustomKeyMappings");
static_assert(offsetof(FKeyRebind_CustomKeyMappings, Version) == 0x000000, "Member 'FKeyRebind_CustomKeyMappings::Version' has a wrong offset!");
static_assert(offsetof(FKeyRebind_CustomKeyMappings, InputType) == 0x000004, "Member 'FKeyRebind_CustomKeyMappings::InputType' has a wrong offset!");
static_assert(offsetof(FKeyRebind_CustomKeyMappings, MappingEntries) == 0x000008, "Member 'FKeyRebind_CustomKeyMappings::MappingEntries' has a wrong offset!");

// ScriptStruct KeyRebinding.KeyRebind_InvertControlStickSettings
// 0x0010 (0x0010 - 0x0000)
struct FKeyRebind_InvertControlStickSettings final 
{
public:
	TArray<class UInputMappingContext*>           TargetIMCs;                                        // 0x0000(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyRebind_InvertControlStickSettings) == 0x000008, "Wrong alignment on FKeyRebind_InvertControlStickSettings");
static_assert(sizeof(FKeyRebind_InvertControlStickSettings) == 0x000010, "Wrong size on FKeyRebind_InvertControlStickSettings");
static_assert(offsetof(FKeyRebind_InvertControlStickSettings, TargetIMCs) == 0x000000, "Member 'FKeyRebind_InvertControlStickSettings::TargetIMCs' has a wrong offset!");

// ScriptStruct KeyRebinding.KeyRebind_RichTextInputKeyData
// 0x0010 (0x0018 - 0x0008)
struct FKeyRebind_RichTextInputKeyData final  : public FTableRowBase
{
public:
	TArray<class UInputMappingContext*>           IMCs;                                              // 0x0008(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKeyRebind_RichTextInputKeyData) == 0x000008, "Wrong alignment on FKeyRebind_RichTextInputKeyData");
static_assert(sizeof(FKeyRebind_RichTextInputKeyData) == 0x000018, "Wrong size on FKeyRebind_RichTextInputKeyData");
static_assert(offsetof(FKeyRebind_RichTextInputKeyData, IMCs) == 0x000008, "Member 'FKeyRebind_RichTextInputKeyData::IMCs' has a wrong offset!");

// ScriptStruct KeyRebinding.InputKeys
// 0x0038 (0x0038 - 0x0000)
struct FInputKeys final 
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                   ChordKey;                                          // 0x0018(0x0018)(BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHoldInput;                                        // 0x0030(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E1F[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FInputKeys) == 0x000008, "Wrong alignment on FInputKeys");
static_assert(sizeof(FInputKeys) == 0x000038, "Wrong size on FInputKeys");
static_assert(offsetof(FInputKeys, Key) == 0x000000, "Member 'FInputKeys::Key' has a wrong offset!");
static_assert(offsetof(FInputKeys, ChordKey) == 0x000018, "Member 'FInputKeys::ChordKey' has a wrong offset!");
static_assert(offsetof(FInputKeys, bHoldInput) == 0x000030, "Member 'FInputKeys::bHoldInput' has a wrong offset!");

}

