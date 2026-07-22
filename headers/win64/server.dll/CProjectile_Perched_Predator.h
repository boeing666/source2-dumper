#pragma once

class CProjectile_Perched_Predator : public CCitadelProjectile /*0x0*/  // sizeof 0xBF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0x860, size 0x18, align 8
    char _pad_0878[0x380]; // offset 0x878
};
