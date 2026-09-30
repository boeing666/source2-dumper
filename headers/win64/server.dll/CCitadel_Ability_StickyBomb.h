#pragma once

class CCitadel_Ability_StickyBomb : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1AE8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A4]; // offset 0x0
    CHandle< CBaseEntity > m_hAutoTarget; // offset 0x14A4, size 0x4, align 4
    GameTime_t m_flHookEndTime; // offset 0x14A8, size 0x4, align 255
    float32 m_flBombBonusHits; // offset 0x14AC, size 0x4, align 4
    float32 m_flBombBonusKills; // offset 0x14B0, size 0x4, align 4
    char _pad_14B4[0x634]; // offset 0x14B4
};
