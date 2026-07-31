#pragma once

class CDOTA_Unit_Miniboss : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1BC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B88]; // offset 0x0
    int32 m_nVisualTeam; // offset 0x1B88, size 0x4, align 4
    char _pad_1B8C[0x4]; // offset 0x1B8C
    GameTime_t m_flTransitionTimestamp; // offset 0x1B90, size 0x4, align 255
    int32 m_nTempViewer; // offset 0x1B94, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hAttackingHeroes; // offset 0x1B98, size 0x18, align 8
    char _pad_1BB0[0x8]; // offset 0x1BB0
    ParticleIndex_t nShieldFX; // offset 0x1BB8, size 0x4, align 255
    char _pad_1BBC[0x4]; // offset 0x1BBC
};
