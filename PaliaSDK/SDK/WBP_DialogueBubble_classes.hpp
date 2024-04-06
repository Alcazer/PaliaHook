#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DialogueBubble

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DialogueBubble.WBP_DialogueBubble_C
// 0x0008 (0x0280 - 0x0278)
class UWBP_DialogueBubble_C final  : public UUserWidget
{
public:
	class UVALUI_TextBlock_Styled*                DialogueText;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetDialogueText(class FText InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DialogueBubble_C">();
	}
	static class UWBP_DialogueBubble_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DialogueBubble_C>();
	}
};
static_assert(alignof(UWBP_DialogueBubble_C) == 0x000008, "Wrong alignment on UWBP_DialogueBubble_C");
static_assert(sizeof(UWBP_DialogueBubble_C) == 0x000280, "Wrong size on UWBP_DialogueBubble_C");
static_assert(offsetof(UWBP_DialogueBubble_C, DialogueText) == 0x000278, "Member 'UWBP_DialogueBubble_C::DialogueText' has a wrong offset!");

}

