#pragma once

class CCitadel_ShopProp : public C_DynamicProp /*0x0*/  // sizeof 0x1060, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1050]; // offset 0x0
    bool m_bIsShopOpen; // offset 0x1050, size 0x1, align 1
    char _pad_1051[0x3]; // offset 0x1051
    int32 m_iLane; // offset 0x1054, size 0x4, align 4
    char _pad_1058[0x8]; // offset 0x1058
};
