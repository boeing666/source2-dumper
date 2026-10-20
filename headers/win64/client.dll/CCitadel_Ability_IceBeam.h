#pragma once

class CCitadel_Ability_IceBeam : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2F88, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    bool m_bIceBeaming; // offset 0x16E0, size 0x1, align 1
    char _pad_16E1[0x79B]; // offset 0x16E1
    GameTime_t m_flNextDamageTick; // offset 0x1E7C, size 0x4, align 255
    CCitadelAbilityBeam_t m_beam; // offset 0x1E80, size 0x10D8, align 255
    char _pad_2F58[0x18]; // offset 0x2F58
    CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // offset 0x2F70, size 0x18, align 8
};
