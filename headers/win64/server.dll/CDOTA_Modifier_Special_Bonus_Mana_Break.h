#pragma once

class CDOTA_Modifier_Special_Bonus_Mana_Break : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 value; // offset 0x1AF8, size 0x4, align 4
    int32 burn_illusions_ranged; // offset 0x1AFC, size 0x4, align 4
    int32 burn_illusions_melee; // offset 0x1B00, size 0x4, align 4
    float32 damage_per_burn; // offset 0x1B04, size 0x4, align 4
};
