#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BodyType_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BodyType_CM.WBP_BodyType_CM_C
// 0x00F8 (0x03B8 - 0x02C0)
class UWBP_BodyType_CM_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_CM_C*              Button_BodyType_CM;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BodyType;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EVAL_CharacterBodyType                        Body_Type;                                         // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54A4[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EVAL_CharacterBodyType, TSoftObjectPtr<class UTexture2D>> IconTable;                                         // 0x02E0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Is_Active;                                         // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54A5[0x3];                                     // 0x0331(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ActiveColor;                                       // 0x0334(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           InactiveColor;                                     // 0x0344(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54A6[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnButtonTypeButtonClicked;                         // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<EVAL_CharacterBodyType, class FText>     TooltipTable;                                      // 0x0368(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__WBP_BodyType_CM_Button_BodyType_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_BodyType_CM_Button_BodyType_CM_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_BodyType_CM(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, int32 CallFunc_AkEventGlobal_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1);
	void OnButtonTypeButtonClicked__DelegateSignature(class UWBP_BodyType_CM_C* BodyTypeButton);
	void SetActive(bool IsActive, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
	void SetBodyType(EVAL_CharacterBodyType BodyType, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BodyType_CM_C">();
	}
	static class UWBP_BodyType_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BodyType_CM_C>();
	}
};
static_assert(alignof(UWBP_BodyType_CM_C) == 0x000008, "Wrong alignment on UWBP_BodyType_CM_C");
static_assert(sizeof(UWBP_BodyType_CM_C) == 0x0003B8, "Wrong size on UWBP_BodyType_CM_C");
static_assert(offsetof(UWBP_BodyType_CM_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_BodyType_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BodyType_CM_C, Button_BodyType_CM) == 0x0002C8, "Member 'UWBP_BodyType_CM_C::Button_BodyType_CM' has a wrong offset!");
static_assert(offsetof(UWBP_BodyType_CM_C, Image_BodyType) == 0x0002D0, "Member 'UWBP_BodyType_CM_C::Image_BodyType' has a wrong offset!");
static_assert(offsetof(UWBP_BodyType_CM_C, Body_Type) == 0x0002D8, "Member 'UWBP_BodyType_CM_C::Body_Type' has a wrong offset!");
static_assert(offsetof(UWBP_BodyType_CM_C, IconTable) == 0x0002E0, "Member 'UWBP_BodyType_CM_C::IconTable' has a wrong offset!");
static_assert(offsetof(UWBP_BodyType_CM_C, Is_Active) == 0x000330, "Member 'UWBP_BodyType_CM_C::Is_Active' has a wrong offset!");
static_assert(offsetof(UWBP_BodyType_CM_C, ActiveColor) == 0x000334, "Member 'UWBP_BodyType_CM_C::ActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_BodyType_CM_C, InactiveColor) == 0x000344, "Member 'UWBP_BodyType_CM_C::InactiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_BodyType_CM_C, OnButtonTypeButtonClicked) == 0x000358, "Member 'UWBP_BodyType_CM_C::OnButtonTypeButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_BodyType_CM_C, TooltipTable) == 0x000368, "Member 'UWBP_BodyType_CM_C::TooltipTable' has a wrong offset!");

}

