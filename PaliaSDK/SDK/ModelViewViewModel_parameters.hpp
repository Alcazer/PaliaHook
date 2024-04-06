#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModelViewViewModel

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "ModelViewViewModel_structs.hpp"


namespace SDK::Params
{

// Function ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate
// 0x0018 (0x0018 - 0x0000)
struct MVVMViewModelBase_K2_AddFieldValueChangedDelegate final 
{
public:
	struct FFieldNotificationId                   FieldId;                                           // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(class UObject* Object, const struct FFieldNotificationId& Field)> Delegate;                                          // 0x0008(0x0010)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MVVMViewModelBase_K2_AddFieldValueChangedDelegate) == 0x000004, "Wrong alignment on MVVMViewModelBase_K2_AddFieldValueChangedDelegate");
static_assert(sizeof(MVVMViewModelBase_K2_AddFieldValueChangedDelegate) == 0x000018, "Wrong size on MVVMViewModelBase_K2_AddFieldValueChangedDelegate");
static_assert(offsetof(MVVMViewModelBase_K2_AddFieldValueChangedDelegate, FieldId) == 0x000000, "Member 'MVVMViewModelBase_K2_AddFieldValueChangedDelegate::FieldId' has a wrong offset!");
static_assert(offsetof(MVVMViewModelBase_K2_AddFieldValueChangedDelegate, Delegate) == 0x000008, "Member 'MVVMViewModelBase_K2_AddFieldValueChangedDelegate::Delegate' has a wrong offset!");

// Function ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged
// 0x0008 (0x0008 - 0x0000)
struct MVVMViewModelBase_K2_BroadcastFieldValueChanged final 
{
public:
	struct FFieldNotificationId                   FieldId;                                           // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MVVMViewModelBase_K2_BroadcastFieldValueChanged) == 0x000004, "Wrong alignment on MVVMViewModelBase_K2_BroadcastFieldValueChanged");
static_assert(sizeof(MVVMViewModelBase_K2_BroadcastFieldValueChanged) == 0x000008, "Wrong size on MVVMViewModelBase_K2_BroadcastFieldValueChanged");
static_assert(offsetof(MVVMViewModelBase_K2_BroadcastFieldValueChanged, FieldId) == 0x000000, "Member 'MVVMViewModelBase_K2_BroadcastFieldValueChanged::FieldId' has a wrong offset!");

// Function ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate
// 0x0018 (0x0018 - 0x0000)
struct MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate final 
{
public:
	struct FFieldNotificationId                   FieldId;                                           // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(class UObject* Object, const struct FFieldNotificationId& Field)> Delegate;                                          // 0x0008(0x0010)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate) == 0x000004, "Wrong alignment on MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate");
static_assert(sizeof(MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate) == 0x000018, "Wrong size on MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate");
static_assert(offsetof(MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate, FieldId) == 0x000000, "Member 'MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate::FieldId' has a wrong offset!");
static_assert(offsetof(MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate, Delegate) == 0x000008, "Member 'MVVMViewModelBase_K2_RemoveFieldValueChangedDelegate::Delegate' has a wrong offset!");

// Function ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue
// 0x000C (0x000C - 0x0000)
struct MVVMViewModelBase_K2_SetPropertyValue final 
{
public:
	int32                                         OldValue;                                          // 0x0000(0x0004)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NewValue;                                          // 0x0004(0x0004)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18E0[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MVVMViewModelBase_K2_SetPropertyValue) == 0x000004, "Wrong alignment on MVVMViewModelBase_K2_SetPropertyValue");
static_assert(sizeof(MVVMViewModelBase_K2_SetPropertyValue) == 0x00000C, "Wrong size on MVVMViewModelBase_K2_SetPropertyValue");
static_assert(offsetof(MVVMViewModelBase_K2_SetPropertyValue, OldValue) == 0x000000, "Member 'MVVMViewModelBase_K2_SetPropertyValue::OldValue' has a wrong offset!");
static_assert(offsetof(MVVMViewModelBase_K2_SetPropertyValue, NewValue) == 0x000004, "Member 'MVVMViewModelBase_K2_SetPropertyValue::NewValue' has a wrong offset!");
static_assert(offsetof(MVVMViewModelBase_K2_SetPropertyValue, ReturnValue) == 0x000008, "Member 'MVVMViewModelBase_K2_SetPropertyValue::ReturnValue' has a wrong offset!");

// Function ModelViewViewModel.MVVMSubsystem.DoesWidgetTreeContainedWidget
// 0x0018 (0x0018 - 0x0000)
struct MVVMSubsystem_DoesWidgetTreeContainedWidget final 
{
public:
	class UWidgetTree*                            WidgetTree;                                        // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                ViewWidget;                                        // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18E1[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MVVMSubsystem_DoesWidgetTreeContainedWidget) == 0x000008, "Wrong alignment on MVVMSubsystem_DoesWidgetTreeContainedWidget");
static_assert(sizeof(MVVMSubsystem_DoesWidgetTreeContainedWidget) == 0x000018, "Wrong size on MVVMSubsystem_DoesWidgetTreeContainedWidget");
static_assert(offsetof(MVVMSubsystem_DoesWidgetTreeContainedWidget, WidgetTree) == 0x000000, "Member 'MVVMSubsystem_DoesWidgetTreeContainedWidget::WidgetTree' has a wrong offset!");
static_assert(offsetof(MVVMSubsystem_DoesWidgetTreeContainedWidget, ViewWidget) == 0x000008, "Member 'MVVMSubsystem_DoesWidgetTreeContainedWidget::ViewWidget' has a wrong offset!");
static_assert(offsetof(MVVMSubsystem_DoesWidgetTreeContainedWidget, ReturnValue) == 0x000010, "Member 'MVVMSubsystem_DoesWidgetTreeContainedWidget::ReturnValue' has a wrong offset!");

// Function ModelViewViewModel.MVVMSubsystem.GetAvailableBinding
// 0x0028 (0x0028 - 0x0000)
struct MVVMSubsystem_GetAvailableBinding final 
{
public:
	class UClass*                                 Param_Class;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMVVMBindingName                       BindingName;                                       // 0x0008(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                 Accessor;                                          // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMVVMAvailableBinding                  ReturnValue;                                       // 0x0018(0x000C)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18E2[0x4];                                     // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MVVMSubsystem_GetAvailableBinding) == 0x000008, "Wrong alignment on MVVMSubsystem_GetAvailableBinding");
static_assert(sizeof(MVVMSubsystem_GetAvailableBinding) == 0x000028, "Wrong size on MVVMSubsystem_GetAvailableBinding");
static_assert(offsetof(MVVMSubsystem_GetAvailableBinding, Param_Class) == 0x000000, "Member 'MVVMSubsystem_GetAvailableBinding::Param_Class' has a wrong offset!");
static_assert(offsetof(MVVMSubsystem_GetAvailableBinding, BindingName) == 0x000008, "Member 'MVVMSubsystem_GetAvailableBinding::BindingName' has a wrong offset!");
static_assert(offsetof(MVVMSubsystem_GetAvailableBinding, Accessor) == 0x000010, "Member 'MVVMSubsystem_GetAvailableBinding::Accessor' has a wrong offset!");
static_assert(offsetof(MVVMSubsystem_GetAvailableBinding, ReturnValue) == 0x000018, "Member 'MVVMSubsystem_GetAvailableBinding::ReturnValue' has a wrong offset!");

// Function ModelViewViewModel.MVVMSubsystem.GetAvailableBindings
// 0x0020 (0x0020 - 0x0000)
struct MVVMSubsystem_GetAvailableBindings final 
{
public:
	class UClass*                                 Param_Class;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                 Accessor;                                          // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMVVMAvailableBinding>          ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MVVMSubsystem_GetAvailableBindings) == 0x000008, "Wrong alignment on MVVMSubsystem_GetAvailableBindings");
static_assert(sizeof(MVVMSubsystem_GetAvailableBindings) == 0x000020, "Wrong size on MVVMSubsystem_GetAvailableBindings");
static_assert(offsetof(MVVMSubsystem_GetAvailableBindings, Param_Class) == 0x000000, "Member 'MVVMSubsystem_GetAvailableBindings::Param_Class' has a wrong offset!");
static_assert(offsetof(MVVMSubsystem_GetAvailableBindings, Accessor) == 0x000008, "Member 'MVVMSubsystem_GetAvailableBindings::Accessor' has a wrong offset!");
static_assert(offsetof(MVVMSubsystem_GetAvailableBindings, ReturnValue) == 0x000010, "Member 'MVVMSubsystem_GetAvailableBindings::ReturnValue' has a wrong offset!");

// Function ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection
// 0x0008 (0x0008 - 0x0000)
struct MVVMSubsystem_GetGlobalViewModelCollection final 
{
public:
	class UMVVMViewModelCollectionObject*         ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MVVMSubsystem_GetGlobalViewModelCollection) == 0x000008, "Wrong alignment on MVVMSubsystem_GetGlobalViewModelCollection");
static_assert(sizeof(MVVMSubsystem_GetGlobalViewModelCollection) == 0x000008, "Wrong size on MVVMSubsystem_GetGlobalViewModelCollection");
static_assert(offsetof(MVVMSubsystem_GetGlobalViewModelCollection, ReturnValue) == 0x000000, "Member 'MVVMSubsystem_GetGlobalViewModelCollection::ReturnValue' has a wrong offset!");

// Function ModelViewViewModel.MVVMSubsystem.GetViewFromUserWidget
// 0x0010 (0x0010 - 0x0000)
struct MVVMSubsystem_GetViewFromUserWidget final 
{
public:
	class UUserWidget*                            UserWidget;                                        // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMVVMView*                              ReturnValue;                                       // 0x0008(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MVVMSubsystem_GetViewFromUserWidget) == 0x000008, "Wrong alignment on MVVMSubsystem_GetViewFromUserWidget");
static_assert(sizeof(MVVMSubsystem_GetViewFromUserWidget) == 0x000010, "Wrong size on MVVMSubsystem_GetViewFromUserWidget");
static_assert(offsetof(MVVMSubsystem_GetViewFromUserWidget, UserWidget) == 0x000000, "Member 'MVVMSubsystem_GetViewFromUserWidget::UserWidget' has a wrong offset!");
static_assert(offsetof(MVVMSubsystem_GetViewFromUserWidget, ReturnValue) == 0x000008, "Member 'MVVMSubsystem_GetViewFromUserWidget::ReturnValue' has a wrong offset!");

// Function ModelViewViewModel.MVVMView.SetViewModel
// 0x0018 (0x0018 - 0x0000)
struct MVVMView_SetViewModel final 
{
public:
	class FName                                   ViewModelName;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMVVMViewModelBase*                     ViewModel;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18E4[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MVVMView_SetViewModel) == 0x000008, "Wrong alignment on MVVMView_SetViewModel");
static_assert(sizeof(MVVMView_SetViewModel) == 0x000018, "Wrong size on MVVMView_SetViewModel");
static_assert(offsetof(MVVMView_SetViewModel, ViewModelName) == 0x000000, "Member 'MVVMView_SetViewModel::ViewModelName' has a wrong offset!");
static_assert(offsetof(MVVMView_SetViewModel, ViewModel) == 0x000008, "Member 'MVVMView_SetViewModel::ViewModel' has a wrong offset!");
static_assert(offsetof(MVVMView_SetViewModel, ReturnValue) == 0x000010, "Member 'MVVMView_SetViewModel::ReturnValue' has a wrong offset!");

// Function ModelViewViewModel.MVVMViewModelCollectionObject.AddViewModelInstance
// 0x0020 (0x0020 - 0x0000)
struct MVVMViewModelCollectionObject_AddViewModelInstance final 
{
public:
	struct FMVVMViewModelContext                  Context;                                           // 0x0000(0x0010)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UMVVMViewModelBase*                     ViewModel;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18E5[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MVVMViewModelCollectionObject_AddViewModelInstance) == 0x000008, "Wrong alignment on MVVMViewModelCollectionObject_AddViewModelInstance");
static_assert(sizeof(MVVMViewModelCollectionObject_AddViewModelInstance) == 0x000020, "Wrong size on MVVMViewModelCollectionObject_AddViewModelInstance");
static_assert(offsetof(MVVMViewModelCollectionObject_AddViewModelInstance, Context) == 0x000000, "Member 'MVVMViewModelCollectionObject_AddViewModelInstance::Context' has a wrong offset!");
static_assert(offsetof(MVVMViewModelCollectionObject_AddViewModelInstance, ViewModel) == 0x000010, "Member 'MVVMViewModelCollectionObject_AddViewModelInstance::ViewModel' has a wrong offset!");
static_assert(offsetof(MVVMViewModelCollectionObject_AddViewModelInstance, ReturnValue) == 0x000018, "Member 'MVVMViewModelCollectionObject_AddViewModelInstance::ReturnValue' has a wrong offset!");

// Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance
// 0x0010 (0x0010 - 0x0000)
struct MVVMViewModelCollectionObject_RemoveAllViewModelInstance final 
{
public:
	class UMVVMViewModelBase*                     ViewModel;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18E6[0x4];                                     // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MVVMViewModelCollectionObject_RemoveAllViewModelInstance) == 0x000008, "Wrong alignment on MVVMViewModelCollectionObject_RemoveAllViewModelInstance");
static_assert(sizeof(MVVMViewModelCollectionObject_RemoveAllViewModelInstance) == 0x000010, "Wrong size on MVVMViewModelCollectionObject_RemoveAllViewModelInstance");
static_assert(offsetof(MVVMViewModelCollectionObject_RemoveAllViewModelInstance, ViewModel) == 0x000000, "Member 'MVVMViewModelCollectionObject_RemoveAllViewModelInstance::ViewModel' has a wrong offset!");
static_assert(offsetof(MVVMViewModelCollectionObject_RemoveAllViewModelInstance, ReturnValue) == 0x000008, "Member 'MVVMViewModelCollectionObject_RemoveAllViewModelInstance::ReturnValue' has a wrong offset!");

// Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel
// 0x0018 (0x0018 - 0x0000)
struct MVVMViewModelCollectionObject_RemoveViewModel final 
{
public:
	struct FMVVMViewModelContext                  Context;                                           // 0x0000(0x0010)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18E7[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MVVMViewModelCollectionObject_RemoveViewModel) == 0x000008, "Wrong alignment on MVVMViewModelCollectionObject_RemoveViewModel");
static_assert(sizeof(MVVMViewModelCollectionObject_RemoveViewModel) == 0x000018, "Wrong size on MVVMViewModelCollectionObject_RemoveViewModel");
static_assert(offsetof(MVVMViewModelCollectionObject_RemoveViewModel, Context) == 0x000000, "Member 'MVVMViewModelCollectionObject_RemoveViewModel::Context' has a wrong offset!");
static_assert(offsetof(MVVMViewModelCollectionObject_RemoveViewModel, ReturnValue) == 0x000010, "Member 'MVVMViewModelCollectionObject_RemoveViewModel::ReturnValue' has a wrong offset!");

// Function ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance
// 0x0018 (0x0018 - 0x0000)
struct MVVMViewModelCollectionObject_FindViewModelInstance final 
{
public:
	struct FMVVMViewModelContext                  Context;                                           // 0x0000(0x0010)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UMVVMViewModelBase*                     ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MVVMViewModelCollectionObject_FindViewModelInstance) == 0x000008, "Wrong alignment on MVVMViewModelCollectionObject_FindViewModelInstance");
static_assert(sizeof(MVVMViewModelCollectionObject_FindViewModelInstance) == 0x000018, "Wrong size on MVVMViewModelCollectionObject_FindViewModelInstance");
static_assert(offsetof(MVVMViewModelCollectionObject_FindViewModelInstance, Context) == 0x000000, "Member 'MVVMViewModelCollectionObject_FindViewModelInstance::Context' has a wrong offset!");
static_assert(offsetof(MVVMViewModelCollectionObject_FindViewModelInstance, ReturnValue) == 0x000010, "Member 'MVVMViewModelCollectionObject_FindViewModelInstance::ReturnValue' has a wrong offset!");

}

