#pragma once

class CDOTA_Modifier_Item_SangeAndYasha : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_agility; // offset 0x1A78, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1A7C, size 0x4, align 4
    int32 movement_speed_percent_bonus; // offset 0x1A80, size 0x4, align 4
    int32 movement_speed_percent_bonus_melee; // offset 0x1A84, size 0x4, align 4
    int32 bonus_strength; // offset 0x1A88, size 0x4, align 4
    int32 hp_regen_amp; // offset 0x1A8C, size 0x4, align 4
    int32 status_resistance; // offset 0x1A90, size 0x4, align 4
    int32 slow_resistance; // offset 0x1A94, size 0x4, align 4
};
