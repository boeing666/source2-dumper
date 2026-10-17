#pragma once

class CDOTA_Modifier_Morphling_EbbAndFlow : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 flStrengthBonus; // offset 0x1AA8, size 0x4, align 4
    float32 flAgilityBonus; // offset 0x1AAC, size 0x4, align 4
    float32 stats_pct; // offset 0x1AB0, size 0x4, align 4
    float32 model_scale; // offset 0x1AB4, size 0x4, align 4
    float32 swell_up_duration; // offset 0x1AB8, size 0x4, align 4
    float32 swell_down_duration; // offset 0x1ABC, size 0x4, align 4
    float32 max_swell_duration; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
    CountdownTimer m_SwellUpTimer; // offset 0x1AC8, size 0x18, align 8
    CountdownTimer m_SwellDownTimer; // offset 0x1AE0, size 0x18, align 8
    CountdownTimer m_MaxSwellTimer; // offset 0x1AF8, size 0x18, align 8
};
