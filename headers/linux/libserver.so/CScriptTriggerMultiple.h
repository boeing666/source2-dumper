#pragma once

class CScriptTriggerMultiple : public CTriggerMultiple /*0x0*/  // sizeof 0xBF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBE0]; // offset 0x0
    Vector m_vExtent; // offset 0xBE0, size 0xC, align 4
    char _pad_0BEC[0x4]; // offset 0xBEC
};
