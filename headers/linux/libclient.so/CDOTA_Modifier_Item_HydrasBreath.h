#pragma once

class CDOTA_Modifier_Item_HydrasBreath : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 strength; // offset 0x1A58, size 0x4, align 4
    int32 agility; // offset 0x1A5C, size 0x4, align 4
    int32 damage; // offset 0x1A60, size 0x4, align 4
    int32 proc_chance; // offset 0x1A64, size 0x4, align 4
    int32 proc_dmg_pct; // offset 0x1A68, size 0x4, align 4
    int32 count; // offset 0x1A6C, size 0x4, align 4
    int32 base_count; // offset 0x1A70, size 0x4, align 4
    int32 secondary_target_range_bonus; // offset 0x1A74, size 0x4, align 4
    int32 secondary_target_angle; // offset 0x1A78, size 0x4, align 4
    int32 base_attack_range; // offset 0x1A7C, size 0x4, align 4
    int32 base_proc_dmg; // offset 0x1A80, size 0x4, align 4
    float32 poison_duration; // offset 0x1A84, size 0x4, align 4
    char _pad_1A88[0x70]; // offset 0x1A88
};
