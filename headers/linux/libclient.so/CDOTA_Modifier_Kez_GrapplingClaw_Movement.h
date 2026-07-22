#pragma once

class CDOTA_Modifier_Kez_GrapplingClaw_Movement : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    VectorWS m_vGrappleHookPos; // offset 0x1A58, size 0xC, align 4
    Vector m_vInitialDir; // offset 0x1A64, size 0xC, align 4
    Vector m_vHookDir; // offset 0x1A70, size 0xC, align 4
    Vector m_vLastVelocity; // offset 0x1A7C, size 0xC, align 4
    float32 m_flHookDistance; // offset 0x1A88, size 0x4, align 4
    float32 m_flCurrentHookRetractSpeed; // offset 0x1A8C, size 0x4, align 4
    float32 m_flCurrentHookLength; // offset 0x1A90, size 0x4, align 4
    float32 m_flCurHookDistDelta; // offset 0x1A94, size 0x4, align 4
    float32 m_flCurMomentumDistDelta; // offset 0x1A98, size 0x4, align 4
    float32 m_flDecelerationRate; // offset 0x1A9C, size 0x4, align 4
    float32 m_flMaxHeight; // offset 0x1AA0, size 0x4, align 4
    float32 m_flInitialSpeed; // offset 0x1AA4, size 0x4, align 4
    float32 m_flDT; // offset 0x1AA8, size 0x4, align 4
    float32 m_flAccumDist; // offset 0x1AAC, size 0x4, align 4
    bool m_bHookAttached; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x3]; // offset 0x1AB1
    int32 grapple_speed; // offset 0x1AB4, size 0x4, align 4
    int32 impact_damage; // offset 0x1AB8, size 0x4, align 4
    int32 land_distance; // offset 0x1ABC, size 0x4, align 4
    int32 max_distance_break; // offset 0x1AC0, size 0x4, align 4
    int32 lifesteal_pct; // offset 0x1AC4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1AC8, size 0x4, align 4
    bool m_bDidAttack; // offset 0x1ACC, size 0x1, align 1
    bool m_bStartedAnimation; // offset 0x1ACD, size 0x1, align 1
    char _pad_1ACE[0x2]; // offset 0x1ACE
    GameActivity_t m_Activity; // offset 0x1AD0, size 0x4, align 4
    float32 m_flTimeLeftForActivity; // offset 0x1AD4, size 0x4, align 4
    AttackRecord_t m_nGrappleAttackRecord; // offset 0x1AD8, size 0x2, align 255
    char _pad_1ADA[0x6]; // offset 0x1ADA
};
