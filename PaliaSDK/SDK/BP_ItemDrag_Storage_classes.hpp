#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemDrag_Storage

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "BP_ItemDrag_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ItemDrag_Storage.BP_ItemDrag_Storage_C
// 0x0068 (0x0120 - 0x00B8)
class UBP_ItemDrag_Storage_C final  : public UBP_ItemDrag_C
{
public:
	struct FValeriaItem                           Item;                                              // 0x00B8(0x0060)(Edit, BlueprintVisible, ExposeOnSpawn)
	EStoragePoolType                              StoragePool;                                       // 0x0118(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	struct FValeriaItem GetItem() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ItemDrag_Storage_C">();
	}
	static class UBP_ItemDrag_Storage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ItemDrag_Storage_C>();
	}
};
static_assert(alignof(UBP_ItemDrag_Storage_C) == 0x000008, "Wrong alignment on UBP_ItemDrag_Storage_C");
static_assert(sizeof(UBP_ItemDrag_Storage_C) == 0x000120, "Wrong size on UBP_ItemDrag_Storage_C");
static_assert(offsetof(UBP_ItemDrag_Storage_C, Item) == 0x0000B8, "Member 'UBP_ItemDrag_Storage_C::Item' has a wrong offset!");
static_assert(offsetof(UBP_ItemDrag_Storage_C, StoragePool) == 0x000118, "Member 'UBP_ItemDrag_Storage_C::StoragePool' has a wrong offset!");

}
