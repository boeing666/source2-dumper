#pragma once

struct DestructiblePartDamageRequest_t  // sizeof 0x3C, align 0x4 (client) {MGetKV3ClassDefaults}
{
    HitGroup_t m_nHitGroup; // offset 0x0, size 0x4, align 4
    int32 m_nDamageLevel; // offset 0x4, size 0x4, align 4
    uint16 m_nDesiredHealth; // offset 0x8, size 0x2, align 2
    char _pad_000A[0x2]; // offset 0xA
    EDestructibleParts_DestroyParameterFlags m_nDestroyFlags; // offset 0xC, size 0x4, align 4
    DamageTypes_t m_nDamageType; // offset 0x10, size 0x4, align 4
    float32 m_flBreakDamage; // offset 0x14, size 0x4, align 4
    float32 m_flBreakDamageRadius; // offset 0x18, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAttacker; // offset 0x1C, size 0x4, align 4
    VectorWS m_vWsBreakDamageOrigin; // offset 0x20, size 0xC, align 4
    Vector m_vWsBreakDamageForce; // offset 0x2C, size 0xC, align 4
    char _pad_0038[0x4]; // offset 0x38
};
