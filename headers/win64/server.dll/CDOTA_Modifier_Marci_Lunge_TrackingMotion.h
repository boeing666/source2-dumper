#pragma once

class CDOTA_Modifier_Marci_Lunge_TrackingMotion : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_nProjectileID; // offset 0x1A78, size 0x4, align 4
    int32 m_nMaxJumpDistance; // offset 0x1A7C, size 0x4, align 4
    float32 landing_radius; // offset 0x1A80, size 0x4, align 4
    int32 max_jump_distance; // offset 0x1A84, size 0x4, align 4
    int32 min_jump_distance; // offset 0x1A88, size 0x4, align 4
    int32 target_abort_distance; // offset 0x1A8C, size 0x4, align 4
    int32 impact_position_offset; // offset 0x1A90, size 0x4, align 4
    float32 m_flCastDistance; // offset 0x1A94, size 0x4, align 4
    ParticleIndex_t m_nAoEFXIndex; // offset 0x1A98, size 0x4, align 255
    VectorWS m_vDestination; // offset 0x1A9C, size 0xC, align 4
    CHandle< CBaseEntity > m_hBounceEntity; // offset 0x1AA8, size 0x4, align 4
    CHandle< CBaseEntity > m_hBounceEntityClient; // offset 0x1AAC, size 0x4, align 4
};
