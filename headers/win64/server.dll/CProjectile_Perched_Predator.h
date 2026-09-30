#pragma once

class CProjectile_Perched_Predator : public CCitadelProjectile /*0x0*/  // sizeof 0xE50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x968]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0x968, size 0x18, align 8
    char _pad_0980[0x4D0]; // offset 0x980
};
