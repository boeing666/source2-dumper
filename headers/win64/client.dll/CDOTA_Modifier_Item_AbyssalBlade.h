#pragma once

class CDOTA_Modifier_Item_AbyssalBlade : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_strength; // offset 0x1A58, size 0x4, align 4
    int32 bash_chance_melee; // offset 0x1A5C, size 0x4, align 4
    int32 bash_chance_ranged; // offset 0x1A60, size 0x4, align 4
    float32 bash_duration; // offset 0x1A64, size 0x4, align 4
    float32 bash_cooldown; // offset 0x1A68, size 0x4, align 4
    int32 bonus_chance_damage; // offset 0x1A6C, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A78, size 0x18, align 8
    int32 hp_regen_amp; // offset 0x1A90, size 0x4, align 4
    int32 slow_resistance; // offset 0x1A94, size 0x4, align 4
};
