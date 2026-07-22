#pragma once

class CCitadel_Ability_Shiv_KillingBlowVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1C88, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillableModifier; // offset 0x1838, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // offset 0x1848, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1928, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // offset 0x1A08, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillingBlowCastParticle; // offset 0x1AE8, size 0xE0, align 8
    CSoundEventName m_OnKillSound; // offset 0x1BC8, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flKillableGlowRange; // offset 0x1BD8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flGlowMinTime; // offset 0x1BDC, size 0x4, align 4
    float32 m_flFracToAllowUp; // offset 0x1BE0, size 0x4, align 4
    float32 m_flMinLeapTime; // offset 0x1BE4, size 0x4, align 4
    float32 m_flCheckRadius; // offset 0x1BE8, size 0x4, align 4
    float32 m_flSlashRadius; // offset 0x1BEC, size 0x4, align 4
    float32 m_flRefreshLockOutTime; // offset 0x1BF0, size 0x4, align 4
    float32 m_flMaxTurnRate; // offset 0x1BF4, size 0x4, align 4
    float32 m_flCameraTurnRate; // offset 0x1BF8, size 0x4, align 4
    char _pad_1BFC[0x4]; // offset 0x1BFC
    CPiecewiseCurve m_SpeedCurve; // offset 0x1C00, size 0x40, align 8
    CPiecewiseCurve m_SpeedUpCurve; // offset 0x1C40, size 0x40, align 8
    float32 m_flVelocityCarryoverOnMiss; // offset 0x1C80, size 0x4, align 4
    char _pad_1C84[0x4]; // offset 0x1C84
};
