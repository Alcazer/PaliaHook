#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ValeriagramFeedPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ValeriagramFeedPanel.WBP_ValeriagramFeedPanel_C
// 0x0068 (0x02E0 - 0x0278)
class UWBP_ValeriagramFeedPanel_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Button_Icon_CM_C*                  Button_OpenCamera;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_Icon_CM_C*                  Button_OpenGallery;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ListView_Styled*                 ListView_Posts;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor_Popin_C*                    MenuAnchor_Popin_Photography;                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BasicHighlightDecorator_C*         WBP_BasicHighlightDecorator;                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UVAL_TutorialFlagDefinition> PhotographyFlag;                                   // 0x02A8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UWBP_PopinCalloutWidget_C*              MenuContent;                                       // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_ValeriagramFeedPanel_VALUI_ListView_Styled_59_K2Node_ComponentBoundEvent_8_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void BndEvt__WBP_ValeriagramFeedPanel_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ValeriagramFeedPanel_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ValeriagramFeedPanel_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ValeriagramFeedPanel_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void ExecuteUbergraph_WBP_ValeriagramFeedPanel(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, TDelegate<void(class UVAL_SocialActivityFeedManager* SocialActivityFeedManager)> K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UVAL_SocialActivityFeedManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWBP_InspectValeriagramPost_C* CallFunc_Create_ReturnValue, TDelegate<void(class UWBP_ListEntry_ValeriagramPost_C* List_Entry_Widget, class UVAL_ValeriagramPost* Valeriagram_Post)> K2Node_CreateDelegate_OutputDelegate_1, class UWBP_ListEntry_ValeriagramPost_C* K2Node_CustomEvent_List_Entry_Widget, class UVAL_ValeriagramPost* K2Node_CustomEvent_Valeriagram_Post, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue_1, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UVALUI_UIManagerWidgetBase* K2Node_DynamicCast_AsVALUI_UIManager_Widget_Base, bool K2Node_DynamicCast_bSuccess, class UCharacterStateMachineComponent* CallFunc_GetCSM_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FGuid& K2Node_MakeStruct_Guid, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_1, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_1, class UCharacterStateMachineComponent* CallFunc_GetCSM_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_2, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_2, class UCharacterStateMachineComponent* CallFunc_GetCSM_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_ChangeState_ReturnValue, bool CallFunc_CanStartTutorialForFlag_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UWBP_ListEntry_ValeriagramPost_C* K2Node_DynamicCast_AsWBP_List_Entry_Valeriagram_Post, bool K2Node_DynamicCast_bSuccess_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1);
	void HandleInspectValerigram(class UWBP_ListEntry_ValeriagramPost_C* List_Entry_Widget, class UVAL_ValeriagramPost* Valeriagram_Post);
	void HandleManagerPostsRefreshed(class UVAL_SocialActivityFeedManager* SocialActivityFeedManager);
	class UUserWidget* OnGetUserMenuContent_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, TScriptInterface<class IBPI_GameplayUIManagerTutorial_CM_C> K2Node_DynamicCast_AsBPI_Gameplay_UIManager_Tutorial_CM, bool K2Node_DynamicCast_bSuccess, class UWBP_FTUEPopin_CM_C* CallFunc_Redirect_FTUEPopin_Type_FTUEPopin, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_PopinCalloutWidget_C* CallFunc_Create_ReturnValue);
	void OnInitialized();
	void RefreshPosts(const TArray<class UObject*>& ListItems, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TDelegate<void(class UObject* A, class UObject* B)> K2Node_CreateDelegate_OutputDelegate, TArray<class UObject*>& CallFunc_SortObjectArray_ReturnValue, class UVAL_SocialActivityFeedManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TArray<class UVAL_ValeriagramPost*>& CallFunc_GetPosts_ReturnValue, class UVAL_ValeriagramPost* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	bool SortValeriagramPostsByTimestamp(class UObject* A, class UObject* B, class UVAL_ValeriagramPost* K2Node_DynamicCast_AsVAL_Valeriagram_Post, bool K2Node_DynamicCast_bSuccess, class UVAL_ValeriagramPost* K2Node_DynamicCast_AsVAL_Valeriagram_Post_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue);
	void TryShowFTUE_Photography();
	void WBP_ValeriagramFeedPanel_AutoGenFunc(class UVAL_TutorialFlagsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ValeriagramFeedPanel_C">();
	}
	static class UWBP_ValeriagramFeedPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ValeriagramFeedPanel_C>();
	}
};
static_assert(alignof(UWBP_ValeriagramFeedPanel_C) == 0x000008, "Wrong alignment on UWBP_ValeriagramFeedPanel_C");
static_assert(sizeof(UWBP_ValeriagramFeedPanel_C) == 0x0002E0, "Wrong size on UWBP_ValeriagramFeedPanel_C");
static_assert(offsetof(UWBP_ValeriagramFeedPanel_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ValeriagramFeedPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ValeriagramFeedPanel_C, Button_OpenCamera) == 0x000280, "Member 'UWBP_ValeriagramFeedPanel_C::Button_OpenCamera' has a wrong offset!");
static_assert(offsetof(UWBP_ValeriagramFeedPanel_C, Button_OpenGallery) == 0x000288, "Member 'UWBP_ValeriagramFeedPanel_C::Button_OpenGallery' has a wrong offset!");
static_assert(offsetof(UWBP_ValeriagramFeedPanel_C, ListView_Posts) == 0x000290, "Member 'UWBP_ValeriagramFeedPanel_C::ListView_Posts' has a wrong offset!");
static_assert(offsetof(UWBP_ValeriagramFeedPanel_C, MenuAnchor_Popin_Photography) == 0x000298, "Member 'UWBP_ValeriagramFeedPanel_C::MenuAnchor_Popin_Photography' has a wrong offset!");
static_assert(offsetof(UWBP_ValeriagramFeedPanel_C, WBP_BasicHighlightDecorator) == 0x0002A0, "Member 'UWBP_ValeriagramFeedPanel_C::WBP_BasicHighlightDecorator' has a wrong offset!");
static_assert(offsetof(UWBP_ValeriagramFeedPanel_C, PhotographyFlag) == 0x0002A8, "Member 'UWBP_ValeriagramFeedPanel_C::PhotographyFlag' has a wrong offset!");
static_assert(offsetof(UWBP_ValeriagramFeedPanel_C, MenuContent) == 0x0002D8, "Member 'UWBP_ValeriagramFeedPanel_C::MenuContent' has a wrong offset!");

}

