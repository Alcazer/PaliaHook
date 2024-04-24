#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemSlot_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Palia_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ItemSlot_CM.WBP_ItemSlot_CM_C
// 0x0130 (0x0418 - 0x02E8)
class UWBP_ItemSlot_CM_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       RaiseHoverAnim;                                    // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoverAnim;                                         // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNamedSlot*                             Content;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Hovered;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Normal;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Selected;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Root;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnItemDropped;                                     // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnLeftClicked;                                     // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRightClicked;                                    // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDragged;                                         // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bDropHandled;                                      // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5056[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDragDropOperation*                     CreatedDragOperaction;                             // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVALUI_ItemSlotStyle*                   Style;                                             // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bDraggable;                                        // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bClickable;                                        // 0x0381(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5057[0x6];                                     // 0x0382(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Size;                                              // 0x0388(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnGlobalDragDetected;                              // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bShouldHighlight;                                  // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelected;                                         // 0x03A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5058[0x6];                                     // 0x03AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Sound_Hover;                                       // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Sound_Unhover;                                     // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bHovered;                                          // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShouldDisable;                                    // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDefaultEnabled;                                   // 0x03C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5059[0x5];                                     // 0x03C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bEmpty;                                            // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_505A[0x7];                                     // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnStyleUpdated;                                    // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsRaised;                                          // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Selected;                                          // 0x0401(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_505B[0x6];                                     // 0x0402(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnGamepadSelect;                                   // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BindToGlobalDrag();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_ItemSlot_CM(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_3, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_GetIsEnabled_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool Temp_bool_Variable_4, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult_1, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue_1, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue_1, class UVALUI_UIManagerWidgetBase* K2Node_DynamicCast_AsVALUI_UIManager_Widget_Base, bool K2Node_DynamicCast_bSuccess, class UVALUI_UIManagerWidgetBase* K2Node_DynamicCast_AsVALUI_UIManager_Widget_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UVALUI_ItemDragDrop* K2Node_CustomEvent_ItemDrag, bool K2Node_CustomEvent_IsDragging, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_AkEventGlobal_ReturnValue, struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FGeometry& K2Node_Event_MyGeometry_1, struct FPointerEvent& K2Node_Event_MouseEvent, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_PointerEvent_1, class UDragDropOperation* K2Node_Event_Operation_1, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, bool K2Node_CustomEvent_bSelected, bool CallFunc_GetIsEnabled_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UVALUI_ItemSlotStyle* K2Node_CustomEvent_Style, bool CallFunc_IsValid_ReturnValue_2, struct FSlateBrush& K2Node_Select_Default, struct FSlateBrush& K2Node_Select_Default_1, int32 CallFunc_AkEventGlobal_ReturnValue_1, struct FSlateBrush& K2Node_Select_Default_2, bool K2Node_CustomEvent_bEmpty, ESlateVisibility K2Node_Select_Default_3, ESlateVisibility K2Node_Select_Default_4, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, TDelegate<void(class UVALUI_ItemDragDrop* ItemDrag, bool IsDragging)> K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void HandleAnythingGotDragged(class UVALUI_ItemDragDrop* ItemDrag, bool IsDragging);
	void Highlight();
	void Hover();
	void IsEmpty(bool* Param_bEmpty);
	void IsHoverStyleApplied(bool* Param_bHovered);
	void IsSelected(bool* Param_bSelected);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, class UVALUI_ItemDragDrop* K2Node_DynamicCast_AsVALUI_Item_Drag_Drop, bool K2Node_DynamicCast_bSuccess, class UVALUI_UIManagerWidgetBase* K2Node_DynamicCast_AsVALUI_UIManager_Widget_Base, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragged__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UVALUI_ItemDragDrop* K2Node_DynamicCast_AsVALUI_Item_Drag_Drop, bool K2Node_DynamicCast_bSuccess);
	void OnGamepadSelect__DelegateSignature();
	void OnGlobalDragDetected__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot, class UVALUI_ItemDragDrop* Operation);
	void OnHovered__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot);
	void OnItemDropped__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot, class UVALUI_ItemDragDrop* Operation);
	void OnLeftClicked__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool Temp_bool_Variable, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& K2Node_Select_Default);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void OnRightClicked__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot);
	void OnStyleUpdated__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot);
	void OnUnhovered__DelegateSignature(class UWBP_ItemSlot_CM_C* Param_Slot);
	void PreConstruct(bool IsDesignTime);
	void RespondToDrag(class UDragDropOperation* Param_CreatedDragOperaction);
	void RespondToDrop(bool Param_bDropHandled);
	void RespondToGlobalDragDetected(bool Param_bShouldHighlight, bool Param_bShouldDisable);
	void SetEmpty(bool Param_bEmpty);
	void SetSelected(bool Param_bSelected);
	void SetStyle(class UVALUI_ItemSlotStyle* Param_Style);
	void UnbindFromGlobalDrag();
	void UnHighlight();
	void Unhover();
	void UpdateStyle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemSlot_CM_C">();
	}
	static class UWBP_ItemSlot_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemSlot_CM_C>();
	}
};
static_assert(alignof(UWBP_ItemSlot_CM_C) == 0x000008, "Wrong alignment on UWBP_ItemSlot_CM_C");
static_assert(sizeof(UWBP_ItemSlot_CM_C) == 0x000418, "Wrong size on UWBP_ItemSlot_CM_C");
static_assert(offsetof(UWBP_ItemSlot_CM_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_ItemSlot_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, RaiseHoverAnim) == 0x0002F0, "Member 'UWBP_ItemSlot_CM_C::RaiseHoverAnim' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, HoverAnim) == 0x0002F8, "Member 'UWBP_ItemSlot_CM_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, Content) == 0x000300, "Member 'UWBP_ItemSlot_CM_C::Content' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, Image_Hovered) == 0x000308, "Member 'UWBP_ItemSlot_CM_C::Image_Hovered' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, Image_Normal) == 0x000310, "Member 'UWBP_ItemSlot_CM_C::Image_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, Image_Selected) == 0x000318, "Member 'UWBP_ItemSlot_CM_C::Image_Selected' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, SizeBox_Root) == 0x000320, "Member 'UWBP_ItemSlot_CM_C::SizeBox_Root' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, OnItemDropped) == 0x000328, "Member 'UWBP_ItemSlot_CM_C::OnItemDropped' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, OnLeftClicked) == 0x000338, "Member 'UWBP_ItemSlot_CM_C::OnLeftClicked' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, OnRightClicked) == 0x000348, "Member 'UWBP_ItemSlot_CM_C::OnRightClicked' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, OnDragged) == 0x000358, "Member 'UWBP_ItemSlot_CM_C::OnDragged' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, bDropHandled) == 0x000368, "Member 'UWBP_ItemSlot_CM_C::bDropHandled' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, CreatedDragOperaction) == 0x000370, "Member 'UWBP_ItemSlot_CM_C::CreatedDragOperaction' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, Style) == 0x000378, "Member 'UWBP_ItemSlot_CM_C::Style' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, bDraggable) == 0x000380, "Member 'UWBP_ItemSlot_CM_C::bDraggable' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, bClickable) == 0x000381, "Member 'UWBP_ItemSlot_CM_C::bClickable' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, Size) == 0x000388, "Member 'UWBP_ItemSlot_CM_C::Size' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, OnGlobalDragDetected) == 0x000398, "Member 'UWBP_ItemSlot_CM_C::OnGlobalDragDetected' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, bShouldHighlight) == 0x0003A8, "Member 'UWBP_ItemSlot_CM_C::bShouldHighlight' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, bSelected) == 0x0003A9, "Member 'UWBP_ItemSlot_CM_C::bSelected' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, Sound_Hover) == 0x0003B0, "Member 'UWBP_ItemSlot_CM_C::Sound_Hover' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, Sound_Unhover) == 0x0003B8, "Member 'UWBP_ItemSlot_CM_C::Sound_Unhover' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, bHovered) == 0x0003C0, "Member 'UWBP_ItemSlot_CM_C::bHovered' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, bShouldDisable) == 0x0003C1, "Member 'UWBP_ItemSlot_CM_C::bShouldDisable' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, bDefaultEnabled) == 0x0003C2, "Member 'UWBP_ItemSlot_CM_C::bDefaultEnabled' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, OnHovered) == 0x0003C8, "Member 'UWBP_ItemSlot_CM_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, OnUnhovered) == 0x0003D8, "Member 'UWBP_ItemSlot_CM_C::OnUnhovered' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, bEmpty) == 0x0003E8, "Member 'UWBP_ItemSlot_CM_C::bEmpty' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, OnStyleUpdated) == 0x0003F0, "Member 'UWBP_ItemSlot_CM_C::OnStyleUpdated' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, IsRaised) == 0x000400, "Member 'UWBP_ItemSlot_CM_C::IsRaised' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, Selected) == 0x000401, "Member 'UWBP_ItemSlot_CM_C::Selected' has a wrong offset!");
static_assert(offsetof(UWBP_ItemSlot_CM_C, OnGamepadSelect) == 0x000408, "Member 'UWBP_ItemSlot_CM_C::OnGamepadSelect' has a wrong offset!");

}

