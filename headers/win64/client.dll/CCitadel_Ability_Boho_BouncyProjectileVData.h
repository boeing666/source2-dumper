#pragma once

class CCitadel_Ability_Boho_BouncyProjectileVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x11D0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_TargetCastSound; // offset 0x1160, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strImpactSound; // offset 0x1170, size 0x10, align 8
    float32 m_flMinProjectileTravelTime; // offset 0x1180, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDistanceBiasForCaster; // offset 0x1184, size 0x4, align 4
    float32 m_flDistanceBiasForHeroes; // offset 0x1188, size 0x4, align 4
    char _pad_118C[0x4]; // offset 0x118C
    CPiecewiseCurve m_bouncePositionCurve; // offset 0x1190, size 0x40, align 8
};
