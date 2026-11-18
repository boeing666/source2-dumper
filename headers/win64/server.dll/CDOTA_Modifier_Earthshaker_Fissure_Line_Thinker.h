#pragma once

class CDOTA_Modifier_Earthshaker_Fissure_Line_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B68, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 fissure_radius; // offset 0x1AF8, size 0x4, align 4
    float32 fissure_movement_speed; // offset 0x1AFC, size 0x4, align 4
    float32 stun_duration; // offset 0x1B00, size 0x4, align 4
    float32 fissure_damage; // offset 0x1B04, size 0x4, align 4
    float32 free_pathing_linger_duration; // offset 0x1B08, size 0x4, align 4
    bool free_pathing_all_allies; // offset 0x1B0C, size 0x1, align 1
    char _pad_1B0D[0x3]; // offset 0x1B0D
    float32 fissure_max_distance_moved; // offset 0x1B10, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x1B14, size 0x4, align 255
    VectorWS m_vFissureStart; // offset 0x1B18, size 0xC, align 4
    Vector m_vFissureStep; // offset 0x1B24, size 0xC, align 4
    Vector m_vMoveDir; // offset 0x1B30, size 0xC, align 4
    int32 m_nSegments; // offset 0x1B3C, size 0x4, align 4
    float32 m_flDurationOriginal; // offset 0x1B40, size 0x4, align 4
    float32 m_flTotalDistanceMoved; // offset 0x1B44, size 0x4, align 4
    ParticleIndex_t m_nFissureEffectIndex; // offset 0x1B48, size 0x4, align 255
    char _pad_1B4C[0x4]; // offset 0x1B4C
    CUtlVector< CDOTA_BaseNPC* > thinkerEntities; // offset 0x1B50, size 0x18, align 8
};
