#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameFeatures

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameFeatures_structs.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class GameFeatures.GameFeatureStateChangeObserver
// 0x0000 (0x0028 - 0x0028)
class IGameFeatureStateChangeObserver final  : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureStateChangeObserver">();
	}
	static class IGameFeatureStateChangeObserver* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGameFeatureStateChangeObserver>();
	}
};
static_assert(alignof(IGameFeatureStateChangeObserver) == 0x000008, "Wrong alignment on IGameFeatureStateChangeObserver");
static_assert(sizeof(IGameFeatureStateChangeObserver) == 0x000028, "Wrong size on IGameFeatureStateChangeObserver");

// Class GameFeatures.GameFeatureAction
// 0x0000 (0x0028 - 0x0028)
class UGameFeatureAction : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction">();
	}
	static class UGameFeatureAction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction>();
	}
};
static_assert(alignof(UGameFeatureAction) == 0x000008, "Wrong alignment on UGameFeatureAction");
static_assert(sizeof(UGameFeatureAction) == 0x000028, "Wrong size on UGameFeatureAction");

// Class GameFeatures.GameFeatureAction_AddCheats
// 0x0038 (0x0060 - 0x0028)
class UGameFeatureAction_AddCheats final  : public UGameFeatureAction
{
public:
	TArray<TSoftClassPtr<class UClass>>           CheatManagers;                                     // 0x0028(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                          bLoadCheatManagersAsync;                           // 0x0038(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E24[0xF];                                     // 0x0039(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TWeakObjectPtr<class UCheatManagerExtension>> SpawnedCheatManagers;                              // 0x0048(0x0010)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1E25[0x8];                                     // 0x0058(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_AddCheats">();
	}
	static class UGameFeatureAction_AddCheats* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_AddCheats>();
	}
};
static_assert(alignof(UGameFeatureAction_AddCheats) == 0x000008, "Wrong alignment on UGameFeatureAction_AddCheats");
static_assert(sizeof(UGameFeatureAction_AddCheats) == 0x000060, "Wrong size on UGameFeatureAction_AddCheats");
static_assert(offsetof(UGameFeatureAction_AddCheats, CheatManagers) == 0x000028, "Member 'UGameFeatureAction_AddCheats::CheatManagers' has a wrong offset!");
static_assert(offsetof(UGameFeatureAction_AddCheats, bLoadCheatManagersAsync) == 0x000038, "Member 'UGameFeatureAction_AddCheats::bLoadCheatManagersAsync' has a wrong offset!");
static_assert(offsetof(UGameFeatureAction_AddCheats, SpawnedCheatManagers) == 0x000048, "Member 'UGameFeatureAction_AddCheats::SpawnedCheatManagers' has a wrong offset!");

// Class GameFeatures.GameFeatureAction_AddComponents
// 0x0060 (0x0088 - 0x0028)
class UGameFeatureAction_AddComponents final  : public UGameFeatureAction
{
public:
	TArray<struct FGameFeatureComponentEntry>     ComponentList;                                     // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E26[0x50];                                    // 0x0038(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_AddComponents">();
	}
	static class UGameFeatureAction_AddComponents* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_AddComponents>();
	}
};
static_assert(alignof(UGameFeatureAction_AddComponents) == 0x000008, "Wrong alignment on UGameFeatureAction_AddComponents");
static_assert(sizeof(UGameFeatureAction_AddComponents) == 0x000088, "Wrong size on UGameFeatureAction_AddComponents");
static_assert(offsetof(UGameFeatureAction_AddComponents, ComponentList) == 0x000028, "Member 'UGameFeatureAction_AddComponents::ComponentList' has a wrong offset!");

// Class GameFeatures.GameFeatureAction_AddWPContent
// 0x0018 (0x0040 - 0x0028)
class UGameFeatureAction_AddWPContent final  : public UGameFeatureAction
{
public:
	class UContentBundleDescriptor*               ContentBundleDescriptor;                           // 0x0028(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1E27[0x10];                                    // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_AddWPContent">();
	}
	static class UGameFeatureAction_AddWPContent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_AddWPContent>();
	}
};
static_assert(alignof(UGameFeatureAction_AddWPContent) == 0x000008, "Wrong alignment on UGameFeatureAction_AddWPContent");
static_assert(sizeof(UGameFeatureAction_AddWPContent) == 0x000040, "Wrong size on UGameFeatureAction_AddWPContent");
static_assert(offsetof(UGameFeatureAction_AddWPContent, ContentBundleDescriptor) == 0x000028, "Member 'UGameFeatureAction_AddWPContent::ContentBundleDescriptor' has a wrong offset!");

// Class GameFeatures.GameFeatureAction_DataRegistry
// 0x0018 (0x0040 - 0x0028)
class UGameFeatureAction_DataRegistry final  : public UGameFeatureAction
{
public:
	TArray<TSoftObjectPtr<class UDataRegistry>>   RegistriesToAdd;                                   // 0x0028(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                          bPreloadInEditor;                                  // 0x0038(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1E28[0x7];                                     // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_DataRegistry">();
	}
	static class UGameFeatureAction_DataRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_DataRegistry>();
	}
};
static_assert(alignof(UGameFeatureAction_DataRegistry) == 0x000008, "Wrong alignment on UGameFeatureAction_DataRegistry");
static_assert(sizeof(UGameFeatureAction_DataRegistry) == 0x000040, "Wrong size on UGameFeatureAction_DataRegistry");
static_assert(offsetof(UGameFeatureAction_DataRegistry, RegistriesToAdd) == 0x000028, "Member 'UGameFeatureAction_DataRegistry::RegistriesToAdd' has a wrong offset!");
static_assert(offsetof(UGameFeatureAction_DataRegistry, bPreloadInEditor) == 0x000038, "Member 'UGameFeatureAction_DataRegistry::bPreloadInEditor' has a wrong offset!");

// Class GameFeatures.GameFeatureAction_DataRegistrySource
// 0x0018 (0x0040 - 0x0028)
class UGameFeatureAction_DataRegistrySource final  : public UGameFeatureAction
{
public:
	TArray<struct FDataRegistrySourceToAdd>       SourcesToAdd;                                      // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                          bPreloadInEditor;                                  // 0x0038(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1E29[0x7];                                     // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_DataRegistrySource">();
	}
	static class UGameFeatureAction_DataRegistrySource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_DataRegistrySource>();
	}
};
static_assert(alignof(UGameFeatureAction_DataRegistrySource) == 0x000008, "Wrong alignment on UGameFeatureAction_DataRegistrySource");
static_assert(sizeof(UGameFeatureAction_DataRegistrySource) == 0x000040, "Wrong size on UGameFeatureAction_DataRegistrySource");
static_assert(offsetof(UGameFeatureAction_DataRegistrySource, SourcesToAdd) == 0x000028, "Member 'UGameFeatureAction_DataRegistrySource::SourcesToAdd' has a wrong offset!");
static_assert(offsetof(UGameFeatureAction_DataRegistrySource, bPreloadInEditor) == 0x000038, "Member 'UGameFeatureAction_DataRegistrySource::bPreloadInEditor' has a wrong offset!");

// Class GameFeatures.GameFeatureData
// 0x0020 (0x0050 - 0x0030)
class UGameFeatureData final  : public UPrimaryDataAsset
{
public:
	TArray<class UGameFeatureAction*>             Actions;                                           // 0x0030(0x0010)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FPrimaryAssetTypeInfo>          PrimaryAssetTypesToScan;                           // 0x0040(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureData">();
	}
	static class UGameFeatureData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureData>();
	}
};
static_assert(alignof(UGameFeatureData) == 0x000008, "Wrong alignment on UGameFeatureData");
static_assert(sizeof(UGameFeatureData) == 0x000050, "Wrong size on UGameFeatureData");
static_assert(offsetof(UGameFeatureData, Actions) == 0x000030, "Member 'UGameFeatureData::Actions' has a wrong offset!");
static_assert(offsetof(UGameFeatureData, PrimaryAssetTypesToScan) == 0x000040, "Member 'UGameFeatureData::PrimaryAssetTypesToScan' has a wrong offset!");

// Class GameFeatures.GameFeaturePluginStateMachine
// 0x01B8 (0x01E0 - 0x0028)
class UGameFeaturePluginStateMachine final  : public UObject
{
public:
	uint8                                         Pad_1E2A[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameFeaturePluginStateMachineProperties StateProperties;                                   // 0x0030(0x00C8)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1E2B[0xE8];                                    // 0x00F8(0x00E8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeaturePluginStateMachine">();
	}
	static class UGameFeaturePluginStateMachine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeaturePluginStateMachine>();
	}
};
static_assert(alignof(UGameFeaturePluginStateMachine) == 0x000008, "Wrong alignment on UGameFeaturePluginStateMachine");
static_assert(sizeof(UGameFeaturePluginStateMachine) == 0x0001E0, "Wrong size on UGameFeaturePluginStateMachine");
static_assert(offsetof(UGameFeaturePluginStateMachine, StateProperties) == 0x000030, "Member 'UGameFeaturePluginStateMachine::StateProperties' has a wrong offset!");

// Class GameFeatures.GameFeaturesProjectPolicies
// 0x0000 (0x0028 - 0x0028)
class UGameFeaturesProjectPolicies : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeaturesProjectPolicies">();
	}
	static class UGameFeaturesProjectPolicies* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeaturesProjectPolicies>();
	}
};
static_assert(alignof(UGameFeaturesProjectPolicies) == 0x000008, "Wrong alignment on UGameFeaturesProjectPolicies");
static_assert(sizeof(UGameFeaturesProjectPolicies) == 0x000028, "Wrong size on UGameFeaturesProjectPolicies");

// Class GameFeatures.DefaultGameFeaturesProjectPolicies
// 0x0000 (0x0028 - 0x0028)
class UDefaultGameFeaturesProjectPolicies final  : public UGameFeaturesProjectPolicies
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DefaultGameFeaturesProjectPolicies">();
	}
	static class UDefaultGameFeaturesProjectPolicies* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultGameFeaturesProjectPolicies>();
	}
};
static_assert(alignof(UDefaultGameFeaturesProjectPolicies) == 0x000008, "Wrong alignment on UDefaultGameFeaturesProjectPolicies");
static_assert(sizeof(UDefaultGameFeaturesProjectPolicies) == 0x000028, "Wrong size on UDefaultGameFeaturesProjectPolicies");

// Class GameFeatures.GameFeaturesSubsystem
// 0x00D0 (0x0100 - 0x0030)
class UGameFeaturesSubsystem final  : public UEngineSubsystem
{
public:
	TMap<struct FGameFeaturePluginIdentifier, class UGameFeaturePluginStateMachine*> GameFeaturePluginStateMachines;                    // 0x0030(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UGameFeaturePluginStateMachine*> TerminalGameFeaturePluginStateMachines;            // 0x0080(0x0010)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1E2C[0x50];                                    // 0x0090(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UObject*>                        Observers;                                         // 0x00E0(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UGameFeaturesProjectPolicies*           GameSpecificPolicies;                              // 0x00F0(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1E2D[0x8];                                     // 0x00F8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeaturesSubsystem">();
	}
	static class UGameFeaturesSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeaturesSubsystem>();
	}
};
static_assert(alignof(UGameFeaturesSubsystem) == 0x000008, "Wrong alignment on UGameFeaturesSubsystem");
static_assert(sizeof(UGameFeaturesSubsystem) == 0x000100, "Wrong size on UGameFeaturesSubsystem");
static_assert(offsetof(UGameFeaturesSubsystem, GameFeaturePluginStateMachines) == 0x000030, "Member 'UGameFeaturesSubsystem::GameFeaturePluginStateMachines' has a wrong offset!");
static_assert(offsetof(UGameFeaturesSubsystem, TerminalGameFeaturePluginStateMachines) == 0x000080, "Member 'UGameFeaturesSubsystem::TerminalGameFeaturePluginStateMachines' has a wrong offset!");
static_assert(offsetof(UGameFeaturesSubsystem, Observers) == 0x0000E0, "Member 'UGameFeaturesSubsystem::Observers' has a wrong offset!");
static_assert(offsetof(UGameFeaturesSubsystem, GameSpecificPolicies) == 0x0000F0, "Member 'UGameFeaturesSubsystem::GameSpecificPolicies' has a wrong offset!");

// Class GameFeatures.GameFeaturesSubsystemSettings
// 0x0060 (0x0098 - 0x0038)
class UGameFeaturesSubsystemSettings final  : public UDeveloperSettings
{
public:
	struct FSoftClassPath                         GameFeaturesManagerClassName;                      // 0x0038(0x0020)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         DisabledPlugins;                                   // 0x0058(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                         AdditionalPluginMetadataKeys;                      // 0x0068(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E2E[0x20];                                    // 0x0078(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeaturesSubsystemSettings">();
	}
	static class UGameFeaturesSubsystemSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeaturesSubsystemSettings>();
	}
};
static_assert(alignof(UGameFeaturesSubsystemSettings) == 0x000008, "Wrong alignment on UGameFeaturesSubsystemSettings");
static_assert(sizeof(UGameFeaturesSubsystemSettings) == 0x000098, "Wrong size on UGameFeaturesSubsystemSettings");
static_assert(offsetof(UGameFeaturesSubsystemSettings, GameFeaturesManagerClassName) == 0x000038, "Member 'UGameFeaturesSubsystemSettings::GameFeaturesManagerClassName' has a wrong offset!");
static_assert(offsetof(UGameFeaturesSubsystemSettings, DisabledPlugins) == 0x000058, "Member 'UGameFeaturesSubsystemSettings::DisabledPlugins' has a wrong offset!");
static_assert(offsetof(UGameFeaturesSubsystemSettings, AdditionalPluginMetadataKeys) == 0x000068, "Member 'UGameFeaturesSubsystemSettings::AdditionalPluginMetadataKeys' has a wrong offset!");

}

