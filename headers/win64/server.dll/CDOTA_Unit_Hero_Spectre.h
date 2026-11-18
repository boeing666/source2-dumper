#pragma once

class CDOTA_Unit_Hero_Spectre : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x20C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x20B0]; // offset 0x0
    bool m_bArcanaKillstreakCompleted; // offset 0x20B0, size 0x1, align 1
    uint8 m_unCurrentArcanaKillStreak; // offset 0x20B1, size 0x1, align 1
    uint8 m_unBestArcanaKillStreak; // offset 0x20B2, size 0x1, align 1
    char _pad_20B3[0x1]; // offset 0x20B3
    PlayerID_t m_nVictimPlayerID; // offset 0x20B4, size 0x4, align 255
    bool m_bArcanaKillstreakRecordBroken; // offset 0x20B8, size 0x1, align 1
    char _pad_20B9[0x7]; // offset 0x20B9
};
