#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MenuHubItem_Console

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Palia_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MenuHubItem_Console.WBP_MenuHubItem_Console_C
// 0x00C8 (0x03B0 - 0x02E8)
class UWBP_MenuHubItem_Console_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               HubItemOverlay;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    InputAction_Icon;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                MenuContent;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MenuIcon;                                          // 0x0308(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_DebugOnly*                       VALUI_DebugOnly_60;                                // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NotificationCountBadge_C*          WBP_NotificationCountBadge;                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              WBP_Template_Button_CM;                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             DefaultMenuIcon;                                   // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   DefaultMenuContent;                                // 0x0330(0x0018)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_             OnButtonPressed;                                   // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_ListEntry_MenuHub_C*                ListEntryData;                                     // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            CurrentColor;                                      // 0x0360(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_5144[0x4];                                     // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVALUI_TextBlockStyle*                  DefaultStyle;                                      // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVALUI_TextBlockStyle*                  HoverStyle;                                        // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          PremiumStyle;                                      // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5145[0x3];                                     // 0x0389(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                HoverPadding;                                      // 0x038C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                                PremiumHoverPadding;                               // 0x039C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void BndEvt__WBP_MenuHubItem_Console_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MenuHubItem_Console_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_MenuHubItem_Console_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Destruct();
	void DisplayNewStorePip(struct FVALUI_PremiumStorefrontResponse& PremiumStorefrontResponse, bool IsNewStorefront, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_DateTimeDateTime_ReturnValue, ESlateVisibility K2Node_Select_Default);
	void ExecuteUbergraph_WBP_MenuHubItem_Console(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FVALUI_PremiumStorefrontResponse& K2Node_CustomEvent_Response, TDelegate<void(const struct FVALUI_PremiumStorefrontResponse& Response)> K2Node_CreateDelegate_OutputDelegate_1, const struct FVALUI_PremiumStorefrontResponse& Temp_struct_Variable, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UBP_ListEntry_MenuHub_C* K2Node_DynamicCast_AsBP_List_Entry_Menu_Hub, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, int32 CallFunc_AkEventGlobal_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_SwitchEnum_CmpSuccess, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UVAL_AsyncActionRequestStorefront* CallFunc_RequestStorefront_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Failure_B699E22747740E7D94EE1A8441A22296();
	void InitializeListItem(ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, ESlateVisibility Temp_byte_Variable_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
	void InitializeNotification(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void InitializeStoreButton();
	void OnButtonPressed__DelegateSignature(class UBP_ListEntry_MenuHub_C* EntryData);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void SetConnectionsNotification(EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UWBP_MainWidget_Console_C* K2Node_DynamicCast_AsWBP_Main_Widget_Console, bool K2Node_DynamicCast_bSuccess);
	void SetNewsNotification(EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetPendingRewardCount_ReturnValue);
	void SetStoreNotification();
	void Successful_B699E22747740E7D94EE1A8441A22296(const struct FVALUI_PremiumStorefrontResponse& Response);
	void UpdateStyle(bool Hovered, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FMargin& K2Node_MakeStruct_Margin, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue_1, bool CallFunc_BooleanXOR_ReturnValue, const struct FMargin& K2Node_Select_Default, class UVALUI_TextBlockStyle* K2Node_Select_Default_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MenuHubItem_Console_C">();
	}
	static class UWBP_MenuHubItem_Console_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MenuHubItem_Console_C>();
	}
};
static_assert(alignof(UWBP_MenuHubItem_Console_C) == 0x000008, "Wrong alignment on UWBP_MenuHubItem_Console_C");
static_assert(sizeof(UWBP_MenuHubItem_Console_C) == 0x0003B0, "Wrong size on UWBP_MenuHubItem_Console_C");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_MenuHubItem_Console_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, HubItemOverlay) == 0x0002F0, "Member 'UWBP_MenuHubItem_Console_C::HubItemOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, InputAction_Icon) == 0x0002F8, "Member 'UWBP_MenuHubItem_Console_C::InputAction_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, MenuContent) == 0x000300, "Member 'UWBP_MenuHubItem_Console_C::MenuContent' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, MenuIcon) == 0x000308, "Member 'UWBP_MenuHubItem_Console_C::MenuIcon' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, VALUI_DebugOnly_60) == 0x000310, "Member 'UWBP_MenuHubItem_Console_C::VALUI_DebugOnly_60' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, WBP_NotificationCountBadge) == 0x000318, "Member 'UWBP_MenuHubItem_Console_C::WBP_NotificationCountBadge' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, WBP_Template_Button_CM) == 0x000320, "Member 'UWBP_MenuHubItem_Console_C::WBP_Template_Button_CM' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, DefaultMenuIcon) == 0x000328, "Member 'UWBP_MenuHubItem_Console_C::DefaultMenuIcon' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, DefaultMenuContent) == 0x000330, "Member 'UWBP_MenuHubItem_Console_C::DefaultMenuContent' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, OnButtonPressed) == 0x000348, "Member 'UWBP_MenuHubItem_Console_C::OnButtonPressed' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, ListEntryData) == 0x000358, "Member 'UWBP_MenuHubItem_Console_C::ListEntryData' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, CurrentColor) == 0x000360, "Member 'UWBP_MenuHubItem_Console_C::CurrentColor' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, DefaultStyle) == 0x000378, "Member 'UWBP_MenuHubItem_Console_C::DefaultStyle' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, HoverStyle) == 0x000380, "Member 'UWBP_MenuHubItem_Console_C::HoverStyle' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, PremiumStyle) == 0x000388, "Member 'UWBP_MenuHubItem_Console_C::PremiumStyle' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, HoverPadding) == 0x00038C, "Member 'UWBP_MenuHubItem_Console_C::HoverPadding' has a wrong offset!");
static_assert(offsetof(UWBP_MenuHubItem_Console_C, PremiumHoverPadding) == 0x00039C, "Member 'UWBP_MenuHubItem_Console_C::PremiumHoverPadding' has a wrong offset!");

}
