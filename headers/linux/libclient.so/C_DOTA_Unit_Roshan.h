#pragma once

class C_DOTA_Unit_Roshan : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1C78, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1C3C]; // offset 0x0
    int32 m_iKillerTeam; // offset 0x1C3C, size 0x4, align 4
    int32 m_iLastHealthPercent; // offset 0x1C40, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1C44, size 0x4, align 255
    CHandle< C_BaseEntity > m_hRadiantRoshanPit; // offset 0x1C48, size 0x4, align 4
    CHandle< C_BaseEntity > m_hDireRoshanPit; // offset 0x1C4C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hRiverMidpoint; // offset 0x1C50, size 0x4, align 4
    char _pad_1C54[0x4]; // offset 0x1C54
    CUtlVector< CHandle< C_BaseEntity > > m_hAttackingHeroes; // offset 0x1C58, size 0x18, align 8
    bool m_bGoldenRoshan; // offset 0x1C70, size 0x1, align 1
    char _pad_1C71[0x7]; // offset 0x1C71
};
