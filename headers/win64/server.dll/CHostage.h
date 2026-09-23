#pragma once

class CHostage : public CHostageExpresserShim /*0x0*/  // sizeof 0x2DA0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB38]; // offset 0x0
    CEntityIOOutput m_OnHostageBeginGrab; // offset 0xB38, size 0x18, align 255
    CEntityIOOutput m_OnFirstPickedUp; // offset 0xB50, size 0x18, align 255
    CEntityIOOutput m_OnDroppedNotRescued; // offset 0xB68, size 0x18, align 255
    CEntityIOOutput m_OnRescued; // offset 0xB80, size 0x18, align 255
    EntitySpottedState_t m_entitySpottedState; // offset 0xB98, size 0x18, align 255
    int32 m_nSpotRules; // offset 0xBB0, size 0x4, align 4
    uint32 m_uiHostageSpawnExclusionGroupMask; // offset 0xBB4, size 0x4, align 4
    uint32 m_nHostageSpawnRandomFactor; // offset 0xBB8, size 0x4, align 4
    bool m_bRemove; // offset 0xBBC, size 0x1, align 1
    char _pad_0BBD[0x3]; // offset 0xBBD
    Vector m_vel; // offset 0xBC0, size 0xC, align 4
    bool m_isRescued; // offset 0xBCC, size 0x1, align 1
    bool m_jumpedThisFrame; // offset 0xBCD, size 0x1, align 1
    char _pad_0BCE[0x2]; // offset 0xBCE
    int32 m_nHostageState; // offset 0xBD0, size 0x4, align 4
    CHandle< CBaseEntity > m_leader; // offset 0xBD4, size 0x4, align 4
    CHandle< CCSPlayerPawnBase > m_lastLeader; // offset 0xBD8, size 0x4, align 4
    char _pad_0BDC[0x4]; // offset 0xBDC
    CountdownTimer m_reuseTimer; // offset 0xBE0, size 0x18, align 8
    bool m_hasBeenUsed; // offset 0xBF8, size 0x1, align 1
    char _pad_0BF9[0x3]; // offset 0xBF9
    Vector m_accel; // offset 0xBFC, size 0xC, align 4
    bool m_isRunning; // offset 0xC08, size 0x1, align 1
    bool m_isCrouching; // offset 0xC09, size 0x1, align 1
    char _pad_0C0A[0x6]; // offset 0xC0A
    CountdownTimer m_jumpTimer; // offset 0xC10, size 0x18, align 8
    bool m_isWaitingForLeader; // offset 0xC28, size 0x1, align 1
    char _pad_0C29[0x200F]; // offset 0xC29
    CountdownTimer m_repathTimer; // offset 0x2C38, size 0x18, align 8
    CountdownTimer m_inhibitDoorTimer; // offset 0x2C50, size 0x18, align 8
    char _pad_2C68[0x78]; // offset 0x2C68
    CountdownTimer m_inhibitObstacleAvoidanceTimer; // offset 0x2CE0, size 0x18, align 8
    char _pad_2CF8[0x8]; // offset 0x2CF8
    CountdownTimer m_wiggleTimer; // offset 0x2D00, size 0x18, align 8
    char _pad_2D18[0x4]; // offset 0x2D18
    bool m_isAdjusted; // offset 0x2D1C, size 0x1, align 1
    bool m_bHandsHaveBeenCut; // offset 0x2D1D, size 0x1, align 1
    char _pad_2D1E[0x2]; // offset 0x2D1E
    CHandle< CCSPlayerPawn > m_hHostageGrabber; // offset 0x2D20, size 0x4, align 4
    GameTime_t m_fLastGrabTime; // offset 0x2D24, size 0x4, align 255
    VectorWS m_vecPositionWhenStartedDroppingToGround; // offset 0x2D28, size 0xC, align 4
    VectorWS m_vecGrabbedPos; // offset 0x2D34, size 0xC, align 4
    GameTime_t m_flRescueStartTime; // offset 0x2D40, size 0x4, align 255
    GameTime_t m_flGrabSuccessTime; // offset 0x2D44, size 0x4, align 255
    GameTime_t m_flDropStartTime; // offset 0x2D48, size 0x4, align 255
    int32 m_nApproachRewardPayouts; // offset 0x2D4C, size 0x4, align 4
    int32 m_nPickupEventCount; // offset 0x2D50, size 0x4, align 4
    VectorWS m_vecSpawnGroundPos; // offset 0x2D54, size 0xC, align 4
    char _pad_2D60[0x2C]; // offset 0x2D60
    VectorWS m_vecHostageResetPosition; // offset 0x2D8C, size 0xC, align 4
    char _pad_2D98[0x8]; // offset 0x2D98
};
