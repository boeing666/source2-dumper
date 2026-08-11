#pragma once

class CDOTA_Modifier_MonkeyKing_ArcToGround : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 leap_speed; // offset 0x1A78, size 0x4, align 4
    float32 give_up_distance; // offset 0x1A7C, size 0x4, align 4
    float32 attackspeed_duration; // offset 0x1A80, size 0x4, align 4
    float32 m_flOriginalZDelta; // offset 0x1A84, size 0x4, align 4
    float32 m_flZDelta; // offset 0x1A88, size 0x4, align 4
    VectorWS m_vStart; // offset 0x1A8C, size 0xC, align 4
    VectorWS m_vTargetPos; // offset 0x1A98, size 0xC, align 4
    float32 m_flSpeed; // offset 0x1AA4, size 0x4, align 4
    bool m_bDroppedFromTree; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x3]; // offset 0x1AA9
    ParticleIndex_t m_nFXIndex; // offset 0x1AAC, size 0x4, align 255
    ParticleIndex_t m_nFXIndex2; // offset 0x1AB0, size 0x4, align 255
    float32 m_flOriginalHeight; // offset 0x1AB4, size 0x4, align 4
    bool m_bRightClickHop; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x7]; // offset 0x1AB9
};
