#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LocalizableMessage

#include "Basic.hpp"

#include "StructUtils_structs.hpp"


namespace SDK
{

// ScriptStruct LocalizableMessage.LocalizableMessageParameterEntry
// 0x0020 (0x0020 - 0x0000)
struct FLocalizableMessageParameterEntry final 
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInstancedStruct                       Value;                                             // 0x0010(0x0010)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FLocalizableMessageParameterEntry) == 0x000008, "Wrong alignment on FLocalizableMessageParameterEntry");
static_assert(sizeof(FLocalizableMessageParameterEntry) == 0x000020, "Wrong size on FLocalizableMessageParameterEntry");
static_assert(offsetof(FLocalizableMessageParameterEntry, Key) == 0x000000, "Member 'FLocalizableMessageParameterEntry::Key' has a wrong offset!");
static_assert(offsetof(FLocalizableMessageParameterEntry, Value) == 0x000010, "Member 'FLocalizableMessageParameterEntry::Value' has a wrong offset!");

// ScriptStruct LocalizableMessage.LocalizableMessage
// 0x0030 (0x0030 - 0x0000)
struct FLocalizableMessage final 
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DefaultText;                                       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLocalizableMessageParameterEntry> Substitutions;                                     // 0x0020(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLocalizableMessage) == 0x000008, "Wrong alignment on FLocalizableMessage");
static_assert(sizeof(FLocalizableMessage) == 0x000030, "Wrong size on FLocalizableMessage");
static_assert(offsetof(FLocalizableMessage, Key) == 0x000000, "Member 'FLocalizableMessage::Key' has a wrong offset!");
static_assert(offsetof(FLocalizableMessage, DefaultText) == 0x000010, "Member 'FLocalizableMessage::DefaultText' has a wrong offset!");
static_assert(offsetof(FLocalizableMessage, Substitutions) == 0x000020, "Member 'FLocalizableMessage::Substitutions' has a wrong offset!");

// ScriptStruct LocalizableMessage.LocalizableMessageParameterInt
// 0x0008 (0x0008 - 0x0000)
struct FLocalizableMessageParameterInt final 
{
public:
	int64                                         Value;                                             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLocalizableMessageParameterInt) == 0x000008, "Wrong alignment on FLocalizableMessageParameterInt");
static_assert(sizeof(FLocalizableMessageParameterInt) == 0x000008, "Wrong size on FLocalizableMessageParameterInt");
static_assert(offsetof(FLocalizableMessageParameterInt, Value) == 0x000000, "Member 'FLocalizableMessageParameterInt::Value' has a wrong offset!");

// ScriptStruct LocalizableMessage.LocalizableMessageParameterFloat
// 0x0008 (0x0008 - 0x0000)
struct FLocalizableMessageParameterFloat final 
{
public:
	double                                        Value;                                             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLocalizableMessageParameterFloat) == 0x000008, "Wrong alignment on FLocalizableMessageParameterFloat");
static_assert(sizeof(FLocalizableMessageParameterFloat) == 0x000008, "Wrong size on FLocalizableMessageParameterFloat");
static_assert(offsetof(FLocalizableMessageParameterFloat, Value) == 0x000000, "Member 'FLocalizableMessageParameterFloat::Value' has a wrong offset!");

// ScriptStruct LocalizableMessage.LocalizableMessageParameterString
// 0x0010 (0x0010 - 0x0000)
struct FLocalizableMessageParameterString final 
{
public:
	class FString                                 Value;                                             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLocalizableMessageParameterString) == 0x000008, "Wrong alignment on FLocalizableMessageParameterString");
static_assert(sizeof(FLocalizableMessageParameterString) == 0x000010, "Wrong size on FLocalizableMessageParameterString");
static_assert(offsetof(FLocalizableMessageParameterString, Value) == 0x000000, "Member 'FLocalizableMessageParameterString::Value' has a wrong offset!");

// ScriptStruct LocalizableMessage.LocalizableMessageParameterMessage
// 0x0030 (0x0030 - 0x0000)
struct FLocalizableMessageParameterMessage final 
{
public:
	struct FLocalizableMessage                    Value;                                             // 0x0000(0x0030)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FLocalizableMessageParameterMessage) == 0x000008, "Wrong alignment on FLocalizableMessageParameterMessage");
static_assert(sizeof(FLocalizableMessageParameterMessage) == 0x000030, "Wrong size on FLocalizableMessageParameterMessage");
static_assert(offsetof(FLocalizableMessageParameterMessage, Value) == 0x000000, "Member 'FLocalizableMessageParameterMessage::Value' has a wrong offset!");

}

