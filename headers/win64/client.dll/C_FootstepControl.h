#pragma once

class C_FootstepControl : public C_BaseTrigger /*0x0*/  // sizeof 0x1190, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CUtlSymbolLarge m_source; // offset 0x1180, size 0x8, align 8
    CUtlSymbolLarge m_destination; // offset 0x1188, size 0x8, align 8
};
