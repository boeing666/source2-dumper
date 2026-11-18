#pragma once

class CDOTA_Modifier_Razor_PlasmaField_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_fLastRadius; // offset 0x1AF8, size 0x4, align 4
    float32 m_fCurRadius; // offset 0x1AFC, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1B00, size 0x4, align 255
    bool m_bContracting; // offset 0x1B04, size 0x1, align 1
    char _pad_1B05[0x3]; // offset 0x1B05
    CountdownTimer m_ViewerTimer; // offset 0x1B08, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1B20, size 0x4, align 255
    char _pad_1B24[0x4]; // offset 0x1B24
    CUtlVector< CHandle< C_BaseEntity > > m_EntitiesHit; // offset 0x1B28, size 0x18, align 8
    int32 speed; // offset 0x1B40, size 0x4, align 4
    float32 radius; // offset 0x1B44, size 0x4, align 4
    float32 damage_min; // offset 0x1B48, size 0x4, align 4
    float32 damage_max; // offset 0x1B4C, size 0x4, align 4
    int32 slow_min; // offset 0x1B50, size 0x4, align 4
    int32 slow_max; // offset 0x1B54, size 0x4, align 4
    float32 slow_duration; // offset 0x1B58, size 0x4, align 4
    bool m_bHasCreatedFx; // offset 0x1B5C, size 0x1, align 1
    char _pad_1B5D[0x3]; // offset 0x1B5D
    float32 total_ability_time; // offset 0x1B60, size 0x4, align 4
    char _pad_1B64[0x4]; // offset 0x1B64
};
