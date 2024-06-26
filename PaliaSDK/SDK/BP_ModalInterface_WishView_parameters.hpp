#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ModalInterface_WishView

#include "Basic.hpp"

#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function BP_ModalInterface_WishView.BP_ModalInterface_WishView_C.InitPreOpenModalWidget
// 0x0018 (0x0018 - 0x0000)
struct BP_ModalInterface_WishView_C_InitPreOpenModalWidget final 
{
public:
	TArray<struct FWishTreeEntry>                 Wishes;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UVillagerWishDataAsset*                 VillagerWishOverride;                              // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ModalInterface_WishView_C_InitPreOpenModalWidget) == 0x000008, "Wrong alignment on BP_ModalInterface_WishView_C_InitPreOpenModalWidget");
static_assert(sizeof(BP_ModalInterface_WishView_C_InitPreOpenModalWidget) == 0x000018, "Wrong size on BP_ModalInterface_WishView_C_InitPreOpenModalWidget");
static_assert(offsetof(BP_ModalInterface_WishView_C_InitPreOpenModalWidget, Wishes) == 0x000000, "Member 'BP_ModalInterface_WishView_C_InitPreOpenModalWidget::Wishes' has a wrong offset!");
static_assert(offsetof(BP_ModalInterface_WishView_C_InitPreOpenModalWidget, VillagerWishOverride) == 0x000010, "Member 'BP_ModalInterface_WishView_C_InitPreOpenModalWidget::VillagerWishOverride' has a wrong offset!");

}

