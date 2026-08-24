#pragma once

class CCSPlayerCamera : public CBaseEntity /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CHandle< CCSPlayerPawnBase > m_hPawn; // offset 0x788, size 0x4, align 4
    bool m_bEnabled; // offset 0x78C, size 0x1, align 1
    bool m_bIsControllingAngles; // offset 0x78D, size 0x1, align 1
    char _pad_078E[0x2]; // offset 0x78E
};
