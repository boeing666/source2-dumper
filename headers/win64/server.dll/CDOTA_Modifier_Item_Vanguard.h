#pragma once

class CDOTA_Modifier_Item_Vanguard : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_health; // offset 0x1AF8, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1AFC, size 0x4, align 4
    int32 block_damage_ranged; // offset 0x1B00, size 0x4, align 4
    int32 block_damage_melee; // offset 0x1B04, size 0x4, align 4
    int32 block_chance; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
