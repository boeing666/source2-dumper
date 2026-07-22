#pragma once

class CMultiSource : public CLogicalEntity /*0x0*/  // sizeof 0x8B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CHandle< CBaseEntity >[32] m_rgEntities; // offset 0x788, size 0x80, align 4
    int32[32] m_rgTriggered; // offset 0x808, size 0x80, align 4
    CEntityIOOutput m_OnTrigger; // offset 0x888, size 0x18, align 255
    int32 m_iTotal; // offset 0x8A0, size 0x4, align 4
    char _pad_08A4[0x4]; // offset 0x8A4
    CUtlSymbolLarge m_globalstate; // offset 0x8A8, size 0x8, align 8
};
