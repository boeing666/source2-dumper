#pragma once

class CCitadel_Ability_Werewolf_MaulingLeapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1670, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CPiecewiseCurve m_LeapingSpeedCurve; // offset 0x13E8, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_LeapingUpCurve; // offset 0x1428, size 0x40, align 8
    float32 m_flVelocityCarryoverOnHit; // offset 0x1468, size 0x4, align 4
    float32 m_flVelocityCarryoverOnMiss; // offset 0x146C, size 0x4, align 4
    float32 m_flFracToAllowUp; // offset 0x1470, size 0x4, align 4
    char _pad_1474[0x4]; // offset 0x1474
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapHitImpact; // offset 0x1478, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltLeapCastParticle; // offset 0x1558, size 0xE0, align 8
    CSoundEventName m_LeapHitSound; // offset 0x1638, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_LeapingModifier; // offset 0x1648, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1658, size 0x10, align 8
    CGlobalSymbol m_strAG2SuccessHeroState; // offset 0x1668, size 0x8, align 8 | MPropertyStartGroup
};
