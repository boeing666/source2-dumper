#pragma once

class CEnvGlobal : public CLogicalEntity /*0x0*/  // sizeof 0x4D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CEntityOutputTemplate< int32 > m_outCounter; // offset 0x4A0, size 0x20, align 8
    CUtlSymbolLarge m_globalstate; // offset 0x4C0, size 0x8, align 8
    int32 m_triggermode; // offset 0x4C8, size 0x4, align 4
    int32 m_initialstate; // offset 0x4CC, size 0x4, align 4
    int32 m_counter; // offset 0x4D0, size 0x4, align 4
    char _pad_04D4[0x4]; // offset 0x4D4
};
