#pragma once

class C_DOTA_Ability_Puck_IllusoryOrb : public C_DOTABaseAbility /*0x0*/  // sizeof 0x720, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 m_iProjectile; // offset 0x6A8, size 0x4, align 4
    char _pad_06AC[0x4]; // offset 0x6AC
    CountdownTimer m_ViewerTimer; // offset 0x6B0, size 0x18, align 8
    float32 m_fTimeRemaining; // offset 0x6C8, size 0x4, align 4
    float32 m_fElapsedTime; // offset 0x6CC, size 0x4, align 4
    VectorWS m_vVectorTargetEndpoint; // offset 0x6D0, size 0xC, align 4
    Vector m_vCurveAcceleration; // offset 0x6DC, size 0xC, align 4
    VectorWS m_vStartPosition; // offset 0x6E8, size 0xC, align 4
    float32 orb_vision; // offset 0x6F4, size 0x4, align 4
    float32 max_distance; // offset 0x6F8, size 0x4, align 4
    float32 vision_duration; // offset 0x6FC, size 0x4, align 4
    int32 damage; // offset 0x700, size 0x4, align 4
    float32 increase_per_sec; // offset 0x704, size 0x4, align 4
    float32 damage_interval; // offset 0x708, size 0x4, align 4
    float32 radius; // offset 0x70C, size 0x4, align 4
    float32 damage_over_time_pct; // offset 0x710, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x714, size 0x1, align 1
    char _pad_0715[0x3]; // offset 0x715
    ParticleIndex_t m_nCurvePathPreviewFXIndex; // offset 0x718, size 0x4, align 255
    char _pad_071C[0x4]; // offset 0x71C
};
