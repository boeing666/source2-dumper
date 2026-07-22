#pragma once

class C_DOTA_Unit_Roshan : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x19E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x19B0]; // offset 0x0
    int32 m_iKillerTeam; // offset 0x19B0, size 0x4, align 4
    int32 m_iLastHealthPercent; // offset 0x19B4, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x19B8, size 0x4, align 255
    CHandle< C_BaseEntity > m_hRadiantRoshanPit; // offset 0x19BC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hDireRoshanPit; // offset 0x19C0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hRiverMidpoint; // offset 0x19C4, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hAttackingHeroes; // offset 0x19C8, size 0x18, align 8
    bool m_bGoldenRoshan; // offset 0x19E0, size 0x1, align 1
    char _pad_19E1[0x7]; // offset 0x19E1
};
