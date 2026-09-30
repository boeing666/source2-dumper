#pragma once

class CCitadel_Ability_IceBeam : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2F80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    bool m_bIceBeaming; // offset 0x16D8, size 0x1, align 1
    char _pad_16D9[0x79B]; // offset 0x16D9
    GameTime_t m_flNextDamageTick; // offset 0x1E74, size 0x4, align 255
    CCitadelAbilityBeam_t m_beam; // offset 0x1E78, size 0x10D8, align 255
    char _pad_2F50[0x18]; // offset 0x2F50
    CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // offset 0x2F68, size 0x18, align 8
};
