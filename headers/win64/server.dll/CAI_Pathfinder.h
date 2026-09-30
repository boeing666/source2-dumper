#pragma once

class CAI_Pathfinder  // sizeof 0x10, align 0x8 [vtable trivial_dtor] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    float32 m_flPathMaxDetour; // offset 0x8, size 0x4, align 4
    CAI_PathfindFinderData_t m_FinderData; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
};
