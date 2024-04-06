#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KeyRebinding

#include "Basic.hpp"

#include "S6UICore_classes.hpp"
#include "S6EnhancedInputExtended_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_classes.hpp"
#include "KeyRebinding_structs.hpp"
#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"
#include "Engine_classes.hpp"
#include "DeveloperSettings_structs.hpp"
#include "DeveloperSettings_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "CommonWidgetInputExtended_classes.hpp"


namespace SDK
{

// Class KeyRebinding.KeyRebindingDataset
// 0x0060 (0x0090 - 0x0030)
class UKeyRebindingDataset final  : public UDataAsset
{
public:
	int32                                         Version;                                           // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ECommonInputType                              InputType;                                         // 0x0034(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_188E[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FKeyRebind_KeyMappingEntry>     KeyRebindingMappings;                              // 0x0038(0x0010)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FKey>                           UnAvailableKeySet;                                 // 0x0048(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UInputMappingContext*                   IMCOfChordAction;                                  // 0x0058(0x0008)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         KeySlotNum;                                        // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_188F[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStringTable*                           GroupTable;                                        // 0x0068(0x0008)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FKey>                           UnBoundKeys;                                       // 0x0070(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FKey>                           SpecialKeys;                                       // 0x0080(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KeyRebindingDataset">();
	}
	static class UKeyRebindingDataset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyRebindingDataset>();
	}
};
static_assert(alignof(UKeyRebindingDataset) == 0x000008, "Wrong alignment on UKeyRebindingDataset");
static_assert(sizeof(UKeyRebindingDataset) == 0x000090, "Wrong size on UKeyRebindingDataset");
static_assert(offsetof(UKeyRebindingDataset, Version) == 0x000030, "Member 'UKeyRebindingDataset::Version' has a wrong offset!");
static_assert(offsetof(UKeyRebindingDataset, InputType) == 0x000034, "Member 'UKeyRebindingDataset::InputType' has a wrong offset!");
static_assert(offsetof(UKeyRebindingDataset, KeyRebindingMappings) == 0x000038, "Member 'UKeyRebindingDataset::KeyRebindingMappings' has a wrong offset!");
static_assert(offsetof(UKeyRebindingDataset, UnAvailableKeySet) == 0x000048, "Member 'UKeyRebindingDataset::UnAvailableKeySet' has a wrong offset!");
static_assert(offsetof(UKeyRebindingDataset, IMCOfChordAction) == 0x000058, "Member 'UKeyRebindingDataset::IMCOfChordAction' has a wrong offset!");
static_assert(offsetof(UKeyRebindingDataset, KeySlotNum) == 0x000060, "Member 'UKeyRebindingDataset::KeySlotNum' has a wrong offset!");
static_assert(offsetof(UKeyRebindingDataset, GroupTable) == 0x000068, "Member 'UKeyRebindingDataset::GroupTable' has a wrong offset!");
static_assert(offsetof(UKeyRebindingDataset, UnBoundKeys) == 0x000070, "Member 'UKeyRebindingDataset::UnBoundKeys' has a wrong offset!");
static_assert(offsetof(UKeyRebindingDataset, SpecialKeys) == 0x000080, "Member 'UKeyRebindingDataset::SpecialKeys' has a wrong offset!");

// Class KeyRebinding.BindingKeyListenerWidget
// 0x0058 (0x0580 - 0x0528)
class UBindingKeyListenerWidget : public US6UI_ModalWidgetBase
{
public:
	FMulticastInlineDelegateProperty_             OnAnyKeyTriggered;                                 // 0x0528(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1890[0x48];                                    // 0x0538(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void DisableInput();
	void EnableInput();
	void OnAnyKeyTriggered__DelegateSignature(struct FKeyRebind_InputKey& InTriggeredKey);

	struct FKeyRebind_InputKey GetPlayerInputKey() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BindingKeyListenerWidget">();
	}
	static class UBindingKeyListenerWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBindingKeyListenerWidget>();
	}
};
static_assert(alignof(UBindingKeyListenerWidget) == 0x000008, "Wrong alignment on UBindingKeyListenerWidget");
static_assert(sizeof(UBindingKeyListenerWidget) == 0x000580, "Wrong size on UBindingKeyListenerWidget");
static_assert(offsetof(UBindingKeyListenerWidget, OnAnyKeyTriggered) == 0x000528, "Member 'UBindingKeyListenerWidget::OnAnyKeyTriggered' has a wrong offset!");

// Class KeyRebinding.CommonInputActionWidget
// 0x0030 (0x02A8 - 0x0278)
class UCommonInputActionWidget : public UUserWidget
{
public:
	class UImage*                                 ChordKeyIcon;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPanelWidget*                           ChordKeyPanel;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                 MainKeyIcon;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInputMappingContext*                   DefaultIMC;                                        // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInputAction*                           InputAction;                                       // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                           SpecialGameplayTag;                                // 0x02A0(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void HandleControlMappingsRebuilt();
	void HandleInputMethodChanged(ECommonInputType InInputType);
	void K2_UpdateActionWidget(ECommonInputType InInputType);
	void SetDefaultInputMappingContext(class UInputMappingContext* InIMC);
	void SetEnhancedInputAction(class UInputAction* InInputAction);
	void UpdateActionWidget();
	void UpdateWidgetBySpecialGameplayTag(struct FGameplayTag& GameplayTag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputActionWidget">();
	}
	static class UCommonInputActionWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputActionWidget>();
	}
};
static_assert(alignof(UCommonInputActionWidget) == 0x000008, "Wrong alignment on UCommonInputActionWidget");
static_assert(sizeof(UCommonInputActionWidget) == 0x0002A8, "Wrong size on UCommonInputActionWidget");
static_assert(offsetof(UCommonInputActionWidget, ChordKeyIcon) == 0x000278, "Member 'UCommonInputActionWidget::ChordKeyIcon' has a wrong offset!");
static_assert(offsetof(UCommonInputActionWidget, ChordKeyPanel) == 0x000280, "Member 'UCommonInputActionWidget::ChordKeyPanel' has a wrong offset!");
static_assert(offsetof(UCommonInputActionWidget, MainKeyIcon) == 0x000288, "Member 'UCommonInputActionWidget::MainKeyIcon' has a wrong offset!");
static_assert(offsetof(UCommonInputActionWidget, DefaultIMC) == 0x000290, "Member 'UCommonInputActionWidget::DefaultIMC' has a wrong offset!");
static_assert(offsetof(UCommonInputActionWidget, InputAction) == 0x000298, "Member 'UCommonInputActionWidget::InputAction' has a wrong offset!");
static_assert(offsetof(UCommonInputActionWidget, SpecialGameplayTag) == 0x0002A0, "Member 'UCommonInputActionWidget::SpecialGameplayTag' has a wrong offset!");

// Class KeyRebinding.EnhancedInputSubsystemWithKeyRebinding
// 0x0018 (0x0258 - 0x0240)
class UEnhancedInputSubsystemWithKeyRebinding final  : public US6EnhancedInputExtendedSubsystem
{
public:
	uint8                                         Pad_1891[0x8];                                     // 0x0240(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UInputMappingContext*>           AppliedIMC;                                        // 0x0248(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnhancedInputSubsystemWithKeyRebinding">();
	}
	static class UEnhancedInputSubsystemWithKeyRebinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnhancedInputSubsystemWithKeyRebinding>();
	}
};
static_assert(alignof(UEnhancedInputSubsystemWithKeyRebinding) == 0x000008, "Wrong alignment on UEnhancedInputSubsystemWithKeyRebinding");
static_assert(sizeof(UEnhancedInputSubsystemWithKeyRebinding) == 0x000258, "Wrong size on UEnhancedInputSubsystemWithKeyRebinding");
static_assert(offsetof(UEnhancedInputSubsystemWithKeyRebinding, AppliedIMC) == 0x000248, "Member 'UEnhancedInputSubsystemWithKeyRebinding::AppliedIMC' has a wrong offset!");

// Class KeyRebinding.KeyRebindingRichTextBlockDecorator_KeyIcon
// 0x00D8 (0x0100 - 0x0028)
class UKeyRebindingRichTextBlockDecorator_KeyIcon : public URichTextBlockDecorator
{
public:
	uint8                                         Pad_1892[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            MissingTexture;                                    // 0x0030(0x00D0)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KeyRebindingRichTextBlockDecorator_KeyIcon">();
	}
	static class UKeyRebindingRichTextBlockDecorator_KeyIcon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyRebindingRichTextBlockDecorator_KeyIcon>();
	}
};
static_assert(alignof(UKeyRebindingRichTextBlockDecorator_KeyIcon) == 0x000010, "Wrong alignment on UKeyRebindingRichTextBlockDecorator_KeyIcon");
static_assert(sizeof(UKeyRebindingRichTextBlockDecorator_KeyIcon) == 0x000100, "Wrong size on UKeyRebindingRichTextBlockDecorator_KeyIcon");
static_assert(offsetof(UKeyRebindingRichTextBlockDecorator_KeyIcon, MissingTexture) == 0x000030, "Member 'UKeyRebindingRichTextBlockDecorator_KeyIcon::MissingTexture' has a wrong offset!");

// Class KeyRebinding.IARichTextBlockImageDecorator
// 0x0000 (0x0100 - 0x0100)
class UIARichTextBlockImageDecorator : public UKeyRebindingRichTextBlockDecorator_KeyIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IARichTextBlockImageDecorator">();
	}
	static class UIARichTextBlockImageDecorator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIARichTextBlockImageDecorator>();
	}
};
static_assert(alignof(UIARichTextBlockImageDecorator) == 0x000010, "Wrong alignment on UIARichTextBlockImageDecorator");
static_assert(sizeof(UIARichTextBlockImageDecorator) == 0x000100, "Wrong size on UIARichTextBlockImageDecorator");

// Class KeyRebinding.KeyRebindGroupEntryWidget
// 0x0060 (0x02D8 - 0x0278)
class UKeyRebindGroupEntryWidget : public UUserWidget
{
public:
	class UInputAction*                           CurrentInputAction;                                // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UInputAction*>                   InputActions;                                      // 0x0280(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                          bIsCoreActon;                                      // 0x0290(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonInputType                              CurrentInputType;                                  // 0x0291(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1893[0x6];                                     // 0x0292(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FKey>                           UnBoundKeys;                                       // 0x0298(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FKey>                           SpecialKeys;                                       // 0x02A8(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                   ActionDescription;                                 // 0x02B8(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UKeyRebindGroupWidget>   OwnerGroup;                                        // 0x02D0(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void BP_OnWidgetCreated();
	void InitializeRebindKey(class UWidget* Widget, EKeyRebind_KeySlot InSlotNum);
	void InitializeUnbindKey(class UWidget* Widget, EKeyRebind_KeySlot InSlotNum);
	void InitKeyRebindEntryDesc();
	bool IsInputActionMatched(class UInputAction* InputAction);
	void OnIconRefreshed(TArray<struct FInputKeysIcon>& RefreshIcons);
	void RefreshIcon();

	class FText GetKeyRebindEntryDesc() const;
	class FText GetKeyRebindEntryDescWithCore() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KeyRebindGroupEntryWidget">();
	}
	static class UKeyRebindGroupEntryWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyRebindGroupEntryWidget>();
	}
};
static_assert(alignof(UKeyRebindGroupEntryWidget) == 0x000008, "Wrong alignment on UKeyRebindGroupEntryWidget");
static_assert(sizeof(UKeyRebindGroupEntryWidget) == 0x0002D8, "Wrong size on UKeyRebindGroupEntryWidget");
static_assert(offsetof(UKeyRebindGroupEntryWidget, CurrentInputAction) == 0x000278, "Member 'UKeyRebindGroupEntryWidget::CurrentInputAction' has a wrong offset!");
static_assert(offsetof(UKeyRebindGroupEntryWidget, InputActions) == 0x000280, "Member 'UKeyRebindGroupEntryWidget::InputActions' has a wrong offset!");
static_assert(offsetof(UKeyRebindGroupEntryWidget, bIsCoreActon) == 0x000290, "Member 'UKeyRebindGroupEntryWidget::bIsCoreActon' has a wrong offset!");
static_assert(offsetof(UKeyRebindGroupEntryWidget, CurrentInputType) == 0x000291, "Member 'UKeyRebindGroupEntryWidget::CurrentInputType' has a wrong offset!");
static_assert(offsetof(UKeyRebindGroupEntryWidget, UnBoundKeys) == 0x000298, "Member 'UKeyRebindGroupEntryWidget::UnBoundKeys' has a wrong offset!");
static_assert(offsetof(UKeyRebindGroupEntryWidget, SpecialKeys) == 0x0002A8, "Member 'UKeyRebindGroupEntryWidget::SpecialKeys' has a wrong offset!");
static_assert(offsetof(UKeyRebindGroupEntryWidget, ActionDescription) == 0x0002B8, "Member 'UKeyRebindGroupEntryWidget::ActionDescription' has a wrong offset!");
static_assert(offsetof(UKeyRebindGroupEntryWidget, OwnerGroup) == 0x0002D0, "Member 'UKeyRebindGroupEntryWidget::OwnerGroup' has a wrong offset!");

// Class KeyRebinding.KeyRebindGroupWidget
// 0x0048 (0x02C0 - 0x0278)
class UKeyRebindGroupWidget : public UUserWidget
{
public:
	TSubclassOf<class UKeyRebindGroupEntryWidget> KeyRebindGroupEntryWidgetType;                     // 0x0278(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonInputType                              CurrentInputType;                                  // 0x0280(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1897[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   GroupHeaderText;                                   // 0x0288(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                         GroupID;                                           // 0x02A0(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1898[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UKeyRebindGroupEntryWidget*>     KeyRebindGroupEntryWidgets;                        // 0x02A8(0x0010)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UKeyRebindSettingsWidgetBase> OwnerMenu;                                         // 0x02B8(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void BP_OnWidgetCreated();
	bool IsEqualGroup(int32 InGroup);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KeyRebindGroupWidget">();
	}
	static class UKeyRebindGroupWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyRebindGroupWidget>();
	}
};
static_assert(alignof(UKeyRebindGroupWidget) == 0x000008, "Wrong alignment on UKeyRebindGroupWidget");
static_assert(sizeof(UKeyRebindGroupWidget) == 0x0002C0, "Wrong size on UKeyRebindGroupWidget");
static_assert(offsetof(UKeyRebindGroupWidget, KeyRebindGroupEntryWidgetType) == 0x000278, "Member 'UKeyRebindGroupWidget::KeyRebindGroupEntryWidgetType' has a wrong offset!");
static_assert(offsetof(UKeyRebindGroupWidget, CurrentInputType) == 0x000280, "Member 'UKeyRebindGroupWidget::CurrentInputType' has a wrong offset!");
static_assert(offsetof(UKeyRebindGroupWidget, GroupHeaderText) == 0x000288, "Member 'UKeyRebindGroupWidget::GroupHeaderText' has a wrong offset!");
static_assert(offsetof(UKeyRebindGroupWidget, GroupID) == 0x0002A0, "Member 'UKeyRebindGroupWidget::GroupID' has a wrong offset!");
static_assert(offsetof(UKeyRebindGroupWidget, KeyRebindGroupEntryWidgets) == 0x0002A8, "Member 'UKeyRebindGroupWidget::KeyRebindGroupEntryWidgets' has a wrong offset!");
static_assert(offsetof(UKeyRebindGroupWidget, OwnerMenu) == 0x0002B8, "Member 'UKeyRebindGroupWidget::OwnerMenu' has a wrong offset!");

// Class KeyRebinding.KeyRebindingDatasetSettings
// 0x0048 (0x0080 - 0x0038)
class UKeyRebindingDatasetSettings final  : public UDeveloperSettings
{
public:
	TSoftClassPtr<class UClass>                   CustomKeyMappingDataProviderClass;                 // 0x0038(0x0030)(Edit, Config, NoClear, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TipDelayTime;                                      // 0x0068(0x0004)(Edit, ZeroConstructor, Config, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_189A[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPerPlatformSettings                   PlatformSettings;                                  // 0x0070(0x0010)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KeyRebindingDatasetSettings">();
	}
	static class UKeyRebindingDatasetSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyRebindingDatasetSettings>();
	}
};
static_assert(alignof(UKeyRebindingDatasetSettings) == 0x000008, "Wrong alignment on UKeyRebindingDatasetSettings");
static_assert(sizeof(UKeyRebindingDatasetSettings) == 0x000080, "Wrong size on UKeyRebindingDatasetSettings");
static_assert(offsetof(UKeyRebindingDatasetSettings, CustomKeyMappingDataProviderClass) == 0x000038, "Member 'UKeyRebindingDatasetSettings::CustomKeyMappingDataProviderClass' has a wrong offset!");
static_assert(offsetof(UKeyRebindingDatasetSettings, TipDelayTime) == 0x000068, "Member 'UKeyRebindingDatasetSettings::TipDelayTime' has a wrong offset!");
static_assert(offsetof(UKeyRebindingDatasetSettings, PlatformSettings) == 0x000070, "Member 'UKeyRebindingDatasetSettings::PlatformSettings' has a wrong offset!");

// Class KeyRebinding.KeyRebindingSubsystem
// 0x00D8 (0x0108 - 0x0030)
class UKeyRebindingSubsystem final  : public ULocalPlayerSubsystem
{
public:
	FMulticastInlineDelegateProperty_             OnResetToDefaultMappings;                          // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnKeyRebindingResult;                              // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnKeyUnbindingReuslt;                              // 0x0050(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<ECommonInputType, struct FKeyRebind_CachedKeyRebindingMappings> CachedAllKeyRebindingMappings;                     // 0x0060(0x0050)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UInputMappingContext*, class UInputMappingContext*> CacheRemappingIMCs;                                // 0x00B0(0x0050)(Transient, NativeAccessSpecifierPrivate)
	class UObject*                                CustomKeyMappingDataProvider;                      // 0x0100(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void ApplyCustomKeyMappings();
	bool AttemptRebinding(class UInputAction* InputAction, EKeyRebind_KeySlot Slot, struct FKeyRebind_InputKey& Keys, ECommonInputType InputType, struct FKeyRebind_BindingResult* OutResult);
	bool AttemptUnbinding(class UInputAction* InputAction, EKeyRebind_KeySlot Slot, ECommonInputType InputType, struct FKeyRebind_UnbindingResult* OutResult);
	void KeyRebindingResultDelegate__DelegateSignature(ECommonInputType InputType, struct FKeyRebind_BindingResult& BindingResult);
	void KeyUnbindingResultDelegate__DelegateSignature(ECommonInputType InputType, struct FKeyRebind_UnbindingResult& UnbindingResult);
	void ResetToDefaultMappings(ECommonInputType InputType, bool bEffectImmediately);
	void SimpleKeyRebindingSystemDelegate__DelegateSignature(ECommonInputType InputType);

	void GetInputActionKeys(class UInputAction* InputAction, ECommonInputType InputType, TArray<struct FKeyRebind_InputKey>* OutKeys) const;
	TArray<struct FKeyRebind_KeyMappingEntry> GetRebindings(ECommonInputType InputType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KeyRebindingSubsystem">();
	}
	static class UKeyRebindingSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyRebindingSubsystem>();
	}
};
static_assert(alignof(UKeyRebindingSubsystem) == 0x000008, "Wrong alignment on UKeyRebindingSubsystem");
static_assert(sizeof(UKeyRebindingSubsystem) == 0x000108, "Wrong size on UKeyRebindingSubsystem");
static_assert(offsetof(UKeyRebindingSubsystem, OnResetToDefaultMappings) == 0x000030, "Member 'UKeyRebindingSubsystem::OnResetToDefaultMappings' has a wrong offset!");
static_assert(offsetof(UKeyRebindingSubsystem, OnKeyRebindingResult) == 0x000040, "Member 'UKeyRebindingSubsystem::OnKeyRebindingResult' has a wrong offset!");
static_assert(offsetof(UKeyRebindingSubsystem, OnKeyUnbindingReuslt) == 0x000050, "Member 'UKeyRebindingSubsystem::OnKeyUnbindingReuslt' has a wrong offset!");
static_assert(offsetof(UKeyRebindingSubsystem, CachedAllKeyRebindingMappings) == 0x000060, "Member 'UKeyRebindingSubsystem::CachedAllKeyRebindingMappings' has a wrong offset!");
static_assert(offsetof(UKeyRebindingSubsystem, CacheRemappingIMCs) == 0x0000B0, "Member 'UKeyRebindingSubsystem::CacheRemappingIMCs' has a wrong offset!");
static_assert(offsetof(UKeyRebindingSubsystem, CustomKeyMappingDataProvider) == 0x000100, "Member 'UKeyRebindingSubsystem::CustomKeyMappingDataProvider' has a wrong offset!");

// Class KeyRebinding.KeyRebindingUtils
// 0x0000 (0x0028 - 0x0028)
class UKeyRebindingUtils final  : public UBlueprintFunctionLibrary
{
public:
	static const class UCommonInputSubsystem* GetCommonInputSystem(class UObject* WorldContextObject);
	static bool GetIconForEnhancedInputAction(class UObject* WorldContextObject, class UInputAction* InputAction, ECommonInputType InputType, struct FGameplayTag& SpecialTag, struct FSlateBrush* OutMainKeyBrush, struct FSlateBrush* OutChordKeyBrush);
	static bool GetInputType(class FName IMCInputTypeIdentification, struct FKey& TestKey, ECommonInputType* OutInputTyp);
	static bool GetKeyIcons(class UObject* WorldContextObject, struct FInputKeys& InputKeys, ECommonInputType InputType, struct FGameplayTag& SpecialTag, struct FSlateBrush* OutMainKeyBrush, struct FSlateBrush* OutChordKeyBrush);
	static bool GetKeyIconsWithIMC(class UObject* WorldContextObject, class UInputMappingContext* MappingContext, class UInputAction* InputAction, ECommonInputType InputType, struct FGameplayTag& SpecialTag, struct FSlateBrush* OutMainKeyBrush, struct FSlateBrush* OutChordKeyBrush);
	static class FText GetKeyName(struct FKey& Key);
	static class UKeyRebindingSubsystem* GetKeyRebindingSystem(class UObject* WorldContextObject);
	static bool GetKeysForEnhancedInputAction(class UObject* WorldContextObject, class UInputAction* InputAction, ECommonInputType InputType, struct FInputKeys* OutKeys);
	static const class ULocalPlayer* GetLocalPlayer(class UObject* WorldContextObject);
	static float GetPromptDelayTime();
	static void GetSpecialKeys(ECommonInputType TestInputType, TArray<struct FKey>* OutSpecialKeys);
	static bool IsMatchingInputType(ECommonInputType InputType, struct FKey& TestKey);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KeyRebindingUtils">();
	}
	static class UKeyRebindingUtils* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyRebindingUtils>();
	}
};
static_assert(alignof(UKeyRebindingUtils) == 0x000008, "Wrong alignment on UKeyRebindingUtils");
static_assert(sizeof(UKeyRebindingUtils) == 0x000028, "Wrong size on UKeyRebindingUtils");

// Class KeyRebinding.KeyRebinding_CustomKeyMappingDataInterface
// 0x0000 (0x0028 - 0x0028)
class IKeyRebinding_CustomKeyMappingDataInterface final  : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KeyRebinding_CustomKeyMappingDataInterface">();
	}
	static class IKeyRebinding_CustomKeyMappingDataInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IKeyRebinding_CustomKeyMappingDataInterface>();
	}
};
static_assert(alignof(IKeyRebinding_CustomKeyMappingDataInterface) == 0x000008, "Wrong alignment on IKeyRebinding_CustomKeyMappingDataInterface");
static_assert(sizeof(IKeyRebinding_CustomKeyMappingDataInterface) == 0x000028, "Wrong size on IKeyRebinding_CustomKeyMappingDataInterface");

// Class KeyRebinding.KeyRebindPlatformSettings
// 0x0098 (0x00D8 - 0x0040)
class UKeyRebindPlatformSettings final  : public UPlatformSettings
{
public:
	TArray<TSoftObjectPtr<class UKeyRebindingDataset>> KeyRebindingDatasets;                              // 0x0040(0x0010)(Edit, ZeroConstructor, Config, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TMap<ECommonInputType, class UKeyRebindingDataset*> LoadedKeyRebindingDatasets;                        // 0x0050(0x0050)(Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UDataTable*                             LoadedInputKeyDataTable;                           // 0x00A0(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UDataTable>              InputKeyDataTable;                                 // 0x00A8(0x0030)(Edit, Config, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KeyRebindPlatformSettings">();
	}
	static class UKeyRebindPlatformSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyRebindPlatformSettings>();
	}
};
static_assert(alignof(UKeyRebindPlatformSettings) == 0x000008, "Wrong alignment on UKeyRebindPlatformSettings");
static_assert(sizeof(UKeyRebindPlatformSettings) == 0x0000D8, "Wrong size on UKeyRebindPlatformSettings");
static_assert(offsetof(UKeyRebindPlatformSettings, KeyRebindingDatasets) == 0x000040, "Member 'UKeyRebindPlatformSettings::KeyRebindingDatasets' has a wrong offset!");
static_assert(offsetof(UKeyRebindPlatformSettings, LoadedKeyRebindingDatasets) == 0x000050, "Member 'UKeyRebindPlatformSettings::LoadedKeyRebindingDatasets' has a wrong offset!");
static_assert(offsetof(UKeyRebindPlatformSettings, LoadedInputKeyDataTable) == 0x0000A0, "Member 'UKeyRebindPlatformSettings::LoadedInputKeyDataTable' has a wrong offset!");
static_assert(offsetof(UKeyRebindPlatformSettings, InputKeyDataTable) == 0x0000A8, "Member 'UKeyRebindPlatformSettings::InputKeyDataTable' has a wrong offset!");

// Class KeyRebinding.KeyRebindSettingsWidgetBase
// 0x0048 (0x0528 - 0x04E0)
class UKeyRebindSettingsWidgetBase : public UCommonActivatableWidgetInputExtended
{
public:
	TSubclassOf<class UBindingKeyListenerWidget>  KeyRebindListenerWidgetClass;                      // 0x04E0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UKeyRebindGroupWidget>      KeyRebindGroupWidgetType;                          // 0x04E8(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonInputType                              CurrentInputType;                                  // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18B3[0x7];                                     // 0x04F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBindingKeyListenerWidget*              KeyRebindListenerWidget;                           // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                           CurrentInputAction;                                // 0x0500(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EKeyRebind_KeySlot                            CurrentSlotNum;                                    // 0x0508(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_18B4[0x7];                                     // 0x0509(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UKeyRebindGroupWidget*>          KeyRebindGroupWidgets;                             // 0x0510(0x0010)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_18B5[0x8];                                     // 0x0520(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ApplyCustomConfig();
	void BP_OnSubWidgetInitCompleted();
	void CreateKeyRebindGroupWidget(TArray<struct FKeyRebind_KeyMappingEntry>& InKeyRebindInfo);
	void InitializeRebindKey(class UWidget* Widget, class UInputAction* InInputAction, EKeyRebind_KeySlot InSlotNum);
	void InitializeUnbindKey(class UWidget* Widget, class UInputAction* InInputAction, EKeyRebind_KeySlot InSlotNum);
	void OnAnyKeyTriggered(struct FKeyRebind_InputKey& InInputKeys);
	void OnKeyRebindBegin(class UWidget* Widget, bool bIsRebinding);
	void OnKeyRebindEnd(struct FKeyRebind_DisplayResult& ResultInfo, bool bIsRebinding);
	void RefreshSubWidget(struct FKeyRebind_DisplayResult& ResultInfo, bool bRefreshAll);
	void ResetToDefaultConfig();

	class FText GetDescriptionofInputAction(class UInputAction* InInputAction) const;
	bool HasAnyKeyNotBound() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KeyRebindSettingsWidgetBase">();
	}
	static class UKeyRebindSettingsWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyRebindSettingsWidgetBase>();
	}
};
static_assert(alignof(UKeyRebindSettingsWidgetBase) == 0x000008, "Wrong alignment on UKeyRebindSettingsWidgetBase");
static_assert(sizeof(UKeyRebindSettingsWidgetBase) == 0x000528, "Wrong size on UKeyRebindSettingsWidgetBase");
static_assert(offsetof(UKeyRebindSettingsWidgetBase, KeyRebindListenerWidgetClass) == 0x0004E0, "Member 'UKeyRebindSettingsWidgetBase::KeyRebindListenerWidgetClass' has a wrong offset!");
static_assert(offsetof(UKeyRebindSettingsWidgetBase, KeyRebindGroupWidgetType) == 0x0004E8, "Member 'UKeyRebindSettingsWidgetBase::KeyRebindGroupWidgetType' has a wrong offset!");
static_assert(offsetof(UKeyRebindSettingsWidgetBase, CurrentInputType) == 0x0004F0, "Member 'UKeyRebindSettingsWidgetBase::CurrentInputType' has a wrong offset!");
static_assert(offsetof(UKeyRebindSettingsWidgetBase, KeyRebindListenerWidget) == 0x0004F8, "Member 'UKeyRebindSettingsWidgetBase::KeyRebindListenerWidget' has a wrong offset!");
static_assert(offsetof(UKeyRebindSettingsWidgetBase, CurrentInputAction) == 0x000500, "Member 'UKeyRebindSettingsWidgetBase::CurrentInputAction' has a wrong offset!");
static_assert(offsetof(UKeyRebindSettingsWidgetBase, CurrentSlotNum) == 0x000508, "Member 'UKeyRebindSettingsWidgetBase::CurrentSlotNum' has a wrong offset!");
static_assert(offsetof(UKeyRebindSettingsWidgetBase, KeyRebindGroupWidgets) == 0x000510, "Member 'UKeyRebindSettingsWidgetBase::KeyRebindGroupWidgets' has a wrong offset!");

// Class KeyRebinding.KeyRebindValidatorBase
// 0x0000 (0x0028 - 0x0028)
class UKeyRebindValidatorBase : public UObject
{
public:
	EKeyRebindValidationResult TestReBindingValidation(ECommonInputType& InputType, class UInputAction* InputAction, EKeyRebind_KeySlot& Slot, struct FKeyRebind_InputKey& Keys, TArray<class FText>& OutErrorMessages);
	EKeyRebindValidationResult TestUnBindingValidation(ECommonInputType& InputType, class UInputAction* InputAction, EKeyRebind_KeySlot& Slot, TArray<class FText>& OutErrorMessages);

	bool CanValidate(EKeyRebindValidationExcuteType& InExcuteType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KeyRebindValidatorBase">();
	}
	static class UKeyRebindValidatorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyRebindValidatorBase>();
	}
};
static_assert(alignof(UKeyRebindValidatorBase) == 0x000008, "Wrong alignment on UKeyRebindValidatorBase");
static_assert(sizeof(UKeyRebindValidatorBase) == 0x000028, "Wrong size on UKeyRebindValidatorBase");

}

