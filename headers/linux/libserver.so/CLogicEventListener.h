#pragma once

class CLogicEventListener : public CLogicalEntity /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CUtlString m_strEventName; // offset 0x798, size 0x8, align 8
    bool m_bIsEnabled; // offset 0x7A0, size 0x1, align 1
    char _pad_07A1[0x3]; // offset 0x7A1
    int32 m_nTeam; // offset 0x7A4, size 0x4, align 4
    CEntityOutputTemplate< CUtlString > m_OnEventFired; // offset 0x7A8, size 0x20, align 8
};
