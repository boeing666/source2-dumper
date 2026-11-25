#pragma once

class CCitadel_Pickup_ArtistDrawing : public CCitadel_Pickup /*0x0*/  // sizeof 0xB90, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB84]; // offset 0x0
    CHandle< CBaseEntity > m_hPlayerOwner; // offset 0xB84, size 0x4, align 4
    CHandle< CCitadelPlayerPawn > m_hPlayerVictim; // offset 0xB88, size 0x4, align 4
    char _pad_0B8C[0x4]; // offset 0xB8C
};
