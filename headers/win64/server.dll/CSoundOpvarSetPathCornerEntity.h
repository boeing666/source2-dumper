#pragma once

class CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity /*0x0*/  // sizeof 0x648, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x630]; // offset 0x0
    bool m_bUseParentedPath; // offset 0x630, size 0x1, align 1
    char _pad_0631[0x3]; // offset 0x631
    float32 m_flDistMinSqr; // offset 0x634, size 0x4, align 4
    float32 m_flDistMaxSqr; // offset 0x638, size 0x4, align 4
    char _pad_063C[0x4]; // offset 0x63C
    CUtlSymbolLarge m_iszPathCornerEntityName; // offset 0x640, size 0x8, align 8
};
