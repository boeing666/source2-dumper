#pragma once

class CAbility_Werewolf_Frenzy : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x15F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x15D8]; // offset 0x0
    ParticleIndex_t m_SandEffect; // offset 0x15D8, size 0x4, align 255
    char _pad_15DC[0x4]; // offset 0x15DC
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitTargets; // offset 0x15E0, size 0x18, align 8
};
