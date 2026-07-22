#pragma once

class CLogicGameEventListener : public CLogicalEntity /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEntityIOOutput m_OnEventFired; // offset 0x798, size 0x18, align 255
    CUtlSymbolLarge m_iszGameEventName; // offset 0x7B0, size 0x8, align 8
    CUtlSymbolLarge m_iszGameEventItem; // offset 0x7B8, size 0x8, align 8
    bool m_bEnabled; // offset 0x7C0, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x7C1, size 0x1, align 1
    char _pad_07C2[0x6]; // offset 0x7C2
};
