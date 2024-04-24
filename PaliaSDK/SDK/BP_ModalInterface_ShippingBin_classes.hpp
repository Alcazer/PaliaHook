#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ModalInterface_ShippingBin

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ModalInterface_ShippingBin.BP_ModalInterface_ShippingBin_C
// 0x0000 (0x0028 - 0x0028)
class IBP_ModalInterface_ShippingBin_C final  : public IInterface
{
public:
	void InitPreOpenModalWidget(class UShippingBinComponent* ShippingBin);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ModalInterface_ShippingBin_C">();
	}
	static class IBP_ModalInterface_ShippingBin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBP_ModalInterface_ShippingBin_C>();
	}
};
static_assert(alignof(IBP_ModalInterface_ShippingBin_C) == 0x000008, "Wrong alignment on IBP_ModalInterface_ShippingBin_C");
static_assert(sizeof(IBP_ModalInterface_ShippingBin_C) == 0x000028, "Wrong size on IBP_ModalInterface_ShippingBin_C");

}
