#pragma once

class CFuncPlat : public CBasePlatTrain /*0x0*/  // sizeof 0x970, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x960]; // offset 0x0
    float32 m_flSpeed; // offset 0x960, size 0x4, align 4
    char _pad_0964[0x4]; // offset 0x964
    CUtlSymbolLarge m_sNoise; // offset 0x968, size 0x8, align 8
};
