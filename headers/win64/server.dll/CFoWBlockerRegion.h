#pragma once

class CFoWBlockerRegion : public CBaseEntity /*0x0*/  // sizeof 0x518, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CUtlVectorEmbeddedNetworkVar< FowBlocker_t > m_vecFowBlockers; // offset 0x498, size 0x68, align 8
    float32 m_flMinX; // offset 0x500, size 0x4, align 4
    float32 m_flMaxX; // offset 0x504, size 0x4, align 4
    float32 m_flMinY; // offset 0x508, size 0x4, align 4
    float32 m_flMaxY; // offset 0x50C, size 0x4, align 4
    float32 m_flGridSize; // offset 0x510, size 0x4, align 4
    char _pad_0514[0x4]; // offset 0x514
};
