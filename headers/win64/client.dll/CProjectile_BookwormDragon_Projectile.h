#pragma once

class CProjectile_BookwormDragon_Projectile : public C_CitadelProjectile /*0x0*/  // sizeof 0xF38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xAD8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitUnits; // offset 0xAD8, size 0x18, align 8
    char _pad_0AF0[0x448]; // offset 0xAF0
};
