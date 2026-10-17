#pragma once

class CDOTA_Modifier_Magnataur_Horn_Toss : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 air_duration; // offset 0x1AA8, size 0x4, align 4
    int32 air_height; // offset 0x1AAC, size 0x4, align 4
    int32 travel_distance; // offset 0x1AB0, size 0x4, align 4
    VectorWS m_vDestination; // offset 0x1AB4, size 0xC, align 4
    float32 m_flStartZ; // offset 0x1AC0, size 0x4, align 4
    float32 m_flCurTime; // offset 0x1AC4, size 0x4, align 4
    float32 m_flJumpDuration; // offset 0x1AC8, size 0x4, align 4
    float32 m_flJumpHeight; // offset 0x1ACC, size 0x4, align 4
    Vector m_vTargetHorizontalDirection; // offset 0x1AD0, size 0xC, align 4
    char _pad_1ADC[0x4]; // offset 0x1ADC
};
