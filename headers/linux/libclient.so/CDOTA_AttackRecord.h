#pragma once

class CDOTA_AttackRecord  // sizeof 0x120, align 0xFF (client)
{
public:
    uint8_t m_bProcessProcs : 1; // offset 0x0
    uint8_t m_bRangedAttack : 1; // offset 0x0
    uint8_t m_bAttack : 1; // offset 0x0
    uint8_t m_bDirectionalRangedAttack : 1; // offset 0x0
    uint8_t m_bSkipRangeCheck : 1; // offset 0x0
    uint8_t m_bFakeAttack : 1; // offset 0x0
    uint8_t m_bNeverMiss : 1; // offset 0x0
    uint8_t m_bLethalAttack : 1; // offset 0x0
    uint8_t m_bTriggeredAttack : 1; // offset 0x0
    uint8_t m_bNoCooldown : 1; // offset 0x0
    uint8_t m_bUseProjectile : 1; // offset 0x0
    uint8_t m_bAutoCastAttack : 1; // offset 0x0
    uint8_t m_bIgnoreBaseArmor : 1; // offset 0x0
    uint8_t m_bIgnoreObstructions : 1; // offset 0x0
    uint8_t m_bSuppressAttackSounds : 1; // offset 0x0
    uint8_t m_bForceAttackMissSound : 1; // offset 0x0
    uint8_t m_bSuppressDamageSounds : 1; // offset 0x0
    uint8_t m_bSuppressDamageEffects : 1; // offset 0x0
    char _pad_0001[0x7]; // offset 0x1
    CHandle< C_BaseEntity > m_hSource; // offset 0x8, size 0x4, align 4
    CHandle< C_DOTABaseAbility > m_hInflictor; // offset 0xC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x10, size 0x4, align 4
    CHandle< C_BaseEntity > m_hProjectileSource; // offset 0x14, size 0x4, align 4
    CHandle< C_BaseEntity > m_hKillCreditOverride; // offset 0x18, size 0x4, align 4
    float32 m_flDamage; // offset 0x1C, size 0x4, align 4
    float32 m_flOriginalDamage; // offset 0x20, size 0x4, align 4
    float32 m_flDamagePhysical; // offset 0x24, size 0x4, align 4
    float32 m_flDamagePhysical_IllusionDisplay; // offset 0x28, size 0x4, align 4
    float32 m_flDamageMagical; // offset 0x2C, size 0x4, align 4
    float32 m_flDamageComposite; // offset 0x30, size 0x4, align 4
    float32 m_flDamagePure; // offset 0x34, size 0x4, align 4
    AttackRecord_t m_iRecord; // offset 0x38, size 0x2, align 255
    char _pad_003A[0x2]; // offset 0x3A
    int32 m_iDamageCategory; // offset 0x3C, size 0x4, align 4
    int32 m_iFailType; // offset 0x40, size 0x4, align 4
    int32 m_iDamageType; // offset 0x44, size 0x4, align 4
    int32 m_iFlags; // offset 0x48, size 0x4, align 4
    int32 m_animation; // offset 0x4C, size 0x4, align 4
    char _pad_0050[0x4]; // offset 0x50
    int32 m_nBashSource; // offset 0x54, size 0x4, align 4
    int32 m_nCritSource; // offset 0x58, size 0x4, align 4
    int32 m_nAttackHeight; // offset 0x5C, size 0x4, align 4
    float32 m_flCombatLogCreditFactor; // offset 0x60, size 0x4, align 4
    float32 m_flCriticalBonus; // offset 0x64, size 0x4, align 4
    float32 m_flCriticalDamage; // offset 0x68, size 0x4, align 4
    float32 m_flCriticalDisplay; // offset 0x6C, size 0x4, align 4
    float32 m_flDeadlyBlowBonus; // offset 0x70, size 0x4, align 4
    float32 m_flDeadlyBlowDamage; // offset 0x74, size 0x4, align 4
    float32 m_flDeadlyBlowDisplay; // offset 0x78, size 0x4, align 4
    int32 m_iProjectileSpeed; // offset 0x7C, size 0x4, align 4
    Vector m_vForceDirectionOverride; // offset 0x80, size 0xC, align 4
    VectorWS m_vTargetLoc; // offset 0x8C, size 0xC, align 4
    VectorWS m_vBlockLoc; // offset 0x98, size 0xC, align 4
    char _pad_00A4[0x4]; // offset 0xA4
    CUtlSymbolLarge m_iszAutoAttackRangedParticle; // offset 0xA8, size 0x8, align 8
    CUtlSymbolLarge m_iszAutoAttackRangedParticleAdditionalEffect; // offset 0xB0, size 0x8, align 8
    char _pad_00B8[0x14]; // offset 0xB8
    ParticleIndex_t m_iCustomFXIndex; // offset 0xCC, size 0x4, align 255
    DOTAProjectileAttachment_t m_iCustomProjectileAttachment; // offset 0xD0, size 0x4, align 4
    char _pad_00D4[0x1C]; // offset 0xD4
    KeyValues3 m_kvExtraData; // offset 0xF0, size 0x10, align 8
    char _pad_0100[0x18]; // offset 0x100
    float32 m_flActualDamageDealtResult; // offset 0x118, size 0x4, align 4
    bool m_bTrackedRecord; // offset 0x11C, size 0x1, align 1
    char _pad_011D[0x3]; // offset 0x11D
};
