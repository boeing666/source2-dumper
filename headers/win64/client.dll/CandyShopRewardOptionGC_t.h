#pragma once

struct CandyShopRewardOptionGC_t  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CandyShopRewardOptionID_t m_unRewardOptionID; // offset 0x0, size 0x1, align 255 | MPropertyDescription
    char _pad_0001[0x3]; // offset 0x1
    uint32 m_unRewardOptionMaxCount; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    uint32 m_unCandyPrice; // offset 0x8, size 0x4, align 4 | MPropertyDescription
    uint32 m_unWeight; // offset 0xC, size 0x4, align 4 | MPropertyDescription
    ECandyShopRewardOptionType m_eOptionType; // offset 0x10, size 0x4, align 4 | MPropertyDescription
    item_definition_index_t m_unSingleItemDef; // offset 0x14, size 0x4, align 255 | MPropertyDescription MPropertySuppressExpr
    CUtlString m_sLootList; // offset 0x18, size 0x8, align 8 | MPropertyDescription MPropertySuppressExpr
    EEvent m_eEvent; // offset 0x20, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    uint32 m_unEventActionID; // offset 0x24, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    uint32 m_unEventPoints; // offset 0x28, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    char _pad_002C[0x4]; // offset 0x2C
};
