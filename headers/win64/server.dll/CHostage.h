#pragma once

class CHostage : public CHostageExpresserShim /*0x0*/  // sizeof 0x2CC0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    CEntityIOOutput m_OnHostageBeginGrab; // offset 0xA58, size 0x18, align 255
    CEntityIOOutput m_OnFirstPickedUp; // offset 0xA70, size 0x18, align 255
    CEntityIOOutput m_OnDroppedNotRescued; // offset 0xA88, size 0x18, align 255
    CEntityIOOutput m_OnRescued; // offset 0xAA0, size 0x18, align 255
    EntitySpottedState_t m_entitySpottedState; // offset 0xAB8, size 0x18, align 255
    int32 m_nSpotRules; // offset 0xAD0, size 0x4, align 4
    uint32 m_uiHostageSpawnExclusionGroupMask; // offset 0xAD4, size 0x4, align 4
    uint32 m_nHostageSpawnRandomFactor; // offset 0xAD8, size 0x4, align 4
    bool m_bRemove; // offset 0xADC, size 0x1, align 1
    char _pad_0ADD[0x3]; // offset 0xADD
    Vector m_vel; // offset 0xAE0, size 0xC, align 4
    bool m_isRescued; // offset 0xAEC, size 0x1, align 1
    bool m_jumpedThisFrame; // offset 0xAED, size 0x1, align 1
    char _pad_0AEE[0x2]; // offset 0xAEE
    int32 m_nHostageState; // offset 0xAF0, size 0x4, align 4
    CHandle< CBaseEntity > m_leader; // offset 0xAF4, size 0x4, align 4
    CHandle< CCSPlayerPawnBase > m_lastLeader; // offset 0xAF8, size 0x4, align 4
    char _pad_0AFC[0x4]; // offset 0xAFC
    CountdownTimer m_reuseTimer; // offset 0xB00, size 0x18, align 8
    bool m_hasBeenUsed; // offset 0xB18, size 0x1, align 1
    char _pad_0B19[0x3]; // offset 0xB19
    Vector m_accel; // offset 0xB1C, size 0xC, align 4
    bool m_isRunning; // offset 0xB28, size 0x1, align 1
    bool m_isCrouching; // offset 0xB29, size 0x1, align 1
    char _pad_0B2A[0x6]; // offset 0xB2A
    CountdownTimer m_jumpTimer; // offset 0xB30, size 0x18, align 8
    bool m_isWaitingForLeader; // offset 0xB48, size 0x1, align 1
    char _pad_0B49[0x200F]; // offset 0xB49
    CountdownTimer m_repathTimer; // offset 0x2B58, size 0x18, align 8
    CountdownTimer m_inhibitDoorTimer; // offset 0x2B70, size 0x18, align 8
    char _pad_2B88[0x78]; // offset 0x2B88
    CountdownTimer m_inhibitObstacleAvoidanceTimer; // offset 0x2C00, size 0x18, align 8
    char _pad_2C18[0x8]; // offset 0x2C18
    CountdownTimer m_wiggleTimer; // offset 0x2C20, size 0x18, align 8
    char _pad_2C38[0x4]; // offset 0x2C38
    bool m_isAdjusted; // offset 0x2C3C, size 0x1, align 1
    bool m_bHandsHaveBeenCut; // offset 0x2C3D, size 0x1, align 1
    char _pad_2C3E[0x2]; // offset 0x2C3E
    CHandle< CCSPlayerPawn > m_hHostageGrabber; // offset 0x2C40, size 0x4, align 4
    GameTime_t m_fLastGrabTime; // offset 0x2C44, size 0x4, align 255
    VectorWS m_vecPositionWhenStartedDroppingToGround; // offset 0x2C48, size 0xC, align 4
    VectorWS m_vecGrabbedPos; // offset 0x2C54, size 0xC, align 4
    GameTime_t m_flRescueStartTime; // offset 0x2C60, size 0x4, align 255
    GameTime_t m_flGrabSuccessTime; // offset 0x2C64, size 0x4, align 255
    GameTime_t m_flDropStartTime; // offset 0x2C68, size 0x4, align 255
    int32 m_nApproachRewardPayouts; // offset 0x2C6C, size 0x4, align 4
    int32 m_nPickupEventCount; // offset 0x2C70, size 0x4, align 4
    VectorWS m_vecSpawnGroundPos; // offset 0x2C74, size 0xC, align 4
    char _pad_2C80[0x2C]; // offset 0x2C80
    VectorWS m_vecHostageResetPosition; // offset 0x2CAC, size 0xC, align 4
    char _pad_2CB8[0x8]; // offset 0x2CB8
};
