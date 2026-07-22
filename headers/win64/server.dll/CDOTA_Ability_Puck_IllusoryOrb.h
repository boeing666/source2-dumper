#pragma once

class CDOTA_Ability_Puck_IllusoryOrb : public CDOTABaseAbility /*0x0*/  // sizeof 0x610, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 m_iProjectile; // offset 0x580, size 0x4, align 4
    char _pad_0584[0x4]; // offset 0x584
    CountdownTimer m_ViewerTimer; // offset 0x588, size 0x18, align 8
    float32 m_fTimeRemaining; // offset 0x5A0, size 0x4, align 4
    float32 m_fElapsedTime; // offset 0x5A4, size 0x4, align 4
    VectorWS m_vVectorTargetEndpoint; // offset 0x5A8, size 0xC, align 4
    Vector m_vCurveAcceleration; // offset 0x5B4, size 0xC, align 4
    VectorWS m_vStartPosition; // offset 0x5C0, size 0xC, align 4
    float32 orb_vision; // offset 0x5CC, size 0x4, align 4
    float32 max_distance; // offset 0x5D0, size 0x4, align 4
    float32 vision_duration; // offset 0x5D4, size 0x4, align 4
    int32 damage; // offset 0x5D8, size 0x4, align 4
    float32 increase_per_sec; // offset 0x5DC, size 0x4, align 4
    float32 damage_interval; // offset 0x5E0, size 0x4, align 4
    float32 radius; // offset 0x5E4, size 0x4, align 4
    float32 damage_over_time_pct; // offset 0x5E8, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x5EC, size 0x1, align 1
    char _pad_05ED[0x3]; // offset 0x5ED
    CSoundPatch* m_pSoundPatch; // offset 0x5F0, size 0x8, align 8
    char _pad_05F8[0x14]; // offset 0x5F8
    ParticleIndex_t m_nCurvePathFXIndex; // offset 0x60C, size 0x4, align 255
};
