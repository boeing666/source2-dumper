#pragma once

class CDOTA_Unit_Miniboss : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1D48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D0C]; // offset 0x0
    int32 m_nVisualTeam; // offset 0x1D0C, size 0x4, align 4
    char _pad_1D10[0x4]; // offset 0x1D10
    GameTime_t m_flTransitionTimestamp; // offset 0x1D14, size 0x4, align 255
    int32 m_nTempViewer; // offset 0x1D18, size 0x4, align 4
    char _pad_1D1C[0x4]; // offset 0x1D1C
    CUtlVector< CHandle< CBaseEntity > > m_hAttackingHeroes; // offset 0x1D20, size 0x18, align 8
    char _pad_1D38[0x8]; // offset 0x1D38
    ParticleIndex_t nShieldFX; // offset 0x1D40, size 0x4, align 255
    char _pad_1D44[0x4]; // offset 0x1D44
};
