#pragma once

struct PathAccompanyCoordinate_t  // sizeof 0x14, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    float32 m_flProgress; // offset 0x0, size 0x4, align 4
    float32 m_flLeftOffset; // offset 0x4, size 0x4, align 4
    VectorWS m_vOriginalPosition; // offset 0x8, size 0xC, align 4
};
