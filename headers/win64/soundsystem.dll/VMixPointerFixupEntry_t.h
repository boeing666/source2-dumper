#pragma once

struct VMixPointerFixupEntry_t  // sizeof 0x8, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    uint32 m_nIndex; // offset 0x0, size 0x4, align 4
    CVMixDataOffset m_offset; // offset 0x4, size 0x4, align 255
};
