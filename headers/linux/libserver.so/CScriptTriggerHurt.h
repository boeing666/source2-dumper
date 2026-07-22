#pragma once

class CScriptTriggerHurt : public CTriggerHurt /*0x0*/  // sizeof 0xC58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC48]; // offset 0x0
    Vector m_vExtent; // offset 0xC48, size 0xC, align 4
    char _pad_0C54[0x4]; // offset 0xC54
};
