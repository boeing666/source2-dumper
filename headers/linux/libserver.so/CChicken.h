#pragma once

class CChicken : public CDynamicProp /*0x0*/, public IHasAttributes /*0xF70*/  // sizeof 0x35B0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xF78, size 0x438, align 255
    CountdownTimer m_updateTimer; // offset 0x13B0, size 0x18, align 8
    VectorWS m_stuckAnchor; // offset 0x13C8, size 0xC, align 4
    char _pad_13D4[0x4]; // offset 0x13D4
    CountdownTimer m_collisionStuckTimer; // offset 0x13D8, size 0x18, align 8
    bool m_isOnGround; // offset 0x13F0, size 0x1, align 1
    char _pad_13F1[0x3]; // offset 0x13F1
    Vector m_vFallVelocity; // offset 0x13F4, size 0xC, align 4
    EChickenActivity m_desiredActivity; // offset 0x1400, size 0x4, align 4
    EChickenActivity m_currentActivity; // offset 0x1404, size 0x4, align 4
    CountdownTimer m_activityTimer; // offset 0x1408, size 0x18, align 8
    float32 m_turnRate; // offset 0x1420, size 0x4, align 4
    CHandle< CBaseEntity > m_fleeFrom; // offset 0x1424, size 0x4, align 4
    CountdownTimer m_moveRateThrottleTimer; // offset 0x1428, size 0x18, align 8
    CountdownTimer m_startleTimer; // offset 0x1440, size 0x18, align 8
    CountdownTimer m_vocalizeTimer; // offset 0x1458, size 0x18, align 8
    CHandle< CCSPlayerPawn > m_leader; // offset 0x1470, size 0x4, align 4
    CHandle< CCSPlayerController > m_owner; // offset 0x1474, size 0x4, align 4
    char _pad_1478[0x10]; // offset 0x1478
    CountdownTimer m_reuseTimer; // offset 0x1488, size 0x18, align 8
    CountdownTimer m_jumpTimer; // offset 0x14A0, size 0x18, align 8
    float32 m_flLastJumpTime; // offset 0x14B8, size 0x4, align 4
    char _pad_14BC[0x200C]; // offset 0x14BC
    CountdownTimer m_repathTimer; // offset 0x34C8, size 0x18, align 8
    char _pad_34E0[0x80]; // offset 0x34E0
    VectorWS m_vecPathGoal; // offset 0x3560, size 0xC, align 4
    GameTime_t m_flActiveFollowStartTime; // offset 0x356C, size 0x4, align 255
    CountdownTimer m_followMinuteTimer; // offset 0x3570, size 0x18, align 8
    char _pad_3588[0x8]; // offset 0x3588
    CountdownTimer m_BlockDirectionTimer; // offset 0x3590, size 0x18, align 8
    char _pad_35A8[0x2]; // offset 0x35A8
    bool m_bSpawnDyingParticles; // offset 0x35AA, size 0x1, align 1
    char _pad_35AB[0x5]; // offset 0x35AB
};
