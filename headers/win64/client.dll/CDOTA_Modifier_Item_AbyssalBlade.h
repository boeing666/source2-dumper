#pragma once

class CDOTA_Modifier_Item_AbyssalBlade : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_strength; // offset 0x1AA8, size 0x4, align 4
    int32 bash_chance_melee; // offset 0x1AAC, size 0x4, align 4
    int32 bash_chance_ranged; // offset 0x1AB0, size 0x4, align 4
    float32 bash_duration; // offset 0x1AB4, size 0x4, align 4
    float32 bash_cooldown; // offset 0x1AB8, size 0x4, align 4
    int32 bonus_chance_damage; // offset 0x1ABC, size 0x4, align 4
    int32 bonus_damage; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AC8, size 0x18, align 8
    int32 hp_regen_amp; // offset 0x1AE0, size 0x4, align 4
    int32 slow_resistance; // offset 0x1AE4, size 0x4, align 4
};
