#pragma once

struct CCitadel_Modifier_ExplosiveShots::BulletEntityPair_t  // sizeof 0x8, align 0xFF [trivial_dtor] (server)
{
    CHandle< CBaseEntity > m_hEntHit; // offset 0x0, size 0x4, align 4
    ShotID_t m_ShotHit; // offset 0x4, size 0x4, align 255
};
