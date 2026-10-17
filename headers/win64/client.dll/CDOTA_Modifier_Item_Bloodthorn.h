#pragma once

class CDOTA_Modifier_Item_Bloodthorn : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AA8, size 0x18, align 8
    int32 bonus_intellect; // offset 0x1AC0, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1AC4, size 0x4, align 4
    int32 bonus_damage; // offset 0x1AC8, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1ACC, size 0x4, align 4
    int32 spell_amp; // offset 0x1AD0, size 0x4, align 4
    int32 mana_regen_multiplier; // offset 0x1AD4, size 0x4, align 4
    int32 bonus_magic_resist; // offset 0x1AD8, size 0x4, align 4
    float32 duration; // offset 0x1ADC, size 0x4, align 4
    int32 passive_proc_damage; // offset 0x1AE0, size 0x4, align 4
    int32 proc_chance; // offset 0x1AE4, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1AE8, size 0x4, align 4
    char _pad_1AEC[0x4]; // offset 0x1AEC
};
