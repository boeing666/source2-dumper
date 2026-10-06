#pragma once

class CCitadel_Modifier_HookTarget : public CCitadel_Modifier_Link /*0x0*/  // sizeof 0x3A0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x170]; // offset 0x0
    float32 m_flCurrentVerticalSpeed; // offset 0x170, size 0x4, align 4
    bool m_bSuccess; // offset 0x174, size 0x1, align 1
    bool m_bSameTeam; // offset 0x175, size 0x1, align 1
    bool m_bPlayedApproachingWhoosh; // offset 0x176, size 0x1, align 1
    char _pad_0177[0x1]; // offset 0x177
    float32 m_flInitialTravelDistance; // offset 0x178, size 0x4, align 4
    GameTime_t m_flStuckStartTime; // offset 0x17C, size 0x4, align 255
    VectorWS m_vLastPos; // offset 0x180, size 0xC, align 4
    char _pad_018C[0x214]; // offset 0x18C
};
