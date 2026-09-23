#pragma once

class CScriptTriggerHurt : public CTriggerHurt /*0x0*/  // sizeof 0xD30, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD20]; // offset 0x0
    Vector m_vExtent; // offset 0xD20, size 0xC, align 4
    char _pad_0D2C[0x4]; // offset 0xD2C
};
