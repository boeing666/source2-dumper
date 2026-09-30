#pragma once

class CAbility_Drifter_BloodBlast : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1FC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1FA0]; // offset 0x0
    ParticleIndex_t m_SandEffect; // offset 0x1FA0, size 0x4, align 255
    char _pad_1FA4[0x4]; // offset 0x1FA4
    CUtlVector< CHandle< CBaseEntity > > m_vecHitTargets; // offset 0x1FA8, size 0x18, align 8
};
