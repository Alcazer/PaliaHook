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

// 0x0 (0x28 - 0x28)
// Class LocationServicesBPLibrary.LocationServices
class ULocationServices : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LocationServices");
		return Clss;
	}

	bool StopLocationServices();
	bool StartLocationServices();
	bool IsLocationAccuracyAvailable(enum class ELocationAccuracy InAccuracy);
	bool InitLocationServices(enum class ELocationAccuracy InAccuracy, float InUpdateFrequency, float InMinDistanceFilter);
	class ULocationServicesImpl* GetLocationServicesImpl();
	struct FLocationServicesData GetLastKnownLocation();
	bool AreLocationServicesEnabled();
};

// 0x10 (0x38 - 0x28)
// Class LocationServicesBPLibrary.LocationServicesImpl
class ULocationServicesImpl : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnLocationChanged;                                 // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LocationServicesImpl");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
