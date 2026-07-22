#pragma once

class CCitadel_Item_TrophyCollector : public CCitadel_Item /*0x0*/  // sizeof 0x14F0, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x14D8]; // offset 0x0
    int32 m_iTrophyCount; // offset 0x14D8, size 0x4, align 4 | MNetworkEnable
    int32 m_iInitialKills; // offset 0x14DC, size 0x4, align 4
    int32 m_iInitialAssists; // offset 0x14E0, size 0x4, align 4
    int32 m_iPrevCount; // offset 0x14E4, size 0x4, align 4
    bool m_bMaxStacksReached; // offset 0x14E8, size 0x1, align 1
    char _pad_14E9[0x7]; // offset 0x14E9
};
