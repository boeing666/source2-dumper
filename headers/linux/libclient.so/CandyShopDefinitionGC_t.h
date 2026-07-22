#pragma once

struct CandyShopDefinitionGC_t  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    char _pad_0000[0x8]; // offset 0x0
    CandyShopID_t m_unCandyShopID; // offset 0x8, size 0x1, align 255 | MPropertyDescription
    char _pad_0009[0x7]; // offset 0x9
    CUtlVector< CandyShopRewardOptionGC_t > m_vecRewards; // offset 0x10, size 0x18, align 8
};
