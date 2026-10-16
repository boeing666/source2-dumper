#pragma once

class CCitadel_Projectile_ArtistGun : public CCitadelProjectile /*0x0*/  // sizeof 0x990, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x978]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitTargets; // offset 0x978, size 0x18, align 8
};
