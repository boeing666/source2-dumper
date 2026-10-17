#pragma once

class CDOTA_Unit_Miniboss : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x19D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1998]; // offset 0x0
    int32 m_nVisualTeam; // offset 0x1998, size 0x4, align 4
    char _pad_199C[0x4]; // offset 0x199C
    GameTime_t m_flTransitionTimestamp; // offset 0x19A0, size 0x4, align 255
    int32 m_nTempViewer; // offset 0x19A4, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hAttackingHeroes; // offset 0x19A8, size 0x18, align 8
    char _pad_19C0[0x8]; // offset 0x19C0
    ParticleIndex_t nShieldFX; // offset 0x19C8, size 0x4, align 255
    char _pad_19CC[0x4]; // offset 0x19CC
};
