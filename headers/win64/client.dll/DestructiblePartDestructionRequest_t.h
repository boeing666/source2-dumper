#pragma once

struct DestructiblePartDestructionRequest_t  // sizeof 0x30, align 0xFF [trivial_dtor] (client)
{
    HitGroup_t m_nHitGroup; // offset 0x0, size 0x4, align 4
    int32 m_nDamageLevel; // offset 0x4, size 0x4, align 4
    EDestructibleParts_DestroyParameterFlags m_nDestroyFlags; // offset 0x8, size 0x4, align 4
    DamageTypes_t m_nDamageType; // offset 0xC, size 0x4, align 4
    float32 m_flBreakDamage; // offset 0x10, size 0x4, align 4
    float32 m_flBreakDamageRadius; // offset 0x14, size 0x4, align 4
    VectorWS m_vWsBreakDamageOrigin; // offset 0x18, size 0xC, align 4
    Vector m_vWsBreakDamageForce; // offset 0x24, size 0xC, align 4
};
