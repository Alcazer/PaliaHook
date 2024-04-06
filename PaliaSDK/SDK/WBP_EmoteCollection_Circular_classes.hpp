#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EmoteCollection_Circular

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"
#include "S6UICore_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_EmoteCollection_Circular.WBP_EmoteCollection_Circular_C
// 0x00F0 (0x0618 - 0x0528)
class UWBP_EmoteCollection_Circular_C final  : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0528(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Template_Button_Primary_01_CM_C*   Clear_All_Button;                                  // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CP_WheelLayout;                                    // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class US6UI_CustomNavigationGroup*            CustomNavigationGroup_EmoteList;                   // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class US6UI_CustomNavigationGroup*            CustomNavigationGroup_EmoteWheel;                  // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Primary_01_CM_C*   SwapButton_PF;                                     // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TileView_Styled*                 TV_Styled_EmoteCollection;                         // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonUIButtonPrompt_C*            WBP_CommonUIButtonPrompt_38;                       // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EmoteWheelChoice_CM_C*             WEC_BottomLeft;                                    // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EmoteWheelChoice_CM_C*             WEC_BottomRight;                                   // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EmoteWheelChoice_CM_C*             WEC_Center;                                        // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EmoteWheelChoice_CM_C*             WEC_Left;                                          // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EmoteWheelChoice_CM_C*             WEC_Right;                                         // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EmoteWheelChoice_CM_C*             WEC_Top;                                           // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EmoteWheelChoice_CM_C*             WEC_TopLeft;                                       // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EmoteWheelChoice_CM_C*             WEC_TopRight;                                      // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_EmoteWheelChoice_CM_C*>     EmoteWheelChoices;                                 // 0x05A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<TSoftObjectPtr<class UEmoteDataAsset>> All_Emotes;                                        // 0x05B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_EmoteWheelChoice_CM_C*             SelectedWheelChoice;                               // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_EmoteEntry_CM_C*                   SelectedCollectionEntry;                           // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            Current_Focused_Valid_Widget;                      // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bUpdatingWheelChoice;                              // 0x05E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D0A[0x7];                                     // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS6UI_NavExplicitData>          EmoteWheeNavlExplictData;                          // 0x05E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnEmoteCollectionClose;                            // 0x05F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        Scroll_Offsset_Scale;                              // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            Previous_Focused_Valid_Widget;                     // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_EmoteCollection_CM_CustomNavigationGroup_EmoteList_K2Node_ComponentBoundEvent_4_OnCustomNavigationGroupInitialized__DelegateSignature(class US6UI_CustomNavigationGroup* NavGroup);
	void BndEvt__WBP_EmoteCollection_CM_CustomNavigationGroup_EmoteWheel_K2Node_ComponentBoundEvent_3_OnCustomNavigationGroupInitialized__DelegateSignature(class US6UI_CustomNavigationGroup* NavGroup);
	void BndEvt__WBP_EmoteCollection_CM_SwapButton_PF_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_EmoteCollection_CM_TV_Styled_EmoteCollection_K2Node_ComponentBoundEvent_1_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void BndEvt__WBP_EmoteCollection_CM_TV_Styled_EmoteCollection_K2Node_ComponentBoundEvent_2_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget);
	void BndEvt__WBP_EmoteCollection_CM_WBP_Template_Button_Primary_01_CM_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
	void Cancel_Update_Emote(bool* bCancel, class UUserWidget* CallFunc_Get_Emote_Widget_Selected_Emote_Widget, class UWBP_EmoteEntry_CM_C* K2Node_DynamicCast_AsWBP_Emote_Entry_CM, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IUserObjectListEntry> CallFunc_GetListItemObject_UserObjectListEntry_CastInput, class UObject* CallFunc_GetListItemObject_ReturnValue, class UWBP_EmoteWheelChoice_CM_C* K2Node_DynamicCast_AsWBP_Emote_Wheel_Choice_CM, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue);
	void Change_Updating_Wheel_Choice_State(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanXOR_ReturnValue);
	void ClearAssignedEmote(class UWBP_EmoteWheelChoice_CM_C* Emote_Wheel_Choice, int32 CallFunc_AkEventGlobal_ReturnValue, class UValeriaEmoteComponent* CallFunc_GetEmoteComponentFN_EmoteComponent, bool CallFunc_Client_ClearAssignedEmote_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CollectionEntryClicked(class UWBP_EmoteEntry_CM_C* CollectionEntry);
	void Construct();
	void Deactivate();
	void ExecuteUbergraph_WBP_EmoteCollection_Circular(int32 EntryPoint, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_2, float K2Node_EnhancedInputActionEvent_ElapsedTime_2, float K2Node_EnhancedInputActionEvent_TriggeredTime_2, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_2, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, double CallFunc_Conv_InputActionValueToAxis1D_ReturnValue, class UInputAction* Temp_object_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_2_0, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_3_0, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, class UInputAction* Temp_object_Variable_2, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_5_0, double Temp_real_Variable_6_0, bool Temp_bool_Variable_1, int32 Temp_int_Array_Index_Variable, class UInputAction* Temp_object_Variable_3, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_4, float K2Node_EnhancedInputActionEvent_ElapsedTime_4, float K2Node_EnhancedInputActionEvent_TriggeredTime_4, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_4, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, bool K2Node_Event_IsDesignTime, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_1, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_1, class UValeriaEmoteComponent* CallFunc_GetEmoteComponent_ReturnValue, class UValeriaEmoteComponent* CallFunc_GetEmoteComponent_ReturnValue_1, bool CallFunc_Client_ClearAssignedEmotes_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_Variable_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, TDelegate<void(class UWBP_EmoteWheelChoice_CM_C* EmoteChoice)> K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget_1, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_EmoteEntry_CM_C* K2Node_DynamicCast_AsWBP_Emote_Entry_CM, bool K2Node_DynamicCast_bSuccess, TDelegate<void(class UWBP_EmoteEntry_CM_C* Emote_Entry)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_GetIsEnabled_ReturnValue, double Temp_real_Variable_7, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UWBP_EmoteEntry_CM_C* K2Node_DynamicCast_AsWBP_Emote_Entry_CM_1, bool K2Node_DynamicCast_bSuccess_1, class UWBP_EmoteEntry_CM_C* K2Node_DynamicCast_AsWBP_Emote_Entry_CM_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, class UWBP_EmoteWheelChoice_CM_C* K2Node_DynamicCast_AsWBP_Emote_Wheel_Choice_CM, bool K2Node_DynamicCast_bSuccess_3, double Temp_real_Variable_8, class UInputAction* Temp_object_Variable_4, TDelegate<void(class UWBP_EmoteEntry_CM_C* Emote_Entry)> K2Node_CreateDelegate_OutputDelegate_2, class US6UI_CustomNavigationGroup* K2Node_ComponentBoundEvent_NavGroup_1, class US6UI_CustomNavigationGroup* K2Node_ComponentBoundEvent_NavGroup, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_3, float K2Node_EnhancedInputActionEvent_ElapsedTime_3, float K2Node_EnhancedInputActionEvent_TriggeredTime_3, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_3, TSoftObjectPtr<class US6UI_CustomNavigationGroup> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FS6UI_NavigationGroupTranstionData& K2Node_MakeStruct_S6UI_NavigationGroupTranstionData, double Temp_real_Variable_8_0, double Temp_real_Variable_7_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_3, TSoftObjectPtr<class US6UI_CustomNavigationGroup> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1, const struct FS6UI_NavigationGroupTranstionData& K2Node_MakeStruct_S6UI_NavigationGroupTranstionData_1, TArray<class UWidget*>& K2Node_MakeArray_Array, const struct FS6UI_NavExplicitData& CallFunc_Array_Get_Item, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_AkEventGlobal_ReturnValue, TSoftObjectPtr<class US6UI_CustomNavigationGroup> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_2, const struct FS6UI_NavigationGroupTranstionData& K2Node_MakeStruct_S6UI_NavigationGroupTranstionData_2, bool Temp_bool_Variable_3, float CallFunc_GetScrollOffset_ReturnValue, int32 Temp_int_Array_Index_Variable_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, double CallFunc_Add_DoubleDouble_ReturnValue, class UWBP_EmoteWheelChoice_CM_C* K2Node_DynamicCast_AsWBP_Emote_Wheel_Choice_CM_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsConsole_ReturnValue, bool CallFunc_IsDesktop_ReturnValue, double Temp_real_Variable_9, double Temp_real_Variable_10, double Temp_real_Variable_9_0, double Temp_real_Variable_10_0, TArray<class UWidget*>& K2Node_MakeArray_Array_1, bool CallFunc_IsConsolePlatform_ReturnValue, TArray<class UUserWidget*>& K2Node_MakeArray_Array_2, bool CallFunc_Cancel_Update_Emote_bCancel, class UUserWidget* CallFunc_Array_Get_Item_2, class UWBP_EmoteEntry_CM_C* K2Node_DynamicCast_AsWBP_Emote_Entry_CM_3, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_2, class UWBP_EmoteWheelChoice_CM_C* K2Node_DynamicCast_AsWBP_Emote_Wheel_Choice_CM_2, bool K2Node_DynamicCast_bSuccess_6, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_SetScrollOffset_InScrollOffset_ImplicitCast);
	void Get_Emote_Widget(class UUserWidget** Selected_Emote_Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Handle_Emote_Collection_Choice_Focused(class UWBP_EmoteWheelChoice_CM_C* EmoteChoice);
	void Handle_Emote_Entry_Focused(class UWBP_EmoteEntry_CM_C* Emote_Entry);
	void Handle_Emote_Entry_Selected(class UWBP_EmoteEntry_CM_C* Emote_Entry, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_EmoteEntry_CM_C* K2Node_DynamicCast_AsWBP_Emote_Entry_CM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void Handle_OnEquippedEmotesChanged();
	void HandleClearAssignedEmoteInput(bool CallFunc_IsValid_ReturnValue, class UWBP_EmoteWheelChoice_CM_C* K2Node_DynamicCast_AsWBP_Emote_Wheel_Choice_CM, bool K2Node_DynamicCast_bSuccess);
	void Initialize_Tracking_and_References(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_EmoteWheelChoice_CM_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<TSoftObjectPtr<class UEmoteDataAsset>>& CallFunc_GetAllEmotes_AllEmotes, TArray<class UWBP_EmoteWheelChoice_CM_C*>& K2Node_MakeArray_Array);
	void InpActEvt_IA_UI_Back_Cancel_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_Confirm_Select_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_RightThumbstick_Y_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_SecondaryAction_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_SwitchItem_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	bool IsEmoteOnWheel(struct FGuid& EmoteId, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_EmoteWheelChoice_CM_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FGuid& CallFunc_GetAssignedEmoteId_Emote_Id, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue);
	void OnEmoteCollectionClose__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void RefreshEmoteCollectionBorders(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UBP_EmoteItemObject_CM_C* K2Node_DynamicCast_AsBP_Emote_Item_Object_CM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void ReloadEmoteCollection(class UEmoteDataAsset* EmoteDataAsset, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_EmoteItemObject_CM_C* CallFunc_SpawnObject_ReturnValue, TArray<TSoftObjectPtr<class UEmoteDataAsset>>& CallFunc_GetEmoteCollection_EmoteCollection, TSoftObjectPtr<class UEmoteDataAsset> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Selecte_Emote_Choice(class UWBP_EmoteWheelChoice_CM_C* Focused_Wheel_Choice, bool CallFunc_Update_Emote_Wheel_Choice_bUpdate, class UEmoteDataAsset* CallFunc_GetAssignedEmoteFN_Emote, bool CallFunc_GetAssignedEmoteFN_Is_Valid);
	void Selecte_Emote_Entry(class UWBP_EmoteEntry_CM_C* Emote_Entry, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetCollectionTabDefaultFocusAndActivate();
	void Update_Button_Enable_State(class UUserWidget* Button, bool CallFunc_IsDesktop_ReturnValue, bool CallFunc_IsDesktop_ReturnValue_1, class UWBP_EmoteEntry_CM_C* K2Node_DynamicCast_AsWBP_Emote_Entry_CM, bool K2Node_DynamicCast_bSuccess, class UWBP_EmoteWheelChoice_CM_C* K2Node_DynamicCast_AsWBP_Emote_Wheel_Choice_CM, bool K2Node_DynamicCast_bSuccess_1, class UWBP_EmoteWheelChoice_CM_C* K2Node_DynamicCast_AsWBP_Emote_Wheel_Choice_CM_1, bool K2Node_DynamicCast_bSuccess_2, class UEmoteDataAsset* CallFunc_GetAssignedEmoteFN_Emote, bool CallFunc_GetAssignedEmoteFN_Is_Valid, class UEmoteDataAsset* CallFunc_GetAssignedEmoteFN_Emote_1, bool CallFunc_GetAssignedEmoteFN_Is_Valid_1, bool CallFunc_IsValid_ReturnValue);
	void Update_Emote_Wheel_Choice(class UWBP_EmoteWheelChoice_CM_C* Focused_Wheel_Choice, bool* bUpdate, class UUserWidget* CallFunc_Get_Emote_Widget_Selected_Emote_Widget, bool CallFunc_IsValid_ReturnValue, class UWBP_EmoteEntry_CM_C* K2Node_DynamicCast_AsWBP_Emote_Entry_CM, bool K2Node_DynamicCast_bSuccess, class UWBP_EmoteWheelChoice_CM_C* K2Node_DynamicCast_AsWBP_Emote_Wheel_Choice_CM, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void WheelChoiceClicked(class UWBP_EmoteWheelChoice_CM_C* EmoteWheelChoice, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_AkEventGlobal_ReturnValue);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_EmoteCollection_Circular_C">();
	}
	static class UWBP_EmoteCollection_Circular_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EmoteCollection_Circular_C>();
	}
};
static_assert(alignof(UWBP_EmoteCollection_Circular_C) == 0x000008, "Wrong alignment on UWBP_EmoteCollection_Circular_C");
static_assert(sizeof(UWBP_EmoteCollection_Circular_C) == 0x000618, "Wrong size on UWBP_EmoteCollection_Circular_C");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, UberGraphFrame) == 0x000528, "Member 'UWBP_EmoteCollection_Circular_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, Clear_All_Button) == 0x000530, "Member 'UWBP_EmoteCollection_Circular_C::Clear_All_Button' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, CP_WheelLayout) == 0x000538, "Member 'UWBP_EmoteCollection_Circular_C::CP_WheelLayout' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, CustomNavigationGroup_EmoteList) == 0x000540, "Member 'UWBP_EmoteCollection_Circular_C::CustomNavigationGroup_EmoteList' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, CustomNavigationGroup_EmoteWheel) == 0x000548, "Member 'UWBP_EmoteCollection_Circular_C::CustomNavigationGroup_EmoteWheel' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, SwapButton_PF) == 0x000550, "Member 'UWBP_EmoteCollection_Circular_C::SwapButton_PF' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, TV_Styled_EmoteCollection) == 0x000558, "Member 'UWBP_EmoteCollection_Circular_C::TV_Styled_EmoteCollection' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, WBP_CommonUIButtonPrompt_38) == 0x000560, "Member 'UWBP_EmoteCollection_Circular_C::WBP_CommonUIButtonPrompt_38' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, WEC_BottomLeft) == 0x000568, "Member 'UWBP_EmoteCollection_Circular_C::WEC_BottomLeft' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, WEC_BottomRight) == 0x000570, "Member 'UWBP_EmoteCollection_Circular_C::WEC_BottomRight' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, WEC_Center) == 0x000578, "Member 'UWBP_EmoteCollection_Circular_C::WEC_Center' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, WEC_Left) == 0x000580, "Member 'UWBP_EmoteCollection_Circular_C::WEC_Left' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, WEC_Right) == 0x000588, "Member 'UWBP_EmoteCollection_Circular_C::WEC_Right' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, WEC_Top) == 0x000590, "Member 'UWBP_EmoteCollection_Circular_C::WEC_Top' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, WEC_TopLeft) == 0x000598, "Member 'UWBP_EmoteCollection_Circular_C::WEC_TopLeft' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, WEC_TopRight) == 0x0005A0, "Member 'UWBP_EmoteCollection_Circular_C::WEC_TopRight' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, EmoteWheelChoices) == 0x0005A8, "Member 'UWBP_EmoteCollection_Circular_C::EmoteWheelChoices' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, All_Emotes) == 0x0005B8, "Member 'UWBP_EmoteCollection_Circular_C::All_Emotes' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, SelectedWheelChoice) == 0x0005C8, "Member 'UWBP_EmoteCollection_Circular_C::SelectedWheelChoice' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, SelectedCollectionEntry) == 0x0005D0, "Member 'UWBP_EmoteCollection_Circular_C::SelectedCollectionEntry' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, Current_Focused_Valid_Widget) == 0x0005D8, "Member 'UWBP_EmoteCollection_Circular_C::Current_Focused_Valid_Widget' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, bUpdatingWheelChoice) == 0x0005E0, "Member 'UWBP_EmoteCollection_Circular_C::bUpdatingWheelChoice' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, EmoteWheeNavlExplictData) == 0x0005E8, "Member 'UWBP_EmoteCollection_Circular_C::EmoteWheeNavlExplictData' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, OnEmoteCollectionClose) == 0x0005F8, "Member 'UWBP_EmoteCollection_Circular_C::OnEmoteCollectionClose' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, Scroll_Offsset_Scale) == 0x000608, "Member 'UWBP_EmoteCollection_Circular_C::Scroll_Offsset_Scale' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteCollection_Circular_C, Previous_Focused_Valid_Widget) == 0x000610, "Member 'UWBP_EmoteCollection_Circular_C::Previous_Focused_Valid_Widget' has a wrong offset!");

}

