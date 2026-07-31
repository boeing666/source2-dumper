#pragma once

class CDOTA_Modifier_Hurricane_Pike_Range : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A78, size 0x4, align 4
    int32 max_attacks; // offset 0x1A7C, size 0x4, align 4
    int32 m_iNumAttacks; // offset 0x1A80, size 0x4, align 4
    bool bActive; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
    int32 bonus_attack_speed; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
