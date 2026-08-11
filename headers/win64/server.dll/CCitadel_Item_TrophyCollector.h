#pragma once

class CCitadel_Item_TrophyCollector : public CCitadel_Item /*0x0*/  // sizeof 0x1290, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x1278]; // offset 0x0
    int32 m_iTrophyCount; // offset 0x1278, size 0x4, align 4 | MNetworkEnable
    int32 m_iInitialKills; // offset 0x127C, size 0x4, align 4
    int32 m_iInitialAssists; // offset 0x1280, size 0x4, align 4
    int32 m_iPrevCount; // offset 0x1284, size 0x4, align 4
    bool m_bMaxStacksReached; // offset 0x1288, size 0x1, align 1
    char _pad_1289[0x7]; // offset 0x1289
};
