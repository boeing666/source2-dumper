#pragma once

class CFuncPlat : public CBasePlatTrain /*0x0*/  // sizeof 0xBD8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBCC]; // offset 0x0
    float32 m_flSpeed; // offset 0xBCC, size 0x4, align 4
    CUtlSymbolLarge m_sNoise; // offset 0xBD0, size 0x8, align 8
};
