#pragma once

class CCitadel_Projectile_Viscous_GooGrenade : public CCitadelProjectile /*0x0*/  // sizeof 0x8C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    int32 m_nBounces; // offset 0x860, size 0x4, align 4
    GameTime_t m_tNextDetonateTime; // offset 0x864, size 0x4, align 255
    CUtlVector< CHandle< CBaseEntity > > m_vecLastHitTargets; // offset 0x868, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecProjectileHitTargets; // offset 0x880, size 0x18, align 8
    char _pad_0898[0x28]; // offset 0x898
};
