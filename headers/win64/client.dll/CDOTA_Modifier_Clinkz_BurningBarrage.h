#pragma once

class CDOTA_Modifier_Clinkz_BurningBarrage : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 m_iArrowCount; // offset 0x1A58, size 0x4, align 4
    VectorWS m_vOriginalTarget; // offset 0x1A5C, size 0xC, align 4
    int32 arrow_width; // offset 0x1A68, size 0x4, align 4
    float32 arrow_speed; // offset 0x1A6C, size 0x4, align 4
    float32 arrow_range_multiplier; // offset 0x1A70, size 0x4, align 4
    int32 wave_count; // offset 0x1A74, size 0x4, align 4
    int32 arrow_count_per_wave; // offset 0x1A78, size 0x4, align 4
    int32 arrow_angle; // offset 0x1A7C, size 0x4, align 4
    int32 m_iLoopCount; // offset 0x1A80, size 0x4, align 4
    float32 m_flInterval; // offset 0x1A84, size 0x4, align 4
    float32 m_flCycleDelay; // offset 0x1A88, size 0x4, align 4
    float32 m_flTimeWaste; // offset 0x1A8C, size 0x4, align 4
    GameTime_t m_flExpectedTime; // offset 0x1A90, size 0x4, align 255
    char _pad_1A94[0x4]; // offset 0x1A94
};
