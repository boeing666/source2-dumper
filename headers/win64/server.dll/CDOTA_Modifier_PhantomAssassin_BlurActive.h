#pragma once

class CDOTA_Modifier_PhantomAssassin_BlurActive : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 radius; // offset 0x1AA8, size 0x4, align 4
    float32 fade_duration; // offset 0x1AAC, size 0x4, align 4
    int32 break_on_attack; // offset 0x1AB0, size 0x4, align 4
    bool m_bDestroyNext; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
    int32 manacost_reduction_during_blur_pct; // offset 0x1AB8, size 0x4, align 4
    CHandle< CBaseEntity > m_hVisibleEntity; // offset 0x1ABC, size 0x4, align 4
    float32 m_flCountdown; // offset 0x1AC0, size 0x4, align 4
    float32 buff_duration_after_break; // offset 0x1AC4, size 0x4, align 4
    float32 active_movespeed_bonus; // offset 0x1AC8, size 0x4, align 4
    GameTime_t m_rtLastTime; // offset 0x1ACC, size 0x4, align 255
};
