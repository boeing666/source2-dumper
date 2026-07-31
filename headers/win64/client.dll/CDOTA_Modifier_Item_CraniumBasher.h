#pragma once

class CDOTA_Modifier_Item_CraniumBasher : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_strength; // offset 0x1A78, size 0x4, align 4
    int32 bash_chance_melee; // offset 0x1A7C, size 0x4, align 4
    int32 bash_chance_ranged; // offset 0x1A80, size 0x4, align 4
    float32 bash_duration; // offset 0x1A84, size 0x4, align 4
    float32 bash_cooldown; // offset 0x1A88, size 0x4, align 4
    int32 bonus_chance_damage; // offset 0x1A8C, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A98, size 0x18, align 8
};
