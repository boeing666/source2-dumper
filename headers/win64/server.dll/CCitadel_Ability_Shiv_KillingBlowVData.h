#pragma once

class CCitadel_Ability_Shiv_KillingBlowVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1500, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // offset 0x1080, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillableModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RecastWindowModifier; // offset 0x10A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RageDrainSuppressedModifier; // offset 0x10B0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // offset 0x10C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x11A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // offset 0x1280, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillingBlowCastParticle; // offset 0x1360, size 0xE0, align 8
    CSoundEventName m_OnKillSound; // offset 0x1440, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flKillableGlowRange; // offset 0x1450, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flGlowMinTime; // offset 0x1454, size 0x4, align 4
    float32 m_flFracToAllowUp; // offset 0x1458, size 0x4, align 4
    float32 m_flMinLeapTime; // offset 0x145C, size 0x4, align 4
    float32 m_flCheckRadius; // offset 0x1460, size 0x4, align 4
    float32 m_flSlashRadius; // offset 0x1464, size 0x4, align 4
    float32 m_flRefreshLockOutTime; // offset 0x1468, size 0x4, align 4
    float32 m_flMaxTurnRate; // offset 0x146C, size 0x4, align 4
    float32 m_flCameraTurnRate; // offset 0x1470, size 0x4, align 4
    char _pad_1474[0x4]; // offset 0x1474
    CPiecewiseCurve m_SpeedCurve; // offset 0x1478, size 0x40, align 8
    CPiecewiseCurve m_SpeedUpCurve; // offset 0x14B8, size 0x40, align 8
    float32 m_flVelocityCarryoverOnMiss; // offset 0x14F8, size 0x4, align 4
    char _pad_14FC[0x4]; // offset 0x14FC
};
