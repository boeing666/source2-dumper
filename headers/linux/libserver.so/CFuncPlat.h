#pragma once

class CFuncPlat : public CBasePlatTrain /*0x0*/  // sizeof 0xC48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC3C]; // offset 0x0
    float32 m_flSpeed; // offset 0xC3C, size 0x4, align 4
    CUtlSymbolLarge m_sNoise; // offset 0xC40, size 0x8, align 8
};
