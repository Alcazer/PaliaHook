#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlatformPlayerNameToolTip

#include "Basic.hpp"

#include "WBP_PlatformPlayerNameToolTip_classes.hpp"
#include "WBP_PlatformPlayerNameToolTip_parameters.hpp"


namespace SDK
{

// Function WBP_PlatformPlayerNameToolTip.WBP_PlatformPlayerNameToolTip_C.UpdatePlatformData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 NetId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlatformPlayerNameToolTip_C::UpdatePlatformData(const struct FUniqueNetIdRepl& NetId, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerNameToolTip_C", "UpdatePlatformData");

	Params::WBP_PlatformPlayerNameToolTip_C_UpdatePlatformData Parms{};

	Parms.NetId = std::move(NetId);
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlatformPlayerNameToolTip.WBP_PlatformPlayerNameToolTip_C.Refresh Platform Data
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlatformPlayerNameToolTip_C::Refresh_Platform_Data()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerNameToolTip_C", "Refresh Platform Data");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlatformPlayerNameToolTip.WBP_PlatformPlayerNameToolTip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlatformPlayerNameToolTip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerNameToolTip_C", "PreConstruct");

	Params::WBP_PlatformPlayerNameToolTip_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlatformPlayerNameToolTip.WBP_PlatformPlayerNameToolTip_C.ExecuteUbergraph_WBP_PlatformPlayerNameToolTip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERedirectsPlatform                      Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Temp_text_Variable                                     ()
// class FText                             Temp_text_Variable_1                                   ()
// class FText                             Temp_text_Variable_2                                   ()
// class FText                             Temp_text_Variable_3                                   ()
// class FText                             Temp_text_Variable_4                                   ()
// class FText                             Temp_text_Variable_5                                   ()
// class FText                             Temp_text_Variable_6                                   ()
// class FText                             Temp_text_Variable_7                                   ()
// class FText                             Temp_text_Variable_8                                   ()
// class UPresenceManager*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPresence                        CallFunc_GetPresenceForUserId_ReturnValue              ()
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()
// bool                                    CallFunc_IsEmpty_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue_1               ()
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERedirectsPlatform                      CallFunc_GetPlatformType_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             K2Node_Select_Default                                  ()

void UWBP_PlatformPlayerNameToolTip_C::ExecuteUbergraph_WBP_PlatformPlayerNameToolTip(int32 EntryPoint, bool K2Node_Event_IsDesignTime, ERedirectsPlatform Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FPresence& CallFunc_GetPresenceForUserId_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerNameToolTip_C", "ExecuteUbergraph_WBP_PlatformPlayerNameToolTip");

	Params::WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetPresenceForUserId_ReturnValue = std::move(CallFunc_GetPresenceForUserId_ReturnValue);
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetPlatformType_ReturnValue = CallFunc_GetPlatformType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlatformPlayerNameToolTip.WBP_PlatformPlayerNameToolTip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlatformPlayerNameToolTip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerNameToolTip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

