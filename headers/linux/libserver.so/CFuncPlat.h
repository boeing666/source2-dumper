#pragma once

class CFuncPlat : public CBasePlatTrain /*0x0*/  // sizeof 0xAF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAEC]; // offset 0x0
    float32 m_flSpeed; // offset 0xAEC, size 0x4, align 4
    CUtlSymbolLarge m_sNoise; // offset 0xAF0, size 0x8, align 8
};
