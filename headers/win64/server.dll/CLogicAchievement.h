#pragma once

class CLogicAchievement : public CLogicalEntity /*0x0*/  // sizeof 0x4C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    bool m_bDisabled; // offset 0x498, size 0x1, align 1
    char _pad_0499[0x7]; // offset 0x499
    CUtlSymbolLarge m_iszAchievementEventID; // offset 0x4A0, size 0x8, align 8
    CEntityIOOutput m_OnFired; // offset 0x4A8, size 0x18, align 255
};
