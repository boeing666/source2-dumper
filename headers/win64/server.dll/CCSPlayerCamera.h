#pragma once

class CCSPlayerCamera : public CBaseEntity /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CHandle< CCSPlayerPawnBase > m_hPawn; // offset 0x4A8, size 0x4, align 4
    bool m_bEnabled; // offset 0x4AC, size 0x1, align 1
    bool m_bIsControllingAngles; // offset 0x4AD, size 0x1, align 1
    char _pad_04AE[0x2]; // offset 0x4AE
};
