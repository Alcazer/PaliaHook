#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CircularEmoteWheel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "F_CommonUIButtonPrompt_structs.hpp"
#include "S6UICore_classes.hpp"
#include "EnhancedInput_structs.hpp"
#include "S6Core_structs.hpp"
#include "Palia_structs.hpp"
#include "UMG_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CircularEmoteWheel.WBP_CircularEmoteWheel_C
// 0x0108 (0x05F8 - 0x04F0)
class UWBP_CircularEmoteWheel_C final  : public US6UI_InputActionHandlingUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeInMoreButton;                                  // 0x04F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_ToolWheelUtilityButton_C*          EmoteWheelCancelButton;                            // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BackgroundCircle;                            // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Cooldown;                                    // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    OpenCollectionPrompt;                              // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SBox_OpenCollectionPrompt;                         // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_Cooldown;                                     // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonUIButtonPrompt_C*            WBP_CommonUIButtonPrompt;                          // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EmoteWheelChoice_CM_C*             WBP_EmoteWheelChoice_Center;                       // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RadialMenuWheel_Circular_C*        WBP_RadialMenuWheel_Circular;                      // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              WBP_Template_Button_CM;                            // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           CanEmoteCheckTimer;                                // 0x0550(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CooldownMaterialInstance;                          // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMoreHovered;                                     // 0x0560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSelecting;                                       // 0x0561(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5601[0x6];                                     // 0x0562(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UVALUI_MainHUDWidget*                   MainWidgetCM;                                      // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        RadialSelectVectorX;                               // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRadialSelectUpdate;                              // 0x0578(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5602[0x7];                                     // 0x0579(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RadialSelectVectorY;                               // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FF_CommonUIButtonPrompt>        UIButton_Prompt_Info_On_PC;                        // 0x0588(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FF_CommonUIButtonPrompt>        UIButton_Prompt_Info_On_NS;                        // 0x0598(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnRadialMenuSelect;                                // 0x05A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_EmoteWheelChoice_CM_C*             CurrentEmoteSelection;                             // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        DeadzoneAmount;                                    // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InputDelayTime;                                    // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WantsToSelect;                                     // 0x05D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5603[0x7];                                     // 0x05D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_EmoteWheelChoice_CM_C*             HoveredEmoteTile;                                  // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCancelEmoteWheel;                                // 0x05E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_EmoteWheelChoice_CM_C*             PreviousEmoteSelection;                            // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_CircularEmoteWheel_WBP_RadialMenuWheel_Circular_K2Node_ComponentBoundEvent_2_OnChoiceHovered__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_CircularEmoteWheel_WBP_RadialMenuWheel_Circular_K2Node_ComponentBoundEvent_3_OnChoiceUnhovered__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_CircularEmoteWheel_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_EmoteWheel_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_EmoteWheel_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void CheckCanEmote();
	void Construct();
	bool DeadzoneCheck(ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void ExecuteUbergraph_WBP_CircularEmoteWheel(int32 EntryPoint, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UEmoteDataAsset* CallFunc_GetAssignedEmoteFN_Emote, bool CallFunc_GetAssignedEmoteFN_Is_Valid, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, class UValeriaEmoteComponent* CallFunc_GetEmoteComponent_EmoteComponent, bool CallFunc_GetEmoteComponent_Is_Valid, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_PlayEmoteByAsset_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasEmotePoints_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UValeriaEmoteComponent* CallFunc_GetEmoteComponent_EmoteComponent_1, bool CallFunc_GetEmoteComponent_Is_Valid_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, double Temp_real_Variable_2, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, double Temp_real_Variable_3, double Temp_real_Variable_4, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UValeriaEmoteComponent* CallFunc_GetEmoteComponent_EmoteComponent_2, bool CallFunc_GetEmoteComponent_Is_Valid_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_GetCooldownTimeMaximum_ReturnValue, float CallFunc_GetCooldownTimeRemaining_ReturnValue, bool CallFunc_HasEmotePoints_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UInputAction* Temp_object_Variable_1, bool CallFunc_BooleanAND_ReturnValue, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, double Temp_real_Variable_4_0, double Temp_real_Variable_3_0, double CallFunc_Conv_InputActionValueToAxis1D_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsActivated_ReturnValue, class UVAL_Subsystem_GameplayUIBridge* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, TScriptInterface<class IVAL_GameplayUIBridgeInterface> CallFunc_GetUIInterface_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, class UVALUI_MainHUDWidget* K2Node_CustomEvent_MainWidgetCM, EVAL_CollectionsTabState Temp_byte_Variable, EVAL_CollectionsTabState Temp_byte_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UWBP_MainWidget_CM_C* K2Node_DynamicCast_AsWBP_Main_Widget_CM, bool K2Node_DynamicCast_bSuccess, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, class UInputAction* Temp_object_Variable_2, bool CallFunc_IsDesktop_ReturnValue, bool CallFunc_IsConsole_ReturnValue, bool CallFunc_IsMobile_ReturnValue, int32 Temp_int_Array_Index_Variable, TScriptInterface<class IBPI_MainWidgetCharacterActionHandle_CM_C> K2Node_DynamicCast_AsBPI_Main_Widget_Character_Action_Handle_CM, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_IsDesignTime, bool CallFunc_IsDesktop_ReturnValue_1, bool CallFunc_IsConsole_ReturnValue_1, bool CallFunc_IsMobile_ReturnValue_1, class UWidget* CallFunc_FinishSelecting_SelectedWidget, bool CallFunc_FinishSelecting_SelectionCancelled, class UWidget* K2Node_ComponentBoundEvent_Widget_1, class UWBP_ToolWheelUtilityButton_C* K2Node_DynamicCast_AsWBP_Tool_Wheel_Utility_Button, bool K2Node_DynamicCast_bSuccess_2, class UWBP_EmoteWheelChoice_CM_C* K2Node_DynamicCast_AsWBP_Emote_Wheel_Choice_CM, bool K2Node_DynamicCast_bSuccess_3, class UWidget* K2Node_ComponentBoundEvent_Widget, class UVAL_Subsystem_GameplayUIBridge* CallFunc_GetLocalPlayerSubsystem_ReturnValue_3, class UWBP_ToolWheelUtilityButton_C* K2Node_DynamicCast_AsWBP_Tool_Wheel_Utility_Button_1, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IVAL_GameplayUIBridgeInterface> CallFunc_GetUIInterface_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllSlotWidgets_Widgets, class UWidget* CallFunc_Array_Get_Item, class UWBP_EmoteWheelChoice_CM_C* K2Node_DynamicCast_AsWBP_Emote_Wheel_Choice_CM_1, bool K2Node_DynamicCast_bSuccess_5, int32 CallFunc_Array_Length_ReturnValue, class UEmoteDataAsset* CallFunc_GetAssignedEmoteFN_Emote_1, bool CallFunc_GetAssignedEmoteFN_Is_Valid_1, bool CallFunc_CanPlayOutEmote_ReturnValue, ESlateVisibility Temp_byte_Variable_2, bool CallFunc_BooleanAND_ReturnValue_2, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_2, float K2Node_EnhancedInputActionEvent_ElapsedTime_2, float K2Node_EnhancedInputActionEvent_TriggeredTime_2, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_2, double Temp_real_Variable_7_0, double Temp_real_Variable_6_0, double CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_1, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, double Temp_real_Variable_8, double Temp_real_Variable_9, bool Temp_bool_Variable_2, class UInputAction* Temp_object_Variable_3, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_3, float K2Node_EnhancedInputActionEvent_ElapsedTime_3, float K2Node_EnhancedInputActionEvent_TriggeredTime_3, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_3, ESlateVisibility K2Node_Select_Default, double Temp_real_Variable_9_0, double Temp_real_Variable_8_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, bool Temp_bool_Variable_3, double Temp_real_Variable_10, double Temp_real_Variable_11, class UInputAction* Temp_object_Variable_4, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_4, float K2Node_EnhancedInputActionEvent_ElapsedTime_4, float K2Node_EnhancedInputActionEvent_TriggeredTime_4, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_4, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, double Temp_real_Variable_11_0, bool CallFunc_BooleanOR_ReturnValue_1, double Temp_real_Variable_10_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_2, bool CallFunc_DeadzoneCheck_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_FCeil_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
	void FinishSelecting();
	void GetEmoteComponent(class UValeriaEmoteComponent** EmoteComponent, bool* Is_Valid, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UValeriaEmoteComponent* CallFunc_GetEmoteComponent_ReturnValue);
	class US6UI_InputActionHandlingWidgetComponent* GetInputActionHandlingComponent();
	void Handle_Input_Action_UI_Radial(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction, double CallFunc_BreakInputActionValue_X, double CallFunc_BreakInputActionValue_Y, double CallFunc_BreakInputActionValue_Z, EInputActionValueType CallFunc_BreakInputActionValue_Type, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void InpActEvt_IA_OpenCollection_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_RadialMenuNavigate_X_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_RadialMenuNavigate_Y_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_RadialMenuSelect_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UIBack_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void OnCancelEmoteWheel__DelegateSignature();
	void OnRadialMenuSelect__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void StartSelecting(class UVALUI_MainHUDWidget* Param_MainWidgetCM);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TryPlayCenterEmote(class UValeriaEmoteComponent* CallFunc_GetEmoteComponent_EmoteComponent, bool CallFunc_GetEmoteComponent_Is_Valid, class UEmoteDataAsset* CallFunc_GetAssignedEmoteFN_Emote, bool CallFunc_GetAssignedEmoteFN_Is_Valid, bool CallFunc_HasEmotePoints_ReturnValue, bool CallFunc_PlayEmoteByAsset_ReturnValue);
	void TryUnhoverCancelButton();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CircularEmoteWheel_C">();
	}
	static class UWBP_CircularEmoteWheel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CircularEmoteWheel_C>();
	}
};
static_assert(alignof(UWBP_CircularEmoteWheel_C) == 0x000008, "Wrong alignment on UWBP_CircularEmoteWheel_C");
static_assert(sizeof(UWBP_CircularEmoteWheel_C) == 0x0005F8, "Wrong size on UWBP_CircularEmoteWheel_C");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, UberGraphFrame) == 0x0004F0, "Member 'UWBP_CircularEmoteWheel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, FadeInMoreButton) == 0x0004F8, "Member 'UWBP_CircularEmoteWheel_C::FadeInMoreButton' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, EmoteWheelCancelButton) == 0x000500, "Member 'UWBP_CircularEmoteWheel_C::EmoteWheelCancelButton' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, Image_BackgroundCircle) == 0x000508, "Member 'UWBP_CircularEmoteWheel_C::Image_BackgroundCircle' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, Image_Cooldown) == 0x000510, "Member 'UWBP_CircularEmoteWheel_C::Image_Cooldown' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, OpenCollectionPrompt) == 0x000518, "Member 'UWBP_CircularEmoteWheel_C::OpenCollectionPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, SBox_OpenCollectionPrompt) == 0x000520, "Member 'UWBP_CircularEmoteWheel_C::SBox_OpenCollectionPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, Text_Cooldown) == 0x000528, "Member 'UWBP_CircularEmoteWheel_C::Text_Cooldown' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, WBP_CommonUIButtonPrompt) == 0x000530, "Member 'UWBP_CircularEmoteWheel_C::WBP_CommonUIButtonPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, WBP_EmoteWheelChoice_Center) == 0x000538, "Member 'UWBP_CircularEmoteWheel_C::WBP_EmoteWheelChoice_Center' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, WBP_RadialMenuWheel_Circular) == 0x000540, "Member 'UWBP_CircularEmoteWheel_C::WBP_RadialMenuWheel_Circular' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, WBP_Template_Button_CM) == 0x000548, "Member 'UWBP_CircularEmoteWheel_C::WBP_Template_Button_CM' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, CanEmoteCheckTimer) == 0x000550, "Member 'UWBP_CircularEmoteWheel_C::CanEmoteCheckTimer' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, CooldownMaterialInstance) == 0x000558, "Member 'UWBP_CircularEmoteWheel_C::CooldownMaterialInstance' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, IsMoreHovered) == 0x000560, "Member 'UWBP_CircularEmoteWheel_C::IsMoreHovered' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, IsSelecting) == 0x000561, "Member 'UWBP_CircularEmoteWheel_C::IsSelecting' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, MainWidgetCM) == 0x000568, "Member 'UWBP_CircularEmoteWheel_C::MainWidgetCM' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, RadialSelectVectorX) == 0x000570, "Member 'UWBP_CircularEmoteWheel_C::RadialSelectVectorX' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, IsRadialSelectUpdate) == 0x000578, "Member 'UWBP_CircularEmoteWheel_C::IsRadialSelectUpdate' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, RadialSelectVectorY) == 0x000580, "Member 'UWBP_CircularEmoteWheel_C::RadialSelectVectorY' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, UIButton_Prompt_Info_On_PC) == 0x000588, "Member 'UWBP_CircularEmoteWheel_C::UIButton_Prompt_Info_On_PC' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, UIButton_Prompt_Info_On_NS) == 0x000598, "Member 'UWBP_CircularEmoteWheel_C::UIButton_Prompt_Info_On_NS' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, OnRadialMenuSelect) == 0x0005A8, "Member 'UWBP_CircularEmoteWheel_C::OnRadialMenuSelect' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, CurrentEmoteSelection) == 0x0005B8, "Member 'UWBP_CircularEmoteWheel_C::CurrentEmoteSelection' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, DeadzoneAmount) == 0x0005C0, "Member 'UWBP_CircularEmoteWheel_C::DeadzoneAmount' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, InputDelayTime) == 0x0005C8, "Member 'UWBP_CircularEmoteWheel_C::InputDelayTime' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, WantsToSelect) == 0x0005D0, "Member 'UWBP_CircularEmoteWheel_C::WantsToSelect' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, HoveredEmoteTile) == 0x0005D8, "Member 'UWBP_CircularEmoteWheel_C::HoveredEmoteTile' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, OnCancelEmoteWheel) == 0x0005E0, "Member 'UWBP_CircularEmoteWheel_C::OnCancelEmoteWheel' has a wrong offset!");
static_assert(offsetof(UWBP_CircularEmoteWheel_C, PreviousEmoteSelection) == 0x0005F0, "Member 'UWBP_CircularEmoteWheel_C::PreviousEmoteSelection' has a wrong offset!");

}

