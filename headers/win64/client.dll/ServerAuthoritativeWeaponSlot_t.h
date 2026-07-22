#pragma once

struct ServerAuthoritativeWeaponSlot_t  // sizeof 0x38, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    uint16 unClass; // offset 0x30, size 0x2, align 2
    uint16 unSlot; // offset 0x32, size 0x2, align 2
    uint16 unItemDefIdx; // offset 0x34, size 0x2, align 2
    char _pad_0036[0x2]; // offset 0x36
};
