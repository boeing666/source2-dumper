#pragma once

class CHostage : public CHostageExpresserShim /*0x0*/  // sizeof 0x2F90, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD28]; // offset 0x0
    CEntityIOOutput m_OnHostageBeginGrab; // offset 0xD28, size 0x18, align 255
    CEntityIOOutput m_OnFirstPickedUp; // offset 0xD40, size 0x18, align 255
    CEntityIOOutput m_OnDroppedNotRescued; // offset 0xD58, size 0x18, align 255
    CEntityIOOutput m_OnRescued; // offset 0xD70, size 0x18, align 255
    EntitySpottedState_t m_entitySpottedState; // offset 0xD88, size 0x18, align 255
    int32 m_nSpotRules; // offset 0xDA0, size 0x4, align 4
    uint32 m_uiHostageSpawnExclusionGroupMask; // offset 0xDA4, size 0x4, align 4
    uint32 m_nHostageSpawnRandomFactor; // offset 0xDA8, size 0x4, align 4
    bool m_bRemove; // offset 0xDAC, size 0x1, align 1
    char _pad_0DAD[0x3]; // offset 0xDAD
    Vector m_vel; // offset 0xDB0, size 0xC, align 4
    bool m_isRescued; // offset 0xDBC, size 0x1, align 1
    bool m_jumpedThisFrame; // offset 0xDBD, size 0x1, align 1
    char _pad_0DBE[0x2]; // offset 0xDBE
    int32 m_nHostageState; // offset 0xDC0, size 0x4, align 4
    CHandle< CBaseEntity > m_leader; // offset 0xDC4, size 0x4, align 4
    CHandle< CCSPlayerPawnBase > m_lastLeader; // offset 0xDC8, size 0x4, align 4
    char _pad_0DCC[0x4]; // offset 0xDCC
    CountdownTimer m_reuseTimer; // offset 0xDD0, size 0x18, align 8
    bool m_hasBeenUsed; // offset 0xDE8, size 0x1, align 1
    char _pad_0DE9[0x3]; // offset 0xDE9
    Vector m_accel; // offset 0xDEC, size 0xC, align 4
    bool m_isRunning; // offset 0xDF8, size 0x1, align 1
    bool m_isCrouching; // offset 0xDF9, size 0x1, align 1
    char _pad_0DFA[0x6]; // offset 0xDFA
    CountdownTimer m_jumpTimer; // offset 0xE00, size 0x18, align 8
    bool m_isWaitingForLeader; // offset 0xE18, size 0x1, align 1
    char _pad_0E19[0x200F]; // offset 0xE19
    CountdownTimer m_repathTimer; // offset 0x2E28, size 0x18, align 8
    CountdownTimer m_inhibitDoorTimer; // offset 0x2E40, size 0x18, align 8
    char _pad_2E58[0x78]; // offset 0x2E58
    CountdownTimer m_inhibitObstacleAvoidanceTimer; // offset 0x2ED0, size 0x18, align 8
    char _pad_2EE8[0x8]; // offset 0x2EE8
    CountdownTimer m_wiggleTimer; // offset 0x2EF0, size 0x18, align 8
    char _pad_2F08[0x4]; // offset 0x2F08
    bool m_isAdjusted; // offset 0x2F0C, size 0x1, align 1
    bool m_bHandsHaveBeenCut; // offset 0x2F0D, size 0x1, align 1
    char _pad_2F0E[0x2]; // offset 0x2F0E
    CHandle< CCSPlayerPawn > m_hHostageGrabber; // offset 0x2F10, size 0x4, align 4
    GameTime_t m_fLastGrabTime; // offset 0x2F14, size 0x4, align 255
    VectorWS m_vecPositionWhenStartedDroppingToGround; // offset 0x2F18, size 0xC, align 4
    VectorWS m_vecGrabbedPos; // offset 0x2F24, size 0xC, align 4
    GameTime_t m_flRescueStartTime; // offset 0x2F30, size 0x4, align 255
    GameTime_t m_flGrabSuccessTime; // offset 0x2F34, size 0x4, align 255
    GameTime_t m_flDropStartTime; // offset 0x2F38, size 0x4, align 255
    int32 m_nApproachRewardPayouts; // offset 0x2F3C, size 0x4, align 4
    int32 m_nPickupEventCount; // offset 0x2F40, size 0x4, align 4
    VectorWS m_vecSpawnGroundPos; // offset 0x2F44, size 0xC, align 4
    char _pad_2F50[0x2C]; // offset 0x2F50
    VectorWS m_vecHostageResetPosition; // offset 0x2F7C, size 0xC, align 4
    char _pad_2F88[0x8]; // offset 0x2F88
};
