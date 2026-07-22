#pragma once

struct CandyShopCandyType_t  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CandyShopCandyTypeID_t m_unCandyTypeID; // offset 0x0, size 0x1, align 255 | MPropertyDescription
    char _pad_0001[0x7]; // offset 0x1
    CUtlString m_sLocName; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    CPanoramaImageName m_sImage; // offset 0x10, size 0x10, align 8 | MPropertyDescription
};
