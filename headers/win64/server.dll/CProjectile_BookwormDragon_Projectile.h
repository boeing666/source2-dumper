#pragma once

class CProjectile_BookwormDragon_Projectile : public CCitadelProjectile /*0x0*/  // sizeof 0xCC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitUnits; // offset 0x860, size 0x18, align 8
    char _pad_0878[0x448]; // offset 0x878
};
