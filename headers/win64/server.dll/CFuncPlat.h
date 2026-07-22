#pragma once

class CFuncPlat : public CBasePlatTrain /*0x0*/  // sizeof 0x828, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x818]; // offset 0x0
    float32 m_flSpeed; // offset 0x818, size 0x4, align 4
    char _pad_081C[0x4]; // offset 0x81C
    CUtlSymbolLarge m_sNoise; // offset 0x820, size 0x8, align 8
};
