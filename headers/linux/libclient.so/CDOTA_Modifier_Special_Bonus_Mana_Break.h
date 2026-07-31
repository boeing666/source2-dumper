#pragma once

class CDOTA_Modifier_Special_Bonus_Mana_Break : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 value; // offset 0x1A78, size 0x4, align 4
    int32 burn_illusions_ranged; // offset 0x1A7C, size 0x4, align 4
    int32 burn_illusions_melee; // offset 0x1A80, size 0x4, align 4
    float32 damage_per_burn; // offset 0x1A84, size 0x4, align 4
};
