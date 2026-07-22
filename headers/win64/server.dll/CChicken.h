#pragma once

class CChicken : public CDynamicProp /*0x0*/, public IHasAttributes /*0xBB8*/  // sizeof 0x30C0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xBC0]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xBC0, size 0x2F8, align 255
    CountdownTimer m_updateTimer; // offset 0xEB8, size 0x18, align 8
    VectorWS m_stuckAnchor; // offset 0xED0, size 0xC, align 4
    char _pad_0EDC[0x4]; // offset 0xEDC
    CountdownTimer m_collisionStuckTimer; // offset 0xEE0, size 0x18, align 8
    bool m_isOnGround; // offset 0xEF8, size 0x1, align 1
    char _pad_0EF9[0x3]; // offset 0xEF9
    Vector m_vFallVelocity; // offset 0xEFC, size 0xC, align 4
    EChickenActivity m_desiredActivity; // offset 0xF08, size 0x4, align 4
    EChickenActivity m_currentActivity; // offset 0xF0C, size 0x4, align 4
    CountdownTimer m_activityTimer; // offset 0xF10, size 0x18, align 8
    float32 m_turnRate; // offset 0xF28, size 0x4, align 4
    CHandle< CBaseEntity > m_fleeFrom; // offset 0xF2C, size 0x4, align 4
    CountdownTimer m_moveRateThrottleTimer; // offset 0xF30, size 0x18, align 8
    CountdownTimer m_startleTimer; // offset 0xF48, size 0x18, align 8
    CountdownTimer m_vocalizeTimer; // offset 0xF60, size 0x18, align 8
    CHandle< CCSPlayerPawn > m_leader; // offset 0xF78, size 0x4, align 4
    char _pad_0F7C[0x14]; // offset 0xF7C
    CountdownTimer m_reuseTimer; // offset 0xF90, size 0x18, align 8
    CountdownTimer m_jumpTimer; // offset 0xFA8, size 0x18, align 8
    float32 m_flLastJumpTime; // offset 0xFC0, size 0x4, align 4
    char _pad_0FC4[0x200C]; // offset 0xFC4
    CountdownTimer m_repathTimer; // offset 0x2FD0, size 0x18, align 8
    char _pad_2FE8[0x80]; // offset 0x2FE8
    VectorWS m_vecPathGoal; // offset 0x3068, size 0xC, align 4
    GameTime_t m_flActiveFollowStartTime; // offset 0x3074, size 0x4, align 255
    CountdownTimer m_followMinuteTimer; // offset 0x3078, size 0x18, align 8
    char _pad_3090[0x8]; // offset 0x3090
    CountdownTimer m_BlockDirectionTimer; // offset 0x3098, size 0x18, align 8
    char _pad_30B0[0x10]; // offset 0x30B0
};
