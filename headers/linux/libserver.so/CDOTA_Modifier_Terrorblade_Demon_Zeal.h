#pragma once

class CDOTA_Modifier_Terrorblade_Demon_Zeal : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 berserk_bonus_attack_speed; // offset 0x1A78, size 0x4, align 4
    int32 berserk_bonus_movement_speed; // offset 0x1A7C, size 0x4, align 4
    int32 berserk_bonus_armor; // offset 0x1A80, size 0x4, align 4
    int32 hp_regen; // offset 0x1A84, size 0x4, align 4
    int32 reflection_pct; // offset 0x1A88, size 0x4, align 4
    int32 melee_bonus; // offset 0x1A8C, size 0x4, align 4
};
