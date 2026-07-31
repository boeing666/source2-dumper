#pragma once

class CDOTA_Modifier_Item_Phylactery : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_all_stats; // offset 0x1A78, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1A7C, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1A80, size 0x4, align 4
    float32 bonus_spell_damage; // offset 0x1A84, size 0x4, align 4
    float32 slow_duration; // offset 0x1A88, size 0x4, align 4
    float32 bonus_per_kill; // offset 0x1A8C, size 0x4, align 4
    float32 max_kill_bonus; // offset 0x1A90, size 0x4, align 4
    float32 kill_bonus_window; // offset 0x1A94, size 0x4, align 4
    CUtlVector< C_DOTABaseAbility* > vecActivatedAbilities; // offset 0x1A98, size 0x18, align 8
};
