#pragma once

class C_DOTA_Unit_Hero_Spectre : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x20A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x209A]; // offset 0x0
    uint8 m_unCurrentArcanaKillStreak; // offset 0x209A, size 0x1, align 1
    uint8 m_unBestArcanaKillStreak; // offset 0x209B, size 0x1, align 1
    PlayerID_t m_nVictimPlayerID; // offset 0x209C, size 0x4, align 255
    bool m_bArcanaKillstreakRecordBroken; // offset 0x20A0, size 0x1, align 1
    char _pad_20A1[0x7]; // offset 0x20A1
};
