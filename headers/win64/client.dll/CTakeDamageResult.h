#pragma once

class CTakeDamageResult  // sizeof 0x30, align 0xFF [trivial_dtor] (client)
{
public:
    CTakeDamageInfo* m_pOriginatingInfo; // offset 0x0, size 0x8, align 8 | MNotSaved
    int32 m_nHealthLost; // offset 0x8, size 0x4, align 4
    int32 m_nHealthBefore; // offset 0xC, size 0x4, align 4
    int32 m_nDamageDealt; // offset 0x10, size 0x4, align 4
    float32 m_flPreModifiedDamage; // offset 0x14, size 0x4, align 4
    int32 m_nTotalledHealthLost; // offset 0x18, size 0x4, align 4
    int32 m_nTotalledDamageDealt; // offset 0x1C, size 0x4, align 4
    float32 m_flTotalledPreModifiedDamage; // offset 0x20, size 0x4, align 4
    bool m_bWasDamageSuppressed; // offset 0x24, size 0x1, align 1
    bool m_bSuppressFlinch; // offset 0x25, size 0x1, align 1
    char _pad_0026[0x2]; // offset 0x26
    HitGroup_t m_nOverrideFlinchHitGroup; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
};
