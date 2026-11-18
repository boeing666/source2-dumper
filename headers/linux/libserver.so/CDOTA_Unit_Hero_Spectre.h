#pragma once

class CDOTA_Unit_Hero_Spectre : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x23A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2390]; // offset 0x0
    bool m_bArcanaKillstreakCompleted; // offset 0x2390, size 0x1, align 1
    uint8 m_unCurrentArcanaKillStreak; // offset 0x2391, size 0x1, align 1
    uint8 m_unBestArcanaKillStreak; // offset 0x2392, size 0x1, align 1
    char _pad_2393[0x1]; // offset 0x2393
    PlayerID_t m_nVictimPlayerID; // offset 0x2394, size 0x4, align 255
    bool m_bArcanaKillstreakRecordBroken; // offset 0x2398, size 0x1, align 1
    char _pad_2399[0x7]; // offset 0x2399
};
