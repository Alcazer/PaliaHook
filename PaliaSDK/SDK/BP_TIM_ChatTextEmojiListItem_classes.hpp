#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TIM_ChatTextEmojiListItem

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TIM_ChatTextEmojiListItem.BP_TIM_ChatTextEmojiListItem_C
// 0x0018 (0x0040 - 0x0028)
class UBP_TIM_ChatTextEmojiListItem_C final  : public UObject
{
public:
	class FText                                   Text;                                              // 0x0028(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TIM_ChatTextEmojiListItem_C">();
	}
	static class UBP_TIM_ChatTextEmojiListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TIM_ChatTextEmojiListItem_C>();
	}
};
static_assert(alignof(UBP_TIM_ChatTextEmojiListItem_C) == 0x000008, "Wrong alignment on UBP_TIM_ChatTextEmojiListItem_C");
static_assert(sizeof(UBP_TIM_ChatTextEmojiListItem_C) == 0x000040, "Wrong size on UBP_TIM_ChatTextEmojiListItem_C");
static_assert(offsetof(UBP_TIM_ChatTextEmojiListItem_C, Text) == 0x000028, "Member 'UBP_TIM_ChatTextEmojiListItem_C::Text' has a wrong offset!");

}

