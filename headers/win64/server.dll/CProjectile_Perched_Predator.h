#pragma once

class CProjectile_Perched_Predator : public CCitadelProjectile /*0x0*/  // sizeof 0xE58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x970]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0x970, size 0x18, align 8
    char _pad_0988[0x4D0]; // offset 0x988
};
