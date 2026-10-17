#pragma once

class CDOTA_Modifier_Voidwalker_Phased : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 damage; // offset 0x1AA8, size 0x4, align 4
    float32 max_damage_duration; // offset 0x1AAC, size 0x4, align 4
    int32 attack_range_bonus; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AB8, size 0x18, align 8
    bool bAttackRange; // offset 0x1AD0, size 0x1, align 1
    char _pad_1AD1[0x3]; // offset 0x1AD1
    float32 m_flStartTime; // offset 0x1AD4, size 0x4, align 4
    float32 m_flFadeTime; // offset 0x1AD8, size 0x4, align 4
    float32 m_flDamageScale; // offset 0x1ADC, size 0x4, align 4
    float32 duration; // offset 0x1AE0, size 0x4, align 4
    char _pad_1AE4[0x4]; // offset 0x1AE4
};
