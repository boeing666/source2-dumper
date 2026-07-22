#pragma once

class C_Citadel_Projectile_Viscous_GooGrenade : public C_CitadelProjectile /*0x0*/  // sizeof 0xB38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xAD8]; // offset 0x0
    int32 m_nBounces; // offset 0xAD8, size 0x4, align 4
    GameTime_t m_tNextDetonateTime; // offset 0xADC, size 0x4, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_vecLastHitTargets; // offset 0xAE0, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecProjectileHitTargets; // offset 0xAF8, size 0x18, align 8
    char _pad_0B10[0x28]; // offset 0xB10
};
