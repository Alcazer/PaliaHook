#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Template_ButtonTab_Secondary_02_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Template_ButtonTab_Secondary_02_CM.WBP_Template_ButtonTab_Secondary_02_CM_C
// 0x00A8 (0x0368 - 0x02C0)
class UWBP_Template_ButtonTab_Secondary_02_CM_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                    InputAction_LeftIcon;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    InputAction_RightIcon;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TabBox;                                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class UTexture2D*, class FText>          Tabs;                                              // 0x02E0(0x0050)(Edit, BlueprintVisible)
	class UWBP_ButtonTab_Secondary_02_CM_C*       Selected;                                          // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             On_Tab_Selection_Changed;                          // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ShowGamePadIcon;                                   // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_511A[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_ButtonTab_Secondary_02_CM_C*> AllTabs;                                           // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IconsOnly;                                         // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DisplayGamePadIcon(bool IsShowIcon);
	void DoSelected(bool IsForward, bool bFoundValidIndex, int32 NumRetries, int32 StartSelectIndex, int32 SelectLength, int32 CurrentSelectedIndex, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWBP_ButtonTab_Secondary_02_CM_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWBP_ButtonTab_Secondary_02_CM_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void ExecuteUbergraph_WBP_Template_ButtonTab_Secondary_02_CM(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_ButtonTab_Secondary_02_CM_C* CallFunc_Create_ReturnValue, TArray<class UTexture2D*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, TDelegate<void(class UWBP_ButtonTab_Secondary_02_CM_C* Selected)> K2Node_CreateDelegate_OutputDelegate, class UWBP_ButtonTab_Secondary_02_CM_C* K2Node_CustomEvent_Selected, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 Temp_int_Array_Index_Variable, class UTexture2D* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void NavigateTab(bool bForward);
	void On_Tab_Selected(class UWBP_ButtonTab_Secondary_02_CM_C* Param_Selected);
	void On_Tab_Selection_Changed__DelegateSignature(int32 Tab_Selection);
	void PreConstruct(bool IsDesignTime);
	void SetAlign(class UHorizontalBoxSlot* HorizontalBoxSlot, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize);
	void SetSelectedButton(int32 Param_Index, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_ButtonTab_Secondary_02_CM_C* K2Node_DynamicCast_AsWBP_Button_Tab_Secondary_02_CM, bool K2Node_DynamicCast_bSuccess);
	void SetTabEnabled(bool NewEnabled, int32 TabIndex, class UWBP_ButtonTab_Secondary_02_CM_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Template_ButtonTab_Secondary_02_CM_C">();
	}
	static class UWBP_Template_ButtonTab_Secondary_02_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Template_ButtonTab_Secondary_02_CM_C>();
	}
};
static_assert(alignof(UWBP_Template_ButtonTab_Secondary_02_CM_C) == 0x000008, "Wrong alignment on UWBP_Template_ButtonTab_Secondary_02_CM_C");
static_assert(sizeof(UWBP_Template_ButtonTab_Secondary_02_CM_C) == 0x000368, "Wrong size on UWBP_Template_ButtonTab_Secondary_02_CM_C");
static_assert(offsetof(UWBP_Template_ButtonTab_Secondary_02_CM_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_Template_ButtonTab_Secondary_02_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ButtonTab_Secondary_02_CM_C, InputAction_LeftIcon) == 0x0002C8, "Member 'UWBP_Template_ButtonTab_Secondary_02_CM_C::InputAction_LeftIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ButtonTab_Secondary_02_CM_C, InputAction_RightIcon) == 0x0002D0, "Member 'UWBP_Template_ButtonTab_Secondary_02_CM_C::InputAction_RightIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ButtonTab_Secondary_02_CM_C, TabBox) == 0x0002D8, "Member 'UWBP_Template_ButtonTab_Secondary_02_CM_C::TabBox' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ButtonTab_Secondary_02_CM_C, Tabs) == 0x0002E0, "Member 'UWBP_Template_ButtonTab_Secondary_02_CM_C::Tabs' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ButtonTab_Secondary_02_CM_C, Selected) == 0x000330, "Member 'UWBP_Template_ButtonTab_Secondary_02_CM_C::Selected' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ButtonTab_Secondary_02_CM_C, On_Tab_Selection_Changed) == 0x000338, "Member 'UWBP_Template_ButtonTab_Secondary_02_CM_C::On_Tab_Selection_Changed' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ButtonTab_Secondary_02_CM_C, ShowGamePadIcon) == 0x000348, "Member 'UWBP_Template_ButtonTab_Secondary_02_CM_C::ShowGamePadIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ButtonTab_Secondary_02_CM_C, AllTabs) == 0x000350, "Member 'UWBP_Template_ButtonTab_Secondary_02_CM_C::AllTabs' has a wrong offset!");
static_assert(offsetof(UWBP_Template_ButtonTab_Secondary_02_CM_C, IconsOnly) == 0x000360, "Member 'UWBP_Template_ButtonTab_Secondary_02_CM_C::IconsOnly' has a wrong offset!");

}

