#pragma once

class CDOTA_Modifier_Item_Witch_Blade : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_intellect; // offset 0x1A58, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_armor; // offset 0x1A60, size 0x4, align 4
    float32 slow_duration; // offset 0x1A64, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1A68, size 0x4, align 4
    int32 projectile_speed; // offset 0x1A6C, size 0x4, align 4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A70, size 0x18, align 8
};
