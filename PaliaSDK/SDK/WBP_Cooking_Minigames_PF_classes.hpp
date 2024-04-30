#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cooking_Minigames_PF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Cooking_Minigames_PF.WBP_Cooking_Minigames_PF_C
// 0x0088 (0x05E0 - 0x0558)
class UWBP_Cooking_Minigames_PF_C final  : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HideWidget_Success;                                // 0x0560(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HideWidget;                                        // 0x0568(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowWidget;                                        // 0x0570(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   SuccessBorder;                                     // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_Chopping_C*       WBP_Cooking_Minigame_Chopping;                     // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_RollingPin_C*     WBP_Cooking_Minigame_RollingPin;                   // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_Sauteing_C*       WBP_Cooking_Minigame_Saute;                        // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Cooking_Minigame_Stirring_C*       WBP_Cooking_Minigame_Stirring;                     // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MinigameQTE_C*                     WBP_MinigameQTE;                                   // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Minigames;                          // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMinigameComponentMasterQTE*            LinkedMinigame;                                    // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      ValeriaCharacter;                                  // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCrafterComponent*                      InteractorCrafter;                                 // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         UIAppearDelay;                                     // 0x05C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D31[0x4];                                     // 0x05CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CVar_CookingCamera;                                // 0x05D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void CloseMiniGames(bool WasSuccess);
	void Construct();
	void ExecuteUbergraph_WBP_Cooking_Minigames_PF(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_5, float K2Node_EnhancedInputActionEvent_ElapsedTime_5, float K2Node_EnhancedInputActionEvent_TriggeredTime_5, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_5, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_4, float K2Node_EnhancedInputActionEvent_ElapsedTime_4, float K2Node_EnhancedInputActionEvent_TriggeredTime_4, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_4, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_3, float K2Node_EnhancedInputActionEvent_ElapsedTime_3, float K2Node_EnhancedInputActionEvent_TriggeredTime_3, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_3, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_2, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, double Temp_real_Variable_1_1, double Temp_real_Variable_1_2, double Temp_real_Variable_1_3, double Temp_real_Variable_2, bool Temp_bool_Variable, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_2, float K2Node_EnhancedInputActionEvent_ElapsedTime_2, float K2Node_EnhancedInputActionEvent_TriggeredTime_2, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_2, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_3, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_4, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_5, class UInputAction* Temp_object_Variable_1, double Temp_real_Variable_2_3, double Temp_real_Variable_2_0, double Temp_real_Variable_2_1, double Temp_real_Variable_2_2, double Temp_real_Variable_3, bool Temp_bool_Variable_1, double Temp_real_Variable_3_0, double Temp_real_Variable_3_1, double Temp_real_Variable_3_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UWBP_MinigameQTE_Base_C* K2Node_DynamicCast_AsWBP_Minigame_QTE_Base, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, bool K2Node_CustomEvent_WasSuccess, bool Temp_bool_Variable_2, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UWidgetAnimation* K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_1, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_2, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_3, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_3, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool CallFunc_GetShowCookingCamera_ReturnValue);
	void Finished_3AC3E5E349E3777A535242BC8C8F2978();
	void InpActEvt_IA_Cooking_Disengage_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_Cooking_Disengage_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_Cooking_Disengage_K2Node_EnhancedInputActionEvent_5(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_Cooking_MinigameAction_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_Cooking_MinigameAction_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_Cooking_MinigameAction_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void SelectMinigameOnPlayingAndShow(bool K2Node_SwitchEnum_CmpSuccess);
	void SelectWidget(class UWBP_MinigameQTE_Base_C* NewWidget, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UWBP_MinigameQTE_Base_C* K2Node_DynamicCast_AsWBP_Minigame_QTE_Base, bool K2Node_DynamicCast_bSuccess);
	void ShowMinigame();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Cooking_Minigames_PF_C">();
	}
	static class UWBP_Cooking_Minigames_PF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Cooking_Minigames_PF_C>();
	}
};
static_assert(alignof(UWBP_Cooking_Minigames_PF_C) == 0x000008, "Wrong alignment on UWBP_Cooking_Minigames_PF_C");
static_assert(sizeof(UWBP_Cooking_Minigames_PF_C) == 0x0005E0, "Wrong size on UWBP_Cooking_Minigames_PF_C");
static_assert(offsetof(UWBP_Cooking_Minigames_PF_C, UberGraphFrame) == 0x000558, "Member 'UWBP_Cooking_Minigames_PF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigames_PF_C, HideWidget_Success) == 0x000560, "Member 'UWBP_Cooking_Minigames_PF_C::HideWidget_Success' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigames_PF_C, HideWidget) == 0x000568, "Member 'UWBP_Cooking_Minigames_PF_C::HideWidget' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigames_PF_C, ShowWidget) == 0x000570, "Member 'UWBP_Cooking_Minigames_PF_C::ShowWidget' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigames_PF_C, SuccessBorder) == 0x000578, "Member 'UWBP_Cooking_Minigames_PF_C::SuccessBorder' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigames_PF_C, WBP_Cooking_Minigame_Chopping) == 0x000580, "Member 'UWBP_Cooking_Minigames_PF_C::WBP_Cooking_Minigame_Chopping' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigames_PF_C, WBP_Cooking_Minigame_RollingPin) == 0x000588, "Member 'UWBP_Cooking_Minigames_PF_C::WBP_Cooking_Minigame_RollingPin' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigames_PF_C, WBP_Cooking_Minigame_Saute) == 0x000590, "Member 'UWBP_Cooking_Minigames_PF_C::WBP_Cooking_Minigame_Saute' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigames_PF_C, WBP_Cooking_Minigame_Stirring) == 0x000598, "Member 'UWBP_Cooking_Minigames_PF_C::WBP_Cooking_Minigame_Stirring' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigames_PF_C, WBP_MinigameQTE) == 0x0005A0, "Member 'UWBP_Cooking_Minigames_PF_C::WBP_MinigameQTE' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigames_PF_C, WidgetSwitcher_Minigames) == 0x0005A8, "Member 'UWBP_Cooking_Minigames_PF_C::WidgetSwitcher_Minigames' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigames_PF_C, LinkedMinigame) == 0x0005B0, "Member 'UWBP_Cooking_Minigames_PF_C::LinkedMinigame' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigames_PF_C, ValeriaCharacter) == 0x0005B8, "Member 'UWBP_Cooking_Minigames_PF_C::ValeriaCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigames_PF_C, InteractorCrafter) == 0x0005C0, "Member 'UWBP_Cooking_Minigames_PF_C::InteractorCrafter' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigames_PF_C, UIAppearDelay) == 0x0005C8, "Member 'UWBP_Cooking_Minigames_PF_C::UIAppearDelay' has a wrong offset!");
static_assert(offsetof(UWBP_Cooking_Minigames_PF_C, CVar_CookingCamera) == 0x0005D0, "Member 'UWBP_Cooking_Minigames_PF_C::CVar_CookingCamera' has a wrong offset!");

}

