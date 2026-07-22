#pragma once

class CFootstepControl : public CBaseTrigger /*0x0*/  // sizeof 0xBD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC0]; // offset 0x0
    CUtlSymbolLarge m_source; // offset 0xBC0, size 0x8, align 8
    CUtlSymbolLarge m_destination; // offset 0xBC8, size 0x8, align 8
};
