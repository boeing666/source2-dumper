#pragma once

class CDOTA_Unit_Miniboss : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1CB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1C78]; // offset 0x0
    int32 m_nVisualTeam; // offset 0x1C78, size 0x4, align 4
    char _pad_1C7C[0x4]; // offset 0x1C7C
    GameTime_t m_flTransitionTimestamp; // offset 0x1C80, size 0x4, align 255
    int32 m_nTempViewer; // offset 0x1C84, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hAttackingHeroes; // offset 0x1C88, size 0x18, align 8
    char _pad_1CA0[0x8]; // offset 0x1CA0
    ParticleIndex_t nShieldFX; // offset 0x1CA8, size 0x4, align 255
    char _pad_1CAC[0x4]; // offset 0x1CAC
};
