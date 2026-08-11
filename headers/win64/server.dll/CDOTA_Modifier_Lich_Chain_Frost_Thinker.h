#pragma once

class CDOTA_Modifier_Lich_Chain_Frost_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_nDamageToHeroes; // offset 0x1A78, size 0x4, align 4
    int32 m_nHeroesKilled; // offset 0x1A7C, size 0x4, align 4
    int32 m_nJumps; // offset 0x1A80, size 0x4, align 4
    bool m_bFirstJump; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A88, size 0x4, align 4
    CHandle< CBaseEntity > m_hAvoidTarget; // offset 0x1A8C, size 0x4, align 4
};
