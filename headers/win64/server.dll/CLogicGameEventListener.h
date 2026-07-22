#pragma once

class CLogicGameEventListener : public CLogicalEntity /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CEntityIOOutput m_OnEventFired; // offset 0x4B0, size 0x18, align 255
    CUtlSymbolLarge m_iszGameEventName; // offset 0x4C8, size 0x8, align 8
    CUtlSymbolLarge m_iszGameEventItem; // offset 0x4D0, size 0x8, align 8
    bool m_bEnabled; // offset 0x4D8, size 0x1, align 1 | MNetworkEnable
    bool m_bStartDisabled; // offset 0x4D9, size 0x1, align 1
    char _pad_04DA[0x6]; // offset 0x4DA
};
