#pragma once

class CFootstepControl : public CBaseTrigger /*0x0*/  // sizeof 0xCB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA0]; // offset 0x0
    CUtlSymbolLarge m_source; // offset 0xCA0, size 0x8, align 8
    CUtlSymbolLarge m_destination; // offset 0xCA8, size 0x8, align 8
};
