#pragma once

class CDOTA_Ability_Marci_Companion_Run : public C_DOTABaseAbility /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 m_nTrackingProjectileID; // offset 0x824, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x828, size 0x4, align 255
    int32 m_nMaxJumpDistance; // offset 0x82C, size 0x4, align 4
    float32 landing_radius; // offset 0x830, size 0x4, align 4
    int32 move_speed; // offset 0x834, size 0x4, align 4
    float32 ally_buff_duration; // offset 0x838, size 0x4, align 4
    int32 min_jump_distance; // offset 0x83C, size 0x4, align 4
    int32 max_jump_distance; // offset 0x840, size 0x4, align 4
    int32 impact_position_offset; // offset 0x844, size 0x4, align 4
    int32 vector_preview_radius; // offset 0x848, size 0x4, align 4
    VectorWS m_vEndpoint; // offset 0x84C, size 0xC, align 4
    ParticleIndex_t m_nToBounceFXIndex; // offset 0x858, size 0x4, align 255
    ParticleIndex_t m_nToTargetFXIndex; // offset 0x85C, size 0x4, align 255
    bool m_bIsAltCastState; // offset 0x860, size 0x1, align 1
    char _pad_0861[0x7]; // offset 0x861
};
