#pragma once

class CDOTA_Modifier_Earthshaker_Fissure_Line_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 fissure_radius; // offset 0x1AA8, size 0x4, align 4
    float32 fissure_movement_speed; // offset 0x1AAC, size 0x4, align 4
    float32 stun_duration; // offset 0x1AB0, size 0x4, align 4
    float32 fissure_damage; // offset 0x1AB4, size 0x4, align 4
    float32 free_pathing_linger_duration; // offset 0x1AB8, size 0x4, align 4
    bool free_pathing_all_allies; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
    float32 fissure_max_distance_moved; // offset 0x1AC0, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x1AC4, size 0x4, align 255
    VectorWS m_vFissureStart; // offset 0x1AC8, size 0xC, align 4
    Vector m_vFissureStep; // offset 0x1AD4, size 0xC, align 4
    Vector m_vMoveDir; // offset 0x1AE0, size 0xC, align 4
    int32 m_nSegments; // offset 0x1AEC, size 0x4, align 4
    float32 m_flDurationOriginal; // offset 0x1AF0, size 0x4, align 4
    float32 m_flTotalDistanceMoved; // offset 0x1AF4, size 0x4, align 4
    ParticleIndex_t m_nFissureEffectIndex; // offset 0x1AF8, size 0x4, align 255
    char _pad_1AFC[0x4]; // offset 0x1AFC
};
