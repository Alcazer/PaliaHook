#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CommonInputActionWidget

#include "Basic.hpp"

#include "KeyRebinding_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CommonInputActionWidget.WBP_CommonInputActionWidget_C
// 0x0000 (0x02F0 - 0x02F0)
class UWBP_CommonInputActionWidget_C final  : public UCommonInputActionWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CommonInputActionWidget_C">();
	}
	static class UWBP_CommonInputActionWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommonInputActionWidget_C>();
	}
};
static_assert(alignof(UWBP_CommonInputActionWidget_C) == 0x000008, "Wrong alignment on UWBP_CommonInputActionWidget_C");
static_assert(sizeof(UWBP_CommonInputActionWidget_C) == 0x0002F0, "Wrong size on UWBP_CommonInputActionWidget_C");

}
