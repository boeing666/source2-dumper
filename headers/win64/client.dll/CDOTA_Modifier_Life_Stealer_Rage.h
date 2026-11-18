#pragma once

class CDOTA_Modifier_Life_Stealer_Rage : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_armor; // offset 0x1AF8, size 0x4, align 4
    int32 magic_resist; // offset 0x1AFC, size 0x4, align 4
    int32 debuff_immunity; // offset 0x1B00, size 0x4, align 4
    int32 movespeed_bonus; // offset 0x1B04, size 0x4, align 4
};
