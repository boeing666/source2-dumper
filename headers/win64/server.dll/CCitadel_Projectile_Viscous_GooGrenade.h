#pragma once

class CCitadel_Projectile_Viscous_GooGrenade : public CCitadelProjectile /*0x0*/  // sizeof 0x9D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x970]; // offset 0x0
    int32 m_nBounces; // offset 0x970, size 0x4, align 4
    GameTime_t m_tNextDetonateTime; // offset 0x974, size 0x4, align 255
    CUtlVector< CHandle< CBaseEntity > > m_vecLastHitTargets; // offset 0x978, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecProjectileHitTargets; // offset 0x990, size 0x18, align 8
    char _pad_09A8[0x28]; // offset 0x9A8
};
