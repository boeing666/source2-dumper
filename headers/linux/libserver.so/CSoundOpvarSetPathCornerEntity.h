#pragma once

class CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity /*0x0*/  // sizeof 0x950, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x938]; // offset 0x0
    bool m_bUseParentedPath; // offset 0x938, size 0x1, align 1
    char _pad_0939[0x3]; // offset 0x939
    float32 m_flDistMinSqr; // offset 0x93C, size 0x4, align 4
    float32 m_flDistMaxSqr; // offset 0x940, size 0x4, align 4
    char _pad_0944[0x4]; // offset 0x944
    CUtlSymbolLarge m_iszPathCornerEntityName; // offset 0x948, size 0x8, align 8
};
