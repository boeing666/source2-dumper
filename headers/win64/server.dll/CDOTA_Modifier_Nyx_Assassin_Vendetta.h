#pragma once

class CDOTA_Modifier_Nyx_Assassin_Vendetta : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AB8]; // offset 0x0
    int32 bonus_damage; // offset 0x1AB8, size 0x4, align 4
    int32 movement_speed; // offset 0x1ABC, size 0x4, align 4
    int32 mana_removal_pct; // offset 0x1AC0, size 0x4, align 4
    int32 free_pathing_duration; // offset 0x1AC4, size 0x4, align 4
    int32 attack_animation_bonus; // offset 0x1AC8, size 0x4, align 4
    int32 attack_range_bonus; // offset 0x1ACC, size 0x4, align 4
    int32 free_pathing_movement_speed_bonus; // offset 0x1AD0, size 0x4, align 4
    char _pad_1AD4[0x4]; // offset 0x1AD4
};
