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

// Function WBP_PlatformPlayerNameToolTip.WBP_PlatformPlayerNameToolTip_C.ExecuteUbergraph_WBP_PlatformPlayerNameToolTip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPresenceManager*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPresence                        CallFunc_GetPresenceForUserId_ReturnValue              ()
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()
// class FText                             CallFunc_Conv_StringToText_ReturnValue_1               ()
// bool                                    CallFunc_IsEmpty_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlatformPlayerNameToolTip_C::ExecuteUbergraph_WBP_PlatformPlayerNameToolTip(int32 EntryPoint, class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FPresence& CallFunc_GetPresenceForUserId_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlatformPlayerNameToolTip_C", "ExecuteUbergraph_WBP_PlatformPlayerNameToolTip");

	Params::WBP_PlatformPlayerNameToolTip_C_ExecuteUbergraph_WBP_PlatformPlayerNameToolTip Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetPresenceForUserId_ReturnValue = std::move(CallFunc_GetPresenceForUserId_ReturnValue);
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

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

}

