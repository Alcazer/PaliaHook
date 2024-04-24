#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TIM_ChatButtonPrompt_PF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TIM_ChatButtonPrompt_PF.WBP_TIM_ChatButtonPrompt_PF_C
// 0x0050 (0x0310 - 0x02C0)
class UWBP_TIM_ChatButtonPrompt_PF_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CommonInputActionWidget_C*         CommonInputActionWidget_Image_L;                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonInputActionWidget_C*         CommonInputActionWidget_Image_R;                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonInputActionWidget_C*         CommonInputActionWidget_Image_Select;              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonInputActionWidget_C*         CommonInputActionWidget_Image_Send;                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                SelectText;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                SendText;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                SwarpInputText;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                           ByttonPromptTextArray;                             // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Construct();
	void ExecuteUbergraph_WBP_TIM_ChatButtonPrompt_PF(int32 EntryPoint, class FText CallFunc_Array_Get_Item);
	void SetSelectText(bool Param_Index, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item_1, class FText K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TIM_ChatButtonPrompt_PF_C">();
	}
	static class UWBP_TIM_ChatButtonPrompt_PF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TIM_ChatButtonPrompt_PF_C>();
	}
};
static_assert(alignof(UWBP_TIM_ChatButtonPrompt_PF_C) == 0x000008, "Wrong alignment on UWBP_TIM_ChatButtonPrompt_PF_C");
static_assert(sizeof(UWBP_TIM_ChatButtonPrompt_PF_C) == 0x000310, "Wrong size on UWBP_TIM_ChatButtonPrompt_PF_C");
static_assert(offsetof(UWBP_TIM_ChatButtonPrompt_PF_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_TIM_ChatButtonPrompt_PF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatButtonPrompt_PF_C, CommonInputActionWidget_Image_L) == 0x0002C8, "Member 'UWBP_TIM_ChatButtonPrompt_PF_C::CommonInputActionWidget_Image_L' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatButtonPrompt_PF_C, CommonInputActionWidget_Image_R) == 0x0002D0, "Member 'UWBP_TIM_ChatButtonPrompt_PF_C::CommonInputActionWidget_Image_R' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatButtonPrompt_PF_C, CommonInputActionWidget_Image_Select) == 0x0002D8, "Member 'UWBP_TIM_ChatButtonPrompt_PF_C::CommonInputActionWidget_Image_Select' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatButtonPrompt_PF_C, CommonInputActionWidget_Image_Send) == 0x0002E0, "Member 'UWBP_TIM_ChatButtonPrompt_PF_C::CommonInputActionWidget_Image_Send' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatButtonPrompt_PF_C, SelectText) == 0x0002E8, "Member 'UWBP_TIM_ChatButtonPrompt_PF_C::SelectText' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatButtonPrompt_PF_C, SendText) == 0x0002F0, "Member 'UWBP_TIM_ChatButtonPrompt_PF_C::SendText' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatButtonPrompt_PF_C, SwarpInputText) == 0x0002F8, "Member 'UWBP_TIM_ChatButtonPrompt_PF_C::SwarpInputText' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatButtonPrompt_PF_C, ByttonPromptTextArray) == 0x000300, "Member 'UWBP_TIM_ChatButtonPrompt_PF_C::ByttonPromptTextArray' has a wrong offset!");

}

