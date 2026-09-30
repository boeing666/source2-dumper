#pragma once

class CCitadel_Ability_Priest_Flashbang_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EnemyDebuffModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BounceParticle; // offset 0x1490, size 0xE0, align 8
    CSoundEventName m_ExplosionSound; // offset 0x1570, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BounceSound; // offset 0x1580, size 0x10, align 8
    float32 m_flMinSurfaceDotToBounce; // offset 0x1590, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMaxSurfaceDotToBounce; // offset 0x1594, size 0x4, align 4
    float32 m_flBounceVerticalReductionRatio; // offset 0x1598, size 0x4, align 4
    bool m_bDebug; // offset 0x159C, size 0x1, align 1
    char _pad_159D[0x3]; // offset 0x159D
};
