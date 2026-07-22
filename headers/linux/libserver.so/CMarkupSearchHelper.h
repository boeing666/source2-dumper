#pragma once

class CMarkupSearchHelper  // sizeof 0x2B0, align 0xFF (server) {MGetKV3ClassDefaults}
{
public:
    NavHull_t m_navHull; // offset 0x0, size 0x4, align 255
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_tagString; // offset 0x8, size 0x8, align 8
    CUtlString m_nameString; // offset 0x10, size 0x8, align 8
    VectorWS m_vRefPos; // offset 0x18, size 0xC, align 4
    bool m_bRefPosSet; // offset 0x24, size 0x1, align 1
    bool m_bUseStepHeight; // offset 0x25, size 0x1, align 1
    bool m_bActive; // offset 0x26, size 0x1, align 1
    char _pad_0027[0x289]; // offset 0x27
};
