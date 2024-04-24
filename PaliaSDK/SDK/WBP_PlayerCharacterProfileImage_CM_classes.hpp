#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerCharacterProfileImage_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonWidgetInputExtended_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "ValeriaDTOs_structs.hpp"
#include "S6Core_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PlayerCharacterProfileImage_CM.WBP_PlayerCharacterProfileImage_CM_C
// 0x0880 (0x0C20 - 0x03A0)
class UWBP_PlayerCharacterProfileImage_CM_C final  : public UCommonUserWidgetInputExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_CharacterPortrait;                          // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_PortraitOverlay;                         // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                            PlatformNameToolTipsMenuAnchor;                    // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              PortraitButton;                                    // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Root;                                      // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_BoxDropShadow*                   VALUI_BoxDropShadow_71;                            // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AnimatedLoading_C*                 WBP_AnimatedLoading;                               // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_FocusTip_CM_C*                     WBP_FocusTip_CM;                                   // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              PreviewRenderSize;                                 // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FGuid                                  AccountId;                                         // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_HeadPreview;                                   // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVALDTOS_MetaCharacterFormat           CachedMetaCharacterFormat;                         // 0x0410(0x0778)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bHasInitialCachedData;                             // 0x0B88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50BA[0x3];                                     // 0x0B89(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  LastRenderPreviewRequestId;                        // 0x0B8C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50BB[0x4];                                     // 0x0B9C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               NoCharacterSpecifiedTexture;                       // 0x0BA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnProfileImageClicked;                             // 0x0BA8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          DebugRandomizePortrait;                            // 0x0BB8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50BC[0x7];                                     // 0x0BB9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFocus;                                           // 0x0BC0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnfocused;                                       // 0x0BD0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsShowFocusTip;                                   // 0x0BE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnablePlatformTooltips;                           // 0x0BE1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50BD[0x6];                                     // 0x0BE2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       UserId;                                            // 0x0BE8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UWBP_PlatformPlayerNameToolTip_C*       PlatformTooltips;                                  // 0x0C18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_PlayerCharacterProfileImage_CM_PortraitButton_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature();
	void BndEvt__WBP_PlayerCharacterProfileImage_CM_PortraitButton_K2Node_ComponentBoundEvent_1_OnUnfocused__DelegateSignature();
	void BndEvt__WBP_PlayerCharacterProfileImage_CM_PortraitButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_PlayerCharacterProfileImage_CM_PortraitButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	bool Can_Open_Platform_Tooltips(class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsXSXPlatform_ReturnValue, bool CallFunc_IsPS5Platform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FPresence& CallFunc_GetPresenceForUserId_ReturnValue, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void ExecuteUbergraph_WBP_PlayerCharacterProfileImage_CM(int32 EntryPoint, TArray<struct FVALDTOS_MetaCharacterFormat>& Temp_struct_Variable, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, TArray<struct FVALDTOS_MetaCharacterFormat>& K2Node_CustomEvent_CharactersFound, TDelegate<void(TArray<struct FVALDTOS_MetaCharacterFormat>& CharactersFound)> K2Node_CreateDelegate_OutputDelegate_1, const struct FSlateBrush& K2Node_Copy_ReturnValue, const struct FSlateBrush& K2Node_SetFieldsInStruct_StructOut, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UVAL_BpAsyncAction_GetMetaCharacterData* CallFunc_GetMetaCharacterData_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, struct FPointerEvent& K2Node_Event_MouseEvent_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, struct FPointerEvent& K2Node_Event_MouseEvent, bool CallFunc_IsOpen_ReturnValue, bool CallFunc_Can_Open_Platform_Tooltips_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWBP_PlatformPlayerNameToolTip_C* CallFunc_Create_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, const struct FDeprecateSlateVector2D& K2Node_SetFieldsInStruct_ImageSize_ImplicitCast);
	void HandleCharacterDataReceived(struct FVALDTOS_MetaCharacterFormat& Character, bool CallFunc_CharacterCustomizationOptions_EqualEqual_ReturnValue, bool CallFunc_CharacterCreationOptions_EqualEqual_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void HandleOnFocused();
	void HandleRenderHeadPreviewComplete(class AVAL_CharacterPreviewer* CharacterPreviewer, const struct FGuid& RequestID, class UTextureRenderTarget2D* PreviewTexture, bool CallFunc_EqualEqual_GuidGuid_ReturnValue);
	void InitializeMID(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	class UUserWidget* On_PlatformNameToolTipsMenuAnchor_GetUserMenuContent();
	void OnFailed_CC988C3F41D6817A67D51D9348CA7AAE();
	void OnFocus__DelegateSignature();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnInitialized();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnProfileImageClicked__DelegateSignature(class UWBP_PlayerCharacterProfileImage_CM_C* PlayerCharacterImageWidget);
	void OnSuccess_CC988C3F41D6817A67D51D9348CA7AAE(TArray<struct FVALDTOS_MetaCharacterFormat>& CharactersFound);
	void OnUnfocused__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void RequestRefreshPortrait();
	void ResetPortrait();
	void SetAccount(const struct FGuid& Param_AccountId, bool Param_DebugRandomizePortrait, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetUser(const struct FUniqueNetIdRepl& Param_UserId, bool Param_DebugRandomizePortrait, const struct FGuid& CallFunc_GetAccountId_ReturnValue);
	void UpdateFromMetaCharacterFormat(const struct FVAL_RenderHeadPreviewParameters& RenderHeadParams, const struct FVAL_CharacterCustomizationLoadout& CallFunc_CreateRandomLoadout_ReturnValue, const struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Volatile& CallFunc_LoadoutToPersistenceDTO_Volatile_ReturnValue, const struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Stable& CallFunc_LoadoutToPersistenceDTO_Stable_ReturnValue, const struct FVAL_CharacterCustomizationLoadout& CallFunc_PersistenceDTOsToLoadout_ReturnValue, const struct FVAL_RenderHeadPreviewParameters& K2Node_MakeStruct_VAL_RenderHeadPreviewParameters, class AVAL_CharacterPreviewer* CallFunc_GetCharacterPreviewer_ReturnValue, TDelegate<void(class AVAL_CharacterPreviewer* CharacterPreviewer, const struct FGuid& RequestID, class UTextureRenderTarget2D* PreviewTexture)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_Guid_ReturnValue, class AVAL_CharacterPreviewer* CallFunc_GetCharacterPreviewer_ReturnValue_1, const struct FVAL_CharacterCustomizationLoadout& CallFunc_PersistenceDTOsToLoadout_ReturnValue_1, const struct FVAL_RenderHeadPreviewParameters& K2Node_MakeStruct_VAL_RenderHeadPreviewParameters_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlayerCharacterProfileImage_CM_C">();
	}
	static class UWBP_PlayerCharacterProfileImage_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlayerCharacterProfileImage_CM_C>();
	}
};
static_assert(alignof(UWBP_PlayerCharacterProfileImage_CM_C) == 0x000008, "Wrong alignment on UWBP_PlayerCharacterProfileImage_CM_C");
static_assert(sizeof(UWBP_PlayerCharacterProfileImage_CM_C) == 0x000C20, "Wrong size on UWBP_PlayerCharacterProfileImage_CM_C");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, UberGraphFrame) == 0x0003A0, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, Border_CharacterPortrait) == 0x0003A8, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::Border_CharacterPortrait' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, NamedSlot_PortraitOverlay) == 0x0003B0, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::NamedSlot_PortraitOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, PlatformNameToolTipsMenuAnchor) == 0x0003B8, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::PlatformNameToolTipsMenuAnchor' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, PortraitButton) == 0x0003C0, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::PortraitButton' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, SizeBox_Root) == 0x0003C8, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::SizeBox_Root' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, VALUI_BoxDropShadow_71) == 0x0003D0, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::VALUI_BoxDropShadow_71' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, WBP_AnimatedLoading) == 0x0003D8, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::WBP_AnimatedLoading' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, WBP_FocusTip_CM) == 0x0003E0, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::WBP_FocusTip_CM' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, PreviewRenderSize) == 0x0003E8, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::PreviewRenderSize' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, AccountId) == 0x0003F8, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::AccountId' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, MID_HeadPreview) == 0x000408, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::MID_HeadPreview' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, CachedMetaCharacterFormat) == 0x000410, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::CachedMetaCharacterFormat' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, bHasInitialCachedData) == 0x000B88, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::bHasInitialCachedData' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, LastRenderPreviewRequestId) == 0x000B8C, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::LastRenderPreviewRequestId' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, NoCharacterSpecifiedTexture) == 0x000BA0, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::NoCharacterSpecifiedTexture' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, OnProfileImageClicked) == 0x000BA8, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::OnProfileImageClicked' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, DebugRandomizePortrait) == 0x000BB8, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::DebugRandomizePortrait' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, OnFocus) == 0x000BC0, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::OnFocus' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, OnUnfocused) == 0x000BD0, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::OnUnfocused' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, bIsShowFocusTip) == 0x000BE0, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::bIsShowFocusTip' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, bEnablePlatformTooltips) == 0x000BE1, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::bEnablePlatformTooltips' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, UserId) == 0x000BE8, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::UserId' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerCharacterProfileImage_CM_C, PlatformTooltips) == 0x000C18, "Member 'UWBP_PlayerCharacterProfileImage_CM_C::PlatformTooltips' has a wrong offset!");

}
