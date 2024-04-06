#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S6PlatformAuthentication

#include "Basic.hpp"


namespace SDK::Params
{

// Function S6PlatformAuthentication.S6TokenProvider.GetToken
// 0x0010 (0x0010 - 0x0000)
struct S6TokenProvider_GetToken final 
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S6TokenProvider_GetToken) == 0x000008, "Wrong alignment on S6TokenProvider_GetToken");
static_assert(sizeof(S6TokenProvider_GetToken) == 0x000010, "Wrong size on S6TokenProvider_GetToken");
static_assert(offsetof(S6TokenProvider_GetToken, ReturnValue) == 0x000000, "Member 'S6TokenProvider_GetToken::ReturnValue' has a wrong offset!");

// Function S6PlatformAuthentication.S6TokenProvider.IsReady
// 0x0001 (0x0001 - 0x0000)
struct S6TokenProvider_IsReady final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S6TokenProvider_IsReady) == 0x000001, "Wrong alignment on S6TokenProvider_IsReady");
static_assert(sizeof(S6TokenProvider_IsReady) == 0x000001, "Wrong size on S6TokenProvider_IsReady");
static_assert(offsetof(S6TokenProvider_IsReady, ReturnValue) == 0x000000, "Member 'S6TokenProvider_IsReady::ReturnValue' has a wrong offset!");

// Function S6PlatformAuthentication.S6TokenProvider.IsTokenValid
// 0x0001 (0x0001 - 0x0000)
struct S6TokenProvider_IsTokenValid final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S6TokenProvider_IsTokenValid) == 0x000001, "Wrong alignment on S6TokenProvider_IsTokenValid");
static_assert(sizeof(S6TokenProvider_IsTokenValid) == 0x000001, "Wrong size on S6TokenProvider_IsTokenValid");
static_assert(offsetof(S6TokenProvider_IsTokenValid, ReturnValue) == 0x000000, "Member 'S6TokenProvider_IsTokenValid::ReturnValue' has a wrong offset!");

}

