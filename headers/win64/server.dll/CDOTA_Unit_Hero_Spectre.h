#pragma once

class CDOTA_Unit_Hero_Spectre : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1F00]; // offset 0x0
    bool m_bArcanaKillstreakCompleted; // offset 0x1F00, size 0x1, align 1
    uint8 m_unCurrentArcanaKillStreak; // offset 0x1F01, size 0x1, align 1
    uint8 m_unBestArcanaKillStreak; // offset 0x1F02, size 0x1, align 1
    char _pad_1F03[0x1]; // offset 0x1F03
    PlayerID_t m_nVictimPlayerID; // offset 0x1F04, size 0x4, align 255
    bool m_bArcanaKillstreakRecordBroken; // offset 0x1F08, size 0x1, align 1
    char _pad_1F09[0x7]; // offset 0x1F09
};
