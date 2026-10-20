#pragma once

class CProjectile_BookwormDragon_Projectile : public CCitadelProjectile /*0x0*/  // sizeof 0xF50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x970]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitUnits; // offset 0x970, size 0x18, align 8
    char _pad_0988[0x5C8]; // offset 0x988
};
