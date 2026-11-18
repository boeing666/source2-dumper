#pragma once

class C_DOTA_Unit_Hero_Spectre : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F20, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1F10]; // offset 0x0
    uint8 m_unCurrentArcanaKillStreak; // offset 0x1F10, size 0x1, align 1
    uint8 m_unBestArcanaKillStreak; // offset 0x1F11, size 0x1, align 1
    char _pad_1F12[0x2]; // offset 0x1F12
    PlayerID_t m_nVictimPlayerID; // offset 0x1F14, size 0x4, align 255
    bool m_bArcanaKillstreakRecordBroken; // offset 0x1F18, size 0x1, align 1
    char _pad_1F19[0x7]; // offset 0x1F19
};
