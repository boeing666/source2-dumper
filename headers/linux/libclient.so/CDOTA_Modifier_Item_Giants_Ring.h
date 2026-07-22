#pragma once

class CDOTA_Modifier_Item_Giants_Ring : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_strength; // offset 0x1A58, size 0x4, align 4
    int32 movement_speed; // offset 0x1A5C, size 0x4, align 4
    int32 model_scale; // offset 0x1A60, size 0x4, align 4
    float32 damage_radius; // offset 0x1A64, size 0x4, align 4
    int32 pct_str_damage_per_second; // offset 0x1A68, size 0x4, align 4
    float32 tick_rate; // offset 0x1A6C, size 0x4, align 4
};
