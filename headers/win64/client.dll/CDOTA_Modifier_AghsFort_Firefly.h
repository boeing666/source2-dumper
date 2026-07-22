#pragma once

class CDOTA_Modifier_AghsFort_Firefly : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 pool_duration; // offset 0x1A58, size 0x4, align 4
    int32 radius; // offset 0x1A5C, size 0x4, align 4
    int32 m_ifirefly_Active; // offset 0x1A60, size 0x4, align 4
    int32 tree_radius; // offset 0x1A64, size 0x4, align 4
    int32 damage_pct_per_second; // offset 0x1A68, size 0x4, align 4
    int32 movement_speed; // offset 0x1A6C, size 0x4, align 4
    float32 trail_placement_duration; // offset 0x1A70, size 0x4, align 4
    float32 burn_linger_duration; // offset 0x1A74, size 0x4, align 4
    bool m_bActive; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x3]; // offset 0x1A79
    ParticleIndex_t m_nFXIndex; // offset 0x1A7C, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1A80, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0x1A84, size 0x4, align 255
    VectorWS m_vLastFirePoolLoc; // offset 0x1A88, size 0xC, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
    CUtlVector< VectorWS > m_vFirePoolLocations; // offset 0x1A98, size 0x18, align 8
};
