#pragma once

class CLogicEventListener : public CLogicalEntity /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B8]; // offset 0x0
    CUtlString m_strEventName; // offset 0x4B8, size 0x8, align 8
    bool m_bIsEnabled; // offset 0x4C0, size 0x1, align 1
    char _pad_04C1[0x3]; // offset 0x4C1
    int32 m_nTeam; // offset 0x4C4, size 0x4, align 4
    CEntityOutputTemplate< CUtlString > m_OnEventFired; // offset 0x4C8, size 0x20, align 8
};
