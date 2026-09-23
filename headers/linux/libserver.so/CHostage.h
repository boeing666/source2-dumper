#pragma once

class CHostage : public CHostageExpresserShim /*0x0*/  // sizeof 0x3070, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xE08]; // offset 0x0
    CEntityIOOutput m_OnHostageBeginGrab; // offset 0xE08, size 0x18, align 255
    CEntityIOOutput m_OnFirstPickedUp; // offset 0xE20, size 0x18, align 255
    CEntityIOOutput m_OnDroppedNotRescued; // offset 0xE38, size 0x18, align 255
    CEntityIOOutput m_OnRescued; // offset 0xE50, size 0x18, align 255
    EntitySpottedState_t m_entitySpottedState; // offset 0xE68, size 0x18, align 255
    int32 m_nSpotRules; // offset 0xE80, size 0x4, align 4
    uint32 m_uiHostageSpawnExclusionGroupMask; // offset 0xE84, size 0x4, align 4
    uint32 m_nHostageSpawnRandomFactor; // offset 0xE88, size 0x4, align 4
    bool m_bRemove; // offset 0xE8C, size 0x1, align 1
    char _pad_0E8D[0x3]; // offset 0xE8D
    Vector m_vel; // offset 0xE90, size 0xC, align 4
    bool m_isRescued; // offset 0xE9C, size 0x1, align 1
    bool m_jumpedThisFrame; // offset 0xE9D, size 0x1, align 1
    char _pad_0E9E[0x2]; // offset 0xE9E
    int32 m_nHostageState; // offset 0xEA0, size 0x4, align 4
    CHandle< CBaseEntity > m_leader; // offset 0xEA4, size 0x4, align 4
    CHandle< CCSPlayerPawnBase > m_lastLeader; // offset 0xEA8, size 0x4, align 4
    char _pad_0EAC[0x4]; // offset 0xEAC
    CountdownTimer m_reuseTimer; // offset 0xEB0, size 0x18, align 8
    bool m_hasBeenUsed; // offset 0xEC8, size 0x1, align 1
    char _pad_0EC9[0x3]; // offset 0xEC9
    Vector m_accel; // offset 0xECC, size 0xC, align 4
    bool m_isRunning; // offset 0xED8, size 0x1, align 1
    bool m_isCrouching; // offset 0xED9, size 0x1, align 1
    char _pad_0EDA[0x6]; // offset 0xEDA
    CountdownTimer m_jumpTimer; // offset 0xEE0, size 0x18, align 8
    bool m_isWaitingForLeader; // offset 0xEF8, size 0x1, align 1
    char _pad_0EF9[0x200F]; // offset 0xEF9
    CountdownTimer m_repathTimer; // offset 0x2F08, size 0x18, align 8
    CountdownTimer m_inhibitDoorTimer; // offset 0x2F20, size 0x18, align 8
    char _pad_2F38[0x78]; // offset 0x2F38
    CountdownTimer m_inhibitObstacleAvoidanceTimer; // offset 0x2FB0, size 0x18, align 8
    char _pad_2FC8[0x8]; // offset 0x2FC8
    CountdownTimer m_wiggleTimer; // offset 0x2FD0, size 0x18, align 8
    char _pad_2FE8[0x4]; // offset 0x2FE8
    bool m_isAdjusted; // offset 0x2FEC, size 0x1, align 1
    bool m_bHandsHaveBeenCut; // offset 0x2FED, size 0x1, align 1
    char _pad_2FEE[0x2]; // offset 0x2FEE
    CHandle< CCSPlayerPawn > m_hHostageGrabber; // offset 0x2FF0, size 0x4, align 4
    GameTime_t m_fLastGrabTime; // offset 0x2FF4, size 0x4, align 255
    VectorWS m_vecPositionWhenStartedDroppingToGround; // offset 0x2FF8, size 0xC, align 4
    VectorWS m_vecGrabbedPos; // offset 0x3004, size 0xC, align 4
    GameTime_t m_flRescueStartTime; // offset 0x3010, size 0x4, align 255
    GameTime_t m_flGrabSuccessTime; // offset 0x3014, size 0x4, align 255
    GameTime_t m_flDropStartTime; // offset 0x3018, size 0x4, align 255
    int32 m_nApproachRewardPayouts; // offset 0x301C, size 0x4, align 4
    int32 m_nPickupEventCount; // offset 0x3020, size 0x4, align 4
    VectorWS m_vecSpawnGroundPos; // offset 0x3024, size 0xC, align 4
    char _pad_3030[0x2C]; // offset 0x3030
    VectorWS m_vecHostageResetPosition; // offset 0x305C, size 0xC, align 4
    char _pad_3068[0x8]; // offset 0x3068
};
