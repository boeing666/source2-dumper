#pragma once

class CScriptTriggerHurt : public CTriggerHurt /*0x0*/  // sizeof 0x980, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x970]; // offset 0x0
    Vector m_vExtent; // offset 0x970, size 0xC, align 4
    char _pad_097C[0x4]; // offset 0x97C
};
