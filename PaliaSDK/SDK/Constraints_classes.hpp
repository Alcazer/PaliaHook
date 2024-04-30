#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Constraints

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "Constraints_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "AnimationCore_structs.hpp"
#include "MovieScene_structs.hpp"


namespace SDK
{

// Class Constraints.ConstraintsActor
// 0x0008 (0x02B0 - 0x02A8)
class AConstraintsActor final  : public AActor
{
public:
	class UConstraintsManager*                    ConstraintsManager;                                // 0x02A8(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConstraintsActor">();
	}
	static class AConstraintsActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AConstraintsActor>();
	}
};
static_assert(alignof(AConstraintsActor) == 0x000008, "Wrong alignment on AConstraintsActor");
static_assert(sizeof(AConstraintsActor) == 0x0002B0, "Wrong size on AConstraintsActor");
static_assert(offsetof(AConstraintsActor, ConstraintsManager) == 0x0002A8, "Member 'AConstraintsActor::ConstraintsManager' has a wrong offset!");

// Class Constraints.TickableConstraint
// 0x0048 (0x0070 - 0x0028)
class UTickableConstraint : public UObject
{
public:
	struct FConstraintTickFunction                ConstraintTick;                                    // 0x0028(0x0040)(NativeAccessSpecifierPublic)
	bool                                          Active;                                            // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15D8[0x7];                                     // 0x0069(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TickableConstraint">();
	}
	static class UTickableConstraint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTickableConstraint>();
	}
};
static_assert(alignof(UTickableConstraint) == 0x000008, "Wrong alignment on UTickableConstraint");
static_assert(sizeof(UTickableConstraint) == 0x000070, "Wrong size on UTickableConstraint");
static_assert(offsetof(UTickableConstraint, ConstraintTick) == 0x000028, "Member 'UTickableConstraint::ConstraintTick' has a wrong offset!");
static_assert(offsetof(UTickableConstraint, Active) == 0x000068, "Member 'UTickableConstraint::Active' has a wrong offset!");

// Class Constraints.ConstraintsManager
// 0x0020 (0x0048 - 0x0028)
class UConstraintsManager final  : public UObject
{
public:
	FMulticastSparseDelegateProperty_             OnConstraintAdded_BP;                              // 0x0028(0x0001)(InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastSparseDelegateProperty_             OnConstraintRemoved_BP;                            // 0x0029(0x0001)(InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_15D9[0xE];                                     // 0x002A(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTickableConstraint*>            Constraints;                                       // 0x0038(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConstraintsManager">();
	}
	static class UConstraintsManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConstraintsManager>();
	}
};
static_assert(alignof(UConstraintsManager) == 0x000008, "Wrong alignment on UConstraintsManager");
static_assert(sizeof(UConstraintsManager) == 0x000048, "Wrong size on UConstraintsManager");
static_assert(offsetof(UConstraintsManager, OnConstraintAdded_BP) == 0x000028, "Member 'UConstraintsManager::OnConstraintAdded_BP' has a wrong offset!");
static_assert(offsetof(UConstraintsManager, OnConstraintRemoved_BP) == 0x000029, "Member 'UConstraintsManager::OnConstraintRemoved_BP' has a wrong offset!");
static_assert(offsetof(UConstraintsManager, Constraints) == 0x000038, "Member 'UConstraintsManager::Constraints' has a wrong offset!");

// Class Constraints.ConstraintsScriptingLibrary
// 0x0000 (0x0028 - 0x0028)
class UConstraintsScriptingLibrary final  : public UBlueprintFunctionLibrary
{
public:
	static bool AddConstraint(class UWorld* InWorld, class UTransformableHandle* InParentHandle, class UTransformableHandle* InChildHandle, class UTickableTransformConstraint* InConstraint, bool bMaintainOffset);
	static class UTickableTransformConstraint* CreateFromType(class UWorld* InWorld, ETransformConstraintType InType);
	static class UTransformableComponentHandle* CreateTransformableComponentHandle(class UWorld* InWorld, class USceneComponent* InSceneComponent, class FName& InSocketName);
	static class UTransformableHandle* CreateTransformableHandle(class UWorld* InWorld, class UObject* InObject, class FName& InAttachmentName);
	static TArray<class UTickableConstraint*> GetConstraintsArray(class UWorld* InWorld);
	static class UConstraintsManager* GetManager(class UWorld* InWorld);
	static bool RemoveConstraint(class UWorld* InWorld, int32 InIndex);
	static bool RemoveThisConstraint(class UWorld* InWorld, class UTickableConstraint* InTickableConstraint);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConstraintsScriptingLibrary">();
	}
	static class UConstraintsScriptingLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConstraintsScriptingLibrary>();
	}
};
static_assert(alignof(UConstraintsScriptingLibrary) == 0x000008, "Wrong alignment on UConstraintsScriptingLibrary");
static_assert(sizeof(UConstraintsScriptingLibrary) == 0x000028, "Wrong size on UConstraintsScriptingLibrary");

// Class Constraints.TransformableHandle
// 0x0030 (0x0058 - 0x0028)
class UTransformableHandle : public UObject
{
public:
	struct FMovieSceneObjectBindingID             ConstraintBindingID;                               // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15DE[0x18];                                    // 0x0040(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TransformableHandle">();
	}
	static class UTransformableHandle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTransformableHandle>();
	}
};
static_assert(alignof(UTransformableHandle) == 0x000008, "Wrong alignment on UTransformableHandle");
static_assert(sizeof(UTransformableHandle) == 0x000058, "Wrong size on UTransformableHandle");
static_assert(offsetof(UTransformableHandle, ConstraintBindingID) == 0x000028, "Member 'UTransformableHandle::ConstraintBindingID' has a wrong offset!");

// Class Constraints.TransformableComponentHandle
// 0x0010 (0x0068 - 0x0058)
class UTransformableComponentHandle final  : public UTransformableHandle
{
public:
	TWeakObjectPtr<class USceneComponent>         Component;                                         // 0x0058(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SocketName;                                        // 0x0060(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TransformableComponentHandle">();
	}
	static class UTransformableComponentHandle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTransformableComponentHandle>();
	}
};
static_assert(alignof(UTransformableComponentHandle) == 0x000008, "Wrong alignment on UTransformableComponentHandle");
static_assert(sizeof(UTransformableComponentHandle) == 0x000068, "Wrong size on UTransformableComponentHandle");
static_assert(offsetof(UTransformableComponentHandle, Component) == 0x000058, "Member 'UTransformableComponentHandle::Component' has a wrong offset!");
static_assert(offsetof(UTransformableComponentHandle, SocketName) == 0x000060, "Member 'UTransformableComponentHandle::SocketName' has a wrong offset!");

// Class Constraints.TickableTransformConstraint
// 0x0020 (0x0090 - 0x0070)
class UTickableTransformConstraint : public UTickableConstraint
{
public:
	class UTransformableHandle*                   ParentTRSHandle;                                   // 0x0070(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformableHandle*                   ChildTRSHandle;                                    // 0x0078(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMaintainOffset;                                   // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15DF[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Weight;                                            // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDynamicOffset;                                    // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETransformConstraintType                      Type;                                              // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_15E0[0x6];                                     // 0x008A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TickableTransformConstraint">();
	}
	static class UTickableTransformConstraint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTickableTransformConstraint>();
	}
};
static_assert(alignof(UTickableTransformConstraint) == 0x000008, "Wrong alignment on UTickableTransformConstraint");
static_assert(sizeof(UTickableTransformConstraint) == 0x000090, "Wrong size on UTickableTransformConstraint");
static_assert(offsetof(UTickableTransformConstraint, ParentTRSHandle) == 0x000070, "Member 'UTickableTransformConstraint::ParentTRSHandle' has a wrong offset!");
static_assert(offsetof(UTickableTransformConstraint, ChildTRSHandle) == 0x000078, "Member 'UTickableTransformConstraint::ChildTRSHandle' has a wrong offset!");
static_assert(offsetof(UTickableTransformConstraint, bMaintainOffset) == 0x000080, "Member 'UTickableTransformConstraint::bMaintainOffset' has a wrong offset!");
static_assert(offsetof(UTickableTransformConstraint, Weight) == 0x000084, "Member 'UTickableTransformConstraint::Weight' has a wrong offset!");
static_assert(offsetof(UTickableTransformConstraint, bDynamicOffset) == 0x000088, "Member 'UTickableTransformConstraint::bDynamicOffset' has a wrong offset!");
static_assert(offsetof(UTickableTransformConstraint, Type) == 0x000089, "Member 'UTickableTransformConstraint::Type' has a wrong offset!");

// Class Constraints.TickableTranslationConstraint
// 0x0028 (0x00B8 - 0x0090)
class UTickableTranslationConstraint final  : public UTickableTransformConstraint
{
public:
	uint8                                         Pad_15E1[0x8];                                     // 0x0090(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                OffsetTranslation;                                 // 0x0098(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                   AxisFilter;                                        // 0x00B0(0x0003)(BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_15E2[0x5];                                     // 0x00B3(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TickableTranslationConstraint">();
	}
	static class UTickableTranslationConstraint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTickableTranslationConstraint>();
	}
};
static_assert(alignof(UTickableTranslationConstraint) == 0x000008, "Wrong alignment on UTickableTranslationConstraint");
static_assert(sizeof(UTickableTranslationConstraint) == 0x0000B8, "Wrong size on UTickableTranslationConstraint");
static_assert(offsetof(UTickableTranslationConstraint, OffsetTranslation) == 0x000098, "Member 'UTickableTranslationConstraint::OffsetTranslation' has a wrong offset!");
static_assert(offsetof(UTickableTranslationConstraint, AxisFilter) == 0x0000B0, "Member 'UTickableTranslationConstraint::AxisFilter' has a wrong offset!");

// Class Constraints.TickableRotationConstraint
// 0x0040 (0x00D0 - 0x0090)
class UTickableRotationConstraint final  : public UTickableTransformConstraint
{
public:
	uint8                                         Pad_15E3[0x10];                                    // 0x0090(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  OffsetRotation;                                    // 0x00A0(0x0020)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                   AxisFilter;                                        // 0x00C0(0x0003)(BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_15E4[0xD];                                     // 0x00C3(0x000D)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TickableRotationConstraint">();
	}
	static class UTickableRotationConstraint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTickableRotationConstraint>();
	}
};
static_assert(alignof(UTickableRotationConstraint) == 0x000010, "Wrong alignment on UTickableRotationConstraint");
static_assert(sizeof(UTickableRotationConstraint) == 0x0000D0, "Wrong size on UTickableRotationConstraint");
static_assert(offsetof(UTickableRotationConstraint, OffsetRotation) == 0x0000A0, "Member 'UTickableRotationConstraint::OffsetRotation' has a wrong offset!");
static_assert(offsetof(UTickableRotationConstraint, AxisFilter) == 0x0000C0, "Member 'UTickableRotationConstraint::AxisFilter' has a wrong offset!");

// Class Constraints.TickableScaleConstraint
// 0x0028 (0x00B8 - 0x0090)
class UTickableScaleConstraint final  : public UTickableTransformConstraint
{
public:
	uint8                                         Pad_15E5[0x8];                                     // 0x0090(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                OffsetScale;                                       // 0x0098(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                   AxisFilter;                                        // 0x00B0(0x0003)(BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_15E6[0x5];                                     // 0x00B3(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TickableScaleConstraint">();
	}
	static class UTickableScaleConstraint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTickableScaleConstraint>();
	}
};
static_assert(alignof(UTickableScaleConstraint) == 0x000008, "Wrong alignment on UTickableScaleConstraint");
static_assert(sizeof(UTickableScaleConstraint) == 0x0000B8, "Wrong size on UTickableScaleConstraint");
static_assert(offsetof(UTickableScaleConstraint, OffsetScale) == 0x000098, "Member 'UTickableScaleConstraint::OffsetScale' has a wrong offset!");
static_assert(offsetof(UTickableScaleConstraint, AxisFilter) == 0x0000B0, "Member 'UTickableScaleConstraint::AxisFilter' has a wrong offset!");

// Class Constraints.TickableParentConstraint
// 0x0080 (0x0110 - 0x0090)
class UTickableParentConstraint final  : public UTickableTransformConstraint
{
public:
	uint8                                         Pad_15E7[0x10];                                    // 0x0090(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             OffsetTransform;                                   // 0x00A0(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bScaling;                                          // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTransformFilter                       TransformFilter;                                   // 0x0101(0x0009)(BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_15E8[0x6];                                     // 0x010A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TickableParentConstraint">();
	}
	static class UTickableParentConstraint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTickableParentConstraint>();
	}
};
static_assert(alignof(UTickableParentConstraint) == 0x000010, "Wrong alignment on UTickableParentConstraint");
static_assert(sizeof(UTickableParentConstraint) == 0x000110, "Wrong size on UTickableParentConstraint");
static_assert(offsetof(UTickableParentConstraint, OffsetTransform) == 0x0000A0, "Member 'UTickableParentConstraint::OffsetTransform' has a wrong offset!");
static_assert(offsetof(UTickableParentConstraint, bScaling) == 0x000100, "Member 'UTickableParentConstraint::bScaling' has a wrong offset!");
static_assert(offsetof(UTickableParentConstraint, TransformFilter) == 0x000101, "Member 'UTickableParentConstraint::TransformFilter' has a wrong offset!");

// Class Constraints.TickableLookAtConstraint
// 0x0018 (0x00A8 - 0x0090)
class UTickableLookAtConstraint final  : public UTickableTransformConstraint
{
public:
	struct FVector                                Axis;                                              // 0x0090(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TickableLookAtConstraint">();
	}
	static class UTickableLookAtConstraint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTickableLookAtConstraint>();
	}
};
static_assert(alignof(UTickableLookAtConstraint) == 0x000008, "Wrong alignment on UTickableLookAtConstraint");
static_assert(sizeof(UTickableLookAtConstraint) == 0x0000A8, "Wrong size on UTickableLookAtConstraint");
static_assert(offsetof(UTickableLookAtConstraint, Axis) == 0x000090, "Member 'UTickableLookAtConstraint::Axis' has a wrong offset!");

}

