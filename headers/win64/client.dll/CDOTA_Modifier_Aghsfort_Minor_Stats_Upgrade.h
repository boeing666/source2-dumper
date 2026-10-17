#pragma once

class CDOTA_Modifier_Aghsfort_Minor_Stats_Upgrade : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_all_stats; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_primary_stat; // offset 0x1AAC, size 0x4, align 4
    int32 bonus_movespeed; // offset 0x1AB0, size 0x4, align 4
    int32 bonus_hp_regen; // offset 0x1AB4, size 0x4, align 4
    int32 bonus_armor; // offset 0x1AB8, size 0x4, align 4
    int32 bonus_attack_damage; // offset 0x1ABC, size 0x4, align 4
    int32 bonus_cast_range; // offset 0x1AC0, size 0x4, align 4
    int32 bonus_spell_amp; // offset 0x1AC4, size 0x4, align 4
    int32 bonus_health; // offset 0x1AC8, size 0x4, align 4
    int32 bonus_mana; // offset 0x1ACC, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1AD0, size 0x4, align 4
    int32 bonus_heal_amp; // offset 0x1AD4, size 0x4, align 4
    int32 bonus_mana_regen; // offset 0x1AD8, size 0x4, align 4
    int32 bonus_evasion; // offset 0x1ADC, size 0x4, align 4
    int32 bonus_magic_resist; // offset 0x1AE0, size 0x4, align 4
    int32 bonus_lifesteal; // offset 0x1AE4, size 0x4, align 4
};
