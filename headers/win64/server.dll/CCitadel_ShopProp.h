#pragma once

class CCitadel_ShopProp : public CDynamicProp /*0x0*/  // sizeof 0xDB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    bool m_bIsShopOpen; // offset 0xDA0, size 0x1, align 1
    char _pad_0DA1[0x3]; // offset 0xDA1
    int32 m_iLane; // offset 0xDA4, size 0x4, align 4
    char _pad_0DA8[0x8]; // offset 0xDA8
};
