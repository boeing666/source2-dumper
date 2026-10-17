#pragma once

class CDOTA_Modifier_Kez_GrapplingClaw_Movement : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS m_vGrappleHookPos; // offset 0x1AA8, size 0xC, align 4
    Vector m_vInitialDir; // offset 0x1AB4, size 0xC, align 4
    Vector m_vHookDir; // offset 0x1AC0, size 0xC, align 4
    Vector m_vLastVelocity; // offset 0x1ACC, size 0xC, align 4
    float32 m_flHookDistance; // offset 0x1AD8, size 0x4, align 4
    float32 m_flCurrentHookRetractSpeed; // offset 0x1ADC, size 0x4, align 4
    float32 m_flCurrentHookLength; // offset 0x1AE0, size 0x4, align 4
    float32 m_flCurHookDistDelta; // offset 0x1AE4, size 0x4, align 4
    float32 m_flCurMomentumDistDelta; // offset 0x1AE8, size 0x4, align 4
    float32 m_flDecelerationRate; // offset 0x1AEC, size 0x4, align 4
    float32 m_flMaxHeight; // offset 0x1AF0, size 0x4, align 4
    float32 m_flInitialSpeed; // offset 0x1AF4, size 0x4, align 4
    float32 m_flDT; // offset 0x1AF8, size 0x4, align 4
    float32 m_flAccumDist; // offset 0x1AFC, size 0x4, align 4
    bool m_bHookAttached; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x3]; // offset 0x1B01
    int32 grapple_speed; // offset 0x1B04, size 0x4, align 4
    int32 impact_damage; // offset 0x1B08, size 0x4, align 4
    int32 land_distance; // offset 0x1B0C, size 0x4, align 4
    int32 max_distance_break; // offset 0x1B10, size 0x4, align 4
    int32 lifesteal_pct; // offset 0x1B14, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1B18, size 0x4, align 4
    bool m_bDidAttack; // offset 0x1B1C, size 0x1, align 1
    bool m_bStartedAnimation; // offset 0x1B1D, size 0x1, align 1
    char _pad_1B1E[0x2]; // offset 0x1B1E
    GameActivity_t m_Activity; // offset 0x1B20, size 0x4, align 4
    float32 m_flTimeLeftForActivity; // offset 0x1B24, size 0x4, align 4
    AttackRecord_t m_nGrappleAttackRecord; // offset 0x1B28, size 0x2, align 255
    char _pad_1B2A[0x6]; // offset 0x1B2A
};
