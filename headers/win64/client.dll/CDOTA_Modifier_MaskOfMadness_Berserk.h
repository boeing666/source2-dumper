#pragma once

class CDOTA_Modifier_MaskOfMadness_Berserk : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 berserk_bonus_attack_speed; // offset 0x1A78, size 0x4, align 4
    int32 berserk_bonus_movement_speed; // offset 0x1A7C, size 0x4, align 4
    int32 berserk_bonus_movement_speed_melee; // offset 0x1A80, size 0x4, align 4
    int32 berserk_armor_reduction; // offset 0x1A84, size 0x4, align 4
    float32 berserk_slow_resist; // offset 0x1A88, size 0x4, align 4
    float32 berserk_slow_resist_melee; // offset 0x1A8C, size 0x4, align 4
};
