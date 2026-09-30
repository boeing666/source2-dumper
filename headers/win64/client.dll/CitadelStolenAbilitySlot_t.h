#pragma once

struct CitadelStolenAbilitySlot_t  // sizeof 0x10, align 0xFF [vtable trivial_dtor] (client)
{
    char _pad_0000[0x8]; // offset 0x0
    EAbilitySlots_t m_eStolenSlot; // offset 0x8, size 0x2, align 2
    bool m_bIsActivelyStolen; // offset 0xA, size 0x1, align 1
    char _pad_000B[0x5]; // offset 0xB
};
