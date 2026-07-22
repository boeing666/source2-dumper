#pragma once

class CScriptUniformRandomStream  // sizeof 0xA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    HSCRIPT m_hScriptScope; // offset 0x8, size 0x8, align 8
    char _pad_0010[0x8C]; // offset 0x10
    int32 m_nInitialSeed; // offset 0x9C, size 0x4, align 4
};
