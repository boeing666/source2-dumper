#pragma once

struct PointDefinition_t  // sizeof 0x14, align 0x4 [trivial_dtor] (particles) {MGetKV3ClassDefaults}
{
    int32 m_nControlPoint; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLocalCoords; // offset 0x4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0005[0x3]; // offset 0x5
    Vector m_vOffset; // offset 0x8, size 0xC, align 4 | MPropertyFriendlyName
};
