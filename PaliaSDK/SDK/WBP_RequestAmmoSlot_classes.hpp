#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RequestAmmoSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RequestAmmoSlot.WBP_RequestAmmoSlot_C
// 0x0018 (0x02D8 - 0x02C0)
class UWBP_RequestAmmoSlot_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Empty;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Filled;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_RequestAmmoSlot(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_CustomEvent_bIsRequestActive, ESlateVisibility K2Node_Select_Default);
	void SetRequestIndication(bool bIsRequestActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RequestAmmoSlot_C">();
	}
	static class UWBP_RequestAmmoSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RequestAmmoSlot_C>();
	}
};
static_assert(alignof(UWBP_RequestAmmoSlot_C) == 0x000008, "Wrong alignment on UWBP_RequestAmmoSlot_C");
static_assert(sizeof(UWBP_RequestAmmoSlot_C) == 0x0002D8, "Wrong size on UWBP_RequestAmmoSlot_C");
static_assert(offsetof(UWBP_RequestAmmoSlot_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_RequestAmmoSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RequestAmmoSlot_C, Image_Empty) == 0x0002C8, "Member 'UWBP_RequestAmmoSlot_C::Image_Empty' has a wrong offset!");
static_assert(offsetof(UWBP_RequestAmmoSlot_C, Image_Filled) == 0x0002D0, "Member 'UWBP_RequestAmmoSlot_C::Image_Filled' has a wrong offset!");

}

