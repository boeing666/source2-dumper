#pragma once

class CProjectile_BookwormDragon_Projectile : public C_CitadelProjectile /*0x0*/  // sizeof 0x12C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCE8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitUnits; // offset 0xCE8, size 0x18, align 8
    char _pad_0D00[0x5C8]; // offset 0xD00
};
