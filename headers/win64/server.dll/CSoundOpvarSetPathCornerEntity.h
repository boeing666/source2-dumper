#pragma once

class CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity /*0x0*/  // sizeof 0x670, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x658]; // offset 0x0
    bool m_bUseParentedPath; // offset 0x658, size 0x1, align 1
    char _pad_0659[0x3]; // offset 0x659
    float32 m_flDistMinSqr; // offset 0x65C, size 0x4, align 4
    float32 m_flDistMaxSqr; // offset 0x660, size 0x4, align 4
    char _pad_0664[0x4]; // offset 0x664
    CUtlSymbolLarge m_iszPathCornerEntityName; // offset 0x668, size 0x8, align 8
};
