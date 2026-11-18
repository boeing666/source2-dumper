#pragma once

class CDOTA_Modifier_Lycan_SummonWolves_Spirited : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1B08]; // offset 0x0
    CHandle< C_BaseEntity > m_hOwner; // offset 0x1B08, size 0x4, align 4
    int32 wolf_index; // offset 0x1B0C, size 0x4, align 4
    int32 back_distance; // offset 0x1B10, size 0x4, align 4
    int32 side_distance; // offset 0x1B14, size 0x4, align 4
    VectorWS m_vecDesiredPosition; // offset 0x1B18, size 0xC, align 4
    int32 m_iBackOffsetFactor; // offset 0x1B24, size 0x4, align 4
    bool m_bRightWolf; // offset 0x1B28, size 0x1, align 1
    char _pad_1B29[0x3]; // offset 0x1B29
    float32 invis_level; // offset 0x1B2C, size 0x4, align 4
    int32 model_scale; // offset 0x1B30, size 0x4, align 4
    bool m_bInitialized; // offset 0x1B34, size 0x1, align 1
    bool m_bDeathFxTriggered; // offset 0x1B35, size 0x1, align 1
    char _pad_1B36[0x2]; // offset 0x1B36
    float32 death_fx_time; // offset 0x1B38, size 0x4, align 4
    char _pad_1B3C[0x4]; // offset 0x1B3C
};
