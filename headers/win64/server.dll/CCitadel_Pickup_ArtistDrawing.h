#pragma once

class CCitadel_Pickup_ArtistDrawing : public CCitadel_Pickup /*0x0*/  // sizeof 0xB80, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB78]; // offset 0x0
    CHandle< CBaseEntity > m_hPlayerOwner; // offset 0xB78, size 0x4, align 4
    CHandle< CCitadelPlayerPawn > m_hPlayerVictim; // offset 0xB7C, size 0x4, align 4
};
