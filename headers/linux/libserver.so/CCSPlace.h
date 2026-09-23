#pragma once

class CCSPlace : public CServerOnlyModelEntity /*0x0*/  // sizeof 0xB50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB48]; // offset 0x0
    CUtlSymbolLarge m_name; // offset 0xB48, size 0x8, align 8
};
