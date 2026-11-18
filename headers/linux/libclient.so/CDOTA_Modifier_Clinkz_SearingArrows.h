#pragma once

class CDOTA_Modifier_Clinkz_SearingArrows : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 damage_bonus; // offset 0x1AF8, size 0x4, align 4
    int32 skeleton_damage_pct; // offset 0x1AFC, size 0x4, align 4
    float32 skeleton_range; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1B08, size 0x18, align 8
    bool m_bBonusAttack; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x7]; // offset 0x1B21
};
