#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PetImage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PetImage.WBP_PetImage_C
// 0x0070 (0x0330 - 0x02C0)
class UWBP_PetImage_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_Border_Styled*                   BorderStyled_PetImage;                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PetIconImage;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_PetName;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet> PetItem;                                           // 0x02E0(0x0028)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              Size;                                              // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Show_Pet_Name;                                     // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4199[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVAL_CharacterCustomizationItem_Pet*    Loaded_Pet;                                        // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVALUI_BorderStyle*                     PetBorderStyle;                                    // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Completed_0917B935427A43D1084B4EACCBAF2C67(const TSet<class UVAL_CharacterCustomizationItemBase*>& LoadedItems);
	void Construct();
	void ExecuteUbergraph_WBP_PetImage(int32 EntryPoint, const TSet<class UVAL_CharacterCustomizationItemBase*>& K2Node_CustomEvent_LoadedItems, const TSet<class UVAL_CharacterCustomizationItemBase*>& Temp_object_Variable, EVAL_CharacterBodyType Temp_byte_Variable, TArray<class UVAL_CharacterCustomizationItemBase*>& CallFunc_Set_ToArray_Result, class UVAL_CharacterCustomizationItemBase* CallFunc_Array_Get_Item, TDelegate<void(const TSet<class UVAL_CharacterCustomizationItemBase*>& LoadedItems)> K2Node_CreateDelegate_OutputDelegate, class UVAL_CharacterCustomizationItem_Pet* K2Node_DynamicCast_AsVAL_Character_Customization_Item_Pet, bool K2Node_DynamicCast_bSuccess, TSet<TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase>>& K2Node_MakeSet_Set, class UVAL_AsyncAction_LoadCharacterCustomizationItems* CallFunc_LoadCharacterCustomizationItems_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_TryGetPetUIDisplayIcon_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_IsDesignTime);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PetImage_C">();
	}
	static class UWBP_PetImage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PetImage_C>();
	}
};
static_assert(alignof(UWBP_PetImage_C) == 0x000008, "Wrong alignment on UWBP_PetImage_C");
static_assert(sizeof(UWBP_PetImage_C) == 0x000330, "Wrong size on UWBP_PetImage_C");
static_assert(offsetof(UWBP_PetImage_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_PetImage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PetImage_C, BorderStyled_PetImage) == 0x0002C8, "Member 'UWBP_PetImage_C::BorderStyled_PetImage' has a wrong offset!");
static_assert(offsetof(UWBP_PetImage_C, PetIconImage) == 0x0002D0, "Member 'UWBP_PetImage_C::PetIconImage' has a wrong offset!");
static_assert(offsetof(UWBP_PetImage_C, TextBlock_PetName) == 0x0002D8, "Member 'UWBP_PetImage_C::TextBlock_PetName' has a wrong offset!");
static_assert(offsetof(UWBP_PetImage_C, PetItem) == 0x0002E0, "Member 'UWBP_PetImage_C::PetItem' has a wrong offset!");
static_assert(offsetof(UWBP_PetImage_C, Size) == 0x000308, "Member 'UWBP_PetImage_C::Size' has a wrong offset!");
static_assert(offsetof(UWBP_PetImage_C, Show_Pet_Name) == 0x000318, "Member 'UWBP_PetImage_C::Show_Pet_Name' has a wrong offset!");
static_assert(offsetof(UWBP_PetImage_C, Loaded_Pet) == 0x000320, "Member 'UWBP_PetImage_C::Loaded_Pet' has a wrong offset!");
static_assert(offsetof(UWBP_PetImage_C, PetBorderStyle) == 0x000328, "Member 'UWBP_PetImage_C::PetBorderStyle' has a wrong offset!");

}

