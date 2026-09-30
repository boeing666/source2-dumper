#pragma once

struct CorruptedPenaltyDef_t  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults MPropertyArrayElementNameKey}
{
    CUtlString m_strName; // offset 0x0, size 0x8, align 8
    float32 m_flRollWeight; // offset 0x8, size 0x4, align 4 | MPropertyDescription
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< CorruptedPenaltyEffect_t > m_vecEffects; // offset 0x10, size 0x18, align 8 | MPropertyDescription
};
