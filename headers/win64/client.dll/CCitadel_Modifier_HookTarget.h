#pragma once

class CCitadel_Modifier_HookTarget : public CCitadel_Modifier_Link /*0x0*/  // sizeof 0x398, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x168]; // offset 0x0
    float32 m_flCurrentVerticalSpeed; // offset 0x168, size 0x4, align 4
    bool m_bSuccess; // offset 0x16C, size 0x1, align 1
    bool m_bSameTeam; // offset 0x16D, size 0x1, align 1
    bool m_bPlayedApproachingWhoosh; // offset 0x16E, size 0x1, align 1
    char _pad_016F[0x1]; // offset 0x16F
    float32 m_flInitialTravelDistance; // offset 0x170, size 0x4, align 4
    GameTime_t m_flStuckStartTime; // offset 0x174, size 0x4, align 255
    VectorWS m_vLastPos; // offset 0x178, size 0xC, align 4
    char _pad_0184[0x214]; // offset 0x184
};
