#pragma once

class CDOTA_NPC_Observer_Ward : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1C88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1C78]; // offset 0x0
    int32 m_iDuration; // offset 0x1C78, size 0x4, align 4
    bool m_bPlacedInSpawnBox; // offset 0x1C7C, size 0x1, align 1
    char _pad_1C7D[0x3]; // offset 0x1C7D
    GameTime_t m_flSpawnTime; // offset 0x1C80, size 0x4, align 255
    FowCustomTeams_t m_nFoWTeam; // offset 0x1C84, size 0x4, align 4
};
