#pragma once

class CDOTA_BaseNPC_Creep_Lane : public CDOTA_BaseNPC_Creep /*0x0*/  // sizeof 0x18F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18EC]; // offset 0x0
    FowCustomTeams_t m_nFoWTeam; // offset 0x18EC, size 0x4, align 4
};
