#pragma once

class CDOTA_Modifier_Item_Devastator : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_armor; // offset 0x1AF8, size 0x4, align 4
    int32 projectile_speed; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_intellect; // offset 0x1B00, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1B04, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1B08, size 0x4, align 4
    int32 mana_cost; // offset 0x1B0C, size 0x4, align 4
    float32 slow_duration; // offset 0x1B10, size 0x4, align 4
    int32 spell_amp_duration; // offset 0x1B14, size 0x4, align 4
    int32 damage_penalty; // offset 0x1B18, size 0x4, align 4
    float32 passive_cooldown; // offset 0x1B1C, size 0x4, align 4
    float32 reduction_duration; // offset 0x1B20, size 0x4, align 4
    char _pad_1B24[0x4]; // offset 0x1B24
    CUtlVector< AttackRecord_t > m_InFlightWitchBladeAttackRecords; // offset 0x1B28, size 0x18, align 8
};
