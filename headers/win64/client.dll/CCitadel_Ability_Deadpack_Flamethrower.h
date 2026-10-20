#pragma once

class CCitadel_Ability_Deadpack_Flamethrower : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x3038, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    GameTime_t m_flNextDamageTick; // offset 0x16E0, size 0x4, align 255
    char _pad_16E4[0x4]; // offset 0x16E4
    CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // offset 0x16E8, size 0x18, align 8
    char _pad_1700[0x84C]; // offset 0x1700
    GameTime_t m_tLastDamageDealTime; // offset 0x1F4C, size 0x4, align 255
    GameTime_t m_tActivationTime; // offset 0x1F50, size 0x4, align 255
    GameTime_t m_tPauseBeginTime; // offset 0x1F54, size 0x4, align 255
    bool m_bBeaming; // offset 0x1F58, size 0x1, align 1
    char _pad_1F59[0x7]; // offset 0x1F59
    CCitadelAbilityBeam_t m_beam; // offset 0x1F60, size 0x10D8, align 255
};
