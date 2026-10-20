#pragma once

class CCitadel_Modifier_HookTarget : public CCitadel_Modifier_Link /*0x0*/  // sizeof 0x3B0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x180]; // offset 0x0
    float32 m_flCurrentVerticalSpeed; // offset 0x180, size 0x4, align 4
    bool m_bSuccess; // offset 0x184, size 0x1, align 1
    bool m_bSameTeam; // offset 0x185, size 0x1, align 1
    bool m_bPlayedApproachingWhoosh; // offset 0x186, size 0x1, align 1
    char _pad_0187[0x1]; // offset 0x187
    float32 m_flInitialTravelDistance; // offset 0x188, size 0x4, align 4
    GameTime_t m_flStuckStartTime; // offset 0x18C, size 0x4, align 255
    VectorWS m_vLastPos; // offset 0x190, size 0xC, align 4
    char _pad_019C[0x214]; // offset 0x19C
};
