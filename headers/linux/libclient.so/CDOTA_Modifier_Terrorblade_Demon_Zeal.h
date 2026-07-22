#pragma once

class CDOTA_Modifier_Terrorblade_Demon_Zeal : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 berserk_bonus_attack_speed; // offset 0x1A58, size 0x4, align 4
    int32 berserk_bonus_movement_speed; // offset 0x1A5C, size 0x4, align 4
    int32 berserk_bonus_armor; // offset 0x1A60, size 0x4, align 4
    int32 hp_regen; // offset 0x1A64, size 0x4, align 4
    int32 reflection_pct; // offset 0x1A68, size 0x4, align 4
    int32 melee_bonus; // offset 0x1A6C, size 0x4, align 4
};
