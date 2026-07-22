#pragma once

class CFuncPlat : public CBasePlatTrain /*0x0*/  // sizeof 0xB00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAF4]; // offset 0x0
    float32 m_flSpeed; // offset 0xAF4, size 0x4, align 4
    CUtlSymbolLarge m_sNoise; // offset 0xAF8, size 0x8, align 8
};
