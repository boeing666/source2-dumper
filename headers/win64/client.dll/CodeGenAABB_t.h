#pragma once

struct CodeGenAABB_t  // sizeof 0x18, align 0xFF [trivial_ctor trivial_dtor] (client)
{
    Vector m_vMinBounds; // offset 0x0, size 0xC, align 4
    Vector m_vMaxBounds; // offset 0xC, size 0xC, align 4
};
