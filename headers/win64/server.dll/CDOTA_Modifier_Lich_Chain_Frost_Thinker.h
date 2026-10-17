#pragma once

class CDOTA_Modifier_Lich_Chain_Frost_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 m_nDamageToHeroes; // offset 0x1AA8, size 0x4, align 4
    int32 m_nHeroesKilled; // offset 0x1AAC, size 0x4, align 4
    int32 m_nJumps; // offset 0x1AB0, size 0x4, align 4
    bool m_bFirstJump; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AB8, size 0x4, align 4
    CHandle< CBaseEntity > m_hAvoidTarget; // offset 0x1ABC, size 0x4, align 4
};
