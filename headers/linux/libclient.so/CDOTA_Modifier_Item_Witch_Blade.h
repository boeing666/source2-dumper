#pragma once

class CDOTA_Modifier_Item_Witch_Blade : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_intellect; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_armor; // offset 0x1B00, size 0x4, align 4
    float32 slow_duration; // offset 0x1B04, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1B08, size 0x4, align 4
    int32 projectile_speed; // offset 0x1B0C, size 0x4, align 4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1B10, size 0x18, align 8
};
