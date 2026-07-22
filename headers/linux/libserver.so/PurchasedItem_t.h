#pragma once

struct PurchasedItem_t  // sizeof 0x8, align 0xFF [trivial_ctor trivial_dtor] (server)
{
    int32 nItemID; // offset 0x0, size 0x4, align 4
    float32 flPurchaseTime; // offset 0x4, size 0x4, align 4
};
