#pragma once

class ClientQuickBuyItemState  // sizeof 0x38, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    int16 nItemType; // offset 0x30, size 0x2, align 2
    bool bPurchasable; // offset 0x32, size 0x1, align 1
    char _pad_0033[0x5]; // offset 0x33
};
