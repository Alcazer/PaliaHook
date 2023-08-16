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

// 0x58 (0xF8 - 0xA0)
// BlueprintGeneratedClass Comp_CreatureAudio.Comp_CreatureAudio_C
class UComp_CreatureAudio_C : public UActorComponent
{
public:
	class UCreatureAudioSet_C*                   CreatureAudioSet;                                  // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class UDataTable*>         SurfaceEffectMap;                                  // 0xA8(0x50)(Edit, BlueprintVisible)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Comp_CreatureAudio_C");
		return Clss;
	}

	void FindInCreatureSurfaceMap(class FName& InKey, class UDataTable** InValue, bool* InFound, class UDataTable* InCallFunc_Map_Find_Value, bool InCallFunc_Map_Find_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue);
	void GetCreatureAudioEvent(enum class E_CreatureAudioEvents InEvent, class UAkAudioEvent** InAkEvent, bool* InFound, class UAkAudioEvent* InCallFunc_Get_Creature_Audio_Event_AkEvent, bool InCallFunc_Get_Creature_Audio_Event_Found);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
