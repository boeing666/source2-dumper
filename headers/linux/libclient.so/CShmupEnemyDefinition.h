#pragma once

class CShmupEnemyDefinition  // sizeof 0x80, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CUtlString m_strNameInMap; // offset 0x0, size 0x8, align 8
    int32 m_nHealth; // offset 0x8, size 0x4, align 4
    float32 m_flHitboxRadius; // offset 0xC, size 0x4, align 4
    Vector m_vHitboxOffsetWS; // offset 0x10, size 0xC, align 4
    int32 m_nKillScore; // offset 0x1C, size 0x4, align 4
    float32 m_flModelScale; // offset 0x20, size 0x4, align 4
    bool m_bIsBoss; // offset 0x24, size 0x1, align 1
    char _pad_0025[0x3]; // offset 0x25
    CUtlVector< CShmupBulletInfo > m_vecBulletPatterns; // offset 0x28, size 0x18, align 8 | MPropertySuppressExpr
    CUtlVector< CShmupBulletInfo > m_vecOnDeathBulletPatterns; // offset 0x40, size 0x18, align 8
    CUtlVector< CShmupBulletInfo > m_vecSelfDestroyBulletPatterns; // offset 0x58, size 0x18, align 8
    char _pad_0070[0x10]; // offset 0x70
};
