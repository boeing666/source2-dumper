#pragma once

struct BakedLightingInfo_t::BakedShadowAssignment_t  // sizeof 0xC, align 0x4 [trivial_dtor] (resourcecompiler) {MGetKV3ClassDefaults}
{
    uint32 m_nLightHash; // offset 0x0, size 0x4, align 4
    uint32 m_nMapHash; // offset 0x4, size 0x4, align 4
    int8 m_nShadowChannel; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x3]; // offset 0x9
};
