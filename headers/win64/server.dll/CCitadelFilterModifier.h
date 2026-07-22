#pragma once

class CCitadelFilterModifier : public CBaseFilter /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4D8]; // offset 0x0
    CUtlSymbolLarge m_iModifierName; // offset 0x4D8, size 0x8, align 8
    char _pad_04E0[0x8]; // offset 0x4E0
};
