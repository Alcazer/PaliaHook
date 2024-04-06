#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_StoreButton

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "Engine_structs.hpp"
#include "ValeriaUI_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StoreButton.WBP_StoreButton_C
// 0x00A8 (0x0348 - 0x02A0)
class UWBP_StoreButton_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_Border_Styled*                   NotificationBadge;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_Badge;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_Icon_CM_C*                  WBP_Button_Icon_CM;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             PrimaryButtonClicked;                              // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVALUI_PremiumStorefrontResponse       Premium_Storefront_Response;                       // 0x02D0(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__WBP_StoreButton_WBP_Button_Icon_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void DisplayNewStorePip(struct FVALUI_PremiumStorefrontResponse& PremiumStorefrontResponse, bool IsNewStorefront, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool CallFunc_NotEqual_DateTimeDateTime_ReturnValue, ESlateVisibility K2Node_Select_Default);
	void ExecuteUbergraph_WBP_StoreButton(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FVALUI_PremiumStorefrontResponse& K2Node_CustomEvent_Response, TDelegate<void(const struct FVALUI_PremiumStorefrontResponse& Response)> K2Node_CreateDelegate_OutputDelegate_1, const struct FVALUI_PremiumStorefrontResponse& Temp_struct_Variable, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UVAL_AsyncActionRequestStorefront* CallFunc_RequestStorefront_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void Failure_67E2257B48A4DF88EAC2B38D7C6E43FC();
	void PrimaryButtonClicked__DelegateSignature();
	void Successful_67E2257B48A4DF88EAC2B38D7C6E43FC(const struct FVALUI_PremiumStorefrontResponse& Response);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StoreButton_C">();
	}
	static class UWBP_StoreButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StoreButton_C>();
	}
};
static_assert(alignof(UWBP_StoreButton_C) == 0x000008, "Wrong alignment on UWBP_StoreButton_C");
static_assert(sizeof(UWBP_StoreButton_C) == 0x000348, "Wrong size on UWBP_StoreButton_C");
static_assert(offsetof(UWBP_StoreButton_C, UberGraphFrame) == 0x0002A0, "Member 'UWBP_StoreButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StoreButton_C, NotificationBadge) == 0x0002A8, "Member 'UWBP_StoreButton_C::NotificationBadge' has a wrong offset!");
static_assert(offsetof(UWBP_StoreButton_C, TextBlock_Badge) == 0x0002B0, "Member 'UWBP_StoreButton_C::TextBlock_Badge' has a wrong offset!");
static_assert(offsetof(UWBP_StoreButton_C, WBP_Button_Icon_CM) == 0x0002B8, "Member 'UWBP_StoreButton_C::WBP_Button_Icon_CM' has a wrong offset!");
static_assert(offsetof(UWBP_StoreButton_C, PrimaryButtonClicked) == 0x0002C0, "Member 'UWBP_StoreButton_C::PrimaryButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_StoreButton_C, Premium_Storefront_Response) == 0x0002D0, "Member 'UWBP_StoreButton_C::Premium_Storefront_Response' has a wrong offset!");

}

