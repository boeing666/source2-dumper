#pragma once

struct CitadelAbilityProjectileVolumeTouchInfo_t  // sizeof 0x10, align 0xFF [trivial_dtor] (server)
{
    CBaseEntity* m_pProjectile; // offset 0x0, size 0x8, align 8
    CCitadel_Bullet_Base* m_pBullet; // offset 0x8, size 0x8, align 8
};
