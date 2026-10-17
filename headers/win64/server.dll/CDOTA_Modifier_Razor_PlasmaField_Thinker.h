#pragma once

class CDOTA_Modifier_Razor_PlasmaField_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_fLastRadius; // offset 0x1AA8, size 0x4, align 4
    float32 m_fCurRadius; // offset 0x1AAC, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1AB0, size 0x4, align 255
    bool m_bContracting; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
    CountdownTimer m_ViewerTimer; // offset 0x1AB8, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1AD0, size 0x4, align 255
    char _pad_1AD4[0x4]; // offset 0x1AD4
    CUtlVector< CHandle< CBaseEntity > > m_EntitiesHit; // offset 0x1AD8, size 0x18, align 8
    int32 speed; // offset 0x1AF0, size 0x4, align 4
    float32 radius; // offset 0x1AF4, size 0x4, align 4
    float32 damage_min; // offset 0x1AF8, size 0x4, align 4
    float32 damage_max; // offset 0x1AFC, size 0x4, align 4
    int32 slow_min; // offset 0x1B00, size 0x4, align 4
    int32 slow_max; // offset 0x1B04, size 0x4, align 4
    float32 slow_duration; // offset 0x1B08, size 0x4, align 4
    bool m_bHasCreatedFx; // offset 0x1B0C, size 0x1, align 1
    char _pad_1B0D[0x3]; // offset 0x1B0D
    float32 total_ability_time; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
