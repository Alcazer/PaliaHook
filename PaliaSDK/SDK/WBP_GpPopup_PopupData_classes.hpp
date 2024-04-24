#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GpPopup_PopupData

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GpPopup_PopupData.WBP_GpPopup_PopupData_C
// 0x0028 (0x02E8 - 0x02C0)
class UWBP_GpPopup_PopupData_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_RichTextBlock_Styled*            Description;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_74;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_RichTextBlock_Styled*            Title;                                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ImageWidth;                                        // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ImageHeight;                                       // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_GpPopup_PopupData(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void SetPopupData(const struct FPopupPageInfo& PageData, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GpPopup_PopupData_C">();
	}
	static class UWBP_GpPopup_PopupData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GpPopup_PopupData_C>();
	}
};
static_assert(alignof(UWBP_GpPopup_PopupData_C) == 0x000008, "Wrong alignment on UWBP_GpPopup_PopupData_C");
static_assert(sizeof(UWBP_GpPopup_PopupData_C) == 0x0002E8, "Wrong size on UWBP_GpPopup_PopupData_C");
static_assert(offsetof(UWBP_GpPopup_PopupData_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_GpPopup_PopupData_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GpPopup_PopupData_C, Description) == 0x0002C8, "Member 'UWBP_GpPopup_PopupData_C::Description' has a wrong offset!");
static_assert(offsetof(UWBP_GpPopup_PopupData_C, Image_74) == 0x0002D0, "Member 'UWBP_GpPopup_PopupData_C::Image_74' has a wrong offset!");
static_assert(offsetof(UWBP_GpPopup_PopupData_C, Title) == 0x0002D8, "Member 'UWBP_GpPopup_PopupData_C::Title' has a wrong offset!");
static_assert(offsetof(UWBP_GpPopup_PopupData_C, ImageWidth) == 0x0002E0, "Member 'UWBP_GpPopup_PopupData_C::ImageWidth' has a wrong offset!");
static_assert(offsetof(UWBP_GpPopup_PopupData_C, ImageHeight) == 0x0002E4, "Member 'UWBP_GpPopup_PopupData_C::ImageHeight' has a wrong offset!");

}
