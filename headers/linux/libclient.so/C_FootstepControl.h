#pragma once

class C_FootstepControl : public C_BaseTrigger /*0x0*/  // sizeof 0x1118, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1108]; // offset 0x0
    CUtlSymbolLarge m_source; // offset 0x1108, size 0x8, align 8
    CUtlSymbolLarge m_destination; // offset 0x1110, size 0x8, align 8
};
