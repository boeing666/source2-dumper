#pragma once

class CCitadel_Ability_Boho_BouncyProjectileVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1548, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_TargetCastSound; // offset 0x14D8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strImpactSound; // offset 0x14E8, size 0x10, align 8
    float32 m_flMinProjectileTravelTime; // offset 0x14F8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDistanceBiasForCaster; // offset 0x14FC, size 0x4, align 4
    float32 m_flDistanceBiasForHeroes; // offset 0x1500, size 0x4, align 4
    char _pad_1504[0x4]; // offset 0x1504
    CPiecewiseCurve m_bouncePositionCurve; // offset 0x1508, size 0x40, align 8
};
