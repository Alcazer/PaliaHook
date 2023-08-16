#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function AndroidFileServer.AndroidFileServerBPLibrary.StopFileServer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bUSB                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNetwork                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAndroidFileServerBPLibrary::StopFileServer(bool InbUSB, bool InbNetwork)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AndroidFileServerBPLibrary", "StopFileServer");

	Params::UAndroidFileServerBPLibrary_StopFileServer_Params Parms{};

	Parms.bUSB = InbUSB;
	Parms.bNetwork = InbNetwork;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AndroidFileServer.AndroidFileServerBPLibrary.StartFileServer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bUSB                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNetwork                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Port                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAndroidFileServerBPLibrary::StartFileServer(bool InbUSB, bool InbNetwork, int32 InPort)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AndroidFileServerBPLibrary", "StartFileServer");

	Params::UAndroidFileServerBPLibrary_StartFileServer_Params Parms{};

	Parms.bUSB = InbUSB;
	Parms.bNetwork = InbNetwork;
	Parms.Port = InPort;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AndroidFileServer.AndroidFileServerBPLibrary.IsFileServerRunning
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EAFSActiveType          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAFSActiveType UAndroidFileServerBPLibrary::IsFileServerRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AndroidFileServerBPLibrary", "IsFileServerRunning");

	Params::UAndroidFileServerBPLibrary_IsFileServerRunning_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
