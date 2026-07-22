#pragma once

class CDOTA_Modifier_Item_MonkeyKingBar : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_attack_speed; // offset 0x1A58, size 0x4, align 4
    int32 bonus_chance; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_chance_damage; // offset 0x1A60, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A64, size 0x4, align 4
    int32 melee_attack_range; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A70, size 0x18, align 8
};
