#pragma once

class CDOTA_Modifier_MonkeyKing_ArcToGround : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 leap_speed; // offset 0x1AF8, size 0x4, align 4
    float32 give_up_distance; // offset 0x1AFC, size 0x4, align 4
    float32 attackspeed_duration; // offset 0x1B00, size 0x4, align 4
    float32 m_flOriginalZDelta; // offset 0x1B04, size 0x4, align 4
    float32 m_flZDelta; // offset 0x1B08, size 0x4, align 4
    VectorWS m_vStart; // offset 0x1B0C, size 0xC, align 4
    VectorWS m_vTargetPos; // offset 0x1B18, size 0xC, align 4
    float32 m_flSpeed; // offset 0x1B24, size 0x4, align 4
    bool m_bDroppedFromTree; // offset 0x1B28, size 0x1, align 1
    char _pad_1B29[0x3]; // offset 0x1B29
    ParticleIndex_t m_nFXIndex; // offset 0x1B2C, size 0x4, align 255
    ParticleIndex_t m_nFXIndex2; // offset 0x1B30, size 0x4, align 255
    float32 m_flOriginalHeight; // offset 0x1B34, size 0x4, align 4
    bool m_bRightClickHop; // offset 0x1B38, size 0x1, align 1
    char _pad_1B39[0x7]; // offset 0x1B39
};
