#pragma once

class CDOTA_Modifier_Item_HydrasBreath : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 strength; // offset 0x1AF8, size 0x4, align 4
    int32 agility; // offset 0x1AFC, size 0x4, align 4
    int32 damage; // offset 0x1B00, size 0x4, align 4
    int32 proc_chance; // offset 0x1B04, size 0x4, align 4
    int32 proc_dmg_pct; // offset 0x1B08, size 0x4, align 4
    int32 count; // offset 0x1B0C, size 0x4, align 4
    int32 base_count; // offset 0x1B10, size 0x4, align 4
    int32 secondary_target_range_bonus; // offset 0x1B14, size 0x4, align 4
    int32 secondary_target_angle; // offset 0x1B18, size 0x4, align 4
    int32 base_attack_range; // offset 0x1B1C, size 0x4, align 4
    int32 base_proc_dmg; // offset 0x1B20, size 0x4, align 4
    float32 poison_duration; // offset 0x1B24, size 0x4, align 4
    char _pad_1B28[0x70]; // offset 0x1B28
};
