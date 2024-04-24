#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LockedRow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LockedRow.WBP_LockedRow_C
// 0x0020 (0x02E0 - 0x02C0)
class UWBP_LockedRow_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               SizeBox_Background;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              BackgroundImageSize;                               // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_LockedRow(int32 EntryPoint, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LockedRow_C">();
	}
	static class UWBP_LockedRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LockedRow_C>();
	}
};
static_assert(alignof(UWBP_LockedRow_C) == 0x000008, "Wrong alignment on UWBP_LockedRow_C");
static_assert(sizeof(UWBP_LockedRow_C) == 0x0002E0, "Wrong size on UWBP_LockedRow_C");
static_assert(offsetof(UWBP_LockedRow_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_LockedRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_LockedRow_C, SizeBox_Background) == 0x0002C8, "Member 'UWBP_LockedRow_C::SizeBox_Background' has a wrong offset!");
static_assert(offsetof(UWBP_LockedRow_C, BackgroundImageSize) == 0x0002D0, "Member 'UWBP_LockedRow_C::BackgroundImageSize' has a wrong offset!");

}

