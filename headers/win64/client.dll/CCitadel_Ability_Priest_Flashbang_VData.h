#pragma once

class CCitadel_Ability_Priest_Flashbang_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A18, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EnemyDebuffModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1828, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BounceParticle; // offset 0x1908, size 0xE0, align 8
    CSoundEventName m_ExplosionSound; // offset 0x19E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BounceSound; // offset 0x19F8, size 0x10, align 8
    float32 m_flMinSurfaceDotToBounce; // offset 0x1A08, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMaxSurfaceDotToBounce; // offset 0x1A0C, size 0x4, align 4
    float32 m_flBounceVerticalReductionRatio; // offset 0x1A10, size 0x4, align 4
    bool m_bDebug; // offset 0x1A14, size 0x1, align 1
    char _pad_1A15[0x3]; // offset 0x1A15
};
