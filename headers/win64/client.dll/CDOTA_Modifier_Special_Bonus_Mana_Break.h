#pragma once

class CDOTA_Modifier_Special_Bonus_Mana_Break : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 value; // offset 0x1A58, size 0x4, align 4
    int32 burn_illusions_ranged; // offset 0x1A5C, size 0x4, align 4
    int32 burn_illusions_melee; // offset 0x1A60, size 0x4, align 4
    float32 damage_per_burn; // offset 0x1A64, size 0x4, align 4
};
