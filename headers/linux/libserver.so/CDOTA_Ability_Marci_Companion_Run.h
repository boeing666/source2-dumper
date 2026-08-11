#pragma once

class CDOTA_Ability_Marci_Companion_Run : public CDOTABaseAbility /*0x0*/  // sizeof 0x8C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 m_nTrackingProjectileID; // offset 0x85C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x860, size 0x4, align 255
    int32 m_nMaxJumpDistance; // offset 0x864, size 0x4, align 4
    float32 landing_radius; // offset 0x868, size 0x4, align 4
    int32 move_speed; // offset 0x86C, size 0x4, align 4
    float32 ally_buff_duration; // offset 0x870, size 0x4, align 4
    int32 min_jump_distance; // offset 0x874, size 0x4, align 4
    int32 max_jump_distance; // offset 0x878, size 0x4, align 4
    int32 impact_position_offset; // offset 0x87C, size 0x4, align 4
    int32 vector_preview_radius; // offset 0x880, size 0x4, align 4
    VectorWS m_vEndpoint; // offset 0x884, size 0xC, align 4
    ParticleIndex_t m_nToBounceFXIndex; // offset 0x890, size 0x4, align 255
    ParticleIndex_t m_nToTargetFXIndex; // offset 0x894, size 0x4, align 255
    bool m_bIsAltCastState; // offset 0x898, size 0x1, align 1
    char _pad_0899[0x3]; // offset 0x899
    VectorWS m_vDashPosition; // offset 0x89C, size 0xC, align 4
    VectorWS m_vFacePosition; // offset 0x8A8, size 0xC, align 4
    Vector m_vTravelDir; // offset 0x8B4, size 0xC, align 4
    float32 m_fTravelDistance; // offset 0x8C0, size 0x4, align 4
    char _pad_08C4[0x4]; // offset 0x8C4
};
