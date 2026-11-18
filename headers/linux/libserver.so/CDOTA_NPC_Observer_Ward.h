#pragma once

class CDOTA_NPC_Observer_Ward : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1D20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D0C]; // offset 0x0
    int32 m_iDuration; // offset 0x1D0C, size 0x4, align 4
    bool m_bPlacedInSpawnBox; // offset 0x1D10, size 0x1, align 1
    char _pad_1D11[0x3]; // offset 0x1D11
    GameTime_t m_flSpawnTime; // offset 0x1D14, size 0x4, align 255
    FowCustomTeams_t m_nFoWTeam; // offset 0x1D18, size 0x4, align 4
    char _pad_1D1C[0x4]; // offset 0x1D1C
};
