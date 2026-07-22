#pragma once

struct PackedAABB_t  // sizeof 0x8, align 0xFF [trivial_ctor trivial_dtor] (mathlib_extended)
{
    uint32 m_nPackedMin; // offset 0x0, size 0x4, align 4
    uint32 m_nPackedMax; // offset 0x4, size 0x4, align 4
};
