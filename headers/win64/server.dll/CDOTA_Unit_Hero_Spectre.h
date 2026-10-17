#pragma once

class CDOTA_Unit_Hero_Spectre : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2030, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2020]; // offset 0x0
    bool m_bArcanaKillstreakCompleted; // offset 0x2020, size 0x1, align 1
    uint8 m_unCurrentArcanaKillStreak; // offset 0x2021, size 0x1, align 1
    uint8 m_unBestArcanaKillStreak; // offset 0x2022, size 0x1, align 1
    char _pad_2023[0x1]; // offset 0x2023
    PlayerID_t m_nVictimPlayerID; // offset 0x2024, size 0x4, align 255
    bool m_bArcanaKillstreakRecordBroken; // offset 0x2028, size 0x1, align 1
    char _pad_2029[0x7]; // offset 0x2029
};
