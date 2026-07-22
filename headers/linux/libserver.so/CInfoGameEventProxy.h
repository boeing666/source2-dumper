#pragma once

class CInfoGameEventProxy : public CPointEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CUtlSymbolLarge m_iszEventName; // offset 0x788, size 0x8, align 8
    float32 m_flRange; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x4]; // offset 0x794
};
