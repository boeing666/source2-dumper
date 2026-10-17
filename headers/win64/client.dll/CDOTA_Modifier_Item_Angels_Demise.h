#pragma once

class CDOTA_Modifier_Item_Angels_Demise : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_all_stats; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_health; // offset 0x1AAC, size 0x4, align 4
    int32 bonus_mana; // offset 0x1AB0, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1AB4, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1AB8, size 0x4, align 4
    float32 bonus_spell_damage; // offset 0x1ABC, size 0x4, align 4
    float32 slow_duration; // offset 0x1AC0, size 0x4, align 4
    float32 proc_cooldown; // offset 0x1AC4, size 0x4, align 4
    CUtlVector< C_DOTABaseAbility* > vecActivatedAbilities; // offset 0x1AC8, size 0x18, align 8
    GameTime_t m_NextProcTime; // offset 0x1AE0, size 0x4, align 255
    char _pad_1AE4[0x4]; // offset 0x1AE4
};
