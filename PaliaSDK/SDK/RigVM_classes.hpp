#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RigVM

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "RigVM_structs.hpp"
#include "Engine_classes.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class RigVM.RigVMGraphFunctionHost
// 0x0000 (0x0028 - 0x0028)
class IRigVMGraphFunctionHost final  : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMGraphFunctionHost">();
	}
	static class IRigVMGraphFunctionHost* GetDefaultObj()
	{
		return GetDefaultObjImpl<IRigVMGraphFunctionHost>();
	}
};
static_assert(alignof(IRigVMGraphFunctionHost) == 0x000008, "Wrong alignment on IRigVMGraphFunctionHost");
static_assert(sizeof(IRigVMGraphFunctionHost) == 0x000028, "Wrong size on IRigVMGraphFunctionHost");

// Class RigVM.RigVMBlueprintGeneratedClass
// 0x0028 (0x0390 - 0x0368)
class URigVMBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	uint8                                         Pad_3466[0x8];                                     // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigVMGraphFunctionStore               GraphFunctionStore;                                // 0x0370(0x0020)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMBlueprintGeneratedClass">();
	}
	static class URigVMBlueprintGeneratedClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVMBlueprintGeneratedClass>();
	}
};
static_assert(alignof(URigVMBlueprintGeneratedClass) == 0x000008, "Wrong alignment on URigVMBlueprintGeneratedClass");
static_assert(sizeof(URigVMBlueprintGeneratedClass) == 0x000390, "Wrong size on URigVMBlueprintGeneratedClass");
static_assert(offsetof(URigVMBlueprintGeneratedClass, GraphFunctionStore) == 0x000370, "Member 'URigVMBlueprintGeneratedClass::GraphFunctionStore' has a wrong offset!");

// Class RigVM.RigVM
// 0x0280 (0x02A8 - 0x0028)
class URigVM : public UObject
{
public:
	class URigVMMemoryStorage*                    WorkMemoryStorageObject;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URigVMMemoryStorage*                    LiteralMemoryStorageObject;                        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URigVMMemoryStorage*                    DebugMemoryStorageObject;                          // 0x0038(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3467[0x20];                                    // 0x0040(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigVMByteCode                         ByteCodeStorage;                                   // 0x0060(0x00A0)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3468[0x8];                                     // 0x0100(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigVMInstructionArray                 Instructions;                                      // 0x0108(0x0010)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3469[0x8];                                     // 0x0118(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           FunctionNamesStorage;                              // 0x0120(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_346A[0x38];                                    // 0x0130(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRigVMParameter>                Parameters;                                        // 0x0168(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                      ParametersNameMap;                                 // 0x0178(0x0050)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_346B[0x98];                                    // 0x01C8(0x0098)(Fixing Size After Last Property [ Dumper-7 ])
	class URigVM*                                 DeferredVMToCopy;                                  // 0x0260(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_346C[0x40];                                    // 0x0268(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	int32 AddRigVMFunction(class UScriptStruct* InRigVMStruct, class FName& InMethodName);
	bool Execute(struct FRigVMExtendedExecuteContext* Context, class FName& InEntryName);
	bool GetParameterValueBool(class FName& InParameterName, int32 InArrayIndex);
	double GetParameterValueDouble(class FName& InParameterName, int32 InArrayIndex);
	float GetParameterValueFloat(class FName& InParameterName, int32 InArrayIndex);
	int32 GetParameterValueInt(class FName& InParameterName, int32 InArrayIndex);
	class FName GetParameterValueName(class FName& InParameterName, int32 InArrayIndex);
	struct FQuat GetParameterValueQuat(class FName& InParameterName, int32 InArrayIndex);
	class FString GetParameterValueString(class FName& InParameterName, int32 InArrayIndex);
	struct FTransform GetParameterValueTransform(class FName& InParameterName, int32 InArrayIndex);
	struct FVector GetParameterValueVector(class FName& InParameterName, int32 InArrayIndex);
	struct FVector2D GetParameterValueVector2D(class FName& InParameterName, int32 InArrayIndex);
	void SetParameterValueBool(class FName& InParameterName, bool InValue, int32 InArrayIndex);
	void SetParameterValueDouble(class FName& InParameterName, double InValue, int32 InArrayIndex);
	void SetParameterValueFloat(class FName& InParameterName, float InValue, int32 InArrayIndex);
	void SetParameterValueInt(class FName& InParameterName, int32 InValue, int32 InArrayIndex);
	void SetParameterValueName(class FName& InParameterName, class FName& InValue, int32 InArrayIndex);
	void SetParameterValueQuat(class FName& InParameterName, struct FQuat& InValue, int32 InArrayIndex);
	void SetParameterValueString(class FName& InParameterName, const class FString& InValue, int32 InArrayIndex);
	void SetParameterValueTransform(class FName& InParameterName, struct FTransform& InValue, int32 InArrayIndex);
	void SetParameterValueVector(class FName& InParameterName, struct FVector& InValue, int32 InArrayIndex);
	void SetParameterValueVector2D(class FName& InParameterName, struct FVector2D& InValue, int32 InArrayIndex);

	class FString GetRigVMFunctionName(int32 InFunctionIndex) const;
	struct FRigVMStatistics GetStatistics() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVM">();
	}
	static class URigVM* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVM>();
	}
};
static_assert(alignof(URigVM) == 0x000008, "Wrong alignment on URigVM");
static_assert(sizeof(URigVM) == 0x0002A8, "Wrong size on URigVM");
static_assert(offsetof(URigVM, WorkMemoryStorageObject) == 0x000028, "Member 'URigVM::WorkMemoryStorageObject' has a wrong offset!");
static_assert(offsetof(URigVM, LiteralMemoryStorageObject) == 0x000030, "Member 'URigVM::LiteralMemoryStorageObject' has a wrong offset!");
static_assert(offsetof(URigVM, DebugMemoryStorageObject) == 0x000038, "Member 'URigVM::DebugMemoryStorageObject' has a wrong offset!");
static_assert(offsetof(URigVM, ByteCodeStorage) == 0x000060, "Member 'URigVM::ByteCodeStorage' has a wrong offset!");
static_assert(offsetof(URigVM, Instructions) == 0x000108, "Member 'URigVM::Instructions' has a wrong offset!");
static_assert(offsetof(URigVM, FunctionNamesStorage) == 0x000120, "Member 'URigVM::FunctionNamesStorage' has a wrong offset!");
static_assert(offsetof(URigVM, Parameters) == 0x000168, "Member 'URigVM::Parameters' has a wrong offset!");
static_assert(offsetof(URigVM, ParametersNameMap) == 0x000178, "Member 'URigVM::ParametersNameMap' has a wrong offset!");
static_assert(offsetof(URigVM, DeferredVMToCopy) == 0x000260, "Member 'URigVM::DeferredVMToCopy' has a wrong offset!");

// Class RigVM.NameSpacedUserData
// 0x00D8 (0x0100 - 0x0028)
class UNameSpacedUserData : public UAssetUserData
{
public:
	class FString                                 Namespace;                                         // 0x0028(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3480[0xC8];                                    // 0x0038(0x00C8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NameSpacedUserData">();
	}
	static class UNameSpacedUserData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNameSpacedUserData>();
	}
};
static_assert(alignof(UNameSpacedUserData) == 0x000008, "Wrong alignment on UNameSpacedUserData");
static_assert(sizeof(UNameSpacedUserData) == 0x000100, "Wrong size on UNameSpacedUserData");
static_assert(offsetof(UNameSpacedUserData, Namespace) == 0x000028, "Member 'UNameSpacedUserData::Namespace' has a wrong offset!");

// Class RigVM.DataAssetLink
// 0x0008 (0x0108 - 0x0100)
class UDataAssetLink final  : public UNameSpacedUserData
{
public:
	class UDataAsset*                             DataAsset;                                         // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void SetDataAsset(class UDataAsset* InDataAsset);

	class UDataAsset* GetDataAsset() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataAssetLink">();
	}
	static class UDataAssetLink* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataAssetLink>();
	}
};
static_assert(alignof(UDataAssetLink) == 0x000008, "Wrong alignment on UDataAssetLink");
static_assert(sizeof(UDataAssetLink) == 0x000108, "Wrong size on UDataAssetLink");
static_assert(offsetof(UDataAssetLink, DataAsset) == 0x000100, "Member 'UDataAssetLink::DataAsset' has a wrong offset!");

// Class RigVM.RigVMMemoryStorageGeneratorClass
// 0x0040 (0x0240 - 0x0200)
class URigVMMemoryStorageGeneratorClass final  : public UClass
{
public:
	uint8                                         Pad_3481[0x40];                                    // 0x0200(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMMemoryStorageGeneratorClass">();
	}
	static class URigVMMemoryStorageGeneratorClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVMMemoryStorageGeneratorClass>();
	}
};
static_assert(alignof(URigVMMemoryStorageGeneratorClass) == 0x000008, "Wrong alignment on URigVMMemoryStorageGeneratorClass");
static_assert(sizeof(URigVMMemoryStorageGeneratorClass) == 0x000240, "Wrong size on URigVMMemoryStorageGeneratorClass");

// Class RigVM.RigVMMemoryStorage
// 0x0000 (0x0028 - 0x0028)
class URigVMMemoryStorage final  : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMMemoryStorage">();
	}
	static class URigVMMemoryStorage* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVMMemoryStorage>();
	}
};
static_assert(alignof(URigVMMemoryStorage) == 0x000008, "Wrong alignment on URigVMMemoryStorage");
static_assert(sizeof(URigVMMemoryStorage) == 0x000028, "Wrong size on URigVMMemoryStorage");

// Class RigVM.RigVMNativized
// 0x0028 (0x02D0 - 0x02A8)
class URigVMNativized final  : public URigVM
{
public:
	uint8                                         Pad_3482[0x28];                                    // 0x02A8(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMNativized">();
	}
	static class URigVMNativized* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVMNativized>();
	}
};
static_assert(alignof(URigVMNativized) == 0x000008, "Wrong alignment on URigVMNativized");
static_assert(sizeof(URigVMNativized) == 0x0002D0, "Wrong size on URigVMNativized");

// Class RigVM.RigVMUserWorkflowOptions
// 0x0070 (0x0098 - 0x0028)
class URigVMUserWorkflowOptions : public UObject
{
public:
	class UObject*                                Subject;                                           // 0x0028(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRigVMUserWorkflow                     Workflow;                                          // 0x0030(0x0058)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_3483[0x10];                                    // 0x0088(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ReportError(const class FString& InMessage);
	void ReportInfo(const class FString& InMessage);
	void ReportWarning(const class FString& InMessage);

	bool IsValid() const;
	bool RequiresDialog() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMUserWorkflowOptions">();
	}
	static class URigVMUserWorkflowOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVMUserWorkflowOptions>();
	}
};
static_assert(alignof(URigVMUserWorkflowOptions) == 0x000008, "Wrong alignment on URigVMUserWorkflowOptions");
static_assert(sizeof(URigVMUserWorkflowOptions) == 0x000098, "Wrong size on URigVMUserWorkflowOptions");
static_assert(offsetof(URigVMUserWorkflowOptions, Subject) == 0x000028, "Member 'URigVMUserWorkflowOptions::Subject' has a wrong offset!");
static_assert(offsetof(URigVMUserWorkflowOptions, Workflow) == 0x000030, "Member 'URigVMUserWorkflowOptions::Workflow' has a wrong offset!");

// Class RigVM.RigVMHost
// 0x0310 (0x0338 - 0x0028)
class URigVMHost : public UObject
{
public:
	uint8                                         Pad_3484[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigVMRuntimeSettings                  VMRuntimeSettings;                                 // 0x0030(0x0018)(NativeAccessSpecifierPublic)
	uint8                                         Pad_3485[0x10];                                    // 0x0048(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class URigVM*                                 VM;                                                // 0x0058(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRigVMExtendedExecuteContext           ExtendedExecuteContext;                            // 0x0060(0x01B8)(NativeAccessSpecifierPrivate)
	struct FRigVMDrawContainer                    DrawContainer;                                     // 0x0218(0x0018)(NativeAccessSpecifierPublic)
	uint8                                         Pad_3486[0x18];                                    // 0x0230(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           EventQueue;                                        // 0x0248(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                         Pad_3487[0x90];                                    // 0x0258(0x0090)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAssetUserData*>                 AssetUserData;                                     // 0x02E8(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_3488[0x40];                                    // 0x02F8(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static TArray<class URigVMHost*> FindRigVMHosts(class UObject* Param_Outer, TSubclassOf<class URigVMHost> OptionalClass);

	bool Execute(class FName& InEventName);
	bool ExecuteEvent(class FName& InEventName);
	struct FRigVMExtendedExecuteContext GetExtendedExecuteContext();
	class URigVM* GetVM();
	bool RemoveRunOnceEvent(class FName& InEventName);
	void RequestInit();
	void RequestRunOnceEvent(class FName& InEventName, int32 InEventIndex);
	void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime);
	void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero);
	void SetDeltaTime(float InDeltaTime);
	void SetFramesPerSecond(float InFramesPerSecond);
	bool SetVariableFromString(class FName& InVariableName, const class FString& InValue);

	bool CanExecute() const;
	float GetAbsoluteTime() const;
	float GetCurrentFramesPerSecond() const;
	float GetDeltaTime() const;
	TArray<class FName> GetScriptAccessibleVariables() const;
	const TArray<class FName> GetSupportedEvents() const;
	class FString GetVariableAsString(class FName& InVariableName) const;
	class FName GetVariableType(class FName& InVariableName) const;
	bool SupportsEvent(class FName& InEventName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMHost">();
	}
	static class URigVMHost* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVMHost>();
	}
};
static_assert(alignof(URigVMHost) == 0x000008, "Wrong alignment on URigVMHost");
static_assert(sizeof(URigVMHost) == 0x000338, "Wrong size on URigVMHost");
static_assert(offsetof(URigVMHost, VMRuntimeSettings) == 0x000030, "Member 'URigVMHost::VMRuntimeSettings' has a wrong offset!");
static_assert(offsetof(URigVMHost, VM) == 0x000058, "Member 'URigVMHost::VM' has a wrong offset!");
static_assert(offsetof(URigVMHost, ExtendedExecuteContext) == 0x000060, "Member 'URigVMHost::ExtendedExecuteContext' has a wrong offset!");
static_assert(offsetof(URigVMHost, DrawContainer) == 0x000218, "Member 'URigVMHost::DrawContainer' has a wrong offset!");
static_assert(offsetof(URigVMHost, EventQueue) == 0x000248, "Member 'URigVMHost::EventQueue' has a wrong offset!");
static_assert(offsetof(URigVMHost, AssetUserData) == 0x0002E8, "Member 'URigVMHost::AssetUserData' has a wrong offset!");

// Class RigVM.RigVMEditorSettings
// 0x0000 (0x0038 - 0x0038)
class URigVMEditorSettings : public UDeveloperSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RigVMEditorSettings">();
	}
	static class URigVMEditorSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigVMEditorSettings>();
	}
};
static_assert(alignof(URigVMEditorSettings) == 0x000008, "Wrong alignment on URigVMEditorSettings");
static_assert(sizeof(URigVMEditorSettings) == 0x000038, "Wrong size on URigVMEditorSettings");

}

