#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S6UXIntentSubsystem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function S6UXIntentSubsystem.S6RegisterUXActivityFunctor.HandleUXIntentReceived
// 0x0010 (0x0010 - 0x0000)
struct S6RegisterUXActivityFunctor_HandleUXIntentReceived final 
{
public:
	class US6UXIntentSubsystem*                   UXIntentSubsystem;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class US6UXIntent*                            UXIntent;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S6RegisterUXActivityFunctor_HandleUXIntentReceived) == 0x000008, "Wrong alignment on S6RegisterUXActivityFunctor_HandleUXIntentReceived");
static_assert(sizeof(S6RegisterUXActivityFunctor_HandleUXIntentReceived) == 0x000010, "Wrong size on S6RegisterUXActivityFunctor_HandleUXIntentReceived");
static_assert(offsetof(S6RegisterUXActivityFunctor_HandleUXIntentReceived, UXIntentSubsystem) == 0x000000, "Member 'S6RegisterUXActivityFunctor_HandleUXIntentReceived::UXIntentSubsystem' has a wrong offset!");
static_assert(offsetof(S6RegisterUXActivityFunctor_HandleUXIntentReceived, UXIntent) == 0x000008, "Member 'S6RegisterUXActivityFunctor_HandleUXIntentReceived::UXIntent' has a wrong offset!");

// Function S6UXIntentSubsystem.S6UXIntentSubsystem.CanStartUXActivity
// 0x0030 (0x0030 - 0x0000)
struct S6UXIntentSubsystem_CanStartUXActivity final 
{
public:
	TSoftClassPtr<class UClass>                   UXIntentType;                                      // 0x0000(0x0028)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D56[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(S6UXIntentSubsystem_CanStartUXActivity) == 0x000008, "Wrong alignment on S6UXIntentSubsystem_CanStartUXActivity");
static_assert(sizeof(S6UXIntentSubsystem_CanStartUXActivity) == 0x000030, "Wrong size on S6UXIntentSubsystem_CanStartUXActivity");
static_assert(offsetof(S6UXIntentSubsystem_CanStartUXActivity, UXIntentType) == 0x000000, "Member 'S6UXIntentSubsystem_CanStartUXActivity::UXIntentType' has a wrong offset!");
static_assert(offsetof(S6UXIntentSubsystem_CanStartUXActivity, ReturnValue) == 0x000028, "Member 'S6UXIntentSubsystem_CanStartUXActivity::ReturnValue' has a wrong offset!");

// Function S6UXIntentSubsystem.S6UXIntentSubsystem.RegisterUXActivity
// 0x0048 (0x0048 - 0x0000)
struct S6UXIntentSubsystem_RegisterUXActivity final 
{
public:
	TSoftClassPtr<class UClass>                   UXIntentType;                                      // 0x0000(0x0028)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(class US6UXIntentSubsystem* UXIntentSubsystem, class US6UXIntent* UXIntent)> HandleUXIntentReceived;                            // 0x0028(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ReturnValue;                                       // 0x0038(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S6UXIntentSubsystem_RegisterUXActivity) == 0x000008, "Wrong alignment on S6UXIntentSubsystem_RegisterUXActivity");
static_assert(sizeof(S6UXIntentSubsystem_RegisterUXActivity) == 0x000048, "Wrong size on S6UXIntentSubsystem_RegisterUXActivity");
static_assert(offsetof(S6UXIntentSubsystem_RegisterUXActivity, UXIntentType) == 0x000000, "Member 'S6UXIntentSubsystem_RegisterUXActivity::UXIntentType' has a wrong offset!");
static_assert(offsetof(S6UXIntentSubsystem_RegisterUXActivity, HandleUXIntentReceived) == 0x000028, "Member 'S6UXIntentSubsystem_RegisterUXActivity::HandleUXIntentReceived' has a wrong offset!");
static_assert(offsetof(S6UXIntentSubsystem_RegisterUXActivity, ReturnValue) == 0x000038, "Member 'S6UXIntentSubsystem_RegisterUXActivity::ReturnValue' has a wrong offset!");

// DelegateFunction S6UXIntentSubsystem.S6UXIntentSubsystem.S6OnDifferentUXActivityRegistered__DelegateSignature
// 0x0030 (0x0030 - 0x0000)
struct S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered__DelegateSignature final 
{
public:
	class US6UXIntentSubsystem*                   UXIntentSubsystem;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   UXIntentType;                                      // 0x0008(0x0028)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered__DelegateSignature) == 0x000008, "Wrong alignment on S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered__DelegateSignature");
static_assert(sizeof(S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered__DelegateSignature) == 0x000030, "Wrong size on S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered__DelegateSignature");
static_assert(offsetof(S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered__DelegateSignature, UXIntentSubsystem) == 0x000000, "Member 'S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered__DelegateSignature::UXIntentSubsystem' has a wrong offset!");
static_assert(offsetof(S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered__DelegateSignature, UXIntentType) == 0x000008, "Member 'S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered__DelegateSignature::UXIntentType' has a wrong offset!");

// DelegateFunction S6UXIntentSubsystem.S6UXIntentSubsystem.S6OnDifferentUXActivityRegistered_Multicast__DelegateSignature
// 0x0030 (0x0030 - 0x0000)
struct S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered_Multicast__DelegateSignature final 
{
public:
	class US6UXIntentSubsystem*                   UXIntentSubsystem;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   UXIntentType;                                      // 0x0008(0x0028)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered_Multicast__DelegateSignature) == 0x000008, "Wrong alignment on S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered_Multicast__DelegateSignature");
static_assert(sizeof(S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered_Multicast__DelegateSignature) == 0x000030, "Wrong size on S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered_Multicast__DelegateSignature");
static_assert(offsetof(S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered_Multicast__DelegateSignature, UXIntentSubsystem) == 0x000000, "Member 'S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered_Multicast__DelegateSignature::UXIntentSubsystem' has a wrong offset!");
static_assert(offsetof(S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered_Multicast__DelegateSignature, UXIntentType) == 0x000008, "Member 'S6UXIntentSubsystem_S6OnDifferentUXActivityRegistered_Multicast__DelegateSignature::UXIntentType' has a wrong offset!");

// Function S6UXIntentSubsystem.S6UXIntentSubsystem.SubscribeToUXActivityChanges
// 0x0038 (0x0038 - 0x0000)
struct S6UXIntentSubsystem_SubscribeToUXActivityChanges final 
{
public:
	TSoftClassPtr<class UClass>                   UXIntentType;                                      // 0x0000(0x0028)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(class US6UXIntentSubsystem* UXIntentSubsystem, TSoftClassPtr<class UClass>& UXIntentType)> HandleDifferentUXActivityRegistered;               // 0x0028(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S6UXIntentSubsystem_SubscribeToUXActivityChanges) == 0x000008, "Wrong alignment on S6UXIntentSubsystem_SubscribeToUXActivityChanges");
static_assert(sizeof(S6UXIntentSubsystem_SubscribeToUXActivityChanges) == 0x000038, "Wrong size on S6UXIntentSubsystem_SubscribeToUXActivityChanges");
static_assert(offsetof(S6UXIntentSubsystem_SubscribeToUXActivityChanges, UXIntentType) == 0x000000, "Member 'S6UXIntentSubsystem_SubscribeToUXActivityChanges::UXIntentType' has a wrong offset!");
static_assert(offsetof(S6UXIntentSubsystem_SubscribeToUXActivityChanges, HandleDifferentUXActivityRegistered) == 0x000028, "Member 'S6UXIntentSubsystem_SubscribeToUXActivityChanges::HandleDifferentUXActivityRegistered' has a wrong offset!");

// Function S6UXIntentSubsystem.S6UXIntentSubsystem.TryStartUXActivity
// 0x0010 (0x0010 - 0x0000)
struct S6UXIntentSubsystem_TryStartUXActivity final 
{
public:
	class US6UXIntent*                            UXIntent;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D57[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(S6UXIntentSubsystem_TryStartUXActivity) == 0x000008, "Wrong alignment on S6UXIntentSubsystem_TryStartUXActivity");
static_assert(sizeof(S6UXIntentSubsystem_TryStartUXActivity) == 0x000010, "Wrong size on S6UXIntentSubsystem_TryStartUXActivity");
static_assert(offsetof(S6UXIntentSubsystem_TryStartUXActivity, UXIntent) == 0x000000, "Member 'S6UXIntentSubsystem_TryStartUXActivity::UXIntent' has a wrong offset!");
static_assert(offsetof(S6UXIntentSubsystem_TryStartUXActivity, ReturnValue) == 0x000008, "Member 'S6UXIntentSubsystem_TryStartUXActivity::ReturnValue' has a wrong offset!");

// Function S6UXIntentSubsystem.S6UXIntentSubsystem.UnregisterUXActivity
// 0x0014 (0x0014 - 0x0000)
struct S6UXIntentSubsystem_UnregisterUXActivity final 
{
public:
	struct FGuid                                  UXActivityHandle;                                  // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D58[0x3];                                     // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(S6UXIntentSubsystem_UnregisterUXActivity) == 0x000004, "Wrong alignment on S6UXIntentSubsystem_UnregisterUXActivity");
static_assert(sizeof(S6UXIntentSubsystem_UnregisterUXActivity) == 0x000014, "Wrong size on S6UXIntentSubsystem_UnregisterUXActivity");
static_assert(offsetof(S6UXIntentSubsystem_UnregisterUXActivity, UXActivityHandle) == 0x000000, "Member 'S6UXIntentSubsystem_UnregisterUXActivity::UXActivityHandle' has a wrong offset!");
static_assert(offsetof(S6UXIntentSubsystem_UnregisterUXActivity, ReturnValue) == 0x000010, "Member 'S6UXIntentSubsystem_UnregisterUXActivity::ReturnValue' has a wrong offset!");

// Function S6UXIntentSubsystem.S6UXIntentSubsystem.UnsubscribeFromUXActivityChanges
// 0x0038 (0x0038 - 0x0000)
struct S6UXIntentSubsystem_UnsubscribeFromUXActivityChanges final 
{
public:
	TSoftClassPtr<class UClass>                   UXIntentType;                                      // 0x0000(0x0028)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(class US6UXIntentSubsystem* UXIntentSubsystem, TSoftClassPtr<class UClass>& UXIntentType)> HandleDifferentUXActivityRegistered;               // 0x0028(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S6UXIntentSubsystem_UnsubscribeFromUXActivityChanges) == 0x000008, "Wrong alignment on S6UXIntentSubsystem_UnsubscribeFromUXActivityChanges");
static_assert(sizeof(S6UXIntentSubsystem_UnsubscribeFromUXActivityChanges) == 0x000038, "Wrong size on S6UXIntentSubsystem_UnsubscribeFromUXActivityChanges");
static_assert(offsetof(S6UXIntentSubsystem_UnsubscribeFromUXActivityChanges, UXIntentType) == 0x000000, "Member 'S6UXIntentSubsystem_UnsubscribeFromUXActivityChanges::UXIntentType' has a wrong offset!");
static_assert(offsetof(S6UXIntentSubsystem_UnsubscribeFromUXActivityChanges, HandleDifferentUXActivityRegistered) == 0x000028, "Member 'S6UXIntentSubsystem_UnsubscribeFromUXActivityChanges::HandleDifferentUXActivityRegistered' has a wrong offset!");

}

