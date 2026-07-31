#pragma once

class CDOTA_Modifier_Nyx_Assassin_Vendetta : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A84]; // offset 0x0
    int32 bonus_damage; // offset 0x1A84, size 0x4, align 4
    int32 movement_speed; // offset 0x1A88, size 0x4, align 4
    int32 mana_removal_pct; // offset 0x1A8C, size 0x4, align 4
    int32 free_pathing_duration; // offset 0x1A90, size 0x4, align 4
    int32 attack_animation_bonus; // offset 0x1A94, size 0x4, align 4
    int32 attack_range_bonus; // offset 0x1A98, size 0x4, align 4
    int32 free_pathing_movement_speed_bonus; // offset 0x1A9C, size 0x4, align 4
};
