#pragma once

class CFoWBlockerRegion : public CBaseEntity /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlVectorEmbeddedNetworkVar< FowBlocker_t > m_vecFowBlockers; // offset 0x778, size 0x68, align 8
    float32 m_flMinX; // offset 0x7E0, size 0x4, align 4
    float32 m_flMaxX; // offset 0x7E4, size 0x4, align 4
    float32 m_flMinY; // offset 0x7E8, size 0x4, align 4
    float32 m_flMaxY; // offset 0x7EC, size 0x4, align 4
    float32 m_flGridSize; // offset 0x7F0, size 0x4, align 4
    char _pad_07F4[0x4]; // offset 0x7F4
};
