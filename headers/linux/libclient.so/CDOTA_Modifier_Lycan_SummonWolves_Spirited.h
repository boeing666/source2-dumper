#pragma once

class CDOTA_Modifier_Lycan_SummonWolves_Spirited : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AB4]; // offset 0x0
    CHandle< C_BaseEntity > m_hOwner; // offset 0x1AB4, size 0x4, align 4
    int32 wolf_index; // offset 0x1AB8, size 0x4, align 4
    int32 back_distance; // offset 0x1ABC, size 0x4, align 4
    int32 side_distance; // offset 0x1AC0, size 0x4, align 4
    VectorWS m_vecDesiredPosition; // offset 0x1AC4, size 0xC, align 4
    int32 m_iBackOffsetFactor; // offset 0x1AD0, size 0x4, align 4
    bool m_bRightWolf; // offset 0x1AD4, size 0x1, align 1
    char _pad_1AD5[0x3]; // offset 0x1AD5
    float32 invis_level; // offset 0x1AD8, size 0x4, align 4
    int32 model_scale; // offset 0x1ADC, size 0x4, align 4
    bool m_bInitialized; // offset 0x1AE0, size 0x1, align 1
    bool m_bDeathFxTriggered; // offset 0x1AE1, size 0x1, align 1
    char _pad_1AE2[0x2]; // offset 0x1AE2
    float32 death_fx_time; // offset 0x1AE4, size 0x4, align 4
};
