#pragma once

class CDOTA_Modifier_Morphling_EbbAndFlow : public CDOTA_Buff /*0x0*/  // sizeof 0x1B60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 flStrengthBonus; // offset 0x1AF8, size 0x4, align 4
    float32 flAgilityBonus; // offset 0x1AFC, size 0x4, align 4
    float32 stats_pct; // offset 0x1B00, size 0x4, align 4
    float32 model_scale; // offset 0x1B04, size 0x4, align 4
    float32 swell_up_duration; // offset 0x1B08, size 0x4, align 4
    float32 swell_down_duration; // offset 0x1B0C, size 0x4, align 4
    float32 max_swell_duration; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
    CountdownTimer m_SwellUpTimer; // offset 0x1B18, size 0x18, align 8
    CountdownTimer m_SwellDownTimer; // offset 0x1B30, size 0x18, align 8
    CountdownTimer m_MaxSwellTimer; // offset 0x1B48, size 0x18, align 8
};
