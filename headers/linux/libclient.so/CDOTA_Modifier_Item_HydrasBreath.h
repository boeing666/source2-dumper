#pragma once

class CDOTA_Modifier_Item_HydrasBreath : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 strength; // offset 0x1AA8, size 0x4, align 4
    int32 agility; // offset 0x1AAC, size 0x4, align 4
    int32 damage; // offset 0x1AB0, size 0x4, align 4
    int32 proc_chance; // offset 0x1AB4, size 0x4, align 4
    int32 proc_dmg_pct; // offset 0x1AB8, size 0x4, align 4
    int32 count; // offset 0x1ABC, size 0x4, align 4
    int32 base_count; // offset 0x1AC0, size 0x4, align 4
    int32 secondary_target_range_bonus; // offset 0x1AC4, size 0x4, align 4
    int32 secondary_target_angle; // offset 0x1AC8, size 0x4, align 4
    int32 base_attack_range; // offset 0x1ACC, size 0x4, align 4
    int32 base_proc_dmg; // offset 0x1AD0, size 0x4, align 4
    float32 poison_duration; // offset 0x1AD4, size 0x4, align 4
    char _pad_1AD8[0x70]; // offset 0x1AD8
};
