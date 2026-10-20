#pragma once

class CAbility_Drifter_BloodBlast : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2200, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x21E0]; // offset 0x0
    ParticleIndex_t m_SandEffect; // offset 0x21E0, size 0x4, align 255
    char _pad_21E4[0x4]; // offset 0x21E4
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitTargets; // offset 0x21E8, size 0x18, align 8
};
