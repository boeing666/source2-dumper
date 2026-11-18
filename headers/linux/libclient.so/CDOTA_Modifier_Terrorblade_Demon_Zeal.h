#pragma once

class CDOTA_Modifier_Terrorblade_Demon_Zeal : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 berserk_bonus_attack_speed; // offset 0x1AF8, size 0x4, align 4
    int32 berserk_bonus_movement_speed; // offset 0x1AFC, size 0x4, align 4
    int32 berserk_bonus_armor; // offset 0x1B00, size 0x4, align 4
    int32 hp_regen; // offset 0x1B04, size 0x4, align 4
    int32 reflection_pct; // offset 0x1B08, size 0x4, align 4
    int32 melee_bonus; // offset 0x1B0C, size 0x4, align 4
};
