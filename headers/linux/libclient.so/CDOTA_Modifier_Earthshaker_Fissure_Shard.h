#pragma once

class CDOTA_Modifier_Earthshaker_Fissure_Shard : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 shard_aftershock_stun_duration_pct; // offset 0x1A78, size 0x4, align 4
    float32 shard_free_pathing_linger_duration; // offset 0x1A7C, size 0x4, align 4
    float32 fissure_movement_speed; // offset 0x1A80, size 0x4, align 4
    float32 fissure_max_distance_moved; // offset 0x1A84, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x1A88, size 0xC, align 4
    VectorWS m_vEndPos; // offset 0x1A94, size 0xC, align 4
    Vector m_vMoveDir; // offset 0x1AA0, size 0xC, align 4
    float32 m_flTotalDistanceMoved; // offset 0x1AAC, size 0x4, align 4
};
