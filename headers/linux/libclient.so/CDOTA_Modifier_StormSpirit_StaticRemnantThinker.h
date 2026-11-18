#pragma once

class CDOTA_Modifier_StormSpirit_StaticRemnantThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 static_remnant_radius; // offset 0x1AF8, size 0x4, align 4
    float32 static_remnant_damage_radius; // offset 0x1AFC, size 0x4, align 4
    float32 static_remnant_damage; // offset 0x1B00, size 0x4, align 4
    float32 static_remnant_delay; // offset 0x1B04, size 0x4, align 4
    float32 static_remnant_travel_speed; // offset 0x1B08, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B0C, size 0x4, align 255
    int32 m_iSearchRadius; // offset 0x1B10, size 0x4, align 4
    int32 m_iDamageRadius; // offset 0x1B14, size 0x4, align 4
    bool m_bDoesMove; // offset 0x1B18, size 0x1, align 1
    bool m_bReachedTargetLocation; // offset 0x1B19, size 0x1, align 1
    char _pad_1B1A[0x2]; // offset 0x1B1A
    VectorWS m_vTargetLocation; // offset 0x1B1C, size 0xC, align 4
    GameTime_t m_flCreateTime; // offset 0x1B28, size 0x4, align 255
    GameTime_t m_flLastMoveTime; // offset 0x1B2C, size 0x4, align 255
};
