#pragma once

class CDOTA_Modifier_Morphling_EbbAndFlow : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 flStrengthBonus; // offset 0x1A58, size 0x4, align 4
    float32 flAgilityBonus; // offset 0x1A5C, size 0x4, align 4
    float32 stats_pct; // offset 0x1A60, size 0x4, align 4
    float32 model_scale; // offset 0x1A64, size 0x4, align 4
    float32 swell_up_duration; // offset 0x1A68, size 0x4, align 4
    float32 swell_down_duration; // offset 0x1A6C, size 0x4, align 4
    float32 max_swell_duration; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
    CountdownTimer m_SwellUpTimer; // offset 0x1A78, size 0x18, align 8
    CountdownTimer m_SwellDownTimer; // offset 0x1A90, size 0x18, align 8
    CountdownTimer m_MaxSwellTimer; // offset 0x1AA8, size 0x18, align 8
};
