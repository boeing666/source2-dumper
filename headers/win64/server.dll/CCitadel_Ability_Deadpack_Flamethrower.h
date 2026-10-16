#pragma once

class CCitadel_Ability_Deadpack_Flamethrower : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2CE0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    GameTime_t m_flNextDamageTick; // offset 0x14A0, size 0x4, align 255
    char _pad_14A4[0x4]; // offset 0x14A4
    CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // offset 0x14A8, size 0x18, align 8
    char _pad_14C0[0x844]; // offset 0x14C0
    GameTime_t m_tLastDamageDealTime; // offset 0x1D04, size 0x4, align 255
    GameTime_t m_tActivationTime; // offset 0x1D08, size 0x4, align 255
    GameTime_t m_tPauseBeginTime; // offset 0x1D0C, size 0x4, align 255
    bool m_bBeaming; // offset 0x1D10, size 0x1, align 1
    char _pad_1D11[0x7]; // offset 0x1D11
    CCitadelAbilityBeam_t m_beam; // offset 0x1D18, size 0xFC8, align 255
};
