#pragma once

class CDOTA_Modifier_Terrorblade_Demon_Zeal : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 berserk_bonus_attack_speed; // offset 0x1AA8, size 0x4, align 4
    int32 berserk_bonus_movement_speed; // offset 0x1AAC, size 0x4, align 4
    int32 berserk_bonus_armor; // offset 0x1AB0, size 0x4, align 4
    int32 hp_regen; // offset 0x1AB4, size 0x4, align 4
    int32 reflection_pct; // offset 0x1AB8, size 0x4, align 4
    int32 melee_bonus; // offset 0x1ABC, size 0x4, align 4
};
