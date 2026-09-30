#pragma once

struct ragdoll_t  // sizeof 0x50, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlVector< ragdollelement_t > list; // offset 0x0, size 0x18, align 8
    CUtlVector< ragdollhierarchyjoint_t > hierarchyJoints; // offset 0x18, size 0x18, align 8
    CUtlVector< int32 > boneIndex; // offset 0x30, size 0x18, align 8
    bool allowStretch; // offset 0x48, size 0x1, align 1
    bool unused; // offset 0x49, size 0x1, align 1
    char _pad_004A[0x6]; // offset 0x4A
};
