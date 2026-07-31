#pragma once

class CDOTA_Modifier_Clinkz_SearingArrows : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 damage_bonus; // offset 0x1A78, size 0x4, align 4
    int32 skeleton_damage_pct; // offset 0x1A7C, size 0x4, align 4
    float32 skeleton_range; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A88, size 0x18, align 8
    bool m_bBonusAttack; // offset 0x1AA0, size 0x1, align 1
    char _pad_1AA1[0x7]; // offset 0x1AA1
};
