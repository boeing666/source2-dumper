#pragma once

class CDOTA_Modifier_Clinkz_BurningBarrage : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 m_iArrowCount; // offset 0x1AA8, size 0x4, align 4
    VectorWS m_vOriginalTarget; // offset 0x1AAC, size 0xC, align 4
    int32 arrow_width; // offset 0x1AB8, size 0x4, align 4
    float32 arrow_speed; // offset 0x1ABC, size 0x4, align 4
    float32 arrow_range_multiplier; // offset 0x1AC0, size 0x4, align 4
    int32 wave_count; // offset 0x1AC4, size 0x4, align 4
    int32 arrow_count_per_wave; // offset 0x1AC8, size 0x4, align 4
    int32 arrow_angle; // offset 0x1ACC, size 0x4, align 4
    int32 m_iLoopCount; // offset 0x1AD0, size 0x4, align 4
    float32 m_flInterval; // offset 0x1AD4, size 0x4, align 4
    float32 m_flCycleDelay; // offset 0x1AD8, size 0x4, align 4
    float32 m_flTimeWaste; // offset 0x1ADC, size 0x4, align 4
    GameTime_t m_flExpectedTime; // offset 0x1AE0, size 0x4, align 255
    char _pad_1AE4[0x4]; // offset 0x1AE4
};
