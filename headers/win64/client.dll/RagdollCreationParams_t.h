#pragma once

struct RagdollCreationParams_t  // sizeof 0x18, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    Vector m_vForce; // offset 0x0, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0xC, size 0x4, align 4 | MNotSaved
    bool m_bForceCurrentWorldTransform; // offset 0x10, size 0x1, align 1
    bool m_bUseLRURetirement; // offset 0x11, size 0x1, align 1
    char _pad_0012[0x2]; // offset 0x12
    int32 m_nHealthToGrant; // offset 0x14, size 0x4, align 4
};
