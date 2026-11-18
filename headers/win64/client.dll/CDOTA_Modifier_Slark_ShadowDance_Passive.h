#pragma once

class CDOTA_Modifier_Slark_ShadowDance_Passive : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 activation_delay; // offset 0x1AF8, size 0x4, align 4
    float32 neutral_disable; // offset 0x1AFC, size 0x4, align 4
    float32 linger_search_radius; // offset 0x1B00, size 0x4, align 4
    float32 linger_duration; // offset 0x1B04, size 0x4, align 4
    bool m_bPendingRefresh; // offset 0x1B08, size 0x1, align 1
    char _pad_1B09[0x3]; // offset 0x1B09
    GameTime_t m_fPendingStateChangeTime; // offset 0x1B0C, size 0x4, align 255
    CountdownTimer m_NeutralHitTimer; // offset 0x1B10, size 0x18, align 8
};
