#pragma once

class CDOTA_Modifier_Clinkz_Tar_Bomb_SearingArrows : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 damage_bonus; // offset 0x1AF8, size 0x4, align 4
    char _pad_1AFC[0x4]; // offset 0x1AFC
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1B00, size 0x18, align 8
    bool m_bBonusAttack; // offset 0x1B18, size 0x1, align 1
    char _pad_1B19[0x7]; // offset 0x1B19
};
