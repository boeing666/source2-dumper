#pragma once

class CScriptTriggerHurt : public CTriggerHurt /*0x0*/  // sizeof 0xA60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA50]; // offset 0x0
    Vector m_vExtent; // offset 0xA50, size 0xC, align 4
    char _pad_0A5C[0x4]; // offset 0xA5C
};
