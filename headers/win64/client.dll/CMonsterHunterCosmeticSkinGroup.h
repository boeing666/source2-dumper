#pragma once

class CMonsterHunterCosmeticSkinGroup  // sizeof 0x68, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_strSetName; // offset 0x0, size 0x8, align 8
    CUtlVector< uint32 > m_vecActionIDSlots; // offset 0x8, size 0x18, align 8
    bool m_bRequiresPremium; // offset 0x20, size 0x1, align 1
    bool m_bShowPremiumPurchaseAsCrafting; // offset 0x21, size 0x1, align 1
    char _pad_0022[0x6]; // offset 0x22
    CUtlString m_strCustomClass; // offset 0x28, size 0x8, align 8
    CUtlString m_strCustomStyleSelectAnimation; // offset 0x30, size 0x8, align 8
    float32 m_flAnimationFreezeTime; // offset 0x38, size 0x4, align 4
    float32 m_flCustomStyleSelectRotation; // offset 0x3C, size 0x4, align 4
    item_definition_index_t m_unPreviewItemIndex; // offset 0x40, size 0x4, align 255
    char _pad_0044[0x24]; // offset 0x44
};
