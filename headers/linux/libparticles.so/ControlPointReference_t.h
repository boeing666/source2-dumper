#pragma once

struct ControlPointReference_t  // sizeof 0x14, align 0x4 [trivial_dtor] (particles) {MGetKV3ClassDefaults}
{
    int32 m_controlPointNameString; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vOffsetFromControlPoint; // offset 0x4, size 0xC, align 4 | MPropertyFriendlyName
    bool m_bOffsetInLocalSpace; // offset 0x10, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0011[0x3]; // offset 0x11
};
