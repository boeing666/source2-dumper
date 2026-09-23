#pragma once

class CScriptNavBlocker : public CFuncNavBlocker /*0x0*/  // sizeof 0xB58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB48]; // offset 0x0
    Vector m_vExtent; // offset 0xB48, size 0xC, align 4
    char _pad_0B54[0x4]; // offset 0xB54
};
