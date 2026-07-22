#pragma once

class CScriptNavBlocker : public CFuncNavBlocker /*0x0*/  // sizeof 0xA78, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA68]; // offset 0x0
    Vector m_vExtent; // offset 0xA68, size 0xC, align 4
    char _pad_0A74[0x4]; // offset 0xA74
};
