#pragma once

struct AttackData_t  // sizeof 0x528, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    float32 m_flReloadPauseDuration; // offset 0x8, size 0x4, align 4 | MPropertyDescription
    float32 m_flPrimaryAttackPauseDuration; // offset 0xC, size 0x4, align 4 | MPropertyDescription
    float32 m_flEnemySlowOnHitDuration; // offset 0x10, size 0x4, align 4 | MPropertyDescription
    float32 m_flEnemySlowOnHitSpeed; // offset 0x14, size 0x4, align 4 | MPropertyDescription
    bool bIsHeavyAttack; // offset 0x18, size 0x1, align 1 | MPropertyDescription
    bool m_bCanBeParried; // offset 0x19, size 0x1, align 1 | MPropertyDescription
    char _pad_001A[0x2]; // offset 0x1A
    float32 m_flCooldownOnMiss; // offset 0x1C, size 0x4, align 4 | MPropertyDescription
    float32 m_flCooldownOnHit; // offset 0x20, size 0x4, align 4
    float32 m_flTraceConeHalfWidth; // offset 0x24, size 0x4, align 4 | MPropertyDescription
    float32 m_flKnockUpStrength; // offset 0x28, size 0x4, align 4 | MPropertyDescription
    bool m_bApplyScreenShake; // offset 0x2C, size 0x1, align 1 | MPropertyDescription
    char _pad_002D[0x3]; // offset 0x2D
    CPiecewiseCurve m_SpeedBonusCurve; // offset 0x30, size 0x40, align 8 | MPropertyDescription
    CPiecewiseCurve m_MovementSpeedCurve; // offset 0x70, size 0x40, align 8 | MPropertyDescription
    float32 m_flMovementAcc; // offset 0xB0, size 0x4, align 4 | MPropertyDescription
    float32 m_flAttackStateTime; // offset 0xB4, size 0x4, align 4 | MPropertyDescription
    CGlobalSymbol m_Trigger; // offset 0xB8, size 0x8, align 8 | MPropertyDescription
    CSoundEventName m_strActivateSound; // offset 0xC0, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_strHitSound; // offset 0xD0, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strHitHeroSound; // offset 0xE0, size 0x10, align 8
    CSoundEventName m_strHitDebrisSound; // offset 0xF0, size 0x10, align 8
    CSoundEventName m_strMissSound; // offset 0x100, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strMeleeDashSound; // offset 0x110, size 0x10, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeActivateParticle; // offset 0x120, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // offset 0x200, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeAttackParticle; // offset 0x2E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeImpactParticle; // offset 0x3C0, size 0xE0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceAttackStart; // offset 0x4A0, size 0x88, align 8 | MPropertyStartGroup
};
