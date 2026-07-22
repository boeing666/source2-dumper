#pragma once

class CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity /*0x0*/  // sizeof 0x940, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x928]; // offset 0x0
    bool m_bUseParentedPath; // offset 0x928, size 0x1, align 1
    char _pad_0929[0x3]; // offset 0x929
    float32 m_flDistMinSqr; // offset 0x92C, size 0x4, align 4
    float32 m_flDistMaxSqr; // offset 0x930, size 0x4, align 4
    char _pad_0934[0x4]; // offset 0x934
    CUtlSymbolLarge m_iszPathCornerEntityName; // offset 0x938, size 0x8, align 8
};
