#pragma once

struct AI_PathfindingData_VectorGoal_t  // sizeof 0x60, align 0x8 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    CRelativeLocation m_OptionalStartPoint; // offset 0x0, size 0x48, align 8
    Vector m_vDir; // offset 0x48, size 0xC, align 4
    float32 m_flTargetDist; // offset 0x54, size 0x4, align 4
    float32 m_flMinDist; // offset 0x58, size 0x4, align 4
    bool m_bShouldDeflect; // offset 0x5C, size 0x1, align 1
    char _pad_005D[0x3]; // offset 0x5D
};
