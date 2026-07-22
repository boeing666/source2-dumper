#pragma once

class CDOTA_Modifier_Razor_PlasmaField_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 m_fLastRadius; // offset 0x1A58, size 0x4, align 4
    float32 m_fCurRadius; // offset 0x1A5C, size 0x4, align 4
    GameTime_t m_fLastThink; // offset 0x1A60, size 0x4, align 255
    bool m_bContracting; // offset 0x1A64, size 0x1, align 1
    char _pad_1A65[0x3]; // offset 0x1A65
    CountdownTimer m_ViewerTimer; // offset 0x1A68, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1A80, size 0x4, align 255
    char _pad_1A84[0x4]; // offset 0x1A84
    CUtlVector< CHandle< C_BaseEntity > > m_EntitiesHit; // offset 0x1A88, size 0x18, align 8
    int32 speed; // offset 0x1AA0, size 0x4, align 4
    float32 radius; // offset 0x1AA4, size 0x4, align 4
    float32 damage_min; // offset 0x1AA8, size 0x4, align 4
    float32 damage_max; // offset 0x1AAC, size 0x4, align 4
    int32 slow_min; // offset 0x1AB0, size 0x4, align 4
    int32 slow_max; // offset 0x1AB4, size 0x4, align 4
    float32 slow_duration; // offset 0x1AB8, size 0x4, align 4
    bool m_bHasCreatedFx; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
    float32 total_ability_time; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
