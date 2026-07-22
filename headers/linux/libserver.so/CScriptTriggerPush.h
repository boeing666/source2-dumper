#pragma once

class CScriptTriggerPush : public CTriggerPush /*0x0*/  // sizeof 0xC00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBF4]; // offset 0x0
    Vector m_vExtent; // offset 0xBF4, size 0xC, align 4
};
