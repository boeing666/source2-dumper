#pragma once

class CDOTA_Modifier_Item_Crimson_Guard_Extra : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 block_chance_active; // offset 0x1A78, size 0x4, align 4
    int32 block_damage_active; // offset 0x1A7C, size 0x4, align 4
    int32 block_penalty_ranged; // offset 0x1A80, size 0x4, align 4
    float32 max_hp_pct; // offset 0x1A84, size 0x4, align 4
};
