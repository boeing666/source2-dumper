#pragma once

class CAbility_Drifter_BloodBlast : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1FC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1FA8]; // offset 0x0
    ParticleIndex_t m_SandEffect; // offset 0x1FA8, size 0x4, align 255
    char _pad_1FAC[0x4]; // offset 0x1FAC
    CUtlVector< CHandle< CBaseEntity > > m_vecHitTargets; // offset 0x1FB0, size 0x18, align 8
};
