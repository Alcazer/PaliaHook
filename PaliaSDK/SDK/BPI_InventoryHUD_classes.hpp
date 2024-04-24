#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_InventoryHUD

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_InventoryHUD.BPI_InventoryHUD_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_InventoryHUD_C final  : public IInterface
{
public:
	void SetRenderStudio(class AVAL_CharacterRenderStudio* RenderStudio);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_InventoryHUD_C">();
	}
	static class IBPI_InventoryHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_InventoryHUD_C>();
	}
};
static_assert(alignof(IBPI_InventoryHUD_C) == 0x000008, "Wrong alignment on IBPI_InventoryHUD_C");
static_assert(sizeof(IBPI_InventoryHUD_C) == 0x000028, "Wrong size on IBPI_InventoryHUD_C");

}
