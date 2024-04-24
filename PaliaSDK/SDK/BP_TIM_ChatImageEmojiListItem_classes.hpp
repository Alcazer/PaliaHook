#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TIM_ChatImageEmojiListItem

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TIM_ChatImageEmojiListItem.BP_TIM_ChatImageEmojiListItem_C
// 0x0030 (0x0058 - 0x0028)
class UBP_TIM_ChatImageEmojiListItem_C final  : public UObject
{
public:
	TSoftObjectPtr<class UTexture2D>              Image;                                             // 0x0028(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash)
	class FName                                   Name_BP_TIM_ChatImageEmojiListItem_C;              // 0x0050(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TIM_ChatImageEmojiListItem_C">();
	}
	static class UBP_TIM_ChatImageEmojiListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TIM_ChatImageEmojiListItem_C>();
	}
};
static_assert(alignof(UBP_TIM_ChatImageEmojiListItem_C) == 0x000008, "Wrong alignment on UBP_TIM_ChatImageEmojiListItem_C");
static_assert(sizeof(UBP_TIM_ChatImageEmojiListItem_C) == 0x000058, "Wrong size on UBP_TIM_ChatImageEmojiListItem_C");
static_assert(offsetof(UBP_TIM_ChatImageEmojiListItem_C, Image) == 0x000028, "Member 'UBP_TIM_ChatImageEmojiListItem_C::Image' has a wrong offset!");
static_assert(offsetof(UBP_TIM_ChatImageEmojiListItem_C, Name_BP_TIM_ChatImageEmojiListItem_C) == 0x000050, "Member 'UBP_TIM_ChatImageEmojiListItem_C::Name_BP_TIM_ChatImageEmojiListItem_C' has a wrong offset!");

}
