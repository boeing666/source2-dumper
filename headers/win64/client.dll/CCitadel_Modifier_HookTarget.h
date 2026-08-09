#pragma once

class CCitadel_Modifier_HookTarget : public CCitadel_Modifier_Link /*0x0*/  // sizeof 0x288, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xE8]; // offset 0x0
    float32 m_flCurrentVerticalSpeed; // offset 0xE8, size 0x4, align 4
    bool m_bSuccess; // offset 0xEC, size 0x1, align 1
    bool m_bSameTeam; // offset 0xED, size 0x1, align 1
    bool m_bPlayedApproachingWhoosh; // offset 0xEE, size 0x1, align 1
    char _pad_00EF[0x1]; // offset 0xEF
    float32 m_flInitialTravelDistance; // offset 0xF0, size 0x4, align 4
    GameTime_t m_flStuckStartTime; // offset 0xF4, size 0x4, align 255
    Vector m_vLastPos; // offset 0xF8, size 0xC, align 4
    char _pad_0104[0x184]; // offset 0x104
};
