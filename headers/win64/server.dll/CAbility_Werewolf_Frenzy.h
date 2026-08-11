#pragma once

class CAbility_Werewolf_Frenzy : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1390, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1370]; // offset 0x0
    ParticleIndex_t m_SandEffect; // offset 0x1370, size 0x4, align 255
    char _pad_1374[0x4]; // offset 0x1374
    CUtlVector< CHandle< CBaseEntity > > m_vecHitTargets; // offset 0x1378, size 0x18, align 8
};
