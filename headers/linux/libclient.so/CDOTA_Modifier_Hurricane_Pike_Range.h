#pragma once

class CDOTA_Modifier_Hurricane_Pike_Range : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A58, size 0x4, align 4
    int32 max_attacks; // offset 0x1A5C, size 0x4, align 4
    int32 m_iNumAttacks; // offset 0x1A60, size 0x4, align 4
    bool bActive; // offset 0x1A64, size 0x1, align 1
    char _pad_1A65[0x3]; // offset 0x1A65
    int32 bonus_attack_speed; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
