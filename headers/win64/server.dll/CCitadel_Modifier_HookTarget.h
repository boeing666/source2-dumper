#pragma once

class CCitadel_Modifier_HookTarget : public CCitadel_Modifier_Link /*0x0*/  // sizeof 0x2A0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x100]; // offset 0x0
    float32 m_flCurrentVerticalSpeed; // offset 0x100, size 0x4, align 4
    bool m_bSuccess; // offset 0x104, size 0x1, align 1
    bool m_bSameTeam; // offset 0x105, size 0x1, align 1
    bool m_bPlayedApproachingWhoosh; // offset 0x106, size 0x1, align 1
    char _pad_0107[0x1]; // offset 0x107
    float32 m_flInitialTravelDistance; // offset 0x108, size 0x4, align 4
    GameTime_t m_flStuckStartTime; // offset 0x10C, size 0x4, align 255
    Vector m_vLastPos; // offset 0x110, size 0xC, align 4
    char _pad_011C[0x184]; // offset 0x11C
};
