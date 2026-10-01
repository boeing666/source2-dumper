#pragma once

class CCitadel_ShopProp : public CDynamicProp /*0x0*/  // sizeof 0xD60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD50]; // offset 0x0
    bool m_bIsShopOpen; // offset 0xD50, size 0x1, align 1
    char _pad_0D51[0x3]; // offset 0xD51
    int32 m_iLane; // offset 0xD54, size 0x4, align 4
    char _pad_0D58[0x8]; // offset 0xD58
};
