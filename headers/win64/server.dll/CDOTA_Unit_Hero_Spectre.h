#pragma once

class CDOTA_Unit_Hero_Spectre : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1F08]; // offset 0x0
    bool m_bArcanaKillstreakCompleted; // offset 0x1F08, size 0x1, align 1
    uint8 m_unCurrentArcanaKillStreak; // offset 0x1F09, size 0x1, align 1
    uint8 m_unBestArcanaKillStreak; // offset 0x1F0A, size 0x1, align 1
    char _pad_1F0B[0x1]; // offset 0x1F0B
    PlayerID_t m_nVictimPlayerID; // offset 0x1F0C, size 0x4, align 255
    bool m_bArcanaKillstreakRecordBroken; // offset 0x1F10, size 0x1, align 1
    char _pad_1F11[0x7]; // offset 0x1F11
};
