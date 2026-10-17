#pragma once

class CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x930]; // offset 0x0
    bool m_bUseParentedPath; // offset 0x930, size 0x1, align 1
    char _pad_0931[0x3]; // offset 0x931
    float32 m_flDistMinSqr; // offset 0x934, size 0x4, align 4
    float32 m_flDistMaxSqr; // offset 0x938, size 0x4, align 4
    char _pad_093C[0x4]; // offset 0x93C
    CUtlSymbolLarge m_iszPathCornerEntityName; // offset 0x940, size 0x8, align 8
};
