#pragma once

class CLogicGameEventListener : public CLogicalEntity /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B8]; // offset 0x0
    CEntityIOOutput m_OnEventFired; // offset 0x4B8, size 0x18, align 255
    CUtlSymbolLarge m_iszGameEventName; // offset 0x4D0, size 0x8, align 8
    CUtlSymbolLarge m_iszGameEventItem; // offset 0x4D8, size 0x8, align 8
    bool m_bEnabled; // offset 0x4E0, size 0x1, align 1
    bool m_bStartDisabled; // offset 0x4E1, size 0x1, align 1
    char _pad_04E2[0x6]; // offset 0x4E2
};
