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


// Function Agones.AgonesComponent.WatchGameServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 WatchDelegate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::WatchGameServer(FDelegateProperty_ InWatchDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "WatchGameServer");

	Params::UAgonesComponent_WatchGameServer_Params Parms{};

	Parms.WatchDelegate = InWatchDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.Shutdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 SuccessDelegate                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ErrorDelegate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::Shutdown(FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "Shutdown");

	Params::UAgonesComponent_Shutdown_Params Parms{};

	Parms.SuccessDelegate = InSuccessDelegate;
	Parms.ErrorDelegate = InErrorDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.SetPlayerCapacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 SuccessDelegate                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ErrorDelegate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::SetPlayerCapacity(int64 InCount, FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "SetPlayerCapacity");

	Params::UAgonesComponent_SetPlayerCapacity_Params Parms{};

	Parms.Count = InCount;
	Parms.SuccessDelegate = InSuccessDelegate;
	Parms.ErrorDelegate = InErrorDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.SetLabel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 SuccessDelegate                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ErrorDelegate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::SetLabel(const class FString& InKey, const class FString& InValue, FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "SetLabel");

	Params::UAgonesComponent_SetLabel_Params Parms{};

	Parms.Key = InKey;
	Parms.Value = InValue;
	Parms.SuccessDelegate = InSuccessDelegate;
	Parms.ErrorDelegate = InErrorDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.SetAnnotation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 SuccessDelegate                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ErrorDelegate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::SetAnnotation(const class FString& InKey, const class FString& InValue, FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "SetAnnotation");

	Params::UAgonesComponent_SetAnnotation_Params Parms{};

	Parms.Key = InKey;
	Parms.Value = InValue;
	Parms.SuccessDelegate = InSuccessDelegate;
	Parms.ErrorDelegate = InErrorDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.Reserve
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              Seconds                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 SuccessDelegate                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ErrorDelegate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::Reserve(int64 InSeconds, FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "Reserve");

	Params::UAgonesComponent_Reserve_Params Parms{};

	Parms.Seconds = InSeconds;
	Parms.SuccessDelegate = InSuccessDelegate;
	Parms.ErrorDelegate = InErrorDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.Ready
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 SuccessDelegate                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ErrorDelegate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::Ready(FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "Ready");

	Params::UAgonesComponent_Ready_Params Parms{};

	Parms.SuccessDelegate = InSuccessDelegate;
	Parms.ErrorDelegate = InErrorDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.PlayerDisconnect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PlayerId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 SuccessDelegate                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ErrorDelegate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::PlayerDisconnect(const class FString& InPlayerId, FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "PlayerDisconnect");

	Params::UAgonesComponent_PlayerDisconnect_Params Parms{};

	Parms.PlayerId = InPlayerId;
	Parms.SuccessDelegate = InSuccessDelegate;
	Parms.ErrorDelegate = InErrorDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.PlayerConnect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PlayerId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 SuccessDelegate                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ErrorDelegate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::PlayerConnect(const class FString& InPlayerId, FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "PlayerConnect");

	Params::UAgonesComponent_PlayerConnect_Params Parms{};

	Parms.PlayerId = InPlayerId;
	Parms.SuccessDelegate = InSuccessDelegate;
	Parms.ErrorDelegate = InErrorDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.IsPlayerConnected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PlayerId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 SuccessDelegate                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ErrorDelegate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::IsPlayerConnected(const class FString& InPlayerId, FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "IsPlayerConnected");

	Params::UAgonesComponent_IsPlayerConnected_Params Parms{};

	Parms.PlayerId = InPlayerId;
	Parms.SuccessDelegate = InSuccessDelegate;
	Parms.ErrorDelegate = InErrorDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.HealthPing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              RateSeconds                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::HealthPing(float InRateSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "HealthPing");

	Params::UAgonesComponent_HealthPing_Params Parms{};

	Parms.RateSeconds = InRateSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.Health
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 SuccessDelegate                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ErrorDelegate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::Health(FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "Health");

	Params::UAgonesComponent_Health_Params Parms{};

	Parms.SuccessDelegate = InSuccessDelegate;
	Parms.ErrorDelegate = InErrorDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.GetPlayerCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 SuccessDelegate                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ErrorDelegate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::GetPlayerCount(FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "GetPlayerCount");

	Params::UAgonesComponent_GetPlayerCount_Params Parms{};

	Parms.SuccessDelegate = InSuccessDelegate;
	Parms.ErrorDelegate = InErrorDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.GetPlayerCapacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 SuccessDelegate                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ErrorDelegate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::GetPlayerCapacity(FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "GetPlayerCapacity");

	Params::UAgonesComponent_GetPlayerCapacity_Params Parms{};

	Parms.SuccessDelegate = InSuccessDelegate;
	Parms.ErrorDelegate = InErrorDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.GetConnectedPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 SuccessDelegate                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ErrorDelegate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::GetConnectedPlayers(FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "GetConnectedPlayers");

	Params::UAgonesComponent_GetConnectedPlayers_Params Parms{};

	Parms.SuccessDelegate = InSuccessDelegate;
	Parms.ErrorDelegate = InErrorDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.GameServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 SuccessDelegate                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ErrorDelegate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::GameServer(FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "GameServer");

	Params::UAgonesComponent_GameServer_Params Parms{};

	Parms.SuccessDelegate = InSuccessDelegate;
	Parms.ErrorDelegate = InErrorDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.ConnectSuccess
// (Final, Native, Private)
// Parameters:
// struct FGameServerResponse         GameServerResponse                                               (Parm, NativeAccessSpecifierPublic)

void UAgonesComponent::ConnectSuccess(const struct FGameServerResponse& InGameServerResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "ConnectSuccess");

	Params::UAgonesComponent_ConnectSuccess_Params Parms{};

	Parms.GameServerResponse = InGameServerResponse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.ConnectFail
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FAgonesError                Error                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAgonesComponent::ConnectFail(struct FAgonesError& InError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "ConnectFail");

	Params::UAgonesComponent_ConnectFail_Params Parms{};

	Parms.Error = InError;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.Connect
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAgonesComponent::Connect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "Connect");

	Params::UAgonesComponent_Connect_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Agones.AgonesComponent.Allocate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 SuccessDelegate                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ErrorDelegate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAgonesComponent::Allocate(FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AgonesComponent", "Allocate");

	Params::UAgonesComponent_Allocate_Params Parms{};

	Parms.SuccessDelegate = InSuccessDelegate;
	Parms.ErrorDelegate = InErrorDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
