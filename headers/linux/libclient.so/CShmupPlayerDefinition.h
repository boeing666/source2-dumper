#pragma once

class CShmupPlayerDefinition  // sizeof 0x60, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    int32 m_nLives; // offset 0x0, size 0x4, align 4
    int32 m_nFirstTimeBonusLives; // offset 0x4, size 0x4, align 4
    float32 m_flModelScale; // offset 0x8, size 0x4, align 4
    float32 m_flShieldRadius; // offset 0xC, size 0x4, align 4
    float32 m_flHeartRadius; // offset 0x10, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0x14, size 0x4, align 4
    float32 m_flAccel; // offset 0x18, size 0x4, align 4
    float32 m_flAttackLaunchDistance; // offset 0x1C, size 0x4, align 4
    int32 m_nModeSwapExtraAttackCooldown; // offset 0x20, size 0x4, align 4
    int32 m_nModeSwapTicks; // offset 0x24, size 0x4, align 4
    int32 m_nEnemyCollideDamage; // offset 0x28, size 0x4, align 4
    int32 m_nFireAttackCooldown; // offset 0x2C, size 0x4, align 4
    float32 m_flFireAttackRadius; // offset 0x30, size 0x4, align 4
    float32 m_flFireAttackSpeed; // offset 0x34, size 0x4, align 4
    int32 m_nIceAttackCooldown; // offset 0x38, size 0x4, align 4
    float32 m_flIceAttackRadius; // offset 0x3C, size 0x4, align 4
    float32 m_flIceAttackSpeed; // offset 0x40, size 0x4, align 4
    float32 m_flSpecialAttackSpeed; // offset 0x44, size 0x4, align 4
    int32 m_nSpecialAttackDamage; // offset 0x48, size 0x4, align 4
    int32 m_nSpecialAttackAbsorptionCost; // offset 0x4C, size 0x4, align 4
    int32 m_nSpecialAttackMax; // offset 0x50, size 0x4, align 4
    int32 m_nTicksPerSpecialAttack; // offset 0x54, size 0x4, align 4
    int32 m_nMaxBulletAbsorption; // offset 0x58, size 0x4, align 4
    float32 m_flBulletSpread; // offset 0x5C, size 0x4, align 4
};
