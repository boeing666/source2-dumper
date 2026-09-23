#pragma once

class CScriptTriggerMultiple : public CTriggerMultiple /*0x0*/  // sizeof 0xCC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCB8]; // offset 0x0
    Vector m_vExtent; // offset 0xCB8, size 0xC, align 4
    char _pad_0CC4[0x4]; // offset 0xCC4
};
