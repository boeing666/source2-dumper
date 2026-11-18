#pragma once

class CDOTA_Modifier_Item_Crimson_Guard : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_health; // offset 0x1AF8, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1AFC, size 0x4, align 4
    float32 bonus_armor; // offset 0x1B00, size 0x4, align 4
    int32 block_damage_ranged; // offset 0x1B04, size 0x4, align 4
    int32 block_damage_melee; // offset 0x1B08, size 0x4, align 4
    int32 block_chance; // offset 0x1B0C, size 0x4, align 4
    float32 bonus_aoe_radius; // offset 0x1B10, size 0x4, align 4
    float32 aura_radius; // offset 0x1B14, size 0x4, align 4
};
