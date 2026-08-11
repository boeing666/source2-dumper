#pragma once

class CDOTA_Modifier_Item_MonkeyKingBar : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_attack_speed; // offset 0x1A78, size 0x4, align 4
    int32 bonus_chance; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_chance_damage; // offset 0x1A80, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A84, size 0x4, align 4
    int32 melee_attack_range; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A90, size 0x18, align 8
};
