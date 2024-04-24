#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharacterActionItem_Console

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharacterActionItem_Console.WBP_CharacterActionItem_Console_C
// 0x0180 (0x0440 - 0x02C0)
class UWBP_CharacterActionItem_Console_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 AmmoIcon;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              Button_CM;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IADescription_C*                   IADescriptionRight;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Image_Styled*                    Img_Background;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Ammo;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_Ammo;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bLeftSideTips;                                     // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowAmmo;                                         // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPressed;                                          // 0x0302(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FA0[0x5];                                     // 0x0303(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             ActionIconTexure2D;                                // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPressedEvent;                                    // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnReleasedEvent;                                   // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTexture2D*                             DefaultActionIcon;                                 // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             AmmoIconTexture2D;                                 // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVALUI_ImageStyle*                      DefaultActionBGPressedStyle;                       // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVALUI_ImageStyle*                      DefaultActionBGReleasedStyle;                      // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           DefaultIADescription;                              // 0x0350(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVALUI_ImageStyle*                      ActionBGPressedStyle;                              // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVALUI_ImageStyle*                      ActionBGPreleasedStyle;                            // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsKeepState;                                       // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRotationMirrorReversal;                          // 0x0369(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FA1[0x6];                                     // 0x036A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputMappingContext*                   DefaultIMCFallback;                                // 0x0370(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FValeriaItem                           LastAmmoItem;                                      // 0x0378(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          LastShowAmount;                                    // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FA2[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FValeriaItem                           LastToolItem;                                      // 0x03E0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__WBP_CharacterActionItem_Console_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CharacterActionItem_Console_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void ExecuteUbergraph_WBP_CharacterActionItem_Console(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasEquippedItem_ReturnValue);
	void Init_Character_Action(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
	void Init_Key_Prompt_Direction();
	void IsFishingRodWithNoBait(const struct FValeriaItem& AmmoItem, const struct FValeriaItem& ToolItem, bool* IsNoBait, bool IsFishingRodTool, bool CallFunc_ItemIsEmpty_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFishingRod_ReturnValue, bool CallFunc_ItemIsEmpty_ReturnValue_1);
	void OnPressedEvent__DelegateSignature();
	void OnReleasedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void RefreshAmmoData();
	void Set_Action_Style(class UTexture2D* Icon, class UVALUI_ImageStyle* BackgroundReleaseStyle, class UVALUI_ImageStyle* BackgroundPressStyle, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void Update_Action_Style(class UVALUI_ImageStyle* NewLocalVar, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UVALUI_ImageStyle* K2Node_Select_Default);
	void Update_Style_based_On_State();
	void UpdateActionIcon(TSoftObjectPtr<class UTexture2D> Icon, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
	void UpdateAmmoData(const struct FValeriaItem& AmmoItem, bool bShowAmount, const struct FValeriaItem& ToolItem, const struct FValeriaItem& AmmoItemToDisplay, bool ShowAmmoNum, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsFishingRodWithNoBait_IsNoBait, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ContainsOneTag_ReturnValue, bool CallFunc_ContainsOneTag_ReturnValue_1, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UFishingComponent* CallFunc_GetFishing_ReturnValue, const struct FValeriaItem& CallFunc_GetNoBaitSelectedItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ItemIsEmpty_ReturnValue, bool CallFunc_ItemIsEmpty_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition_1, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility K2Node_Select_Default_1, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_2);
	void UpdateAmmoIcon(TSoftObjectPtr<class UTexture2D> Icon, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
	void UpdateAmmoStyle();
	void UpdatePressedStyle();
	void UpdateReleasedStyle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharacterActionItem_Console_C">();
	}
	static class UWBP_CharacterActionItem_Console_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharacterActionItem_Console_C>();
	}
};
static_assert(alignof(UWBP_CharacterActionItem_Console_C) == 0x000008, "Wrong alignment on UWBP_CharacterActionItem_Console_C");
static_assert(sizeof(UWBP_CharacterActionItem_Console_C) == 0x000440, "Wrong size on UWBP_CharacterActionItem_Console_C");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_CharacterActionItem_Console_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, AmmoIcon) == 0x0002C8, "Member 'UWBP_CharacterActionItem_Console_C::AmmoIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, Button_CM) == 0x0002D0, "Member 'UWBP_CharacterActionItem_Console_C::Button_CM' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, IADescriptionRight) == 0x0002D8, "Member 'UWBP_CharacterActionItem_Console_C::IADescriptionRight' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, Image_Icon) == 0x0002E0, "Member 'UWBP_CharacterActionItem_Console_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, Img_Background) == 0x0002E8, "Member 'UWBP_CharacterActionItem_Console_C::Img_Background' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, Overlay_Ammo) == 0x0002F0, "Member 'UWBP_CharacterActionItem_Console_C::Overlay_Ammo' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, Text_Ammo) == 0x0002F8, "Member 'UWBP_CharacterActionItem_Console_C::Text_Ammo' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, bLeftSideTips) == 0x000300, "Member 'UWBP_CharacterActionItem_Console_C::bLeftSideTips' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, bShowAmmo) == 0x000301, "Member 'UWBP_CharacterActionItem_Console_C::bShowAmmo' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, bPressed) == 0x000302, "Member 'UWBP_CharacterActionItem_Console_C::bPressed' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, ActionIconTexure2D) == 0x000308, "Member 'UWBP_CharacterActionItem_Console_C::ActionIconTexure2D' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, OnPressedEvent) == 0x000310, "Member 'UWBP_CharacterActionItem_Console_C::OnPressedEvent' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, OnReleasedEvent) == 0x000320, "Member 'UWBP_CharacterActionItem_Console_C::OnReleasedEvent' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, DefaultActionIcon) == 0x000330, "Member 'UWBP_CharacterActionItem_Console_C::DefaultActionIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, AmmoIconTexture2D) == 0x000338, "Member 'UWBP_CharacterActionItem_Console_C::AmmoIconTexture2D' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, DefaultActionBGPressedStyle) == 0x000340, "Member 'UWBP_CharacterActionItem_Console_C::DefaultActionBGPressedStyle' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, DefaultActionBGReleasedStyle) == 0x000348, "Member 'UWBP_CharacterActionItem_Console_C::DefaultActionBGReleasedStyle' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, DefaultIADescription) == 0x000350, "Member 'UWBP_CharacterActionItem_Console_C::DefaultIADescription' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, ActionBGPressedStyle) == 0x000358, "Member 'UWBP_CharacterActionItem_Console_C::ActionBGPressedStyle' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, ActionBGPreleasedStyle) == 0x000360, "Member 'UWBP_CharacterActionItem_Console_C::ActionBGPreleasedStyle' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, IsKeepState) == 0x000368, "Member 'UWBP_CharacterActionItem_Console_C::IsKeepState' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, IsRotationMirrorReversal) == 0x000369, "Member 'UWBP_CharacterActionItem_Console_C::IsRotationMirrorReversal' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, DefaultIMCFallback) == 0x000370, "Member 'UWBP_CharacterActionItem_Console_C::DefaultIMCFallback' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, LastAmmoItem) == 0x000378, "Member 'UWBP_CharacterActionItem_Console_C::LastAmmoItem' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, LastShowAmount) == 0x0003D8, "Member 'UWBP_CharacterActionItem_Console_C::LastShowAmount' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterActionItem_Console_C, LastToolItem) == 0x0003E0, "Member 'UWBP_CharacterActionItem_Console_C::LastToolItem' has a wrong offset!");

}

