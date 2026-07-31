#pragma once

class CDOTA_Modifier_Enchantress_Little_Friends : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< C_BaseEntity > m_hZombieTarget; // offset 0x1A78, size 0x4, align 4
    CHandle< C_BaseEntity > m_hDesiredTarget; // offset 0x1A7C, size 0x4, align 4
    bool m_bGainedRabble; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x3]; // offset 0x1A81
    int32 damage_reduction; // offset 0x1A84, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1A88, size 0x4, align 4
    int32 bonus_move_speed; // offset 0x1A8C, size 0x4, align 4
};
