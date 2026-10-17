#pragma once

class CDOTA_Unit_Hero_Spectre : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2308, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x22F8]; // offset 0x0
    bool m_bArcanaKillstreakCompleted; // offset 0x22F8, size 0x1, align 1
    uint8 m_unCurrentArcanaKillStreak; // offset 0x22F9, size 0x1, align 1
    uint8 m_unBestArcanaKillStreak; // offset 0x22FA, size 0x1, align 1
    char _pad_22FB[0x1]; // offset 0x22FB
    PlayerID_t m_nVictimPlayerID; // offset 0x22FC, size 0x4, align 255
    bool m_bArcanaKillstreakRecordBroken; // offset 0x2300, size 0x1, align 1
    char _pad_2301[0x7]; // offset 0x2301
};
