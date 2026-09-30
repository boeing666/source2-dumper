#pragma once

class CScriptTriggerHurt : public CTriggerHurt /*0x0*/  // sizeof 0xA88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA78]; // offset 0x0
    Vector m_vExtent; // offset 0xA78, size 0xC, align 4
    char _pad_0A84[0x4]; // offset 0xA84
};
