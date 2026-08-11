#pragma once

struct CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t  // sizeof 0x10, align 0xFF [trivial_ctor trivial_dtor] (server)
{
    CEconItemView* pItem; // offset 0x0, size 0x8, align 8
    uint16 team; // offset 0x8, size 0x2, align 2
    uint16 slot; // offset 0xA, size 0x2, align 2
    char _pad_000C[0x4]; // offset 0xC
};
