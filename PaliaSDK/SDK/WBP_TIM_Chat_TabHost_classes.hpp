#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TIM_Chat_TabHost

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "ValeriaUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TIM_Chat_TabHost.WBP_TIM_Chat_TabHost_C
// 0x0030 (0x0320 - 0x02F0)
class UWBP_TIM_Chat_TabHost_C final  : public UVALUI_TabButtonHostBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_DepthSortedHorizontalBox*        HBox_TabButtons;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                                ButtonPadding_Inactive;                            // 0x0300(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FMargin                                ButtonPadding_Active;                              // 0x0310(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void AddTabButton(class FName& TabName, struct FVALUI_InstantiatedTabButtonInfo& Info);
	void AddTabButtonImpl(struct FVALUI_InstantiatedTabButtonInfo& InstantiatedTabButtonInfo, class FName& TabName, class UButton** Button, class UButton* ButtonCreated, class FName CallFunc_GetActiveTabName_ReturnValue, TArray<class FName>& CallFunc_GetTabNames_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, TArray<class FName>& CallFunc_GetTabNames_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void AdjustButton(class UButton* Button, int32 TabButtonIndex, int32 ActiveTabIndex, bool bReceivesShadowBottom, bool bReceivesShadowRight, bool bReceivesShadowLeft, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool Temp_bool_Variable, const struct FMargin& K2Node_Select_Default);
	void BindAudio(class UButton* Button);
	void ExecuteUbergraph_WBP_TIM_Chat_TabHost(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FName K2Node_Event_TabName_2, struct FVALUI_InstantiatedTabButtonInfo& K2Node_Event_Info_1, class FName K2Node_Event_TabName_1, struct FVALUI_InstantiatedTabButtonInfo& K2Node_Event_Info, class UButton* CallFunc_AddTabButtonImpl_Button, class FName K2Node_Event_TabName, bool CallFunc_RemoveChild_ReturnValue, TArray<class FName>& CallFunc_GetTabNames_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TArray<class FName>& CallFunc_GetTabNames_ReturnValue_1, class FName CallFunc_Array_Get_Item, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, const struct FVALUI_InstantiatedTabButtonInfo& CallFunc_TryGetTabInfo_OutInfo, bool CallFunc_TryGetTabInfo_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetTabNames_ReturnValue_2, class FName CallFunc_GetActiveTabName_ReturnValue, class UButton* K2Node_CustomEvent_Button_1, int32 CallFunc_Array_Find_ReturnValue_1, class UButton* K2Node_CustomEvent_Button, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1);
	void HandleDifferentActiveTabSet(class FName TabName);
	void OnHovered();
	void OnUnhovered();
	void RemoveTabButton(class FName& TabName, struct FVALUI_InstantiatedTabButtonInfo& Info);
	void UnbindAudio(class UButton* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TIM_Chat_TabHost_C">();
	}
	static class UWBP_TIM_Chat_TabHost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TIM_Chat_TabHost_C>();
	}
};
static_assert(alignof(UWBP_TIM_Chat_TabHost_C) == 0x000008, "Wrong alignment on UWBP_TIM_Chat_TabHost_C");
static_assert(sizeof(UWBP_TIM_Chat_TabHost_C) == 0x000320, "Wrong size on UWBP_TIM_Chat_TabHost_C");
static_assert(offsetof(UWBP_TIM_Chat_TabHost_C, UberGraphFrame) == 0x0002F0, "Member 'UWBP_TIM_Chat_TabHost_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_Chat_TabHost_C, HBox_TabButtons) == 0x0002F8, "Member 'UWBP_TIM_Chat_TabHost_C::HBox_TabButtons' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_Chat_TabHost_C, ButtonPadding_Inactive) == 0x000300, "Member 'UWBP_TIM_Chat_TabHost_C::ButtonPadding_Inactive' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_Chat_TabHost_C, ButtonPadding_Active) == 0x000310, "Member 'UWBP_TIM_Chat_TabHost_C::ButtonPadding_Active' has a wrong offset!");

}

