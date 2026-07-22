#pragma once

class CDOTAOverworldClickable  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_sSnippet; // offset 0x8, size 0x8, align 8
    Vector2D m_vPos; // offset 0x10, size 0x8, align 4
    bool m_bBackground; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x7]; // offset 0x19
};
