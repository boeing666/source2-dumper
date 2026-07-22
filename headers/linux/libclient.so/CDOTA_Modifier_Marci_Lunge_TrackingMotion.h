#pragma once

class CDOTA_Modifier_Marci_Lunge_TrackingMotion : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 m_nProjectileID; // offset 0x1A58, size 0x4, align 4
    int32 m_nMaxJumpDistance; // offset 0x1A5C, size 0x4, align 4
    float32 landing_radius; // offset 0x1A60, size 0x4, align 4
    int32 max_jump_distance; // offset 0x1A64, size 0x4, align 4
    int32 min_jump_distance; // offset 0x1A68, size 0x4, align 4
    int32 target_abort_distance; // offset 0x1A6C, size 0x4, align 4
    int32 impact_position_offset; // offset 0x1A70, size 0x4, align 4
    float32 m_flCastDistance; // offset 0x1A74, size 0x4, align 4
    ParticleIndex_t m_nAoEFXIndex; // offset 0x1A78, size 0x4, align 255
    VectorWS m_vDestination; // offset 0x1A7C, size 0xC, align 4
    CHandle< C_BaseEntity > m_hBounceEntity; // offset 0x1A88, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBounceEntityClient; // offset 0x1A8C, size 0x4, align 4
};
