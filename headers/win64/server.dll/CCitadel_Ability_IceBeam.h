#pragma once

class CCitadel_Ability_IceBeam : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2C40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    bool m_bIceBeaming; // offset 0x14A8, size 0x1, align 1
    char _pad_14A9[0x79B]; // offset 0x14A9
    GameTime_t m_flNextDamageTick; // offset 0x1C44, size 0x4, align 255
    CCitadelAbilityBeam_t m_beam; // offset 0x1C48, size 0xFC8, align 255
    char _pad_2C10[0x18]; // offset 0x2C10
    CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // offset 0x2C28, size 0x18, align 8
};
