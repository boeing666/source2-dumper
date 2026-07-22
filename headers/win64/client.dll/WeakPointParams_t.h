#pragma once

struct WeakPointParams_t  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_strName; // offset 0x0, size 0x8, align 8
    HitGroup_t m_nHitGroup; // offset 0x8, size 0x4, align 4
    int32 m_nHealth; // offset 0xC, size 0x4, align 4
    int32 m_nMaxHealth; // offset 0x10, size 0x4, align 4
    int32 m_nOnBreakBonusDamage; // offset 0x14, size 0x4, align 4
    EWeakPointBreakBehavior m_eBreakBehavior; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
    CGlobalSymbol m_strOnBreakAnimGraphParam; // offset 0x20, size 0x8, align 8
};
