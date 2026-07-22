#pragma once

class CBaseDMStart : public CPointEntity /*0x0*/  // sizeof 0x4A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CUtlSymbolLarge m_Master; // offset 0x498, size 0x8, align 8
};
