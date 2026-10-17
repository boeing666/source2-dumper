#pragma once

class CScriptTriggerOnce : public CTriggerOnce /*0x0*/  // sizeof 0xCD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCC0]; // offset 0x0
    Vector m_vExtent; // offset 0xCC0, size 0xC, align 4
    char _pad_0CCC[0x4]; // offset 0xCCC
};
