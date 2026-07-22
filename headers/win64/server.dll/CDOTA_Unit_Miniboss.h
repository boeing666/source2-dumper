#pragma once

class CDOTA_Unit_Miniboss : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x18D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18A0]; // offset 0x0
    int32 m_nVisualTeam; // offset 0x18A0, size 0x4, align 4
    char _pad_18A4[0x4]; // offset 0x18A4
    GameTime_t m_flTransitionTimestamp; // offset 0x18A8, size 0x4, align 255
    int32 m_nTempViewer; // offset 0x18AC, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hAttackingHeroes; // offset 0x18B0, size 0x18, align 8
    char _pad_18C8[0x8]; // offset 0x18C8
    ParticleIndex_t nShieldFX; // offset 0x18D0, size 0x4, align 255
    char _pad_18D4[0x4]; // offset 0x18D4
};
