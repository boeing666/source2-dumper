#pragma once

class CDOTA_Unit_Roshan : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x18D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18A0]; // offset 0x0
    int32 m_iKillerTeam; // offset 0x18A0, size 0x4, align 4
    int32 m_iLastHealthPercent; // offset 0x18A4, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x18A8, size 0x4, align 255
    CHandle< CBaseEntity > m_hRadiantRoshanPit; // offset 0x18AC, size 0x4, align 4
    CHandle< CBaseEntity > m_hDireRoshanPit; // offset 0x18B0, size 0x4, align 4
    CHandle< CBaseEntity > m_hRiverMidpoint; // offset 0x18B4, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hAttackingHeroes; // offset 0x18B8, size 0x18, align 8
    bool m_bGoldenRoshan; // offset 0x18D0, size 0x1, align 1
    char _pad_18D1[0x7]; // offset 0x18D1
};
