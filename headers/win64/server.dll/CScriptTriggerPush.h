#pragma once

class CScriptTriggerPush : public CTriggerPush /*0x0*/  // sizeof 0xA38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA28]; // offset 0x0
    Vector m_vExtent; // offset 0xA28, size 0xC, align 4
    char _pad_0A34[0x4]; // offset 0xA34
};
