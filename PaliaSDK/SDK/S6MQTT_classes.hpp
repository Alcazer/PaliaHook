#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S6MQTT

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class S6MQTT.S6MQTTClientSettings
// 0x0010 (0x0038 - 0x0028)
class US6MQTTClientSettings final  : public UObject
{
public:
	int32                                         Port;                                              // 0x0028(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        Keepalive;                                         // 0x002C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxRetryConnectAttempts;                           // 0x0030(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CD5[0x4];                                     // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S6MQTTClientSettings">();
	}
	static class US6MQTTClientSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<US6MQTTClientSettings>();
	}
};
static_assert(alignof(US6MQTTClientSettings) == 0x000008, "Wrong alignment on US6MQTTClientSettings");
static_assert(sizeof(US6MQTTClientSettings) == 0x000038, "Wrong size on US6MQTTClientSettings");
static_assert(offsetof(US6MQTTClientSettings, Port) == 0x000028, "Member 'US6MQTTClientSettings::Port' has a wrong offset!");
static_assert(offsetof(US6MQTTClientSettings, Keepalive) == 0x00002C, "Member 'US6MQTTClientSettings::Keepalive' has a wrong offset!");
static_assert(offsetof(US6MQTTClientSettings, MaxRetryConnectAttempts) == 0x000030, "Member 'US6MQTTClientSettings::MaxRetryConnectAttempts' has a wrong offset!");

// Class S6MQTT.S6MQTT_Settings
// 0x0008 (0x0040 - 0x0038)
class US6MQTT_Settings final  : public UDeveloperSettings
{
public:
	bool                                          bUseEMQTX;                                         // 0x0038(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CD6[0x7];                                     // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S6MQTT_Settings">();
	}
	static class US6MQTT_Settings* GetDefaultObj()
	{
		return GetDefaultObjImpl<US6MQTT_Settings>();
	}
};
static_assert(alignof(US6MQTT_Settings) == 0x000008, "Wrong alignment on US6MQTT_Settings");
static_assert(sizeof(US6MQTT_Settings) == 0x000040, "Wrong size on US6MQTT_Settings");
static_assert(offsetof(US6MQTT_Settings, bUseEMQTX) == 0x000038, "Member 'US6MQTT_Settings::bUseEMQTX' has a wrong offset!");

}

