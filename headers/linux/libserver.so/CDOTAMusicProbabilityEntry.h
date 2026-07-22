#pragma once

class CDOTAMusicProbabilityEntry  // sizeof 0x28, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< float32 > m_flProbabilityElements; // offset 0x8, size 0x18, align 8
    float32 m_flProbability; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
};
