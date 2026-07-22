#pragma once

class CDOTA_Modifier_Item_Crimson_Guard_Extra : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 block_chance_active; // offset 0x1A58, size 0x4, align 4
    int32 block_damage_active; // offset 0x1A5C, size 0x4, align 4
    int32 block_penalty_ranged; // offset 0x1A60, size 0x4, align 4
    float32 max_hp_pct; // offset 0x1A64, size 0x4, align 4
};
