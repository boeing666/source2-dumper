#pragma once

struct AI_Navigator_DebugSnapshotData_t::Waypoint_t  // sizeof 0x18, align 0x4 [trivial_ctor trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    VectorWS position; // offset 0x0, size 0xC, align 4
    uint32 nav_type; // offset 0xC, size 0x4, align 4
    uint32 flags; // offset 0x10, size 0x4, align 4
    bool is_pathcorner; // offset 0x14, size 0x1, align 1
    char _pad_0015[0x3]; // offset 0x15
};
