#pragma once

class CDOTA_Modifier_StormSpirit_StaticRemnantThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 static_remnant_radius; // offset 0x1A78, size 0x4, align 4
    float32 static_remnant_damage_radius; // offset 0x1A7C, size 0x4, align 4
    float32 static_remnant_damage; // offset 0x1A80, size 0x4, align 4
    float32 static_remnant_delay; // offset 0x1A84, size 0x4, align 4
    float32 static_remnant_travel_speed; // offset 0x1A88, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A8C, size 0x4, align 255
    int32 m_iSearchRadius; // offset 0x1A90, size 0x4, align 4
    int32 m_iDamageRadius; // offset 0x1A94, size 0x4, align 4
    bool m_bDoesMove; // offset 0x1A98, size 0x1, align 1
    bool m_bReachedTargetLocation; // offset 0x1A99, size 0x1, align 1
    char _pad_1A9A[0x2]; // offset 0x1A9A
    VectorWS m_vTargetLocation; // offset 0x1A9C, size 0xC, align 4
    GameTime_t m_flCreateTime; // offset 0x1AA8, size 0x4, align 255
    GameTime_t m_flLastMoveTime; // offset 0x1AAC, size 0x4, align 255
};
