#pragma once

class CDOTA_Modifier_Nyx_Assassin_Vendetta : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1B08]; // offset 0x0
    int32 bonus_damage; // offset 0x1B08, size 0x4, align 4
    int32 movement_speed; // offset 0x1B0C, size 0x4, align 4
    int32 mana_removal_pct; // offset 0x1B10, size 0x4, align 4
    int32 free_pathing_duration; // offset 0x1B14, size 0x4, align 4
    int32 attack_animation_bonus; // offset 0x1B18, size 0x4, align 4
    int32 attack_range_bonus; // offset 0x1B1C, size 0x4, align 4
    int32 free_pathing_movement_speed_bonus; // offset 0x1B20, size 0x4, align 4
    char _pad_1B24[0x4]; // offset 0x1B24
};
