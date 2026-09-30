#pragma once

struct NavGravity_t  // sizeof 0x10, align 0x4 [trivial_dtor] (navlib) {MGetKV3ClassDefaults}
{
    Vector m_vGravity; // offset 0x0, size 0xC, align 4
    bool m_bDefault; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
};
