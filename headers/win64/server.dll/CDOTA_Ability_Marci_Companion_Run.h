#pragma once

class CDOTA_Ability_Marci_Companion_Run : public CDOTABaseAbility /*0x0*/  // sizeof 0x5E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 m_nTrackingProjectileID; // offset 0x580, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x584, size 0x4, align 255
    int32 m_nMaxJumpDistance; // offset 0x588, size 0x4, align 4
    float32 landing_radius; // offset 0x58C, size 0x4, align 4
    int32 move_speed; // offset 0x590, size 0x4, align 4
    float32 ally_buff_duration; // offset 0x594, size 0x4, align 4
    int32 min_jump_distance; // offset 0x598, size 0x4, align 4
    int32 max_jump_distance; // offset 0x59C, size 0x4, align 4
    int32 impact_position_offset; // offset 0x5A0, size 0x4, align 4
    int32 vector_preview_radius; // offset 0x5A4, size 0x4, align 4
    VectorWS m_vEndpoint; // offset 0x5A8, size 0xC, align 4
    ParticleIndex_t m_nToBounceFXIndex; // offset 0x5B4, size 0x4, align 255
    ParticleIndex_t m_nToTargetFXIndex; // offset 0x5B8, size 0x4, align 255
    bool m_bIsAltCastState; // offset 0x5BC, size 0x1, align 1
    char _pad_05BD[0x3]; // offset 0x5BD
    VectorWS m_vDashPosition; // offset 0x5C0, size 0xC, align 4
    VectorWS m_vFacePosition; // offset 0x5CC, size 0xC, align 4
    Vector m_vTravelDir; // offset 0x5D8, size 0xC, align 4
    float32 m_fTravelDistance; // offset 0x5E4, size 0x4, align 4
};
