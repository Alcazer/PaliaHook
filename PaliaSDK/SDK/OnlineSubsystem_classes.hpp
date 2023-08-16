#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x60 - 0x28)
// Class OnlineSubsystem.NamedInterfaces
class UNamedInterfaces : public UObject
{
public:
	TArray<struct FNamedInterface>               NamedInterfaces;                                   // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNamedInterfaceDef>            NamedInterfaceDefs;                                // 0x38(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9C5[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NamedInterfaces");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystem.TurnBasedMatchInterface
class ITurnBasedMatchInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TurnBasedMatchInterface");
		return Clss;
	}

	void OnMatchReceivedTurn(const class FString& InMatch, bool InbDidBecomeActive);
	void OnMatchEnded(const class FString& InMatch);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
