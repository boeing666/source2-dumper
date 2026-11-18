#pragma once

class CDOTA_Modifier_Item_Phylactery : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_all_stats; // offset 0x1AF8, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1AFC, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1B00, size 0x4, align 4
    float32 bonus_spell_damage; // offset 0x1B04, size 0x4, align 4
    float32 slow_duration; // offset 0x1B08, size 0x4, align 4
    float32 bonus_per_kill; // offset 0x1B0C, size 0x4, align 4
    float32 max_kill_bonus; // offset 0x1B10, size 0x4, align 4
    float32 kill_bonus_window; // offset 0x1B14, size 0x4, align 4
    CUtlVector< CDOTABaseAbility* > vecActivatedAbilities; // offset 0x1B18, size 0x18, align 8
};
