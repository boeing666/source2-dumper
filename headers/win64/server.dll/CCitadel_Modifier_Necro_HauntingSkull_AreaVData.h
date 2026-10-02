#pragma once

class CCitadel_Modifier_Necro_HauntingSkull_AreaVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x9C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x7A0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // offset 0x7B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaEffect; // offset 0x890, size 0xE0, align 8
    CSoundEventName m_strArmingSound; // offset 0x970, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strArmedSound; // offset 0x980, size 0x10, align 8
    CSoundEventName m_strLoopingSound; // offset 0x990, size 0x10, align 8
    CSoundEventName m_strHitSound; // offset 0x9A0, size 0x10, align 8
    float32 m_flInitialNormalInfluence; // offset 0x9B0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flInitialRandomVariance; // offset 0x9B4, size 0x4, align 4
    float32 m_flSpawnPositionNavMeshSearchRange; // offset 0x9B8, size 0x4, align 4
    char _pad_09BC[0x4]; // offset 0x9BC
};
