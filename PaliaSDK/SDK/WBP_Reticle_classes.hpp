#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Reticle

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Reticle.WBP_Reticle_C
// 0x0008 (0x02C8 - 0x02C0)
class UWBP_Reticle_C final  : public UUserWidget
{
public:
	class UImage*                                 Reticle;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Reticle_C">();
	}
	static class UWBP_Reticle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Reticle_C>();
	}
};
static_assert(alignof(UWBP_Reticle_C) == 0x000008, "Wrong alignment on UWBP_Reticle_C");
static_assert(sizeof(UWBP_Reticle_C) == 0x0002C8, "Wrong size on UWBP_Reticle_C");
static_assert(offsetof(UWBP_Reticle_C, Reticle) == 0x0002C0, "Member 'UWBP_Reticle_C::Reticle' has a wrong offset!");

}

