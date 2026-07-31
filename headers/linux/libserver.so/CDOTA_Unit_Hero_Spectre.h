#pragma once

class CDOTA_Unit_Hero_Spectre : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x21F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x21E0]; // offset 0x0
    bool m_bArcanaKillstreakCompleted; // offset 0x21E0, size 0x1, align 1
    uint8 m_unCurrentArcanaKillStreak; // offset 0x21E1, size 0x1, align 1
    uint8 m_unBestArcanaKillStreak; // offset 0x21E2, size 0x1, align 1
    char _pad_21E3[0x1]; // offset 0x21E3
    PlayerID_t m_nVictimPlayerID; // offset 0x21E4, size 0x4, align 255
    bool m_bArcanaKillstreakRecordBroken; // offset 0x21E8, size 0x1, align 1
    char _pad_21E9[0x7]; // offset 0x21E9
};
