#pragma once

class CChicken : public CDynamicProp /*0x0*/, public IHasAttributes /*0xE90*/  // sizeof 0x3390, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xE98]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xE98, size 0x2F8, align 255
    CountdownTimer m_updateTimer; // offset 0x1190, size 0x18, align 8
    VectorWS m_stuckAnchor; // offset 0x11A8, size 0xC, align 4
    char _pad_11B4[0x4]; // offset 0x11B4
    CountdownTimer m_collisionStuckTimer; // offset 0x11B8, size 0x18, align 8
    bool m_isOnGround; // offset 0x11D0, size 0x1, align 1
    char _pad_11D1[0x3]; // offset 0x11D1
    Vector m_vFallVelocity; // offset 0x11D4, size 0xC, align 4
    EChickenActivity m_desiredActivity; // offset 0x11E0, size 0x4, align 4
    EChickenActivity m_currentActivity; // offset 0x11E4, size 0x4, align 4
    CountdownTimer m_activityTimer; // offset 0x11E8, size 0x18, align 8
    float32 m_turnRate; // offset 0x1200, size 0x4, align 4
    CHandle< CBaseEntity > m_fleeFrom; // offset 0x1204, size 0x4, align 4
    CountdownTimer m_moveRateThrottleTimer; // offset 0x1208, size 0x18, align 8
    CountdownTimer m_startleTimer; // offset 0x1220, size 0x18, align 8
    CountdownTimer m_vocalizeTimer; // offset 0x1238, size 0x18, align 8
    CHandle< CCSPlayerPawn > m_leader; // offset 0x1250, size 0x4, align 4
    char _pad_1254[0x14]; // offset 0x1254
    CountdownTimer m_reuseTimer; // offset 0x1268, size 0x18, align 8
    CountdownTimer m_jumpTimer; // offset 0x1280, size 0x18, align 8
    float32 m_flLastJumpTime; // offset 0x1298, size 0x4, align 4
    char _pad_129C[0x200C]; // offset 0x129C
    CountdownTimer m_repathTimer; // offset 0x32A8, size 0x18, align 8
    char _pad_32C0[0x80]; // offset 0x32C0
    VectorWS m_vecPathGoal; // offset 0x3340, size 0xC, align 4
    GameTime_t m_flActiveFollowStartTime; // offset 0x334C, size 0x4, align 255
    CountdownTimer m_followMinuteTimer; // offset 0x3350, size 0x18, align 8
    char _pad_3368[0x8]; // offset 0x3368
    CountdownTimer m_BlockDirectionTimer; // offset 0x3370, size 0x18, align 8
    char _pad_3388[0x8]; // offset 0x3388
};
