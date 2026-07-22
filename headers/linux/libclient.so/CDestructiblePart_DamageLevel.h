#pragma once

class CDestructiblePart_DamageLevel  // sizeof 0x48, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_sName; // offset 0x0, size 0x8, align 8 | MPropertyDescription
    CGlobalSymbol m_sBreakablePieceName; // offset 0x8, size 0x8, align 8 | MPropertyStartGroup MPropertyDescription MPropertyAttributeEditor
    int32 m_nBodyGroupValue; // offset 0x10, size 0x4, align 4 | MPropertyDescription
    CSkillInt m_nHealth; // offset 0x14, size 0x10, align 255 | MPropertyStartGroup MPropertyDescription MPropertySuppressExpr
    float32 m_flCriticalDamagePercent; // offset 0x24, size 0x4, align 4 | MPropertyDescription
    EDestructiblePartDamagePassThroughType m_nDamagePassthroughType; // offset 0x28, size 0x4, align 4 | MPropertyDescription
    DestructiblePartDestructionDeathBehavior_t m_nDestructionDeathBehavior; // offset 0x2C, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    CGlobalSymbol m_sCustomDeathHandshake; // offset 0x30, size 0x8, align 8 | MPropertyDescription MPropertySuppressExpr
    bool m_bShouldDestroyOnDeath; // offset 0x38, size 0x1, align 1 | MPropertyDescription
    char _pad_0039[0x3]; // offset 0x39
    CRangeFloat m_flDeathDestroyTime; // offset 0x3C, size 0x8, align 255 | MPropertyDescription MPropertySuppressExpr
    char _pad_0044[0x4]; // offset 0x44
};
