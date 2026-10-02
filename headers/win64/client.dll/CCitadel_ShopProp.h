#pragma once

class CCitadel_ShopProp : public C_DynamicProp /*0x0*/  // sizeof 0x10C0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x10B0]; // offset 0x0
    bool m_bIsShopOpen; // offset 0x10B0, size 0x1, align 1
    char _pad_10B1[0x3]; // offset 0x10B1
    int32 m_iLane; // offset 0x10B4, size 0x4, align 4
    char _pad_10B8[0x8]; // offset 0x10B8
};
