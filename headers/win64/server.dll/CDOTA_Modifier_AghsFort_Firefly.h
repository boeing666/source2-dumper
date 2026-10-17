#pragma once

class CDOTA_Modifier_AghsFort_Firefly : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 pool_duration; // offset 0x1AA8, size 0x4, align 4
    int32 radius; // offset 0x1AAC, size 0x4, align 4
    int32 m_ifirefly_Active; // offset 0x1AB0, size 0x4, align 4
    int32 tree_radius; // offset 0x1AB4, size 0x4, align 4
    int32 damage_pct_per_second; // offset 0x1AB8, size 0x4, align 4
    int32 movement_speed; // offset 0x1ABC, size 0x4, align 4
    float32 trail_placement_duration; // offset 0x1AC0, size 0x4, align 4
    float32 burn_linger_duration; // offset 0x1AC4, size 0x4, align 4
    bool m_bActive; // offset 0x1AC8, size 0x1, align 1
    char _pad_1AC9[0x3]; // offset 0x1AC9
    ParticleIndex_t m_nFXIndex; // offset 0x1ACC, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1AD0, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0x1AD4, size 0x4, align 255
    VectorWS m_vLastFirePoolLoc; // offset 0x1AD8, size 0xC, align 4
    char _pad_1AE4[0x4]; // offset 0x1AE4
    CUtlVector< VectorWS > m_vFirePoolLocations; // offset 0x1AE8, size 0x18, align 8
};
