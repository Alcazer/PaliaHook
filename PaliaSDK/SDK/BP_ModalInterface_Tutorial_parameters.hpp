#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ModalInterface_Tutorial

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_ModalInterface_Tutorial.BP_ModalInterface_Tutorial_C.InitPreOpenModalWidget
// 0x0038 (0x0038 - 0x0000)
struct BP_ModalInterface_Tutorial_C_InitPreOpenModalWidget final 
{
public:
	EHorizontalAlignment                          ContentHAlign;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVerticalAlignment                            ContentVAlign;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C1B[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   HeaderText;                                        // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class UWidget*>                        PageWidgets;                                       // 0x0020(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          HideTutorialOptOut;                                // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ModalInterface_Tutorial_C_InitPreOpenModalWidget) == 0x000008, "Wrong alignment on BP_ModalInterface_Tutorial_C_InitPreOpenModalWidget");
static_assert(sizeof(BP_ModalInterface_Tutorial_C_InitPreOpenModalWidget) == 0x000038, "Wrong size on BP_ModalInterface_Tutorial_C_InitPreOpenModalWidget");
static_assert(offsetof(BP_ModalInterface_Tutorial_C_InitPreOpenModalWidget, ContentHAlign) == 0x000000, "Member 'BP_ModalInterface_Tutorial_C_InitPreOpenModalWidget::ContentHAlign' has a wrong offset!");
static_assert(offsetof(BP_ModalInterface_Tutorial_C_InitPreOpenModalWidget, ContentVAlign) == 0x000001, "Member 'BP_ModalInterface_Tutorial_C_InitPreOpenModalWidget::ContentVAlign' has a wrong offset!");
static_assert(offsetof(BP_ModalInterface_Tutorial_C_InitPreOpenModalWidget, HeaderText) == 0x000008, "Member 'BP_ModalInterface_Tutorial_C_InitPreOpenModalWidget::HeaderText' has a wrong offset!");
static_assert(offsetof(BP_ModalInterface_Tutorial_C_InitPreOpenModalWidget, PageWidgets) == 0x000020, "Member 'BP_ModalInterface_Tutorial_C_InitPreOpenModalWidget::PageWidgets' has a wrong offset!");
static_assert(offsetof(BP_ModalInterface_Tutorial_C_InitPreOpenModalWidget, HideTutorialOptOut) == 0x000030, "Member 'BP_ModalInterface_Tutorial_C_InitPreOpenModalWidget::HideTutorialOptOut' has a wrong offset!");

}
