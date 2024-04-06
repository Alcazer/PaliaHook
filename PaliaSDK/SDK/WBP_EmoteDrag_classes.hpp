#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EmoteDrag

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_EmoteDrag.WBP_EmoteDrag_C
// 0x0048 (0x02C0 - 0x0278)
class UWBP_EmoteDrag_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 IMG_EmoteIcon;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0288(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UUserWidget*                            EmoteReference;                                    // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Construct();
	void ExecuteUbergraph_WBP_EmoteDrag(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject);
	void OnListItemObjectSet(class UObject* ListItemObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_EmoteDrag_C">();
	}
	static class UWBP_EmoteDrag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EmoteDrag_C>();
	}
};
static_assert(alignof(UWBP_EmoteDrag_C) == 0x000008, "Wrong alignment on UWBP_EmoteDrag_C");
static_assert(sizeof(UWBP_EmoteDrag_C) == 0x0002C0, "Wrong size on UWBP_EmoteDrag_C");
static_assert(offsetof(UWBP_EmoteDrag_C, UberGraphFrame) == 0x000278, "Member 'UWBP_EmoteDrag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteDrag_C, IMG_EmoteIcon) == 0x000280, "Member 'UWBP_EmoteDrag_C::IMG_EmoteIcon' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteDrag_C, Texture) == 0x000288, "Member 'UWBP_EmoteDrag_C::Texture' has a wrong offset!");
static_assert(offsetof(UWBP_EmoteDrag_C, EmoteReference) == 0x0002B8, "Member 'UWBP_EmoteDrag_C::EmoteReference' has a wrong offset!");

}

