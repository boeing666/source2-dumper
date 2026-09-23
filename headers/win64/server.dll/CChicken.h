#pragma once

class CChicken : public CDynamicProp /*0x0*/, public IHasAttributes /*0xCA8*/  // sizeof 0x32F0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xCB0]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xCB0, size 0x438, align 255
    CountdownTimer m_updateTimer; // offset 0x10E8, size 0x18, align 8
    VectorWS m_stuckAnchor; // offset 0x1100, size 0xC, align 4
    char _pad_110C[0x4]; // offset 0x110C
    CountdownTimer m_collisionStuckTimer; // offset 0x1110, size 0x18, align 8
    bool m_isOnGround; // offset 0x1128, size 0x1, align 1
    char _pad_1129[0x3]; // offset 0x1129
    Vector m_vFallVelocity; // offset 0x112C, size 0xC, align 4
    EChickenActivity m_desiredActivity; // offset 0x1138, size 0x4, align 4
    EChickenActivity m_currentActivity; // offset 0x113C, size 0x4, align 4
    CountdownTimer m_activityTimer; // offset 0x1140, size 0x18, align 8
    float32 m_turnRate; // offset 0x1158, size 0x4, align 4
    CHandle< CBaseEntity > m_fleeFrom; // offset 0x115C, size 0x4, align 4
    CountdownTimer m_moveRateThrottleTimer; // offset 0x1160, size 0x18, align 8
    CountdownTimer m_startleTimer; // offset 0x1178, size 0x18, align 8
    CountdownTimer m_vocalizeTimer; // offset 0x1190, size 0x18, align 8
    CHandle< CCSPlayerPawn > m_leader; // offset 0x11A8, size 0x4, align 4
    CHandle< CCSPlayerController > m_owner; // offset 0x11AC, size 0x4, align 4
    char _pad_11B0[0x10]; // offset 0x11B0
    CountdownTimer m_reuseTimer; // offset 0x11C0, size 0x18, align 8
    CountdownTimer m_jumpTimer; // offset 0x11D8, size 0x18, align 8
    float32 m_flLastJumpTime; // offset 0x11F0, size 0x4, align 4
    char _pad_11F4[0x200C]; // offset 0x11F4
    CountdownTimer m_repathTimer; // offset 0x3200, size 0x18, align 8
    char _pad_3218[0x80]; // offset 0x3218
    VectorWS m_vecPathGoal; // offset 0x3298, size 0xC, align 4
    GameTime_t m_flActiveFollowStartTime; // offset 0x32A4, size 0x4, align 255
    CountdownTimer m_followMinuteTimer; // offset 0x32A8, size 0x18, align 8
    char _pad_32C0[0x8]; // offset 0x32C0
    CountdownTimer m_BlockDirectionTimer; // offset 0x32C8, size 0x18, align 8
    char _pad_32E0[0x2]; // offset 0x32E0
    bool m_bSpawnDyingParticles; // offset 0x32E2, size 0x1, align 1
    char _pad_32E3[0xD]; // offset 0x32E3
};
