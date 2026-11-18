#pragma once

class CDOTA_Modifier_Huskar_Life_Break_Taunt : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< C_BaseEntity > m_hZombieTarget; // offset 0x1AF8, size 0x4, align 4
    bool m_bDidSetAttackTarget; // offset 0x1AFC, size 0x1, align 1
    char _pad_1AFD[0x3]; // offset 0x1AFD
};
