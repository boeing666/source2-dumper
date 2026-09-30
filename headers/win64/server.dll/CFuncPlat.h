#pragma once

class CFuncPlat : public CBasePlatTrain /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x920]; // offset 0x0
    float32 m_flSpeed; // offset 0x920, size 0x4, align 4
    char _pad_0924[0x4]; // offset 0x924
    CUtlSymbolLarge m_sNoise; // offset 0x928, size 0x8, align 8
};
