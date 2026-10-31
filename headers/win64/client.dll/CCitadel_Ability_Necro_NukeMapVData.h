#pragma once

class CCitadel_Ability_Necro_NukeMapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1190, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_DelayedEffectModifier; // offset 0x1160, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_strDamageSound; // offset 0x1170, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flRandomSpawnOffsetPerSummon; // offset 0x1180, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flVerticalOffset; // offset 0x1184, size 0x4, align 4
    float32 m_flForwardOffset; // offset 0x1188, size 0x4, align 4
    char _pad_118C[0x4]; // offset 0x118C
};
