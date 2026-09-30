#pragma once

class CCitadel_Item_TrophyCollector : public CCitadel_Item /*0x0*/  // sizeof 0x1620, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1608]; // offset 0x0
    int32 m_iTrophyCount; // offset 0x1608, size 0x4, align 4
    int32 m_iInitialKills; // offset 0x160C, size 0x4, align 4
    int32 m_iInitialAssists; // offset 0x1610, size 0x4, align 4
    int32 m_iPrevCount; // offset 0x1614, size 0x4, align 4
    bool m_bMaxStacksReached; // offset 0x1618, size 0x1, align 1
    char _pad_1619[0x7]; // offset 0x1619
};
