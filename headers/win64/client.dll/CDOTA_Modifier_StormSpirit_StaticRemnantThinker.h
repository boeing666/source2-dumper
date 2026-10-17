#pragma once

class CDOTA_Modifier_StormSpirit_StaticRemnantThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 static_remnant_radius; // offset 0x1AA8, size 0x4, align 4
    float32 static_remnant_damage_radius; // offset 0x1AAC, size 0x4, align 4
    float32 static_remnant_damage; // offset 0x1AB0, size 0x4, align 4
    float32 static_remnant_delay; // offset 0x1AB4, size 0x4, align 4
    float32 static_remnant_travel_speed; // offset 0x1AB8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1ABC, size 0x4, align 255
    int32 m_iSearchRadius; // offset 0x1AC0, size 0x4, align 4
    int32 m_iDamageRadius; // offset 0x1AC4, size 0x4, align 4
    bool m_bDoesMove; // offset 0x1AC8, size 0x1, align 1
    bool m_bReachedTargetLocation; // offset 0x1AC9, size 0x1, align 1
    char _pad_1ACA[0x2]; // offset 0x1ACA
    VectorWS m_vTargetLocation; // offset 0x1ACC, size 0xC, align 4
    GameTime_t m_flCreateTime; // offset 0x1AD8, size 0x4, align 255
    GameTime_t m_flLastMoveTime; // offset 0x1ADC, size 0x4, align 255
};
