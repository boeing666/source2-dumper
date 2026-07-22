#pragma once

class CDOTA_Modifier_Life_Stealer_Rage : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_armor; // offset 0x1A58, size 0x4, align 4
    int32 magic_resist; // offset 0x1A5C, size 0x4, align 4
    int32 debuff_immunity; // offset 0x1A60, size 0x4, align 4
    int32 movespeed_bonus; // offset 0x1A64, size 0x4, align 4
};
