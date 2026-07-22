#pragma once

class CDOTA_Modifier_Item_Bloodthorn : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A58, size 0x18, align 8
    int32 bonus_intellect; // offset 0x1A70, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1A74, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A78, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1A7C, size 0x4, align 4
    int32 spell_amp; // offset 0x1A80, size 0x4, align 4
    int32 mana_regen_multiplier; // offset 0x1A84, size 0x4, align 4
    int32 bonus_magic_resist; // offset 0x1A88, size 0x4, align 4
    float32 duration; // offset 0x1A8C, size 0x4, align 4
    int32 passive_proc_damage; // offset 0x1A90, size 0x4, align 4
    int32 proc_chance; // offset 0x1A94, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
