#pragma once

class CPathfindLocalData  // sizeof 0x30, align 0xFF [trivial_dtor] (server)
{
public:
    VectorWS m_vLocalStart; // offset 0x0, size 0xC, align 4
    VectorWS m_vLocalEnd; // offset 0xC, size 0xC, align 4
    char _pad_0018[0x8]; // offset 0x18
    WaypointFlags_t m_nEndFlags; // offset 0x20, size 0x4, align 4
    int32 m_nBuildFlags; // offset 0x24, size 0x4, align 4
    float32 m_flYaw; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
};
