#pragma once

class CDOTA_NPC_Observer_Ward : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x18B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18A8]; // offset 0x0
    int32 m_iDuration; // offset 0x18A8, size 0x4, align 4
    bool m_bPlacedInSpawnBox; // offset 0x18AC, size 0x1, align 1
    char _pad_18AD[0x3]; // offset 0x18AD
    GameTime_t m_flSpawnTime; // offset 0x18B0, size 0x4, align 255
    FowCustomTeams_t m_nFoWTeam; // offset 0x18B4, size 0x4, align 4
};
