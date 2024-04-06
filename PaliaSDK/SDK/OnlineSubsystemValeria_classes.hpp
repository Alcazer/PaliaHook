#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemValeria

#include "Basic.hpp"

#include "DeveloperSettings_classes.hpp"
#include "Engine_classes.hpp"
#include "OnlineSubsystemUtils_classes.hpp"


namespace SDK
{

// Class OnlineSubsystemValeria.OSSVAL_IdentitySettings
// 0x0118 (0x0150 - 0x0038)
class UOSSVAL_IdentitySettings final  : public UDeveloperSettings
{
public:
	float                                         RefreshFrequencySeconds;                           // 0x0038(0x0004)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RefreshTokenTTLFactorForRefreshing;                // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AuthenticationEndpointUrl;                         // 0x0040(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AuthenticationApplicationId;                       // 0x0050(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AuthenticationSecretKey;                           // 0x0060(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AuthTokenRetry_BaseIntervalSeconds;                // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AuthTokenRetry_MaximumIntervalSansJitterSeconds;   // 0x0074(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   LoginGenericErrorText;                             // 0x0078(0x0018)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	class FText                                   LoginAccessNotEligibleText;                        // 0x0090(0x0018)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	class FText                                   LoginAccessOfflineText;                            // 0x00A8(0x0018)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	class FText                                   LoginAccountInfoMissingText;                       // 0x00C0(0x0018)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	class FText                                   LoginPasswordEmptyText;                            // 0x00D8(0x0018)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	class FText                                   LoginPasswordResetText;                            // 0x00F0(0x0018)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	class FText                                   LoginSystemOverwhelmedText;                        // 0x0108(0x0018)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	class FText                                   LoginCredentialErrorText;                          // 0x0120(0x0018)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	class FText                                   LoginAccountLockedText;                            // 0x0138(0x0018)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OSSVAL_IdentitySettings">();
	}
	static class UOSSVAL_IdentitySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOSSVAL_IdentitySettings>();
	}
};
static_assert(alignof(UOSSVAL_IdentitySettings) == 0x000008, "Wrong alignment on UOSSVAL_IdentitySettings");
static_assert(sizeof(UOSSVAL_IdentitySettings) == 0x000150, "Wrong size on UOSSVAL_IdentitySettings");
static_assert(offsetof(UOSSVAL_IdentitySettings, RefreshFrequencySeconds) == 0x000038, "Member 'UOSSVAL_IdentitySettings::RefreshFrequencySeconds' has a wrong offset!");
static_assert(offsetof(UOSSVAL_IdentitySettings, RefreshTokenTTLFactorForRefreshing) == 0x00003C, "Member 'UOSSVAL_IdentitySettings::RefreshTokenTTLFactorForRefreshing' has a wrong offset!");
static_assert(offsetof(UOSSVAL_IdentitySettings, AuthenticationEndpointUrl) == 0x000040, "Member 'UOSSVAL_IdentitySettings::AuthenticationEndpointUrl' has a wrong offset!");
static_assert(offsetof(UOSSVAL_IdentitySettings, AuthenticationApplicationId) == 0x000050, "Member 'UOSSVAL_IdentitySettings::AuthenticationApplicationId' has a wrong offset!");
static_assert(offsetof(UOSSVAL_IdentitySettings, AuthenticationSecretKey) == 0x000060, "Member 'UOSSVAL_IdentitySettings::AuthenticationSecretKey' has a wrong offset!");
static_assert(offsetof(UOSSVAL_IdentitySettings, AuthTokenRetry_BaseIntervalSeconds) == 0x000070, "Member 'UOSSVAL_IdentitySettings::AuthTokenRetry_BaseIntervalSeconds' has a wrong offset!");
static_assert(offsetof(UOSSVAL_IdentitySettings, AuthTokenRetry_MaximumIntervalSansJitterSeconds) == 0x000074, "Member 'UOSSVAL_IdentitySettings::AuthTokenRetry_MaximumIntervalSansJitterSeconds' has a wrong offset!");
static_assert(offsetof(UOSSVAL_IdentitySettings, LoginGenericErrorText) == 0x000078, "Member 'UOSSVAL_IdentitySettings::LoginGenericErrorText' has a wrong offset!");
static_assert(offsetof(UOSSVAL_IdentitySettings, LoginAccessNotEligibleText) == 0x000090, "Member 'UOSSVAL_IdentitySettings::LoginAccessNotEligibleText' has a wrong offset!");
static_assert(offsetof(UOSSVAL_IdentitySettings, LoginAccessOfflineText) == 0x0000A8, "Member 'UOSSVAL_IdentitySettings::LoginAccessOfflineText' has a wrong offset!");
static_assert(offsetof(UOSSVAL_IdentitySettings, LoginAccountInfoMissingText) == 0x0000C0, "Member 'UOSSVAL_IdentitySettings::LoginAccountInfoMissingText' has a wrong offset!");
static_assert(offsetof(UOSSVAL_IdentitySettings, LoginPasswordEmptyText) == 0x0000D8, "Member 'UOSSVAL_IdentitySettings::LoginPasswordEmptyText' has a wrong offset!");
static_assert(offsetof(UOSSVAL_IdentitySettings, LoginPasswordResetText) == 0x0000F0, "Member 'UOSSVAL_IdentitySettings::LoginPasswordResetText' has a wrong offset!");
static_assert(offsetof(UOSSVAL_IdentitySettings, LoginSystemOverwhelmedText) == 0x000108, "Member 'UOSSVAL_IdentitySettings::LoginSystemOverwhelmedText' has a wrong offset!");
static_assert(offsetof(UOSSVAL_IdentitySettings, LoginCredentialErrorText) == 0x000120, "Member 'UOSSVAL_IdentitySettings::LoginCredentialErrorText' has a wrong offset!");
static_assert(offsetof(UOSSVAL_IdentitySettings, LoginAccountLockedText) == 0x000138, "Member 'UOSSVAL_IdentitySettings::LoginAccountLockedText' has a wrong offset!");

// Class OnlineSubsystemValeria.OSSVAL_PresenceSettings
// 0x0008 (0x0040 - 0x0038)
class UOSSVAL_PresenceSettings final  : public UDeveloperSettings
{
public:
	float                                         GetStatusesUpdateInterval;                         // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PostStatusUpdateInterval;                          // 0x003C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OSSVAL_PresenceSettings">();
	}
	static class UOSSVAL_PresenceSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOSSVAL_PresenceSettings>();
	}
};
static_assert(alignof(UOSSVAL_PresenceSettings) == 0x000008, "Wrong alignment on UOSSVAL_PresenceSettings");
static_assert(sizeof(UOSSVAL_PresenceSettings) == 0x000040, "Wrong size on UOSSVAL_PresenceSettings");
static_assert(offsetof(UOSSVAL_PresenceSettings, GetStatusesUpdateInterval) == 0x000038, "Member 'UOSSVAL_PresenceSettings::GetStatusesUpdateInterval' has a wrong offset!");
static_assert(offsetof(UOSSVAL_PresenceSettings, PostStatusUpdateInterval) == 0x00003C, "Member 'UOSSVAL_PresenceSettings::PostStatusUpdateInterval' has a wrong offset!");

// Class OnlineSubsystemValeria.OSSVAL_GetCharacterNamesByAccountIdProxy
// 0x0038 (0x0068 - 0x0030)
class UOSSVAL_GetCharacterNamesByAccountIdProxy final  : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A2D[0x18];                                    // 0x0050(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UOSSVAL_GetCharacterNamesByAccountIdProxy* GetCharacterNamesByAccountId(class UObject* WorldContextObject, struct FGuid& AccountId);

	void OnGetCharacterNames_Fail__DelegateSignature(struct FGuid& AccountId);
	void OnGetCharacterNames_Success__DelegateSignature(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OSSVAL_GetCharacterNamesByAccountIdProxy">();
	}
	static class UOSSVAL_GetCharacterNamesByAccountIdProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOSSVAL_GetCharacterNamesByAccountIdProxy>();
	}
};
static_assert(alignof(UOSSVAL_GetCharacterNamesByAccountIdProxy) == 0x000008, "Wrong alignment on UOSSVAL_GetCharacterNamesByAccountIdProxy");
static_assert(sizeof(UOSSVAL_GetCharacterNamesByAccountIdProxy) == 0x000068, "Wrong size on UOSSVAL_GetCharacterNamesByAccountIdProxy");
static_assert(offsetof(UOSSVAL_GetCharacterNamesByAccountIdProxy, OnSuccess) == 0x000030, "Member 'UOSSVAL_GetCharacterNamesByAccountIdProxy::OnSuccess' has a wrong offset!");
static_assert(offsetof(UOSSVAL_GetCharacterNamesByAccountIdProxy, OnFailure) == 0x000040, "Member 'UOSSVAL_GetCharacterNamesByAccountIdProxy::OnFailure' has a wrong offset!");

// Class OnlineSubsystemValeria.OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy
// 0x0048 (0x0078 - 0x0030)
class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy final  : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A2E[0x28];                                    // 0x0050(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy* GetCharacterNameByAccountIdAndCharacterId(class UObject* WorldContextObject, struct FGuid& AccountId, struct FGuid& CharacterId);

	void OnGetCharacterNames_Fail__DelegateSignature(struct FGuid& AccountId, struct FGuid& CharacterId);
	void OnGetCharacterNames_Success__DelegateSignature(struct FGuid& AccountId, struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& Param_Name);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy">();
	}
	static class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy>();
	}
};
static_assert(alignof(UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy) == 0x000008, "Wrong alignment on UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy");
static_assert(sizeof(UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy) == 0x000078, "Wrong size on UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy");
static_assert(offsetof(UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy, OnSuccess) == 0x000030, "Member 'UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy::OnSuccess' has a wrong offset!");
static_assert(offsetof(UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy, OnFailure) == 0x000040, "Member 'UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy::OnFailure' has a wrong offset!");

// Class OnlineSubsystemValeria.OSSVAL_GetCharacterNameByCharacterIdProxy
// 0x0038 (0x0068 - 0x0030)
class UOSSVAL_GetCharacterNameByCharacterIdProxy final  : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A2F[0x18];                                    // 0x0050(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UOSSVAL_GetCharacterNameByCharacterIdProxy* GetCharacterNameByCharacterId(class UObject* WorldContextObject, struct FGuid& CharacterId);

	void OnFetchCharacter_Failure__DelegateSignature(struct FGuid& CharacterId);
	void OnFetchCharacter_Success__DelegateSignature(struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& FetchedCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OSSVAL_GetCharacterNameByCharacterIdProxy">();
	}
	static class UOSSVAL_GetCharacterNameByCharacterIdProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOSSVAL_GetCharacterNameByCharacterIdProxy>();
	}
};
static_assert(alignof(UOSSVAL_GetCharacterNameByCharacterIdProxy) == 0x000008, "Wrong alignment on UOSSVAL_GetCharacterNameByCharacterIdProxy");
static_assert(sizeof(UOSSVAL_GetCharacterNameByCharacterIdProxy) == 0x000068, "Wrong size on UOSSVAL_GetCharacterNameByCharacterIdProxy");
static_assert(offsetof(UOSSVAL_GetCharacterNameByCharacterIdProxy, OnSuccess) == 0x000030, "Member 'UOSSVAL_GetCharacterNameByCharacterIdProxy::OnSuccess' has a wrong offset!");
static_assert(offsetof(UOSSVAL_GetCharacterNameByCharacterIdProxy, OnFailure) == 0x000040, "Member 'UOSSVAL_GetCharacterNameByCharacterIdProxy::OnFailure' has a wrong offset!");

// Class OnlineSubsystemValeria.OSSVAL_GetNetIdByCharacterIdProxy
// 0x0038 (0x0068 - 0x0030)
class UOSSVAL_GetNetIdByCharacterIdProxy final  : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A30[0x18];                                    // 0x0050(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UOSSVAL_GetNetIdByCharacterIdProxy* GetNetIdByCharacterId(class UObject* WorldContextObject, struct FGuid& CharacterId);

	void OnFetchNetId_Failure__DelegateSignature(struct FGuid& CharacterId);
	void OnFetchNetId_Success__DelegateSignature(struct FGuid& CharacterId, struct FUniqueNetIdRepl& FetchedNetId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OSSVAL_GetNetIdByCharacterIdProxy">();
	}
	static class UOSSVAL_GetNetIdByCharacterIdProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOSSVAL_GetNetIdByCharacterIdProxy>();
	}
};
static_assert(alignof(UOSSVAL_GetNetIdByCharacterIdProxy) == 0x000008, "Wrong alignment on UOSSVAL_GetNetIdByCharacterIdProxy");
static_assert(sizeof(UOSSVAL_GetNetIdByCharacterIdProxy) == 0x000068, "Wrong size on UOSSVAL_GetNetIdByCharacterIdProxy");
static_assert(offsetof(UOSSVAL_GetNetIdByCharacterIdProxy, OnSuccess) == 0x000030, "Member 'UOSSVAL_GetNetIdByCharacterIdProxy::OnSuccess' has a wrong offset!");
static_assert(offsetof(UOSSVAL_GetNetIdByCharacterIdProxy, OnFailure) == 0x000040, "Member 'UOSSVAL_GetNetIdByCharacterIdProxy::OnFailure' has a wrong offset!");

// Class OnlineSubsystemValeria.OSSVAL_OnlineEngineInterfaceImpl
// 0x0000 (0x0188 - 0x0188)
class UOSSVAL_OnlineEngineInterfaceImpl final  : public UOnlineEngineInterfaceImpl
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OSSVAL_OnlineEngineInterfaceImpl">();
	}
	static class UOSSVAL_OnlineEngineInterfaceImpl* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOSSVAL_OnlineEngineInterfaceImpl>();
	}
};
static_assert(alignof(UOSSVAL_OnlineEngineInterfaceImpl) == 0x000008, "Wrong alignment on UOSSVAL_OnlineEngineInterfaceImpl");
static_assert(sizeof(UOSSVAL_OnlineEngineInterfaceImpl) == 0x000188, "Wrong size on UOSSVAL_OnlineEngineInterfaceImpl");

// Class OnlineSubsystemValeria.OSSVAL_AsyncActionGetCharactersByAccountId
// 0x0038 (0x0068 - 0x0030)
class UOSSVAL_AsyncActionGetCharactersByAccountId final  : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailed;                                          // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A31[0x18];                                    // 0x0050(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UOSSVAL_AsyncActionGetCharactersByAccountId* GetCharactersByAccountId(class ULocalPlayer* LocalPlayer, struct FGuid& ID);

	void OnGetCharactersFailed__DelegateSignature();
	void OnGetCharactersObtained__DelegateSignature(TArray<struct FVALDTOS_MetaCharacterFormat>& CharactersFound);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OSSVAL_AsyncActionGetCharactersByAccountId">();
	}
	static class UOSSVAL_AsyncActionGetCharactersByAccountId* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOSSVAL_AsyncActionGetCharactersByAccountId>();
	}
};
static_assert(alignof(UOSSVAL_AsyncActionGetCharactersByAccountId) == 0x000008, "Wrong alignment on UOSSVAL_AsyncActionGetCharactersByAccountId");
static_assert(sizeof(UOSSVAL_AsyncActionGetCharactersByAccountId) == 0x000068, "Wrong size on UOSSVAL_AsyncActionGetCharactersByAccountId");
static_assert(offsetof(UOSSVAL_AsyncActionGetCharactersByAccountId, OnSuccess) == 0x000030, "Member 'UOSSVAL_AsyncActionGetCharactersByAccountId::OnSuccess' has a wrong offset!");
static_assert(offsetof(UOSSVAL_AsyncActionGetCharactersByAccountId, OnFailed) == 0x000040, "Member 'UOSSVAL_AsyncActionGetCharactersByAccountId::OnFailed' has a wrong offset!");

// Class OnlineSubsystemValeria.OSSVAL_AsyncActionProfanityFilterString
// 0x0028 (0x0058 - 0x0030)
class UOSSVAL_AsyncActionProfanityFilterString final  : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             OnResultObtained;                                  // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A32[0x18];                                    // 0x0040(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UOSSVAL_AsyncActionProfanityFilterString* FilterString(class ULocalPlayer* LocalPlayer, const class FString& Str);

	void OnResultObtained__DelegateSignature(struct FOSSVAL_ProfanityFilterResponse& Response);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OSSVAL_AsyncActionProfanityFilterString">();
	}
	static class UOSSVAL_AsyncActionProfanityFilterString* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOSSVAL_AsyncActionProfanityFilterString>();
	}
};
static_assert(alignof(UOSSVAL_AsyncActionProfanityFilterString) == 0x000008, "Wrong alignment on UOSSVAL_AsyncActionProfanityFilterString");
static_assert(sizeof(UOSSVAL_AsyncActionProfanityFilterString) == 0x000058, "Wrong size on UOSSVAL_AsyncActionProfanityFilterString");
static_assert(offsetof(UOSSVAL_AsyncActionProfanityFilterString, OnResultObtained) == 0x000030, "Member 'UOSSVAL_AsyncActionProfanityFilterString::OnResultObtained' has a wrong offset!");

// Class OnlineSubsystemValeria.OSSVAL_BeaconClient
// 0x0020 (0x0350 - 0x0330)
class AOSSVAL_BeaconClient final  : public AOnlineBeaconClient
{
public:
	uint8                                         Pad_3A33[0x20];                                    // 0x0330(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void RpcClient_SendTicketValidationResponse(struct FGuid& RequestId, bool bAccepted, struct FOSSVAL_MatchmakingTicket& Ticket, struct FOSSVAL_MatchmakingTicketContext& Context);
	void RpcServer_ValidateTicket(struct FGuid& RequestId, struct FOSSVAL_MatchmakingTicket& Ticket, struct FOSSVAL_MatchmakingTicketContext& Context);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OSSVAL_BeaconClient">();
	}
	static class AOSSVAL_BeaconClient* GetDefaultObj()
	{
		return GetDefaultObjImpl<AOSSVAL_BeaconClient>();
	}
};
static_assert(alignof(AOSSVAL_BeaconClient) == 0x000008, "Wrong alignment on AOSSVAL_BeaconClient");
static_assert(sizeof(AOSSVAL_BeaconClient) == 0x000350, "Wrong size on AOSSVAL_BeaconClient");

// Class OnlineSubsystemValeria.OSSVAL_BeaconHost
// 0x0000 (0x03E0 - 0x03E0)
class AOSSVAL_BeaconHost final  : public AOnlineBeaconHost
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OSSVAL_BeaconHost">();
	}
	static class AOSSVAL_BeaconHost* GetDefaultObj()
	{
		return GetDefaultObjImpl<AOSSVAL_BeaconHost>();
	}
};
static_assert(alignof(AOSSVAL_BeaconHost) == 0x000008, "Wrong alignment on AOSSVAL_BeaconHost");
static_assert(sizeof(AOSSVAL_BeaconHost) == 0x0003E0, "Wrong size on AOSSVAL_BeaconHost");

// Class OnlineSubsystemValeria.OSSVAL_BeaconHostObject
// 0x0048 (0x0310 - 0x02C8)
class AOSSVAL_BeaconHostObject final  : public AOnlineBeaconHostObject
{
public:
	uint8                                         Pad_3A35[0x48];                                    // 0x02C8(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OSSVAL_BeaconHostObject">();
	}
	static class AOSSVAL_BeaconHostObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<AOSSVAL_BeaconHostObject>();
	}
};
static_assert(alignof(AOSSVAL_BeaconHostObject) == 0x000008, "Wrong alignment on AOSSVAL_BeaconHostObject");
static_assert(sizeof(AOSSVAL_BeaconHostObject) == 0x000310, "Wrong size on AOSSVAL_BeaconHostObject");

// Class OnlineSubsystemValeria.ValeriaOnlineBlueprintFunctions
// 0x0000 (0x0028 - 0x0028)
class UValeriaOnlineBlueprintFunctions final  : public UBlueprintFunctionLibrary
{
public:
	static struct FBlueprintSessionResult CreateSessionResult(const class FString& ServerName, const class FString& Addr);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ValeriaOnlineBlueprintFunctions">();
	}
	static class UValeriaOnlineBlueprintFunctions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UValeriaOnlineBlueprintFunctions>();
	}
};
static_assert(alignof(UValeriaOnlineBlueprintFunctions) == 0x000008, "Wrong alignment on UValeriaOnlineBlueprintFunctions");
static_assert(sizeof(UValeriaOnlineBlueprintFunctions) == 0x000028, "Wrong size on UValeriaOnlineBlueprintFunctions");

// Class OnlineSubsystemValeria.ValeriaPartyBeaconState
// 0x0000 (0x00A0 - 0x00A0)
class UValeriaPartyBeaconState final  : public UPartyBeaconState
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ValeriaPartyBeaconState">();
	}
	static class UValeriaPartyBeaconState* GetDefaultObj()
	{
		return GetDefaultObjImpl<UValeriaPartyBeaconState>();
	}
};
static_assert(alignof(UValeriaPartyBeaconState) == 0x000008, "Wrong alignment on UValeriaPartyBeaconState");
static_assert(sizeof(UValeriaPartyBeaconState) == 0x0000A0, "Wrong size on UValeriaPartyBeaconState");

}

