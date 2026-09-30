#pragma once

class CCitadel_Ability_Shiv_KillingBlowVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1830, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // offset 0x13B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillableModifier; // offset 0x13C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RecastWindowModifier; // offset 0x13D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RageDrainSuppressedModifier; // offset 0x13E0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // offset 0x13F0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x14D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // offset 0x15B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillingBlowCastParticle; // offset 0x1690, size 0xE0, align 8
    CSoundEventName m_OnKillSound; // offset 0x1770, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flKillableGlowRange; // offset 0x1780, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flGlowMinTime; // offset 0x1784, size 0x4, align 4
    float32 m_flFracToAllowUp; // offset 0x1788, size 0x4, align 4
    float32 m_flMinLeapTime; // offset 0x178C, size 0x4, align 4
    float32 m_flCheckRadius; // offset 0x1790, size 0x4, align 4
    float32 m_flSlashRadius; // offset 0x1794, size 0x4, align 4
    float32 m_flRefreshLockOutTime; // offset 0x1798, size 0x4, align 4
    float32 m_flMaxTurnRate; // offset 0x179C, size 0x4, align 4
    float32 m_flCameraTurnRate; // offset 0x17A0, size 0x4, align 4
    char _pad_17A4[0x4]; // offset 0x17A4
    CPiecewiseCurve m_SpeedCurve; // offset 0x17A8, size 0x40, align 8
    CPiecewiseCurve m_SpeedUpCurve; // offset 0x17E8, size 0x40, align 8
    float32 m_flVelocityCarryoverOnMiss; // offset 0x1828, size 0x4, align 4
    char _pad_182C[0x4]; // offset 0x182C
};
