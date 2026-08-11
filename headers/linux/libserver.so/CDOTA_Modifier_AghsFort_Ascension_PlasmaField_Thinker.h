#pragma once

class CDOTA_Modifier_AghsFort_Ascension_PlasmaField_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 m_fLastRadius; // offset 0x1A78, size 0x4, align 4
    float32 m_fCurRadius; // offset 0x1A7C, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1A80, size 0x4, align 255
    bool m_bWindingUp; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
    CountdownTimer m_ViewerTimer; // offset 0x1A88, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1AA0, size 0x4, align 255
    char _pad_1AA4[0x4]; // offset 0x1AA4
    CUtlVector< CHandle< CBaseEntity > > m_EntitiesHit; // offset 0x1AA8, size 0x18, align 8
    int32 speed; // offset 0x1AC0, size 0x4, align 4
    int32 radius; // offset 0x1AC4, size 0x4, align 4
    int32 damage_min; // offset 0x1AC8, size 0x4, align 4
    int32 damage_max; // offset 0x1ACC, size 0x4, align 4
    int32 slow_min; // offset 0x1AD0, size 0x4, align 4
    int32 slow_max; // offset 0x1AD4, size 0x4, align 4
    float32 slow_duration; // offset 0x1AD8, size 0x4, align 4
    float32 windup_time; // offset 0x1ADC, size 0x4, align 4
};
