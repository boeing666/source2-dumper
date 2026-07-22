#pragma once

class CDOTA_Modifier_PhantomAssassin_BlurActive : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 radius; // offset 0x1A58, size 0x4, align 4
    float32 fade_duration; // offset 0x1A5C, size 0x4, align 4
    int32 break_on_attack; // offset 0x1A60, size 0x4, align 4
    bool m_bDestroyNext; // offset 0x1A64, size 0x1, align 1
    char _pad_1A65[0x3]; // offset 0x1A65
    int32 manacost_reduction_during_blur_pct; // offset 0x1A68, size 0x4, align 4
    CHandle< C_BaseEntity > m_hVisibleEntity; // offset 0x1A6C, size 0x4, align 4
    float32 m_flCountdown; // offset 0x1A70, size 0x4, align 4
    float32 buff_duration_after_break; // offset 0x1A74, size 0x4, align 4
    float32 active_movespeed_bonus; // offset 0x1A78, size 0x4, align 4
    GameTime_t m_rtLastTime; // offset 0x1A7C, size 0x4, align 255
};
