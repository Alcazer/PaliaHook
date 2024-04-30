#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S6GameFeatureUtilities

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "GameFeatures_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class S6GameFeatureUtilities.S6_GameFeatureAction_RegisterAssetWithGenericRegistry
// 0x00D0 (0x00F8 - 0x0028)
class US6_GameFeatureAction_RegisterAssetWithGenericRegistry final  : public UGameFeatureAction
{
public:
	TSoftObjectPtr<class US6GenericAssetRegistryDefinition> TargetRegistry;                                    // 0x0028(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<TSoftObjectPtr<class UObject>>           AssetsToRegister;                                  // 0x0050(0x0050)(Edit, UObjectWrapper, NativeAccessSpecifierPublic)
	TSet<TWeakObjectPtr<class UGameInstance>>     GameInstancesRegisteredWith;                       // 0x00A0(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_32FE[0x8];                                     // 0x00F0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S6_GameFeatureAction_RegisterAssetWithGenericRegistry">();
	}
	static class US6_GameFeatureAction_RegisterAssetWithGenericRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<US6_GameFeatureAction_RegisterAssetWithGenericRegistry>();
	}
};
static_assert(alignof(US6_GameFeatureAction_RegisterAssetWithGenericRegistry) == 0x000008, "Wrong alignment on US6_GameFeatureAction_RegisterAssetWithGenericRegistry");
static_assert(sizeof(US6_GameFeatureAction_RegisterAssetWithGenericRegistry) == 0x0000F8, "Wrong size on US6_GameFeatureAction_RegisterAssetWithGenericRegistry");
static_assert(offsetof(US6_GameFeatureAction_RegisterAssetWithGenericRegistry, TargetRegistry) == 0x000028, "Member 'US6_GameFeatureAction_RegisterAssetWithGenericRegistry::TargetRegistry' has a wrong offset!");
static_assert(offsetof(US6_GameFeatureAction_RegisterAssetWithGenericRegistry, AssetsToRegister) == 0x000050, "Member 'US6_GameFeatureAction_RegisterAssetWithGenericRegistry::AssetsToRegister' has a wrong offset!");
static_assert(offsetof(US6_GameFeatureAction_RegisterAssetWithGenericRegistry, GameInstancesRegisteredWith) == 0x0000A0, "Member 'US6_GameFeatureAction_RegisterAssetWithGenericRegistry::GameInstancesRegisteredWith' has a wrong offset!");

// Class S6GameFeatureUtilities.S6GenericAssetRegistryDefinition
// 0x00C8 (0x00F8 - 0x0030)
class US6GenericAssetRegistryDefinition final  : public UDataAsset
{
public:
	TSoftClassPtr<class UClass>                   RequiredBaseClass;                                 // 0x0030(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<TSoftClassPtr<class UClass>>             RequiredInterfaces;                                // 0x0058(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
	TSet<TSoftObjectPtr<class UObject>>           RegisteredAssets;                                  // 0x00A8(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S6GenericAssetRegistryDefinition">();
	}
	static class US6GenericAssetRegistryDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<US6GenericAssetRegistryDefinition>();
	}
};
static_assert(alignof(US6GenericAssetRegistryDefinition) == 0x000008, "Wrong alignment on US6GenericAssetRegistryDefinition");
static_assert(sizeof(US6GenericAssetRegistryDefinition) == 0x0000F8, "Wrong size on US6GenericAssetRegistryDefinition");
static_assert(offsetof(US6GenericAssetRegistryDefinition, RequiredBaseClass) == 0x000030, "Member 'US6GenericAssetRegistryDefinition::RequiredBaseClass' has a wrong offset!");
static_assert(offsetof(US6GenericAssetRegistryDefinition, RequiredInterfaces) == 0x000058, "Member 'US6GenericAssetRegistryDefinition::RequiredInterfaces' has a wrong offset!");
static_assert(offsetof(US6GenericAssetRegistryDefinition, RegisteredAssets) == 0x0000A8, "Member 'US6GenericAssetRegistryDefinition::RegisteredAssets' has a wrong offset!");

// Class S6GameFeatureUtilities.S6GenericAssetRegistryInstance
// 0x0078 (0x00A0 - 0x0028)
class US6GenericAssetRegistryInstance final  : public UObject
{
public:
	class US6GenericAssetRegistryDefinition*      Definition;                                        // 0x0028(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<TSoftObjectPtr<class UObject>>           RegisteredAssets;                                  // 0x0030(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnAssetsRegistered;                                // 0x0080(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnAssetsUnregistered;                              // 0x0090(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	void OnAssetsRegistered__DelegateSignature(class US6GenericAssetRegistryInstance* RegistryInstance, TSet<TSoftObjectPtr<class UObject>>& Assets);
	void OnAssetsUnregistered__DelegateSignature(class US6GenericAssetRegistryInstance* RegistryInstance, TSet<TSoftObjectPtr<class UObject>>& Assets);
	void RegisterAssets(TSet<TSoftObjectPtr<class UObject>>& Assets);
	void UnregisterAssets(TSet<TSoftObjectPtr<class UObject>>& Assets);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S6GenericAssetRegistryInstance">();
	}
	static class US6GenericAssetRegistryInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<US6GenericAssetRegistryInstance>();
	}
};
static_assert(alignof(US6GenericAssetRegistryInstance) == 0x000008, "Wrong alignment on US6GenericAssetRegistryInstance");
static_assert(sizeof(US6GenericAssetRegistryInstance) == 0x0000A0, "Wrong size on US6GenericAssetRegistryInstance");
static_assert(offsetof(US6GenericAssetRegistryInstance, Definition) == 0x000028, "Member 'US6GenericAssetRegistryInstance::Definition' has a wrong offset!");
static_assert(offsetof(US6GenericAssetRegistryInstance, RegisteredAssets) == 0x000030, "Member 'US6GenericAssetRegistryInstance::RegisteredAssets' has a wrong offset!");
static_assert(offsetof(US6GenericAssetRegistryInstance, OnAssetsRegistered) == 0x000080, "Member 'US6GenericAssetRegistryInstance::OnAssetsRegistered' has a wrong offset!");
static_assert(offsetof(US6GenericAssetRegistryInstance, OnAssetsUnregistered) == 0x000090, "Member 'US6GenericAssetRegistryInstance::OnAssetsUnregistered' has a wrong offset!");

// Class S6GameFeatureUtilities.S6GenericAssetRegistrySubsystem
// 0x0050 (0x0080 - 0x0030)
class US6GenericAssetRegistrySubsystem final  : public UGameInstanceSubsystem
{
public:
	TMap<class US6GenericAssetRegistryDefinition*, class US6GenericAssetRegistryInstance*> InstanceMap;                                       // 0x0030(0x0050)(NativeAccessSpecifierPrivate)

public:
	class US6GenericAssetRegistryInstance* GetRegistryInstance(class US6GenericAssetRegistryDefinition* Registry);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S6GenericAssetRegistrySubsystem">();
	}
	static class US6GenericAssetRegistrySubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<US6GenericAssetRegistrySubsystem>();
	}
};
static_assert(alignof(US6GenericAssetRegistrySubsystem) == 0x000008, "Wrong alignment on US6GenericAssetRegistrySubsystem");
static_assert(sizeof(US6GenericAssetRegistrySubsystem) == 0x000080, "Wrong size on US6GenericAssetRegistrySubsystem");
static_assert(offsetof(US6GenericAssetRegistrySubsystem, InstanceMap) == 0x000030, "Member 'US6GenericAssetRegistrySubsystem::InstanceMap' has a wrong offset!");

}

