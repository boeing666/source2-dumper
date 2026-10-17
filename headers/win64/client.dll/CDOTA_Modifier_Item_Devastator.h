#pragma once

class CDOTA_Modifier_Item_Devastator : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_armor; // offset 0x1AA8, size 0x4, align 4
    int32 projectile_speed; // offset 0x1AAC, size 0x4, align 4
    int32 bonus_intellect; // offset 0x1AB0, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1AB4, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1AB8, size 0x4, align 4
    int32 mana_cost; // offset 0x1ABC, size 0x4, align 4
    int32 slow_duration; // offset 0x1AC0, size 0x4, align 4
    int32 spell_amp_duration; // offset 0x1AC4, size 0x4, align 4
    int32 damage_penalty; // offset 0x1AC8, size 0x4, align 4
    int32 passive_cooldown; // offset 0x1ACC, size 0x4, align 4
    CUtlVector< AttackRecord_t > m_InFlightWitchBladeAttackRecords; // offset 0x1AD0, size 0x18, align 8
};
