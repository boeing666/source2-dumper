#pragma once

class CScriptNavBlocker : public CFuncNavBlocker /*0x0*/  // sizeof 0xBC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBB8]; // offset 0x0
    Vector m_vExtent; // offset 0xBB8, size 0xC, align 4
    char _pad_0BC4[0x4]; // offset 0xBC4
};
