#pragma once

class CCitadel_Ability_Priest_Flashbang_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15E8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EnemyDebuffModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BounceParticle; // offset 0x14D8, size 0xE0, align 8
    CSoundEventName m_ExplosionSound; // offset 0x15B8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BounceSound; // offset 0x15C8, size 0x10, align 8
    float32 m_flMinSurfaceDotToBounce; // offset 0x15D8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMaxSurfaceDotToBounce; // offset 0x15DC, size 0x4, align 4
    float32 m_flBounceVerticalReductionRatio; // offset 0x15E0, size 0x4, align 4
    bool m_bDebug; // offset 0x15E4, size 0x1, align 1
    char _pad_15E5[0x3]; // offset 0x15E5
};
