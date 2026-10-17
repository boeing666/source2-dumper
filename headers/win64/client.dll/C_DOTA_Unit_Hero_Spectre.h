#pragma once

class C_DOTA_Unit_Hero_Spectre : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1E98, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1E88]; // offset 0x0
    uint8 m_unCurrentArcanaKillStreak; // offset 0x1E88, size 0x1, align 1
    uint8 m_unBestArcanaKillStreak; // offset 0x1E89, size 0x1, align 1
    char _pad_1E8A[0x2]; // offset 0x1E8A
    PlayerID_t m_nVictimPlayerID; // offset 0x1E8C, size 0x4, align 255
    bool m_bArcanaKillstreakRecordBroken; // offset 0x1E90, size 0x1, align 1
    char _pad_1E91[0x7]; // offset 0x1E91
};
