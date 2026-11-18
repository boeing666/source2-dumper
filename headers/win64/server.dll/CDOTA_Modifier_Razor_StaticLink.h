#pragma once

class CDOTA_Modifier_Razor_StaticLink : public CDOTA_Buff /*0x0*/  // sizeof 0x1B50, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 flSmoothness; // offset 0x1AF8, size 0x4, align 4
    float32 drain_duration; // offset 0x1AFC, size 0x4, align 4
    int32 drain_rate; // offset 0x1B00, size 0x4, align 4
    int32 drain_range; // offset 0x1B04, size 0x4, align 4
    int32 drain_range_buffer; // offset 0x1B08, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1B0C, size 0x4, align 4
    int32 m_iTotalDrainAmount; // offset 0x1B10, size 0x4, align 4
    int32 pull_speed; // offset 0x1B14, size 0x4, align 4
    int32 min_pull_range; // offset 0x1B18, size 0x4, align 4
    ParticleIndex_t m_iLinkIndex; // offset 0x1B1C, size 0x4, align 255
    CUtlSymbolLarge m_iszLinkModel; // offset 0x1B20, size 0x8, align 8
    CDOTA_Buff* m_pBuffPositive; // offset 0x1B28, size 0x8, align 8
    CDOTA_Buff* m_pNegative; // offset 0x1B30, size 0x8, align 8
    GameTime_t m_flLastThinkTime; // offset 0x1B38, size 0x4, align 255
    char _pad_1B3C[0x14]; // offset 0x1B3C
};
