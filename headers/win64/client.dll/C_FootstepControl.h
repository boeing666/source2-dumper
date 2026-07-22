#pragma once

class C_FootstepControl : public C_BaseTrigger /*0x0*/  // sizeof 0x10A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    CUtlSymbolLarge m_source; // offset 0x1098, size 0x8, align 8
    CUtlSymbolLarge m_destination; // offset 0x10A0, size 0x8, align 8
};
