#pragma once

class CDOTA_Ability_Marci_Companion_Run : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 m_nTrackingProjectileID; // offset 0x6A8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x6AC, size 0x4, align 255
    int32 m_nMaxJumpDistance; // offset 0x6B0, size 0x4, align 4
    float32 landing_radius; // offset 0x6B4, size 0x4, align 4
    int32 move_speed; // offset 0x6B8, size 0x4, align 4
    float32 ally_buff_duration; // offset 0x6BC, size 0x4, align 4
    int32 min_jump_distance; // offset 0x6C0, size 0x4, align 4
    int32 max_jump_distance; // offset 0x6C4, size 0x4, align 4
    int32 impact_position_offset; // offset 0x6C8, size 0x4, align 4
    int32 vector_preview_radius; // offset 0x6CC, size 0x4, align 4
    VectorWS m_vEndpoint; // offset 0x6D0, size 0xC, align 4
    ParticleIndex_t m_nToBounceFXIndex; // offset 0x6DC, size 0x4, align 255
    ParticleIndex_t m_nToTargetFXIndex; // offset 0x6E0, size 0x4, align 255
    bool m_bIsAltCastState; // offset 0x6E4, size 0x1, align 1
    char _pad_06E5[0x3]; // offset 0x6E5
};
