#pragma once

class CDOTA_Unit_Miniboss : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x18E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18A8]; // offset 0x0
    int32 m_nVisualTeam; // offset 0x18A8, size 0x4, align 4
    char _pad_18AC[0x4]; // offset 0x18AC
    GameTime_t m_flTransitionTimestamp; // offset 0x18B0, size 0x4, align 255
    int32 m_nTempViewer; // offset 0x18B4, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hAttackingHeroes; // offset 0x18B8, size 0x18, align 8
    char _pad_18D0[0x8]; // offset 0x18D0
    ParticleIndex_t nShieldFX; // offset 0x18D8, size 0x4, align 255
    char _pad_18DC[0x4]; // offset 0x18DC
};
