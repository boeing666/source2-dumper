#pragma once

struct CandyShopRewardOption_t  // sizeof 0x40, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CandyShopRewardOptionID_t m_unRewardOptionID; // offset 0x0, size 0x1, align 255 | MPropertyDescription
    char _pad_0001[0x7]; // offset 0x1
    CUtlString m_sRewardClass; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    bool m_bDisplayIfAlreadyOwned; // offset 0x10, size 0x1, align 1 | MPropertyDescription
    char _pad_0011[0x2F]; // offset 0x11
};
