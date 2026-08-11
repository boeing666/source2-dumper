#pragma once

class CDOTA_Modifier_Slark_ShadowDance_Passive : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 activation_delay; // offset 0x1A78, size 0x4, align 4
    float32 neutral_disable; // offset 0x1A7C, size 0x4, align 4
    float32 linger_search_radius; // offset 0x1A80, size 0x4, align 4
    float32 linger_duration; // offset 0x1A84, size 0x4, align 4
    bool m_bPendingRefresh; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x3]; // offset 0x1A89
    GameTime_t m_fPendingStateChangeTime; // offset 0x1A8C, size 0x4, align 255
    CountdownTimer m_NeutralHitTimer; // offset 0x1A90, size 0x18, align 8
};
