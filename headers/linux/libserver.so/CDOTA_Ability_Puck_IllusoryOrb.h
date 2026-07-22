#pragma once

class CDOTA_Ability_Puck_IllusoryOrb : public CDOTABaseAbility /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 m_iProjectile; // offset 0x85C, size 0x4, align 4
    CountdownTimer m_ViewerTimer; // offset 0x860, size 0x18, align 8
    float32 m_fTimeRemaining; // offset 0x878, size 0x4, align 4
    float32 m_fElapsedTime; // offset 0x87C, size 0x4, align 4
    VectorWS m_vVectorTargetEndpoint; // offset 0x880, size 0xC, align 4
    Vector m_vCurveAcceleration; // offset 0x88C, size 0xC, align 4
    VectorWS m_vStartPosition; // offset 0x898, size 0xC, align 4
    float32 orb_vision; // offset 0x8A4, size 0x4, align 4
    float32 max_distance; // offset 0x8A8, size 0x4, align 4
    float32 vision_duration; // offset 0x8AC, size 0x4, align 4
    int32 damage; // offset 0x8B0, size 0x4, align 4
    float32 increase_per_sec; // offset 0x8B4, size 0x4, align 4
    float32 damage_interval; // offset 0x8B8, size 0x4, align 4
    float32 radius; // offset 0x8BC, size 0x4, align 4
    float32 damage_over_time_pct; // offset 0x8C0, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x8C4, size 0x1, align 1
    char _pad_08C5[0x3]; // offset 0x8C5
    CSoundPatch* m_pSoundPatch; // offset 0x8C8, size 0x8, align 8
    char _pad_08D0[0x14]; // offset 0x8D0
    ParticleIndex_t m_nCurvePathFXIndex; // offset 0x8E4, size 0x4, align 255
};
