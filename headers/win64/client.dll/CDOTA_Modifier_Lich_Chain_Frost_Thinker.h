#pragma once

class CDOTA_Modifier_Lich_Chain_Frost_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 m_nDamageToHeroes; // offset 0x1A58, size 0x4, align 4
    int32 m_nHeroesKilled; // offset 0x1A5C, size 0x4, align 4
    int32 m_nJumps; // offset 0x1A60, size 0x4, align 4
    bool m_bFirstJump; // offset 0x1A64, size 0x1, align 1
    char _pad_1A65[0x3]; // offset 0x1A65
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A68, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAvoidTarget; // offset 0x1A6C, size 0x4, align 4
};
