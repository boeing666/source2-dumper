#pragma once

struct VertexPositionNormal_t  // sizeof 0x18, align 0xFF [trivial_ctor trivial_dtor] (physicslib)
{
    Vector m_vPosition; // offset 0x0, size 0xC, align 4
    Vector m_vNormal; // offset 0xC, size 0xC, align 4
};
