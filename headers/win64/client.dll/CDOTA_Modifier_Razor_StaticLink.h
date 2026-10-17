#pragma once

class CDOTA_Modifier_Razor_StaticLink : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 flSmoothness; // offset 0x1AA8, size 0x4, align 4
    float32 drain_duration; // offset 0x1AAC, size 0x4, align 4
    int32 drain_rate; // offset 0x1AB0, size 0x4, align 4
    int32 drain_range; // offset 0x1AB4, size 0x4, align 4
    int32 drain_range_buffer; // offset 0x1AB8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1ABC, size 0x4, align 4
    int32 m_iTotalDrainAmount; // offset 0x1AC0, size 0x4, align 4
    int32 pull_speed; // offset 0x1AC4, size 0x4, align 4
    int32 min_pull_range; // offset 0x1AC8, size 0x4, align 4
    ParticleIndex_t m_iLinkIndex; // offset 0x1ACC, size 0x4, align 255
    CDOTA_Buff* m_pBuffPositive; // offset 0x1AD0, size 0x8, align 8
    CDOTA_Buff* m_pNegative; // offset 0x1AD8, size 0x8, align 8
    GameTime_t m_flLastThinkTime; // offset 0x1AE0, size 0x4, align 255
    char _pad_1AE4[0x14]; // offset 0x1AE4
};
