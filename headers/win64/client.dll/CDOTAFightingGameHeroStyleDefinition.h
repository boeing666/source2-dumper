#pragma once

class CDOTAFightingGameHeroStyleDefinition  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    bool m_bUseDefault; // offset 0x0, size 0x1, align 1
    bool m_bUseEquipped; // offset 0x1, size 0x1, align 1
    style_index_t m_unStyleIndex; // offset 0x2, size 0x1, align 255
    char _pad_0003[0x5]; // offset 0x3
    CUtlString m_strLocName; // offset 0x8, size 0x8, align 8
    CUtlVector< item_definition_index_t > m_vecItems; // offset 0x10, size 0x18, align 8
};
