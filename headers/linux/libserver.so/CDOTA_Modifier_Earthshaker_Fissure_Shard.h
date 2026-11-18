#pragma once

class CDOTA_Modifier_Earthshaker_Fissure_Shard : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 shard_aftershock_stun_duration_pct; // offset 0x1AF8, size 0x4, align 4
    float32 shard_free_pathing_linger_duration; // offset 0x1AFC, size 0x4, align 4
    float32 fissure_movement_speed; // offset 0x1B00, size 0x4, align 4
    float32 fissure_max_distance_moved; // offset 0x1B04, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x1B08, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0x1B14, size 0xC, align 4
    Vector m_vMoveDir; // offset 0x1B20, size 0xC, align 4
    float32 m_flTotalDistanceMoved; // offset 0x1B2C, size 0x4, align 4
};
