#pragma once

struct BabaBenchMeleeAttack_t  // sizeof 0x458, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    bool m_bIsHeavyAttack; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x3]; // offset 0x9
    float32 m_flChargeTime; // offset 0xC, size 0x4, align 4
    float32 m_flAttackStateTime; // offset 0x10, size 0x4, align 4
    float32 m_flCooldownOnHit; // offset 0x14, size 0x4, align 4
    float32 m_flCooldownOnMiss; // offset 0x18, size 0x4, align 4
    float32 m_flTraceConeHalfWidth; // offset 0x1C, size 0x4, align 4
    float32 m_flEnemySlowOnHitDuration; // offset 0x20, size 0x4, align 4
    float32 m_flEnemySlowOnHitSpeed; // offset 0x24, size 0x4, align 4
    float32 m_flKnockUpStrength; // offset 0x28, size 0x4, align 4
    float32 m_flPrimaryAttackPauseDuration; // offset 0x2C, size 0x4, align 4
    float32 m_flReloadPauseDuration; // offset 0x30, size 0x4, align 4
    bool m_bCanBeParried; // offset 0x34, size 0x1, align 1
    bool m_bParryOnlyBlocksParrier; // offset 0x35, size 0x1, align 1
    bool m_bParryStunsAttacker; // offset 0x36, size 0x1, align 1
    bool m_bApplyScreenShake; // offset 0x37, size 0x1, align 1
    bool m_bWaitForGroundToTrigger; // offset 0x38, size 0x1, align 1
    char _pad_0039[0x7]; // offset 0x39
    CPiecewiseCurve m_MovementSpeedCurve; // offset 0x40, size 0x40, align 8
    CPiecewiseCurve m_SpeedBonusCurve; // offset 0x80, size 0x40, align 8
    float32 m_flMovementAcc; // offset 0xC0, size 0x4, align 4
    float32 m_flAttackImpulse; // offset 0xC4, size 0x4, align 4
    CSoundEventName m_strMeleeDashSound; // offset 0xC8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitSound; // offset 0xD8, size 0x10, align 8
    CSoundEventName m_strHitHeroSound; // offset 0xE8, size 0x10, align 8
    CSoundEventName m_strHitDebrisSound; // offset 0xF8, size 0x10, align 8
    CSoundEventName m_strMissSound; // offset 0x108, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // offset 0x118, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeAttackParticle; // offset 0x1F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeImpactParticle; // offset 0x2D8, size 0xE0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceAttackStart; // offset 0x3B8, size 0xA0, align 8 | MPropertyStartGroup
};
