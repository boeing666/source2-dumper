#pragma once

class CDOTA_NPC_Observer_Ward : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1B98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B88]; // offset 0x0
    int32 m_iDuration; // offset 0x1B88, size 0x4, align 4
    bool m_bPlacedInSpawnBox; // offset 0x1B8C, size 0x1, align 1
    char _pad_1B8D[0x3]; // offset 0x1B8D
    GameTime_t m_flSpawnTime; // offset 0x1B90, size 0x4, align 255
    FowCustomTeams_t m_nFoWTeam; // offset 0x1B94, size 0x4, align 4
};
