#pragma once

class CDOTA_Modifier_Earthshaker_Fissure_Line_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 fissure_radius; // offset 0x1A58, size 0x4, align 4
    float32 fissure_movement_speed; // offset 0x1A5C, size 0x4, align 4
    float32 stun_duration; // offset 0x1A60, size 0x4, align 4
    float32 fissure_damage; // offset 0x1A64, size 0x4, align 4
    float32 free_pathing_linger_duration; // offset 0x1A68, size 0x4, align 4
    float32 fissure_max_distance_moved; // offset 0x1A6C, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x1A70, size 0x4, align 255
    VectorWS m_vFissureStart; // offset 0x1A74, size 0xC, align 4
    Vector m_vFissureStep; // offset 0x1A80, size 0xC, align 4
    Vector m_vMoveDir; // offset 0x1A8C, size 0xC, align 4
    int32 m_nSegments; // offset 0x1A98, size 0x4, align 4
    float32 m_flDurationOriginal; // offset 0x1A9C, size 0x4, align 4
    float32 m_flTotalDistanceMoved; // offset 0x1AA0, size 0x4, align 4
    ParticleIndex_t m_nFissureEffectIndex; // offset 0x1AA4, size 0x4, align 255
};
