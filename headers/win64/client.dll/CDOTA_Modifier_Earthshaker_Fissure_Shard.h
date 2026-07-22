#pragma once

class CDOTA_Modifier_Earthshaker_Fissure_Shard : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 shard_aftershock_stun_duration_pct; // offset 0x1A58, size 0x4, align 4
    float32 shard_free_pathing_linger_duration; // offset 0x1A5C, size 0x4, align 4
    float32 fissure_movement_speed; // offset 0x1A60, size 0x4, align 4
    float32 fissure_max_distance_moved; // offset 0x1A64, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x1A68, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0x1A74, size 0xC, align 4
    Vector m_vMoveDir; // offset 0x1A80, size 0xC, align 4
    float32 m_flTotalDistanceMoved; // offset 0x1A8C, size 0x4, align 4
};
