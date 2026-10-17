#pragma once

class CDOTA_Modifier_MaskOfMadness_Berserk : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 berserk_bonus_attack_speed; // offset 0x1AA8, size 0x4, align 4
    int32 berserk_bonus_movement_speed; // offset 0x1AAC, size 0x4, align 4
    int32 berserk_bonus_movement_speed_melee; // offset 0x1AB0, size 0x4, align 4
    int32 berserk_armor_reduction; // offset 0x1AB4, size 0x4, align 4
    float32 berserk_slow_resist; // offset 0x1AB8, size 0x4, align 4
    float32 berserk_slow_resist_melee; // offset 0x1ABC, size 0x4, align 4
};
