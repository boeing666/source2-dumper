#pragma once

class CMultiSource : public CLogicalEntity /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CHandle< CBaseEntity >[32] m_rgEntities; // offset 0x778, size 0x80, align 4
    int32[32] m_rgTriggered; // offset 0x7F8, size 0x80, align 4
    CEntityIOOutput m_OnTrigger; // offset 0x878, size 0x18, align 255
    int32 m_iTotal; // offset 0x890, size 0x4, align 4
    char _pad_0894[0x4]; // offset 0x894
    CUtlSymbolLarge m_globalstate; // offset 0x898, size 0x8, align 8
};
