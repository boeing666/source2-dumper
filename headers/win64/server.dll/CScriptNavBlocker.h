#pragma once

class CScriptNavBlocker : public CFuncNavBlocker /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x790]; // offset 0x0
    Vector m_vExtent; // offset 0x790, size 0xC, align 4
    char _pad_079C[0x4]; // offset 0x79C
};
