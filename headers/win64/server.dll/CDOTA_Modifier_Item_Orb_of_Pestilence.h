#pragma once

class CDOTA_Modifier_Item_Orb_of_Pestilence : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 poison_movement_speed_melee; // offset 0x1A78, size 0x4, align 4
    int32 poison_movement_speed_range; // offset 0x1A7C, size 0x4, align 4
    float32 poison_duration; // offset 0x1A80, size 0x4, align 4
    float32 poison_damage; // offset 0x1A84, size 0x4, align 4
    int32 armor; // offset 0x1A88, size 0x4, align 4
    float32 hp_regen; // offset 0x1A8C, size 0x4, align 4
};
