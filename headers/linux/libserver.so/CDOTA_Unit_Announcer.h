#pragma once

class CDOTA_Unit_Announcer : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x1D10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D0C]; // offset 0x0
    int32 m_iAudienceTeam; // offset 0x1D0C, size 0x4, align 4
};
