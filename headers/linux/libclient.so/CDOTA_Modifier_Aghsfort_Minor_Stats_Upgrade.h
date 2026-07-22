#pragma once

class CDOTA_Modifier_Aghsfort_Minor_Stats_Upgrade : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_all_stats; // offset 0x1A58, size 0x4, align 4
    int32 bonus_primary_stat; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_movespeed; // offset 0x1A60, size 0x4, align 4
    int32 bonus_hp_regen; // offset 0x1A64, size 0x4, align 4
    int32 bonus_armor; // offset 0x1A68, size 0x4, align 4
    int32 bonus_attack_damage; // offset 0x1A6C, size 0x4, align 4
    int32 bonus_cast_range; // offset 0x1A70, size 0x4, align 4
    int32 bonus_spell_amp; // offset 0x1A74, size 0x4, align 4
    int32 bonus_health; // offset 0x1A78, size 0x4, align 4
    int32 bonus_mana; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1A80, size 0x4, align 4
    int32 bonus_heal_amp; // offset 0x1A84, size 0x4, align 4
    int32 bonus_mana_regen; // offset 0x1A88, size 0x4, align 4
    int32 bonus_evasion; // offset 0x1A8C, size 0x4, align 4
    int32 bonus_magic_resist; // offset 0x1A90, size 0x4, align 4
    int32 bonus_lifesteal; // offset 0x1A94, size 0x4, align 4
};
