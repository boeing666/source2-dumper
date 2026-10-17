#pragma once

class CDOTA_Unit_Announcer : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x19A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1998]; // offset 0x0
    int32 m_iAudienceTeam; // offset 0x1998, size 0x4, align 4
    char _pad_199C[0x4]; // offset 0x199C
};
