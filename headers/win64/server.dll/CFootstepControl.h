#pragma once

class CFootstepControl : public CBaseTrigger /*0x0*/  // sizeof 0x8F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E8]; // offset 0x0
    CUtlSymbolLarge m_source; // offset 0x8E8, size 0x8, align 8
    CUtlSymbolLarge m_destination; // offset 0x8F0, size 0x8, align 8
};
