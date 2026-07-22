#pragma once

struct AABBWS_t  // sizeof 0x18, align 0xFF [trivial_ctor trivial_dtor] (mathlib_extended)
{
    VectorWS m_vMinBounds; // offset 0x0, size 0xC, align 4
    VectorWS m_vMaxBounds; // offset 0xC, size 0xC, align 4
};
