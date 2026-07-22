#pragma once

class CCitadel_Ability_Werewolf_MaulingLeapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1AA0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CPiecewiseCurve m_LeapingSpeedCurve; // offset 0x1818, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_LeapingUpCurve; // offset 0x1858, size 0x40, align 8
    float32 m_flVelocityCarryoverOnHit; // offset 0x1898, size 0x4, align 4
    float32 m_flVelocityCarryoverOnMiss; // offset 0x189C, size 0x4, align 4
    float32 m_flFracToAllowUp; // offset 0x18A0, size 0x4, align 4
    char _pad_18A4[0x4]; // offset 0x18A4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapHitImpact; // offset 0x18A8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltLeapCastParticle; // offset 0x1988, size 0xE0, align 8
    CSoundEventName m_LeapHitSound; // offset 0x1A68, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_LeapingModifier; // offset 0x1A78, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1A88, size 0x10, align 8
    CGlobalSymbol m_strAG2SuccessHeroState; // offset 0x1A98, size 0x8, align 8 | MPropertyStartGroup
};
