#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharacterCustomization_VariantPickerPanel_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharacterCustomization_VariantPickerPanel_CM.WBP_CharacterCustomization_VariantPickerPanel_CM_C
// 0x09A0 (0x0C88 - 0x02E8)
class UWBP_CharacterCustomization_VariantPickerPanel_CM_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                    Action_L;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    Action_R;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Channels;                                  // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_ChannelName;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TileView_Styled*                 VALUI_TileView_Variants;                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_Channels;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                                VariantChannelPadding;                             // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class UVAL_CharacterCustomizationItemBase*    Item;                                              // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EVAL_CharacterBodyType                        BodyType;                                          // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_550C[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_CharacterCustomization_VariantChannel_CM_C*> VariantChannelWidgets;                             // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FName                                   Loadout_Slot_Name;                                 // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SelectedChannelName;                               // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVAL_CharacterCustomizationLoadout     Loadout;                                           // 0x0360(0x0900)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnVariantOptionSelected;                           // 0x0C60(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFetchLoadoutForPanel;                            // 0x0C70(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         VariantOptionSelectedIndex;                        // 0x0C80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResetNavigationOnce;                              // 0x0C84(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasFocus;                                         // 0x0C85(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_CharacterCustomization_VariantPickerPanel_CM_VALUI_TileView_Variants_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Param_Item, class UUserWidget* Widget);
	void BndEvt__WBP_CharacterCustomization_VariantPickerPanel_CM_VALUI_TileView_Variants_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
	void CheckIfItemHasSameClassAndVariantChannelNames(class UVAL_CharacterCustomizationItemBase* PreviousItem, class UVAL_CharacterCustomizationItemBase* NewItem, EVAL_CharacterBodyType NewBodyType, bool* HasSameVariantChannelNamesAndItemClass, bool Same, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const TSet<class FName>& CallFunc_TryGetAllVariantChannelNames_OutVariantChannelNames, bool CallFunc_TryGetAllVariantChannelNames_ReturnValue, TArray<class FName>& CallFunc_Set_ToArray_Result, const TSet<class FName>& CallFunc_TryGetAllVariantChannelNames_OutVariantChannelNames_1, bool CallFunc_TryGetAllVariantChannelNames_ReturnValue_1, TArray<class FName>& CallFunc_Set_ToArray_Result_1, bool CallFunc_Array_Identical_ReturnValue);
	void Construct();
	void CreateVariantChannels(TArray<class FName>& Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TDelegate<void(class UWBP_CharacterCustomization_VariantChannel_CM_C* VariantChannelWidget)> K2Node_CreateDelegate_OutputDelegate, class UWBP_CharacterCustomization_VariantChannel_CM_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void DisplayVariantChannel(class FName ChannelName, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWBP_CharacterCustomization_VariantChannel_CM_C* CallFunc_Array_Get_Item, const struct FGuid& CallFunc_TryGetVariantSelectionInLoadout_OutVariantOptionId, bool CallFunc_TryGetVariantSelectionInLoadout_ReturnValue, TArray<class UListEntry_CharacterCustomization_VariantOption_C*>& CallFunc_GenerateVariantOptions_Options, int32 CallFunc_GenerateVariantOptions_SelectId, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ExecuteUbergraph_WBP_CharacterCustomization_VariantPickerPanel_CM(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UWBP_ListEntry_CharacterCustomization_VariantOption_CM_C* K2Node_CustomEvent_VariantOptionWidget, TDelegate<void(class UUserWidget* Widget)> K2Node_CreateDelegate_OutputDelegate_1, class UUserWidget* K2Node_CustomEvent_Widget, class UWBP_ListEntry_CharacterCustomization_VariantOption_CM_C* K2Node_DynamicCast_AsWBP_List_Entry_Character_Customization_Variant_Option_CM, bool K2Node_DynamicCast_bSuccess, TDelegate<void(class UWBP_ListEntry_CharacterCustomization_VariantOption_CM_C* VariantOptionWidget)> K2Node_CreateDelegate_OutputDelegate_2, class UUserWidget* K2Node_ComponentBoundEvent_Widget_1, int32 CallFunc_GetIndexForItem_ReturnValue, class UWBP_ListEntry_CharacterCustomization_VariantOption_CM_C* K2Node_DynamicCast_AsWBP_List_Entry_Character_Customization_Variant_Option_CM_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UWBP_ListEntry_CharacterCustomization_VariantOption_CM_C* K2Node_DynamicCast_AsWBP_List_Entry_Character_Customization_Variant_Option_CM_2, bool K2Node_DynamicCast_bSuccess_2);
	void Get_First_Focus_Widget(class UWidget** First_Navigation_Widget, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, class UWBP_ListEntry_CharacterCustomization_VariantOption_CM_C* K2Node_DynamicCast_AsWBP_List_Entry_Character_Customization_Variant_Option_CM, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetIndexForItem_ReturnValue);
	void Handle_on_Varient_Option_Focused();
	void HandleOnTileViewEntryGenerated(class UUserWidget* Widget);
	void HandleOnVariantChannelButtonClicked(class UCommonButtonBase* Button);
	void HandleOnVariantOptionSelected(class UWBP_ListEntry_CharacterCustomization_VariantOption_CM_C* VariantOptionWidget);
	void HideZLZRButtonPrompt();
	void OnFetchLoadoutForPanel__DelegateSignature(class UWBP_CharacterCustomization_VariantPickerPanel_CM_C* VariantPickerPanel);
	void OnVariantOptionSelected__DelegateSignature(class UVAL_CharacterCustomizationItemBase* Param_Item, class FName LoadoutSlotName, class FName VariantChannelName, const struct FGuid& VariantOptionId);
	void UpdatePanelFromItem(class UVAL_CharacterCustomizationItemBase* ItemToDisplay, const struct FVAL_CharacterCustomizationLoadout& Param_Loadout, class FName LoadoutSlotName, bool* HasAnyVariantChannelsToShow, const TArray<class FName>& VariantChannels, bool HasSameVariantChannelNamesAndItemClass, bool HasVariantsToShow, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, const TSet<class FName>& CallFunc_TryGetAllVariantChannelNames_OutVariantChannelNames, bool CallFunc_TryGetAllVariantChannelNames_ReturnValue, TArray<class FName>& CallFunc_Set_ToArray_Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckIfItemHasSameClassAndVariantChannelNames_HasSameVariantChannelNamesAndItemClass, bool Temp_bool_Variable, class FName K2Node_Select_Default);
	void WBP_CharacterCustomization_VariantPickerPanel_CM_AutoGenFunc(class UWBP_CharacterCustomization_VariantChannel_CM_C* VariantChannelWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharacterCustomization_VariantPickerPanel_CM_C">();
	}
	static class UWBP_CharacterCustomization_VariantPickerPanel_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharacterCustomization_VariantPickerPanel_CM_C>();
	}
};
static_assert(alignof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C) == 0x000008, "Wrong alignment on UWBP_CharacterCustomization_VariantPickerPanel_CM_C");
static_assert(sizeof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C) == 0x000C88, "Wrong size on UWBP_CharacterCustomization_VariantPickerPanel_CM_C");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, Action_L) == 0x0002F0, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::Action_L' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, Action_R) == 0x0002F8, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::Action_R' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, SizeBox_Channels) == 0x000300, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::SizeBox_Channels' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, Text_ChannelName) == 0x000308, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::Text_ChannelName' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, VALUI_TileView_Variants) == 0x000310, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::VALUI_TileView_Variants' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, VBox_Channels) == 0x000318, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::VBox_Channels' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, VariantChannelPadding) == 0x000320, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::VariantChannelPadding' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, Item) == 0x000330, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::Item' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, BodyType) == 0x000338, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::BodyType' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, VariantChannelWidgets) == 0x000340, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::VariantChannelWidgets' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, Loadout_Slot_Name) == 0x000350, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::Loadout_Slot_Name' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, SelectedChannelName) == 0x000358, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::SelectedChannelName' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, Loadout) == 0x000360, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::Loadout' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, OnVariantOptionSelected) == 0x000C60, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::OnVariantOptionSelected' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, OnFetchLoadoutForPanel) == 0x000C70, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::OnFetchLoadoutForPanel' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, VariantOptionSelectedIndex) == 0x000C80, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::VariantOptionSelectedIndex' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, bResetNavigationOnce) == 0x000C84, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::bResetNavigationOnce' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterCustomization_VariantPickerPanel_CM_C, bHasFocus) == 0x000C85, "Member 'UWBP_CharacterCustomization_VariantPickerPanel_CM_C::bHasFocus' has a wrong offset!");

}

