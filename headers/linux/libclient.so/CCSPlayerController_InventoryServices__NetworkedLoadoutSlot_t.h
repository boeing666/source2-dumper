#pragma once

struct CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t  // sizeof 0xC8, align 0xFF (client)
{
    C_EconItemView* pItem; // offset 0x0, size 0x8, align 8
    uint16 team; // offset 0x8, size 0x2, align 2
    uint16 slot; // offset 0xA, size 0x2, align 2
    char _pad_000C[0xBC]; // offset 0xC
};
