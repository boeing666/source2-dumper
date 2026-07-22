#pragma once

class CDOTA_Modifier_Razor_StaticLink : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 flSmoothness; // offset 0x1A58, size 0x4, align 4
    float32 drain_duration; // offset 0x1A5C, size 0x4, align 4
    int32 drain_rate; // offset 0x1A60, size 0x4, align 4
    int32 drain_range; // offset 0x1A64, size 0x4, align 4
    int32 drain_range_buffer; // offset 0x1A68, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A6C, size 0x4, align 4
    int32 m_iTotalDrainAmount; // offset 0x1A70, size 0x4, align 4
    int32 pull_speed; // offset 0x1A74, size 0x4, align 4
    int32 min_pull_range; // offset 0x1A78, size 0x4, align 4
    ParticleIndex_t m_iLinkIndex; // offset 0x1A7C, size 0x4, align 255
    CDOTA_Buff* m_pBuffPositive; // offset 0x1A80, size 0x8, align 8
    CDOTA_Buff* m_pNegative; // offset 0x1A88, size 0x8, align 8
    GameTime_t m_flLastThinkTime; // offset 0x1A90, size 0x4, align 255
    char _pad_1A94[0x14]; // offset 0x1A94
};
