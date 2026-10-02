#pragma once

class CCitadel_Ability_Shiv_KillingBlowVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1878, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ActiveBuff; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillableModifier; // offset 0x1408, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RecastWindowModifier; // offset 0x1418, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RageDrainSuppressedModifier; // offset 0x1428, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackParticle; // offset 0x1438, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1518, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlashParticle; // offset 0x15F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillingBlowCastParticle; // offset 0x16D8, size 0xE0, align 8
    CSoundEventName m_OnKillSound; // offset 0x17B8, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flKillableGlowRange; // offset 0x17C8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flGlowMinTime; // offset 0x17CC, size 0x4, align 4
    float32 m_flFracToAllowUp; // offset 0x17D0, size 0x4, align 4
    float32 m_flMinLeapTime; // offset 0x17D4, size 0x4, align 4
    float32 m_flCheckRadius; // offset 0x17D8, size 0x4, align 4
    float32 m_flSlashRadius; // offset 0x17DC, size 0x4, align 4
    float32 m_flRefreshLockOutTime; // offset 0x17E0, size 0x4, align 4
    float32 m_flMaxTurnRate; // offset 0x17E4, size 0x4, align 4
    float32 m_flCameraTurnRate; // offset 0x17E8, size 0x4, align 4
    char _pad_17EC[0x4]; // offset 0x17EC
    CPiecewiseCurve m_SpeedCurve; // offset 0x17F0, size 0x40, align 8
    CPiecewiseCurve m_SpeedUpCurve; // offset 0x1830, size 0x40, align 8
    float32 m_flVelocityCarryoverOnMiss; // offset 0x1870, size 0x4, align 4
    char _pad_1874[0x4]; // offset 0x1874
};
