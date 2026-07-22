#pragma once

class CSoundOpvarSetPathCornerEntity : public CSoundOpvarSetPointEntity /*0x0*/  // sizeof 0x660, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x648]; // offset 0x0
    bool m_bUseParentedPath; // offset 0x648, size 0x1, align 1
    char _pad_0649[0x3]; // offset 0x649
    float32 m_flDistMinSqr; // offset 0x64C, size 0x4, align 4
    float32 m_flDistMaxSqr; // offset 0x650, size 0x4, align 4
    char _pad_0654[0x4]; // offset 0x654
    CUtlSymbolLarge m_iszPathCornerEntityName; // offset 0x658, size 0x8, align 8
};
