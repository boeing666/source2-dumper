#pragma once

class CDOTA_Modifier_Hurricane_Pike_Range : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AF8, size 0x4, align 4
    int32 max_attacks; // offset 0x1AFC, size 0x4, align 4
    int32 m_iNumAttacks; // offset 0x1B00, size 0x4, align 4
    bool bActive; // offset 0x1B04, size 0x1, align 1
    char _pad_1B05[0x3]; // offset 0x1B05
    int32 bonus_attack_speed; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
