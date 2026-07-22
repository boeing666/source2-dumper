#pragma once

struct LaneDesc_t  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_strLaneName; // offset 0x0, size 0x8, align 8
    CUtlString m_strCSSClass; // offset 0x8, size 0x8, align 8
    Color m_Color; // offset 0x10, size 0x4, align 1
    Color m_MinimapZiplineColorOverride; // offset 0x14, size 0x4, align 1
    Color m_ObjectiveColor; // offset 0x18, size 0x4, align 1
    char _pad_001C[0x4]; // offset 0x1C
};
