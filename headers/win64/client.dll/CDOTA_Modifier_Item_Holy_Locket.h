#pragma once

class CDOTA_Modifier_Item_Holy_Locket : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 aura_radius; // offset 0x1A78, size 0x4, align 4
    int32 bonus_health; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_mana; // offset 0x1A80, size 0x4, align 4
    int32 heal_increase_passive; // offset 0x1A84, size 0x4, align 4
    int32 bonus_all_stats; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
