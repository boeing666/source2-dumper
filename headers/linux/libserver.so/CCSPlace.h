#pragma once

class CCSPlace : public CServerOnlyModelEntity /*0x0*/  // sizeof 0xA70, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA68]; // offset 0x0
    CUtlSymbolLarge m_name; // offset 0xA68, size 0x8, align 8
};
