#pragma once

class CDOTA_Modifier_Axe_BerserkersCall : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< C_BaseEntity > m_hZombieTarget; // offset 0x1A78, size 0x4, align 4
    bool m_bDidSetAttackTarget; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
    int32 bonus_attack_speed; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
};
