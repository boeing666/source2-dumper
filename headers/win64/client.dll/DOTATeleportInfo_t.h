#pragma once

struct DOTATeleportInfo_t  // sizeof 0x40, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    GameTime_t m_flTime; // offset 0x30, size 0x4, align 255
    Vector2D m_vPosition; // offset 0x34, size 0x8, align 4
    bool m_bIsOutpost; // offset 0x3C, size 0x1, align 1
    char _pad_003D[0x3]; // offset 0x3D
};
