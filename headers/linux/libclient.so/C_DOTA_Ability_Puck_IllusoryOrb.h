#pragma once

class C_DOTA_Ability_Puck_IllusoryOrb : public C_DOTABaseAbility /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 m_iProjectile; // offset 0x824, size 0x4, align 4
    CountdownTimer m_ViewerTimer; // offset 0x828, size 0x18, align 8
    float32 m_fTimeRemaining; // offset 0x840, size 0x4, align 4
    float32 m_fElapsedTime; // offset 0x844, size 0x4, align 4
    VectorWS m_vVectorTargetEndpoint; // offset 0x848, size 0xC, align 4
    Vector m_vCurveAcceleration; // offset 0x854, size 0xC, align 4
    VectorWS m_vStartPosition; // offset 0x860, size 0xC, align 4
    float32 orb_vision; // offset 0x86C, size 0x4, align 4
    float32 max_distance; // offset 0x870, size 0x4, align 4
    float32 vision_duration; // offset 0x874, size 0x4, align 4
    int32 damage; // offset 0x878, size 0x4, align 4
    float32 increase_per_sec; // offset 0x87C, size 0x4, align 4
    float32 damage_interval; // offset 0x880, size 0x4, align 4
    float32 radius; // offset 0x884, size 0x4, align 4
    float32 damage_over_time_pct; // offset 0x888, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x88C, size 0x1, align 1
    char _pad_088D[0x3]; // offset 0x88D
    ParticleIndex_t m_nCurvePathPreviewFXIndex; // offset 0x890, size 0x4, align 255
    char _pad_0894[0x4]; // offset 0x894
};
