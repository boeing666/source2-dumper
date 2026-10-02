#pragma once

class CCitadel_Ability_Necro_NukeMapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_DelayedEffectModifier; // offset 0x14C8, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_strDamageSound; // offset 0x14D8, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flRandomSpawnOffsetPerSummon; // offset 0x14E8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flVerticalOffset; // offset 0x14EC, size 0x4, align 4
    float32 m_flForwardOffset; // offset 0x14F0, size 0x4, align 4
    char _pad_14F4[0x4]; // offset 0x14F4
};
