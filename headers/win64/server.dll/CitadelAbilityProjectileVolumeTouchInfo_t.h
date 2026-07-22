#pragma once

struct CitadelAbilityProjectileVolumeTouchInfo_t  // sizeof 0x18, align 0xFF [trivial_dtor] (server)
{
    bool m_bIsProjectileAsBullet; // offset 0x0, size 0x1, align 1
    char _pad_0001[0x7]; // offset 0x1
    CBaseEntity* m_pProjectile; // offset 0x8, size 0x8, align 8
    CCitadel_Bullet_Base* m_pBullet; // offset 0x10, size 0x8, align 8
};
