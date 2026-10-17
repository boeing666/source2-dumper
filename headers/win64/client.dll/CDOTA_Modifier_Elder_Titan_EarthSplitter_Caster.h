#pragma once

class CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hHitUnits; // offset 0x1AA8, size 0x18, align 8
    float32 vision_width; // offset 0x1AC0, size 0x4, align 4
    float32 vision_interval; // offset 0x1AC4, size 0x4, align 4
    float32 vision_duration; // offset 0x1AC8, size 0x4, align 4
    int32 vision_step; // offset 0x1ACC, size 0x4, align 4
    int32 total_steps; // offset 0x1AD0, size 0x4, align 4
    int32 m_nCompletedSteps; // offset 0x1AD4, size 0x4, align 4
    VectorWS m_vStart; // offset 0x1AD8, size 0xC, align 4
    VectorWS m_vEnd; // offset 0x1AE4, size 0xC, align 4
    VectorWS m_vNextVisionLocation; // offset 0x1AF0, size 0xC, align 4
    Vector m_vCastDirection; // offset 0x1AFC, size 0xC, align 4
};
