#pragma once

class C_Citadel_Projectile_Viscous_GooGrenade : public C_CitadelProjectile /*0x0*/  // sizeof 0xD48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCE8]; // offset 0x0
    int32 m_nBounces; // offset 0xCE8, size 0x4, align 4
    GameTime_t m_tNextDetonateTime; // offset 0xCEC, size 0x4, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_vecLastHitTargets; // offset 0xCF0, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecProjectileHitTargets; // offset 0xD08, size 0x18, align 8
    char _pad_0D20[0x28]; // offset 0xD20
};
