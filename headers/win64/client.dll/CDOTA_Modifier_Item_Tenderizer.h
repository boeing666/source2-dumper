#pragma once

class CDOTA_Modifier_Item_Tenderizer : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_strength; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_agility; // offset 0x1AFC, size 0x4, align 4
    int32 bash_chance_melee; // offset 0x1B00, size 0x4, align 4
    int32 bash_chance_ranged; // offset 0x1B04, size 0x4, align 4
    float32 bash_duration; // offset 0x1B08, size 0x4, align 4
    float32 bash_cooldown; // offset 0x1B0C, size 0x4, align 4
    int32 bonus_chance_damage; // offset 0x1B10, size 0x4, align 4
    int32 bonus_damage; // offset 0x1B14, size 0x4, align 4
    int32 weaken_per_hit; // offset 0x1B18, size 0x4, align 4
    float32 weaken_duration; // offset 0x1B1C, size 0x4, align 4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1B20, size 0x18, align 8
};
