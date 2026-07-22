#pragma once

class CLogicGameEventListener : public CLogicalEntity /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CEntityIOOutput m_OnEventFired; // offset 0x788, size 0x18, align 255
    CUtlSymbolLarge m_iszGameEventName; // offset 0x7A0, size 0x8, align 8
    CUtlSymbolLarge m_iszGameEventItem; // offset 0x7A8, size 0x8, align 8
    bool m_bEnabled; // offset 0x7B0, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x7B1, size 0x1, align 1
    char _pad_07B2[0x6]; // offset 0x7B2
};
