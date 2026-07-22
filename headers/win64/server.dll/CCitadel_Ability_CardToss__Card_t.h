#pragma once

struct CCitadel_Ability_CardToss::Card_t  // sizeof 0x10, align 0xFF [trivial_dtor] (server)
{
    int32 m_nCardNum; // offset 0x0, size 0x4, align 4
    EWraithCardType m_eCardType; // offset 0x4, size 0x4, align 4
    ParticleIndex_t m_nFxIdx; // offset 0x8, size 0x4, align 255
    CHandle< CBaseEntity > m_hProjectile; // offset 0xC, size 0x4, align 4
};
