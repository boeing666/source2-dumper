#pragma once

class CScriptTriggerHurt : public CTriggerHurt /*0x0*/  // sizeof 0xAC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAB8]; // offset 0x0
    Vector m_vExtent; // offset 0xAB8, size 0xC, align 4
    char _pad_0AC4[0x4]; // offset 0xAC4
};
