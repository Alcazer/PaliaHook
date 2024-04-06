#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RequestsPanel_CM

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonWidgetInputExtended_classes.hpp"
#include "BPEnum_ItemRequestBucketType_structs.hpp"
#include "UMG_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RequestsPanel_CM.WBP_RequestsPanel_CM_C
// 0x00F8 (0x05D8 - 0x04E0)
class UWBP_RequestsPanel_CM_C final  : public UCommonActivatableWidgetInputExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_ListView_Styled*                 ListView_ActiveRequests_1;                         // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ListView_Styled*                 ListView_OpenRequests_Friends_1;                   // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ListView_Styled*                 ListView_OpenRequests_Party_1;                     // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ListView_Styled*                 ListView_OpenRequests_PlayerGuild_1;               // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ListView_Styled*                 ListView_OpenRequests_Server_1;                    // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              RequestPickerBack_Button;                          // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_Root;                                     // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_ActiveRequestsPanel;                          // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_CreateRequestPanel;                           // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_OpenRequestsPanel;                            // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DecoratedHeader_C*                 WBP_DecoratedHeader_ActiveRequest;                 // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DecoratedHeader_C*                 WBP_DecoratedHeader_OpenRequests;                  // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ExpandableArea_CM_C*               WBP_ExpandableArea_Friends_1;                      // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ExpandableArea_CM_C*               WBP_ExpandableArea_Party_1;                        // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ExpandableArea_CM_C*               WBP_ExpandableArea_PlayerGuild_1;                  // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ExpandableArea_CM_C*               WBP_ExpandableArea_Server_1;                       // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IADescription_C*                   WBP_IADescription_79;                              // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RadioSlider_Template_02_CM_C*      WBP_RadioSlider_RequestCategory_CM;                // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RequestAmmo_C*                     WBP_RequestAmmo;                                   // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RequestItemPicker_CM_C*            WBP_RequestItemPicker_CM;                          // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        PollingInterval;                                   // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           PollingTimerHandle;                                // 0x0590(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           UpdateRequestsStatusTimerHandle;                   // 0x0598(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CurrentTimeForStatusIndicators;                    // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UListItem_Request_C*>            ListActiveRequests;                                // 0x05A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UListView*>                      AllRequestLists;                                   // 0x05B8(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnUpdateTime;                                      // 0x05C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BeginPolling(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void BindAllListEntryRequests(class UUserWidget* Widget, TScriptInterface<class IBPI_RequestEntry_CM_C> K2Node_DynamicCast_AsBPI_Request_Entry_CM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue);
	void BindRequestManagerEvents(TDelegate<void(const struct FInventoryRequest& InventoryRequest)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(const class FString& ErrorMsg)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(class UInventoryRequestManager* InventoryRequestManager)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void(class UInventoryRequestManager* InventoryRequestManager)> K2Node_CreateDelegate_OutputDelegate_3, class UInventoryRequestManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue);
	void BndEvt__WBP_RequestsPanel_CM_Back_Button_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_RequestsPanel_CM_Back_Button_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_RequestsPanel_CM_ListView_ActiveRequests_1_K2Node_ComponentBoundEvent_11_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget);
	void BndEvt__WBP_RequestsPanel_CM_ListView_ActiveRequests_1_K2Node_ComponentBoundEvent_12_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
	void BndEvt__WBP_RequestsPanel_CM_ListView_ActiveRequests_1_K2Node_ComponentBoundEvent_8_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void BndEvt__WBP_RequestsPanel_CM_ListView_OpenRequests_Friends_1_K2Node_ComponentBoundEvent_13_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void BndEvt__WBP_RequestsPanel_CM_ListView_OpenRequests_Party_1_K2Node_ComponentBoundEvent_4_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void BndEvt__WBP_RequestsPanel_CM_ListView_OpenRequests_PlayerGuild_1_K2Node_ComponentBoundEvent_3_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void BndEvt__WBP_RequestsPanel_CM_ListView_OpenRequests_Server_1_K2Node_ComponentBoundEvent_14_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void BndEvt__WBP_RequestsPanel_CM_WBP_RadioSlider_RequestCategory_CM_K2Node_ComponentBoundEvent_7_OnSliderMoved__DelegateSignature(class UUserWidget* ElementWidget, const struct FBP_RadioSliderPregisteredElement& ElementData);
	void BndEvt__WBP_RequestsPanel_CM_WBP_RequestItemPicker_CM_K2Node_ComponentBoundEvent_10_OnCommit__DelegateSignature(TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> ItemType, int32 Quantity);
	void BndEvt__WBP_RequestsPanel_CM_WBP_RequestItemPicker_CM_K2Node_ComponentBoundEvent_2_OnBack__DelegateSignature();
	void BP_OnActivated();
	void Can_Create_New_Request_Now(bool* Return, const TSet<EInventoryRequestStatus>& RequestStatusSet, const TSet<EInventoryRequestStatus>& K2Node_MakeVariable_MakeVariableOutput, class UInventoryRequestManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, int32 CallFunc_CanMakeAnotherRequest_OutNumRequestsAvailable, bool CallFunc_CanMakeAnotherRequest_ReturnValue);
	void CanClaimActiveRequestNow(class AValeriaCharacter* Character, const struct FInventoryRequest& Request, bool* Return, const struct FValeriaItem& K2Node_MakeStruct_ValeriaItem, bool CallFunc_CanAddItemFully_ReturnValue);
	void Choose_Request_Bucket(const struct FInventoryRequest& Request, EBPEnum_ItemRequestBucketType* Bucket, const struct FUniqueNetIdRepl& Requester_Id, const TSet<struct FUniqueNetIdRepl>& CallFunc_GetNetIdsOfOtherPlayersOnServer_Results, bool CallFunc_Set_Contains_ReturnValue, class UVAL_FriendsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsFriend_ReturnValue, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, class UVAL_PartyManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_3, const struct FUniqueNetIdRepl& CallFunc_GetNetId_ReturnValue, bool CallFunc_TryGetUserMembership_bOutHasMembership, const struct FVAL_PlayerGuild& CallFunc_TryGetUserMembership_PlayerGuild, bool CallFunc_TryGetUserMembership_ReturnValue, bool CallFunc_DoesPartyContainMemberByNetId_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_FindIndexOfUserInPlayerGuildRoster_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Construct();
	class UWidget* Custom_Navigation_Community(EUINavigation Param_Navigation, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UWBP_ExpandableArea_CM_C*>& CallFunc_GetVisibleCategories_VisibleCategoryDropdowns, TArray<class UVALUI_ListView_Styled*>& CallFunc_GetVisibleCategories_VisibleCategoryLists, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_ExpandableArea_CM_C* CallFunc_Array_Get_Item);
	class UWidget* Custom_Navigation_Friends(EUINavigation Param_Navigation, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UWBP_ExpandableArea_CM_C*>& CallFunc_GetVisibleCategories_VisibleCategoryDropdowns, TArray<class UVALUI_ListView_Styled*>& CallFunc_GetVisibleCategories_VisibleCategoryLists, int32 CallFunc_Array_Find_ReturnValue, TArray<class UWBP_ExpandableArea_CM_C*>& CallFunc_GetVisibleCategories_VisibleCategoryDropdowns_1, TArray<class UVALUI_ListView_Styled*>& CallFunc_GetVisibleCategories_VisibleCategoryLists_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, class UVALUI_ListView_Styled* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, class UWBP_ExpandableArea_CM_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Array_IsEmpty_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item_2, class UWBP_ExpandableArea_CM_C* CallFunc_Array_Get_Item_3);
	class UWidget* Custom_Navigation_Party(EUINavigation Param_Navigation, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UWBP_ExpandableArea_CM_C*>& CallFunc_GetVisibleCategories_VisibleCategoryDropdowns, TArray<class UVALUI_ListView_Styled*>& CallFunc_GetVisibleCategories_VisibleCategoryLists, int32 CallFunc_Array_Find_ReturnValue, TArray<class UWBP_ExpandableArea_CM_C*>& CallFunc_GetVisibleCategories_VisibleCategoryDropdowns_1, TArray<class UVALUI_ListView_Styled*>& CallFunc_GetVisibleCategories_VisibleCategoryLists_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, class UWBP_ExpandableArea_CM_C* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, class UVALUI_ListView_Styled* CallFunc_Array_Get_Item_1, class UWBP_ExpandableArea_CM_C* CallFunc_Array_Get_Item_2, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item_3);
	class UWidget* Custom_Navigation_Server(EUINavigation Param_Navigation, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UWBP_ExpandableArea_CM_C*>& CallFunc_GetVisibleCategories_VisibleCategoryDropdowns, TArray<class UVALUI_ListView_Styled*>& CallFunc_GetVisibleCategories_VisibleCategoryLists, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWBP_ExpandableArea_CM_C* CallFunc_Array_Get_Item, class UVALUI_ListView_Styled* CallFunc_Array_Get_Item_1, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item_2);
	void Destruct();
	void DisplayActiveRequests();
	void DisplayOpenRequests();
	void EndPolling(bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	void ExecutePolling(const struct FUniqueNetIdRepl& CurrentPlayerGuildId, class UInventoryRequestManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UInventoryRequestManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1);
	void ExecuteUbergraph_WBP_RequestsPanel_CM(int32 EntryPoint, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable, class UInventoryRequestManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, int32 CallFunc_TryGetNumAvailableRequests_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool Temp_bool_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, double Temp_real_Variable_2, double Temp_real_Variable_3, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, class UInputAction* Temp_object_Variable_1, class UListItem_Request_C* CallFunc_SpawnObject_ReturnValue, class UInventoryRequestManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, TArray<struct FInventoryRequest>& CallFunc_TryGetActiveRequests_OutActiveRequests, bool CallFunc_TryGetActiveRequests_ReturnValue, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, double Temp_real_Variable_3_0, double Temp_real_Variable_2_0, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, const struct FInventoryRequest& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UListItem_Request_C* CallFunc_SpawnObject_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, const struct FDateTime& CallFunc_UtcNow_ReturnValue, TArray<class UListView*>& CallFunc_GetAllRequestListViews_AllRequestLists, class UListView* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TDelegate<void(class UUserWidget* Widget)> K2Node_CreateDelegate_OutputDelegate_2, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UInventoryRequestComponent* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UUserWidget* K2Node_ComponentBoundEvent_ElementWidget, const struct FBP_RadioSliderPregisteredElement& K2Node_ComponentBoundEvent_ElementData, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, const struct FBP_RadioSliderPregisteredElement& CallFunc_GetSelectedElement_Selected, const struct FUniqueNetIdRepl& CallFunc_GetNetId_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_IsVisible_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item_4, class UUserWidget* K2Node_ComponentBoundEvent_Widget_6, class UWBP_ListEntry_ActiveRequest_CM_C* K2Node_DynamicCast_AsWBP_List_Entry_Active_Request_CM, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> K2Node_ComponentBoundEvent_ItemType, int32 K2Node_ComponentBoundEvent_Quantity, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsVisible_ReturnValue_1, const struct FCreateInventoryRequest& K2Node_MakeStruct_CreateInventoryRequest, bool CallFunc_IsValid_ReturnValue_1, class UUserWidget* K2Node_ComponentBoundEvent_Widget_5, class UUserWidget* K2Node_ComponentBoundEvent_Widget_4, class UObject* K2Node_ComponentBoundEvent_Item_3, class UUserWidget* K2Node_ComponentBoundEvent_Widget_3, TArray<class UListView*>& K2Node_MakeArray_Array, class UWBP_ListEntry_Request_CM_C* K2Node_DynamicCast_AsWBP_List_Entry_Request_CM, bool K2Node_DynamicCast_bSuccess_2, class UObject* K2Node_ComponentBoundEvent_Item_2, class UUserWidget* K2Node_ComponentBoundEvent_Widget_2, class UObject* K2Node_ComponentBoundEvent_Item_1, class UUserWidget* K2Node_ComponentBoundEvent_Widget_1, class UWBP_ListEntry_Request_CM_C* K2Node_DynamicCast_AsWBP_List_Entry_Request_CM_1, bool K2Node_DynamicCast_bSuccess_3, class UWBP_ListEntry_Request_CM_C* K2Node_DynamicCast_AsWBP_List_Entry_Request_CM_2, bool K2Node_DynamicCast_bSuccess_4, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UWBP_ListEntry_Request_CM_C* K2Node_DynamicCast_AsWBP_List_Entry_Request_CM_3, bool K2Node_DynamicCast_bSuccess_5);
	void GetAllRequestListViews(TArray<class UListView*>* Param_AllRequestLists);
	void GetNetIdsOfOtherPlayersOnServer(TSet<struct FUniqueNetIdRepl>* Results, const TSet<struct FUniqueNetIdRepl>& Set, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetNetId_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetNetIdFromPlayerState_ReturnValue, bool CallFunc_EqualEqual_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void GetVisibleCategories(TArray<class UWBP_ExpandableArea_CM_C*>* VisibleCategoryDropdowns, TArray<class UVALUI_ListView_Styled*>* VisibleCategoryLists, const TArray<class UVALUI_ListView_Styled*>& VisibleCategories_List, const TArray<class UWBP_ExpandableArea_CM_C*>& VisibleCategories_Dropdown, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UVALUI_ListView_Styled*>& K2Node_MakeArray_Array, class UVALUI_ListView_Styled* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, TArray<class UWBP_ExpandableArea_CM_C*>& K2Node_MakeArray_Array_1, int32 CallFunc_Array_Length_ReturnValue, class UWBP_ExpandableArea_CM_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue);
	void Go_Back_From_Request_Item_Picker(int32 CallFunc_AkEventGlobal_ReturnValue);
	void HandleActiveRequestChanged(class UInventoryRequestManager* InventoryRequestManager);
	void HandleCancelActiveRequestFailed(const class FString& ErrorMessage);
	void HandleCancelActiveRequestSucceeded();
	void HandleClaimActiveRequestFailed(const class FString& ErrorMessage);
	void HandleClaimActiveRequestSucceeded();
	void HandleCreateInventoryRequestFailed(const class FString& ErrorMessage);
	void HandleCreateInventoryRequestSucceeded(const struct FInventoryRequest& InventoryRequest);
	void HandleGetUsersPlayerGuildFailed(const class FString& ErrorMessage);
	void HandleGetUsersPlayerGuildSucceeded(bool bHasMembership, const struct FVAL_PlayerGuild& PlayerGuild, class UInventoryRequestManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue);
	void HandleOpenRequestsChanged(class UInventoryRequestManager* InventoryRequestManager);
	void HandleRescindRequestConfirmed(const struct FInventoryRequest& InventoryRequest, TDelegate<void(const class FString& ErrorMessage)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, class UInventoryRequestManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_CancelActiveRequest_ReturnValue);
	void HandleShowCreateRequestPanel();
	bool HandleSortRequest(class UObject* A, class UObject* B, class UListItem_Request_C* K2Node_DynamicCast_AsList_Item_Request, bool K2Node_DynamicCast_bSuccess, class UListItem_Request_C* K2Node_DynamicCast_AsList_Item_Request_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_DateTimeDateTime_ReturnValue);
	void InpActEvt_IA_UI_SecondaryTab_Switch_L_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_SecondaryTab_Switch_R_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void Is_Error_Being_Shown(bool* Error_Is_Being_Shown);
	void LoadRequestFromItemType(TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> ItemType, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess);
	void OnUpdateTime__DelegateSignature(const struct FDateTime& NewTime);
	void Set_Active_Request_Widget(class UWidget* Widget);
	void SetActiveRequestFocus(TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item);
	void SetupListBindings();
	void Start_Showing_Error_Message(class FText Message);
	void Stop_Showing_Error_Message();
	void TryHandleInputAction_UIBack_Triggered(bool* Handled, bool CallFunc_Is_Item_Selected_Item_Selected);
	void UnbindRequestManagerEvents(TDelegate<void(const struct FInventoryRequest& InventoryRequest)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(const class FString& ErrorMsg)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(class UInventoryRequestManager* InventoryRequestManager)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void(class UInventoryRequestManager* InventoryRequestManager)> K2Node_CreateDelegate_OutputDelegate_3, class UInventoryRequestManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue);
	void Update_Request_Ammo(class UInventoryRequestManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, int32 CallFunc_TryGetNumActiveRequests_ReturnValue);
	void Update_Request_Status_Indicators(const struct FDateTime& CallFunc_UtcNow_ReturnValue);
	void UpdateActiveRequest();
	void UpdateFromInventoryRequestList(TArray<struct FInventoryRequest>& InventoryRequests, class UListItem_Request_C* Created_List_Item, const TArray<class UListItem_Request_C*>& ListItems_ServerMembers, const TArray<class UListItem_Request_C*>& ListItems_PlayerGuildMembers, const TArray<class UListItem_Request_C*>& ListItems_PartyMembers, const TArray<class UListItem_Request_C*>& ListItems_Friends, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, class UListItem_Request_C* CallFunc_SpawnObject_ReturnValue, class UVAL_PartyManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsCurrentPartyValid_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, ESlateVisibility Temp_byte_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, const struct FInventoryRequest& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, EBPEnum_ItemRequestBucketType CallFunc_Choose_Request_Bucket_Bucket, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility Temp_byte_Variable_3, TDelegate<void(class UObject* A, class UObject* B)> K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_1, TArray<class UObject*>& CallFunc_SortObjectArray_ReturnValue, TDelegate<void(class UObject* A, class UObject* B)> K2Node_CreateDelegate_OutputDelegate_1, ESlateVisibility Temp_byte_Variable_4, TArray<class UObject*>& CallFunc_SortObjectArray_ReturnValue_1, ESlateVisibility Temp_byte_Variable_5, TDelegate<void(class UObject* A, class UObject* B)> K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable_2, TArray<class UObject*>& CallFunc_SortObjectArray_ReturnValue_2, ESlateVisibility K2Node_Select_Default_1, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, TDelegate<void(class UObject* A, class UObject* B)> K2Node_CreateDelegate_OutputDelegate_3, const struct FUniqueNetIdRepl& CallFunc_GetNetId_ReturnValue, bool CallFunc_TryGetUserMembership_bOutHasMembership, const struct FVAL_PlayerGuild& CallFunc_TryGetUserMembership_PlayerGuild, bool CallFunc_TryGetUserMembership_ReturnValue, TArray<class UObject*>& CallFunc_SortObjectArray_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, ESlateVisibility K2Node_Select_Default_2);
	void UpdateOpenRequests(class UInventoryRequestManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TArray<struct FInventoryRequest>& CallFunc_GetAllOpenRequests_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RequestsPanel_CM_C">();
	}
	static class UWBP_RequestsPanel_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RequestsPanel_CM_C>();
	}
};
static_assert(alignof(UWBP_RequestsPanel_CM_C) == 0x000008, "Wrong alignment on UWBP_RequestsPanel_CM_C");
static_assert(sizeof(UWBP_RequestsPanel_CM_C) == 0x0005D8, "Wrong size on UWBP_RequestsPanel_CM_C");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, UberGraphFrame) == 0x0004E0, "Member 'UWBP_RequestsPanel_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, ListView_ActiveRequests_1) == 0x0004E8, "Member 'UWBP_RequestsPanel_CM_C::ListView_ActiveRequests_1' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, ListView_OpenRequests_Friends_1) == 0x0004F0, "Member 'UWBP_RequestsPanel_CM_C::ListView_OpenRequests_Friends_1' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, ListView_OpenRequests_Party_1) == 0x0004F8, "Member 'UWBP_RequestsPanel_CM_C::ListView_OpenRequests_Party_1' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, ListView_OpenRequests_PlayerGuild_1) == 0x000500, "Member 'UWBP_RequestsPanel_CM_C::ListView_OpenRequests_PlayerGuild_1' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, ListView_OpenRequests_Server_1) == 0x000508, "Member 'UWBP_RequestsPanel_CM_C::ListView_OpenRequests_Server_1' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, RequestPickerBack_Button) == 0x000510, "Member 'UWBP_RequestsPanel_CM_C::RequestPickerBack_Button' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, Switcher_Root) == 0x000518, "Member 'UWBP_RequestsPanel_CM_C::Switcher_Root' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, VBox_ActiveRequestsPanel) == 0x000520, "Member 'UWBP_RequestsPanel_CM_C::VBox_ActiveRequestsPanel' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, VBox_CreateRequestPanel) == 0x000528, "Member 'UWBP_RequestsPanel_CM_C::VBox_CreateRequestPanel' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, VBox_OpenRequestsPanel) == 0x000530, "Member 'UWBP_RequestsPanel_CM_C::VBox_OpenRequestsPanel' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, WBP_DecoratedHeader_ActiveRequest) == 0x000538, "Member 'UWBP_RequestsPanel_CM_C::WBP_DecoratedHeader_ActiveRequest' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, WBP_DecoratedHeader_OpenRequests) == 0x000540, "Member 'UWBP_RequestsPanel_CM_C::WBP_DecoratedHeader_OpenRequests' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, WBP_ExpandableArea_Friends_1) == 0x000548, "Member 'UWBP_RequestsPanel_CM_C::WBP_ExpandableArea_Friends_1' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, WBP_ExpandableArea_Party_1) == 0x000550, "Member 'UWBP_RequestsPanel_CM_C::WBP_ExpandableArea_Party_1' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, WBP_ExpandableArea_PlayerGuild_1) == 0x000558, "Member 'UWBP_RequestsPanel_CM_C::WBP_ExpandableArea_PlayerGuild_1' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, WBP_ExpandableArea_Server_1) == 0x000560, "Member 'UWBP_RequestsPanel_CM_C::WBP_ExpandableArea_Server_1' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, WBP_IADescription_79) == 0x000568, "Member 'UWBP_RequestsPanel_CM_C::WBP_IADescription_79' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, WBP_RadioSlider_RequestCategory_CM) == 0x000570, "Member 'UWBP_RequestsPanel_CM_C::WBP_RadioSlider_RequestCategory_CM' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, WBP_RequestAmmo) == 0x000578, "Member 'UWBP_RequestsPanel_CM_C::WBP_RequestAmmo' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, WBP_RequestItemPicker_CM) == 0x000580, "Member 'UWBP_RequestsPanel_CM_C::WBP_RequestItemPicker_CM' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, PollingInterval) == 0x000588, "Member 'UWBP_RequestsPanel_CM_C::PollingInterval' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, PollingTimerHandle) == 0x000590, "Member 'UWBP_RequestsPanel_CM_C::PollingTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, UpdateRequestsStatusTimerHandle) == 0x000598, "Member 'UWBP_RequestsPanel_CM_C::UpdateRequestsStatusTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, CurrentTimeForStatusIndicators) == 0x0005A0, "Member 'UWBP_RequestsPanel_CM_C::CurrentTimeForStatusIndicators' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, ListActiveRequests) == 0x0005A8, "Member 'UWBP_RequestsPanel_CM_C::ListActiveRequests' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, AllRequestLists) == 0x0005B8, "Member 'UWBP_RequestsPanel_CM_C::AllRequestLists' has a wrong offset!");
static_assert(offsetof(UWBP_RequestsPanel_CM_C, OnUpdateTime) == 0x0005C8, "Member 'UWBP_RequestsPanel_CM_C::OnUpdateTime' has a wrong offset!");

}

