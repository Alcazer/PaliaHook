#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TileEntry_SavedLoadout

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "S6Core_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TileEntry_SavedLoadout.WBP_TileEntry_SavedLoadout_C
// 0x0A18 (0x0CD8 - 0x02C0)
class UWBP_TileEntry_SavedLoadout_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hovered;                                           // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_Equipped;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Name;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              Button_Root_CM;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Hovered;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Lock;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Selected;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SelectedFrame;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SelectedIcon;                                // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Thumbnail;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Unhovered;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_SelectedFrame;                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Button_Styled*                   VALUI_Button_Styled_67;                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                VALUI_OutfitName;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AnimatedLoading_C*                 WBP_AnimatedLoading;                               // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_ItemImage;                          // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_LoadoutName;                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_RenderPreview;                                 // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Owned;                                             // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Selected;                                          // 0x0361(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A71[0x6];                                     // 0x0362(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             NullItemImage;                                     // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          HoveredAnimationPlayed;                            // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A72[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnItemFocused;                                     // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVAL_CharacterCustomizationLoadout     Loadout;                                           // 0x0388(0x0900)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_SavedLoadoutsPanel_C*              Owning_Panel;                                      // 0x0C88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  Loadout_Id;                                        // 0x0C90(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Outfit_Name;                                       // 0x0CA0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGuid                                  LastRenderPreviewRequestId;                        // 0x0CB8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDraggable;                                        // 0x0CC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5A73[0x7];                                     // 0x0CC9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_SavedLoadout_Drag_C*               DraggedWidget;                                     // 0x0CD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void OnItemFocused__DelegateSignature(class UWBP_TileEntry_SavedLoadout_C* Widget);
	void BndEvt__WBP_TileEntry_CosmeticThumbnail_CM_Button_Root_CM_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_TileEntry_CosmeticThumbnail_CM_Button_Root_CM_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_TileEntry_CosmeticThumbnail_CM_Button_Root_CM_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_TileEntry_SavedLoadout_VALUI_Button_Styled_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ClearSelected();
	void ExecuteUbergraph_WBP_TileEntry_SavedLoadout(int32 EntryPoint, class UListViewBase* CallFunc_GetOwningListView_ReturnValue, class UListView* K2Node_DynamicCast_AsList_View, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetListItemObject_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, struct FPointerEvent& K2Node_Event_MouseEvent, class UObject* K2Node_Event_ListItemObject, bool CallFunc_IsListItemSelected_ReturnValue, bool K2Node_Event_bIsSelected, class UObject* CallFunc_GetListItemObject_ReturnValue_1, class UTileItem_SavedLoadout_C* K2Node_DynamicCast_AsTile_Item_Saved_Loadout, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_CosmeticItemTooltip_C* CallFunc_Create_ReturnValue, class UObject* CallFunc_GetListItemObject_ReturnValue_2, class UTileItem_CharacterCustomizationItem_C* K2Node_DynamicCast_AsTile_Item_Character_Customization_Item, bool K2Node_DynamicCast_bSuccess_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bIsExpanded, class AVAL_CharacterPreviewer* CallFunc_GetCharacterPreviewer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue, class AVAL_CharacterPreviewer* CallFunc_GetCharacterPreviewer_ReturnValue_1, TDelegate<void(class AVAL_CharacterPreviewer* CharacterPreviewer, const struct FGuid& RequestID, class UTextureRenderTarget2D* PreviewTexture)> K2Node_CreateDelegate_OutputDelegate, const struct FVAL_RenderFullBodyPreviewParameters& K2Node_MakeStruct_VAL_RenderFullBodyPreviewParameters, struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, bool CallFunc_Not_PreBool_ReturnValue, class UObject* CallFunc_GetListItemObject_ReturnValue_3, class UTileItem_SavedLoadout_C* K2Node_DynamicCast_AsTile_Item_Saved_Loadout_1, bool K2Node_DynamicCast_bSuccess_3);
	void Get_Customization_Panel(class UWBP_CharacterCustomizationPanel_CM_C** Character_Customization_Panel_CM, EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_ValeriaPlayerController_C* K2Node_DynamicCast_AsBP_Valeria_Player_Controller, bool K2Node_DynamicCast_bSuccess, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, class UWBP_GameplayUIManager_C* K2Node_DynamicCast_AsWBP_Gameplay_UIManager, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UWBP_CharacterCustomizationScreen_CM_C* K2Node_DynamicCast_AsWBP_Character_Customization_Screen_CM, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue_1, class UWBP_PreGameHUD_CM_C* K2Node_DynamicCast_AsWBP_Pre_Game_HUD_CM, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1, class UWBP_PregameHUD_PF_C* K2Node_DynamicCast_AsWBP_Pregame_HUD_PF, bool K2Node_DynamicCast_bSuccess_4, class UWBP_CharacterCustomizationPanel_CM_C* K2Node_DynamicCast_AsWBP_Character_Customization_Panel_CM, bool K2Node_DynamicCast_bSuccess_5, class UWBP_CharacterCustomizationPanel_CM_C* K2Node_DynamicCast_AsWBP_Character_Customization_Panel_CM_1, bool K2Node_DynamicCast_bSuccess_6);
	void GetDisplayedTexture(TSoftObjectPtr<class UTexture2D>* Texture, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue);
	void GetItemId(struct FGuid* Item_Id, const struct FGuid& K2Node_MakeStruct_Guid, class UObject* CallFunc_GetListItemObject_ReturnValue, class UTileItem_CharacterCustomizationItem_C* K2Node_DynamicCast_AsTile_Item_Character_Customization_Item, bool K2Node_DynamicCast_bSuccess);
	void HandleDragFinished();
	void HandleItemSelectionChanged(bool Param_Selected, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleRenderRequestFinished(class AVAL_CharacterPreviewer* CharacterPreviewer, const struct FGuid& RequestID, class UTextureRenderTarget2D* PreviewTexture, bool CallFunc_EqualEqual_GuidGuid_ReturnValue);
	void OnDragCancelled(struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UBP_SavedLoadoutDrag_C* CallFunc_CreateDragDropOperation_ReturnValue, class UWBP_SavedLoadout_Drag_C* CallFunc_Create_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetDisplayedTexture_Texture);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UBP_SavedLoadoutDrag_C* K2Node_DynamicCast_AsBP_Saved_Loadout_Drag, bool K2Node_DynamicCast_bSuccess, class UWBP_SavedLoadoutsWheelChoice_C* K2Node_DynamicCast_AsWBP_Saved_Loadouts_Wheel_Choice, bool K2Node_DynamicCast_bSuccess_1);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnInitialized();
	void OnListItemObjectSet(class UObject* ListItemObject);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void SetHovered(bool bHorvered, bool Temp_bool_Variable, class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, class UAkAudioEvent* K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void SetOutfitName(class FText OutfitName);
	void SetSavedLoadoutItemToWheelChoice(class UWBP_SavedLoadoutsWheelChoice_C* Wheel_Choice);
	void SetSelected(bool Param_Selected, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UObject* CallFunc_GetListItemObject_ReturnValue, class UListViewBase* CallFunc_GetOwningListView_ReturnValue, class UListView* K2Node_DynamicCast_AsList_View, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetIndexForItem_ReturnValue, class UWidget* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UWidget* K2Node_Select_Default_1);
	void UpdateLockImage(const TArray<TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase>>& LoadoutItems, const struct FVAL_CharCustomization_AssetData& TileAssetData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase>>& CallFunc_GetAllItemsFromLoadout_ReturnValue, TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase> CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, const struct FAssetData& CallFunc_GetAssetDataFromItem_OutAssetData, bool CallFunc_GetAssetDataFromItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVAL_CharCustomization_AssetData& CallFunc_GenerateTileAssetData_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVAL_EntitlementSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_HasEntitlement_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateThumbnailImage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TileEntry_SavedLoadout_C">();
	}
	static class UWBP_TileEntry_SavedLoadout_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TileEntry_SavedLoadout_C>();
	}
};
static_assert(alignof(UWBP_TileEntry_SavedLoadout_C) == 0x000008, "Wrong alignment on UWBP_TileEntry_SavedLoadout_C");
static_assert(sizeof(UWBP_TileEntry_SavedLoadout_C) == 0x000CD8, "Wrong size on UWBP_TileEntry_SavedLoadout_C");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_TileEntry_SavedLoadout_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Hovered) == 0x0002C8, "Member 'UWBP_TileEntry_SavedLoadout_C::Hovered' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Border_Equipped) == 0x0002D0, "Member 'UWBP_TileEntry_SavedLoadout_C::Border_Equipped' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Border_Name) == 0x0002D8, "Member 'UWBP_TileEntry_SavedLoadout_C::Border_Name' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Button_Root_CM) == 0x0002E0, "Member 'UWBP_TileEntry_SavedLoadout_C::Button_Root_CM' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Image_Hovered) == 0x0002E8, "Member 'UWBP_TileEntry_SavedLoadout_C::Image_Hovered' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Image_Lock) == 0x0002F0, "Member 'UWBP_TileEntry_SavedLoadout_C::Image_Lock' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Image_Selected) == 0x0002F8, "Member 'UWBP_TileEntry_SavedLoadout_C::Image_Selected' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Image_SelectedFrame) == 0x000300, "Member 'UWBP_TileEntry_SavedLoadout_C::Image_SelectedFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Image_SelectedIcon) == 0x000308, "Member 'UWBP_TileEntry_SavedLoadout_C::Image_SelectedIcon' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Image_Thumbnail) == 0x000310, "Member 'UWBP_TileEntry_SavedLoadout_C::Image_Thumbnail' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Image_Unhovered) == 0x000318, "Member 'UWBP_TileEntry_SavedLoadout_C::Image_Unhovered' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Overlay_SelectedFrame) == 0x000320, "Member 'UWBP_TileEntry_SavedLoadout_C::Overlay_SelectedFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, VALUI_Button_Styled_67) == 0x000328, "Member 'UWBP_TileEntry_SavedLoadout_C::VALUI_Button_Styled_67' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, VALUI_OutfitName) == 0x000330, "Member 'UWBP_TileEntry_SavedLoadout_C::VALUI_OutfitName' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, WBP_AnimatedLoading) == 0x000338, "Member 'UWBP_TileEntry_SavedLoadout_C::WBP_AnimatedLoading' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, WidgetSwitcher) == 0x000340, "Member 'UWBP_TileEntry_SavedLoadout_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, WidgetSwitcher_ItemImage) == 0x000348, "Member 'UWBP_TileEntry_SavedLoadout_C::WidgetSwitcher_ItemImage' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, WidgetSwitcher_LoadoutName) == 0x000350, "Member 'UWBP_TileEntry_SavedLoadout_C::WidgetSwitcher_LoadoutName' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, MID_RenderPreview) == 0x000358, "Member 'UWBP_TileEntry_SavedLoadout_C::MID_RenderPreview' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Owned) == 0x000360, "Member 'UWBP_TileEntry_SavedLoadout_C::Owned' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Selected) == 0x000361, "Member 'UWBP_TileEntry_SavedLoadout_C::Selected' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, NullItemImage) == 0x000368, "Member 'UWBP_TileEntry_SavedLoadout_C::NullItemImage' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, HoveredAnimationPlayed) == 0x000370, "Member 'UWBP_TileEntry_SavedLoadout_C::HoveredAnimationPlayed' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, OnItemFocused) == 0x000378, "Member 'UWBP_TileEntry_SavedLoadout_C::OnItemFocused' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Loadout) == 0x000388, "Member 'UWBP_TileEntry_SavedLoadout_C::Loadout' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Owning_Panel) == 0x000C88, "Member 'UWBP_TileEntry_SavedLoadout_C::Owning_Panel' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Loadout_Id) == 0x000C90, "Member 'UWBP_TileEntry_SavedLoadout_C::Loadout_Id' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, Outfit_Name) == 0x000CA0, "Member 'UWBP_TileEntry_SavedLoadout_C::Outfit_Name' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, LastRenderPreviewRequestId) == 0x000CB8, "Member 'UWBP_TileEntry_SavedLoadout_C::LastRenderPreviewRequestId' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, bDraggable) == 0x000CC8, "Member 'UWBP_TileEntry_SavedLoadout_C::bDraggable' has a wrong offset!");
static_assert(offsetof(UWBP_TileEntry_SavedLoadout_C, DraggedWidget) == 0x000CD0, "Member 'UWBP_TileEntry_SavedLoadout_C::DraggedWidget' has a wrong offset!");

}

