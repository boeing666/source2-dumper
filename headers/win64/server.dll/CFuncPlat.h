#pragma once

class CFuncPlat : public CBasePlatTrain /*0x0*/  // sizeof 0x908, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F8]; // offset 0x0
    float32 m_flSpeed; // offset 0x8F8, size 0x4, align 4
    char _pad_08FC[0x4]; // offset 0x8FC
    CUtlSymbolLarge m_sNoise; // offset 0x900, size 0x8, align 8
};
