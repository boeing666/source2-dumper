#pragma once

class sLoadoutItem  // sizeof 0x18, align 0xFF [trivial_dtor] (server)
{
public:
    CUtlSymbolLarge name; // offset 0x0, size 0x8, align 8
    int32 iFlags; // offset 0x8, size 0x4, align 4
    AbilityID_t iAbilityID; // offset 0xC, size 0x4, align 255
    bool bPurchased; // offset 0x10, size 0x1, align 1
    bool bPregame; // offset 0x11, size 0x1, align 1
    char _pad_0012[0x6]; // offset 0x12
};
