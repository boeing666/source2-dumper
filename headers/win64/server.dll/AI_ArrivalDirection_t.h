#pragma once

struct AI_ArrivalDirection_t  // sizeof 0x58, align 0x8 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    CRelativeLocation m_directionTarget; // offset 0x0, size 0x48, align 8
    Vector m_vDirection; // offset 0x48, size 0xC, align 4
    float32 m_flToleranceDot; // offset 0x54, size 0x4, align 4
};
