#pragma once

class CCitadel_Projectile_ArtistGun : public C_CitadelProjectile /*0x0*/  // sizeof 0xD10, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCF8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitTargets; // offset 0xCF8, size 0x18, align 8
};
