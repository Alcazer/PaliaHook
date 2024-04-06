#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Item_CM

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Item_CM.WBP_Item_CM_C
// 0x0110 (0x03B0 - 0x02A0)
class UWBP_Item_CM_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Icon_Consumable;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Gift_AlreadyReceived;                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Gift_Like;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Gift_Love;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ItemType;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ItemVariant;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_QualityStar;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                            MenuAnchor_Tooltip;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Root;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_WaterAmount;                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_Amount;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemContext_C*                     WBP_ItemContext;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemUseDetails_C*                  WBP_ItemUseDetails;                                // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ItemStyle*                       Style;                                             // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FValeriaItem                           Item;                                              // 0x0318(0x0068)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         TotalAmount;                                       // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         LastSetAvailableAmount;                            // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWatchingForQuests;                                // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWatchingForAvailableAmount;                       // 0x0389(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bVisible;                                          // 0x038A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CE6[0x5];                                     // 0x038B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UVAL_ItemTypeDefinitionAsset*           CurrentItemType;                                   // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         RecipeConfigId;                                    // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CE7[0x4];                                     // 0x039C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ItemTooltip_C*                     ItemTooltip;                                       // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        BottomPadding;                                     // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CanOpenTooltip(bool* CanOpen, bool CallFunc_BooleanAND_ReturnValue);
	void CloseTooltip();
	void Construct();
	void ExecuteUbergraph_WBP_Item_CM(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UVALUI_TextBlockStyle* K2Node_CustomEvent_NewStyle, double K2Node_CustomEvent_BottomPadding, const struct FGeometry& K2Node_Event_MyGeometry, struct FPointerEvent& K2Node_Event_MouseEvent_1, struct FPointerEvent& K2Node_Event_MouseEvent, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemVariantConfig& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TSoftObjectPtr<class UVAL_TintAsset> CallFunc_GetTintFromPersistID_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_TintAsset* K2Node_DynamicCast_AsTint_Asset, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UObject* Temp_object_Variable, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_2, class UObject* K2Node_CustomEvent_Loaded);
	void GetItem(struct FValeriaItem* Param_Item);
	void GetPlayerItemAmount(int32* Amount, struct FStarQualityConstraint& Temp_struct_Variable, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue, int32 CallFunc_K2_GetItemAmountByType_ReturnValue);
	class UUserWidget* GetTooltipWidget();
	void HandlePlayerInventoryChanged(class UInventoryComponent* Inventory, struct FStarQualityConstraint& Temp_struct_Variable, int32 CallFunc_K2_GetItemAmountByType_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void OnLoaded_0E55E99A47DBEB05B2AB9C865F838F03(class UObject* Loaded);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OpenTooltip(bool CallFunc_CanOpenTooltip_CanOpen);
	void SetItem(const struct FValeriaItem& NewItem, bool CallFunc_ItemEquals_ReturnValue);
	void SetRecipeConfigId(int32 Param_RecipeConfigId);
	void SetStyle(class UVALUI_ItemStyle* NewStyle, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void SetTextStyle(class UVALUI_TextBlockStyle* NewStyle, double Param_BottomPadding);
	void SetTotalAmount(int32 NewTotalAmount);
	void UpdateAmmo();
	void UpdateAmount(int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_GetPlayerItemAmount_Amount, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int64 CallFunc_Conv_IntToInt64_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, int64 CallFunc_Conv_IntToInt64_ReturnValue_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Format_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateCapacity(float CallFunc_GetWaterPercent_percent, bool CallFunc_GetWaterPercent_ReturnValue);
	void UpdateConsumableFlag(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
	void UpdateDurability();
	void UpdateItem(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool Temp_bool_Variable, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_NotEqual_SoftObjectReference_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_UpdateVisibility_bAnythingVisible, ESlateVisibility K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void UpdateMainIcon(bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void UpdateQualityIcon(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Greater_ByteByte_ReturnValue, ESlateVisibility K2Node_Select_Default);
	void UpdateStyle(const struct FMargin& OutlineFontPadding, const struct FMargin& RegularFontPadding, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, const class FString& CallFunc_GetPathName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, ESlateVisibility Temp_byte_Variable_4, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, ESlateVisibility K2Node_Select_Default_2, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TDelegate<void(class UInventoryComponent* Inventory)> K2Node_CreateDelegate_OutputDelegate, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_1, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_1, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, float K2Node_MakeStruct_Bottom_ImplicitCast);
	void UpdateVariantIcon();
	void UpdateVisibility(bool* bAnythingVisible, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Greater_IntInt_ReturnValue, double K2Node_Select_Default, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Item_CM_C">();
	}
	static class UWBP_Item_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Item_CM_C>();
	}
};
static_assert(alignof(UWBP_Item_CM_C) == 0x000008, "Wrong alignment on UWBP_Item_CM_C");
static_assert(sizeof(UWBP_Item_CM_C) == 0x0003B0, "Wrong size on UWBP_Item_CM_C");
static_assert(offsetof(UWBP_Item_CM_C, UberGraphFrame) == 0x0002A0, "Member 'UWBP_Item_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, Icon_Consumable) == 0x0002A8, "Member 'UWBP_Item_CM_C::Icon_Consumable' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, Icon_Gift_AlreadyReceived) == 0x0002B0, "Member 'UWBP_Item_CM_C::Icon_Gift_AlreadyReceived' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, Icon_Gift_Like) == 0x0002B8, "Member 'UWBP_Item_CM_C::Icon_Gift_Like' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, Icon_Gift_Love) == 0x0002C0, "Member 'UWBP_Item_CM_C::Icon_Gift_Love' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, Image_ItemType) == 0x0002C8, "Member 'UWBP_Item_CM_C::Image_ItemType' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, Image_ItemVariant) == 0x0002D0, "Member 'UWBP_Item_CM_C::Image_ItemVariant' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, Image_QualityStar) == 0x0002D8, "Member 'UWBP_Item_CM_C::Image_QualityStar' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, MenuAnchor_Tooltip) == 0x0002E0, "Member 'UWBP_Item_CM_C::MenuAnchor_Tooltip' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, Overlay_Root) == 0x0002E8, "Member 'UWBP_Item_CM_C::Overlay_Root' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, ProgressBar_WaterAmount) == 0x0002F0, "Member 'UWBP_Item_CM_C::ProgressBar_WaterAmount' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, Text_Amount) == 0x0002F8, "Member 'UWBP_Item_CM_C::Text_Amount' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, WBP_ItemContext) == 0x000300, "Member 'UWBP_Item_CM_C::WBP_ItemContext' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, WBP_ItemUseDetails) == 0x000308, "Member 'UWBP_Item_CM_C::WBP_ItemUseDetails' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, Style) == 0x000310, "Member 'UWBP_Item_CM_C::Style' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, Item) == 0x000318, "Member 'UWBP_Item_CM_C::Item' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, TotalAmount) == 0x000380, "Member 'UWBP_Item_CM_C::TotalAmount' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, LastSetAvailableAmount) == 0x000384, "Member 'UWBP_Item_CM_C::LastSetAvailableAmount' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, bWatchingForQuests) == 0x000388, "Member 'UWBP_Item_CM_C::bWatchingForQuests' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, bWatchingForAvailableAmount) == 0x000389, "Member 'UWBP_Item_CM_C::bWatchingForAvailableAmount' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, bVisible) == 0x00038A, "Member 'UWBP_Item_CM_C::bVisible' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, CurrentItemType) == 0x000390, "Member 'UWBP_Item_CM_C::CurrentItemType' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, RecipeConfigId) == 0x000398, "Member 'UWBP_Item_CM_C::RecipeConfigId' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, ItemTooltip) == 0x0003A0, "Member 'UWBP_Item_CM_C::ItemTooltip' has a wrong offset!");
static_assert(offsetof(UWBP_Item_CM_C, BottomPadding) == 0x0003A8, "Member 'UWBP_Item_CM_C::BottomPadding' has a wrong offset!");

}

