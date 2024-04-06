#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Qos

#include "Basic.hpp"

#include "Qos_structs.hpp"


namespace SDK::Params
{

// Function Qos.QosBeaconClient.ClientQosResponse
// 0x0001 (0x0001 - 0x0000)
struct QosBeaconClient_ClientQosResponse final 
{
public:
	EQosResponseType                              Response;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(QosBeaconClient_ClientQosResponse) == 0x000001, "Wrong alignment on QosBeaconClient_ClientQosResponse");
static_assert(sizeof(QosBeaconClient_ClientQosResponse) == 0x000001, "Wrong size on QosBeaconClient_ClientQosResponse");
static_assert(offsetof(QosBeaconClient_ClientQosResponse, Response) == 0x000000, "Member 'QosBeaconClient_ClientQosResponse::Response' has a wrong offset!");

// Function Qos.QosBeaconClient.ServerQosRequest
// 0x0010 (0x0010 - 0x0000)
struct QosBeaconClient_ServerQosRequest final 
{
public:
	class FString                                 InSessionId;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(QosBeaconClient_ServerQosRequest) == 0x000008, "Wrong alignment on QosBeaconClient_ServerQosRequest");
static_assert(sizeof(QosBeaconClient_ServerQosRequest) == 0x000010, "Wrong size on QosBeaconClient_ServerQosRequest");
static_assert(offsetof(QosBeaconClient_ServerQosRequest, InSessionId) == 0x000000, "Member 'QosBeaconClient_ServerQosRequest::InSessionId' has a wrong offset!");

}

