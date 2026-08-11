#pragma once

class CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hHitUnits; // offset 0x1A78, size 0x18, align 8
    float32 vision_width; // offset 0x1A90, size 0x4, align 4
    float32 vision_interval; // offset 0x1A94, size 0x4, align 4
    float32 vision_duration; // offset 0x1A98, size 0x4, align 4
    int32 vision_step; // offset 0x1A9C, size 0x4, align 4
    int32 total_steps; // offset 0x1AA0, size 0x4, align 4
    int32 m_nCompletedSteps; // offset 0x1AA4, size 0x4, align 4
    VectorWS m_vStart; // offset 0x1AA8, size 0xC, align 4
    VectorWS m_vEnd; // offset 0x1AB4, size 0xC, align 4
    VectorWS m_vNextVisionLocation; // offset 0x1AC0, size 0xC, align 4
    Vector m_vCastDirection; // offset 0x1ACC, size 0xC, align 4
    int32 m_nHumHeroesHit; // offset 0x1AD8, size 0x4, align 4
    bool m_bHitInvisibleHero; // offset 0x1ADC, size 0x1, align 1
    char _pad_1ADD[0x3]; // offset 0x1ADD
};
