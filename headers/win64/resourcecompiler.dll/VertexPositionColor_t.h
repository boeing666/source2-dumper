#pragma once

struct VertexPositionColor_t  // sizeof 0x10, align 0xFF [trivial_dtor] (physicslib)
{
    Vector m_vPosition; // offset 0x0, size 0xC, align 4
    char _pad_000C[0x4]; // offset 0xC
};
