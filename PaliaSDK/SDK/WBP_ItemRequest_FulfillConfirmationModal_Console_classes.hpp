#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemRequest_FulfillConfirmationModal_Console

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "ValeriaUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ItemRequest_FulfillConfirmationModal_Console.WBP_ItemRequest_FulfillConfirmationModal_Console_C
// 0x0148 (0x06A0 - 0x0558)
class UWBP_ItemRequest_FulfillConfirmationModal_Console_C final  : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_TextBlock_Styled*                AmountOwned;                                       // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                AmountRequested;                                   // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackgroundImage;                                   // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemIcon;                                          // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_PopupSecondary_02_PF_C*   WBP_Template_PopupSecondary_02_PF;                 // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> PreviewItemType;                                   // 0x0588(0x0028)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnConfirm;                                         // 0x05B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCancel;                                          // 0x05C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FInventoryRequest                      InventoryRequestToFulfill;                         // 0x05D0(0x00D0)(Edit, BlueprintVisible, Transient, ExposeOnSpawn)

public:
	void BindEventsOnConstruct(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_ItemRequest_FulfillConfirmationModal_Console(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue);
	void FillDesignTimeInfo(bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess);
	void HandleCancel();
	void HandleConfirm();
	void Initialize(class UVAL_ItemTypeDefinitionAsset* ItemDefinition, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, int32 CallFunc_GetItemAmountInX_ByType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess);
	void OnCancel__DelegateSignature();
	void OnConfirm__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void UnbindEventsOnDestruct(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemRequest_FulfillConfirmationModal_Console_C">();
	}
	static class UWBP_ItemRequest_FulfillConfirmationModal_Console_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemRequest_FulfillConfirmationModal_Console_C>();
	}
};
static_assert(alignof(UWBP_ItemRequest_FulfillConfirmationModal_Console_C) == 0x000008, "Wrong alignment on UWBP_ItemRequest_FulfillConfirmationModal_Console_C");
static_assert(sizeof(UWBP_ItemRequest_FulfillConfirmationModal_Console_C) == 0x0006A0, "Wrong size on UWBP_ItemRequest_FulfillConfirmationModal_Console_C");
static_assert(offsetof(UWBP_ItemRequest_FulfillConfirmationModal_Console_C, UberGraphFrame) == 0x000558, "Member 'UWBP_ItemRequest_FulfillConfirmationModal_Console_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ItemRequest_FulfillConfirmationModal_Console_C, AmountOwned) == 0x000560, "Member 'UWBP_ItemRequest_FulfillConfirmationModal_Console_C::AmountOwned' has a wrong offset!");
static_assert(offsetof(UWBP_ItemRequest_FulfillConfirmationModal_Console_C, AmountRequested) == 0x000568, "Member 'UWBP_ItemRequest_FulfillConfirmationModal_Console_C::AmountRequested' has a wrong offset!");
static_assert(offsetof(UWBP_ItemRequest_FulfillConfirmationModal_Console_C, BackgroundImage) == 0x000570, "Member 'UWBP_ItemRequest_FulfillConfirmationModal_Console_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UWBP_ItemRequest_FulfillConfirmationModal_Console_C, ItemIcon) == 0x000578, "Member 'UWBP_ItemRequest_FulfillConfirmationModal_Console_C::ItemIcon' has a wrong offset!");
static_assert(offsetof(UWBP_ItemRequest_FulfillConfirmationModal_Console_C, WBP_Template_PopupSecondary_02_PF) == 0x000580, "Member 'UWBP_ItemRequest_FulfillConfirmationModal_Console_C::WBP_Template_PopupSecondary_02_PF' has a wrong offset!");
static_assert(offsetof(UWBP_ItemRequest_FulfillConfirmationModal_Console_C, PreviewItemType) == 0x000588, "Member 'UWBP_ItemRequest_FulfillConfirmationModal_Console_C::PreviewItemType' has a wrong offset!");
static_assert(offsetof(UWBP_ItemRequest_FulfillConfirmationModal_Console_C, OnConfirm) == 0x0005B0, "Member 'UWBP_ItemRequest_FulfillConfirmationModal_Console_C::OnConfirm' has a wrong offset!");
static_assert(offsetof(UWBP_ItemRequest_FulfillConfirmationModal_Console_C, OnCancel) == 0x0005C0, "Member 'UWBP_ItemRequest_FulfillConfirmationModal_Console_C::OnCancel' has a wrong offset!");
static_assert(offsetof(UWBP_ItemRequest_FulfillConfirmationModal_Console_C, InventoryRequestToFulfill) == 0x0005D0, "Member 'UWBP_ItemRequest_FulfillConfirmationModal_Console_C::InventoryRequestToFulfill' has a wrong offset!");

}

