#pragma once

struct ClutterTile_t  // sizeof 0x20, align 0x4 [trivial_dtor] (worldrenderer) {MGetKV3ClassDefaults}
{
    uint32 m_nFirstInstance; // offset 0x0, size 0x4, align 4
    uint32 m_nLastInstance; // offset 0x4, size 0x4, align 4
    AABB_t m_BoundsWs; // offset 0x8, size 0x18, align 255
};
