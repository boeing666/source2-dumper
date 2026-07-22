#pragma once

class CLogicAchievement : public CLogicalEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bDisabled; // offset 0x778, size 0x1, align 1
    char _pad_0779[0x7]; // offset 0x779
    CUtlSymbolLarge m_iszAchievementEventID; // offset 0x780, size 0x8, align 8
    CEntityIOOutput m_OnFired; // offset 0x788, size 0x18, align 255
};
