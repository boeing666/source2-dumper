#pragma once

class CFoWBlockerRegion : public C_BaseEntity /*0x0*/  // sizeof 0x670, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< FowBlocker_t > m_vecFowBlockers; // offset 0x5F0, size 0x68, align 8
    float32 m_flMinX; // offset 0x658, size 0x4, align 4
    float32 m_flMaxX; // offset 0x65C, size 0x4, align 4
    float32 m_flMinY; // offset 0x660, size 0x4, align 4
    float32 m_flMaxY; // offset 0x664, size 0x4, align 4
    float32 m_flGridSize; // offset 0x668, size 0x4, align 4
    char _pad_066C[0x4]; // offset 0x66C
};
