#pragma once

class CFoWBlockerRegion : public C_BaseEntity /*0x0*/  // sizeof 0x7F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< FowBlocker_t > m_vecFowBlockers; // offset 0x770, size 0x68, align 8
    float32 m_flMinX; // offset 0x7D8, size 0x4, align 4
    float32 m_flMaxX; // offset 0x7DC, size 0x4, align 4
    float32 m_flMinY; // offset 0x7E0, size 0x4, align 4
    float32 m_flMaxY; // offset 0x7E4, size 0x4, align 4
    float32 m_flGridSize; // offset 0x7E8, size 0x4, align 4
    char _pad_07EC[0x4]; // offset 0x7EC
};
