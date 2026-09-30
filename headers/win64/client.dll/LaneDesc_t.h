#pragma once

struct LaneDesc_t  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_strLaneName; // offset 0x0, size 0x8, align 8
    CUtlString m_strCSSClass; // offset 0x8, size 0x8, align 8
    bool m_bIsEnemyLane; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
    Color m_Color; // offset 0x14, size 0x4, align 4
    Color m_MinimapColor; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
