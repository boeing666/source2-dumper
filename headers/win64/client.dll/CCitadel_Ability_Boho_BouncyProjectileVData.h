#pragma once

class CCitadel_Ability_Boho_BouncyProjectileVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1978, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1828, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_TargetCastSound; // offset 0x1908, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strImpactSound; // offset 0x1918, size 0x10, align 8
    float32 m_flMinProjectileTravelTime; // offset 0x1928, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDistanceBiasForCaster; // offset 0x192C, size 0x4, align 4
    float32 m_flDistanceBiasForHeroes; // offset 0x1930, size 0x4, align 4
    char _pad_1934[0x4]; // offset 0x1934
    CPiecewiseCurve m_bouncePositionCurve; // offset 0x1938, size 0x40, align 8
};
