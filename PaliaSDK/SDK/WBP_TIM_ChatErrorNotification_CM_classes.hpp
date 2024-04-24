#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TIM_ChatErrorNotification_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TIM_ChatErrorNotification_CM.WBP_TIM_ChatErrorNotification_CM_C
// 0x0038 (0x02F8 - 0x02C0)
class UWBP_TIM_ChatErrorNotification_CM_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DisplayError;                                      // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                ErrorTextBlock;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Notification_Basic_Error_C* WBP_Template_Notification_Basic_Error_18;          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ErrorText;                                         // 0x02E0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void Construct();
	void ExecuteUbergraph_WBP_TIM_ChatErrorNotification_CM(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnDisplayAnimationFinished();
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TIM_ChatErrorNotification_CM_C">();
	}
	static class UWBP_TIM_ChatErrorNotification_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TIM_ChatErrorNotification_CM_C>();
	}
};
static_assert(alignof(UWBP_TIM_ChatErrorNotification_CM_C) == 0x000008, "Wrong alignment on UWBP_TIM_ChatErrorNotification_CM_C");
static_assert(sizeof(UWBP_TIM_ChatErrorNotification_CM_C) == 0x0002F8, "Wrong size on UWBP_TIM_ChatErrorNotification_CM_C");
static_assert(offsetof(UWBP_TIM_ChatErrorNotification_CM_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_TIM_ChatErrorNotification_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatErrorNotification_CM_C, DisplayError) == 0x0002C8, "Member 'UWBP_TIM_ChatErrorNotification_CM_C::DisplayError' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatErrorNotification_CM_C, ErrorTextBlock) == 0x0002D0, "Member 'UWBP_TIM_ChatErrorNotification_CM_C::ErrorTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatErrorNotification_CM_C, WBP_Template_Notification_Basic_Error_18) == 0x0002D8, "Member 'UWBP_TIM_ChatErrorNotification_CM_C::WBP_Template_Notification_Basic_Error_18' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatErrorNotification_CM_C, ErrorText) == 0x0002E0, "Member 'UWBP_TIM_ChatErrorNotification_CM_C::ErrorText' has a wrong offset!");

}

