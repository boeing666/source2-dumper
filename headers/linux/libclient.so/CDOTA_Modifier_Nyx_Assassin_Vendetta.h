#pragma once

class CDOTA_Modifier_Nyx_Assassin_Vendetta : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A64]; // offset 0x0
    int32 bonus_damage; // offset 0x1A64, size 0x4, align 4
    int32 movement_speed; // offset 0x1A68, size 0x4, align 4
    int32 mana_removal_pct; // offset 0x1A6C, size 0x4, align 4
    int32 free_pathing_duration; // offset 0x1A70, size 0x4, align 4
    int32 attack_animation_bonus; // offset 0x1A74, size 0x4, align 4
    int32 attack_range_bonus; // offset 0x1A78, size 0x4, align 4
    int32 free_pathing_movement_speed_bonus; // offset 0x1A7C, size 0x4, align 4
};
