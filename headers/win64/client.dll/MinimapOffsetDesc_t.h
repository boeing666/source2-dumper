#pragma once

struct MinimapOffsetDesc_t  // sizeof 0x10, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    Class_T eEntityClass; // offset 0x0, size 0x4, align 4
    Vector2D vOffset2D; // offset 0x4, size 0x8, align 4
    int32 iLane; // offset 0xC, size 0x4, align 4
};
