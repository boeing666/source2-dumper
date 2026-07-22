#pragma once

struct DotaModifierPathNode_t  // sizeof 0x18, align 0xFF [trivial_ctor trivial_dtor] (client)
{
    Vector m_vPosition; // offset 0x0, size 0xC, align 4
    float32 m_flRadius; // offset 0xC, size 0x4, align 4
    float32 m_flDistToNext; // offset 0x10, size 0x4, align 4
    int32 m_nMoveSpeedType; // offset 0x14, size 0x4, align 4
};
