#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_NotificationWidgetState

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_NotificationWidgetState.BPI_NotificationWidgetState_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_NotificationWidgetState_C final  : public IInterface
{
public:
	void SetAccomplishmentNotificationState(bool IsShow, class UUserWidget* NotificationWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_NotificationWidgetState_C">();
	}
	static class IBPI_NotificationWidgetState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_NotificationWidgetState_C>();
	}
};
static_assert(alignof(IBPI_NotificationWidgetState_C) == 0x000008, "Wrong alignment on IBPI_NotificationWidgetState_C");
static_assert(sizeof(IBPI_NotificationWidgetState_C) == 0x000028, "Wrong size on IBPI_NotificationWidgetState_C");

}
