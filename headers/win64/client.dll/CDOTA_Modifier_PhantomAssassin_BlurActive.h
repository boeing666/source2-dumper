#pragma once

class CDOTA_Modifier_PhantomAssassin_BlurActive : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 radius; // offset 0x1AF8, size 0x4, align 4
    float32 fade_duration; // offset 0x1AFC, size 0x4, align 4
    int32 break_on_attack; // offset 0x1B00, size 0x4, align 4
    bool m_bDestroyNext; // offset 0x1B04, size 0x1, align 1
    char _pad_1B05[0x3]; // offset 0x1B05
    int32 manacost_reduction_during_blur_pct; // offset 0x1B08, size 0x4, align 4
    CHandle< C_BaseEntity > m_hVisibleEntity; // offset 0x1B0C, size 0x4, align 4
    float32 m_flCountdown; // offset 0x1B10, size 0x4, align 4
    float32 buff_duration_after_break; // offset 0x1B14, size 0x4, align 4
    float32 active_movespeed_bonus; // offset 0x1B18, size 0x4, align 4
    GameTime_t m_rtLastTime; // offset 0x1B1C, size 0x4, align 255
};
