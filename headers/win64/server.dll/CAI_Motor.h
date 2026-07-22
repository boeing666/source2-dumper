#pragma once

class CAI_Motor : public CAI_Component /*0x0*/  // sizeof 0xF40, align 0x10 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x60]; // offset 0x0
    float32 m_flMoveInterval; // offset 0x60, size 0x4, align 4 | MNotSaved
    float32 m_flYawSpeed; // offset 0x64, size 0x4, align 4
    Vector m_vMoveVel; // offset 0x68, size 0xC, align 4
    Vector m_vMoveVelNavigation; // offset 0x74, size 0xC, align 4
    Vector m_vecAngularVelocity; // offset 0x80, size 0xC, align 4
    CSimpleSimTimer m_timerFloorPointCached; // offset 0x8C, size 0x8, align 255
    VectorWS m_vFloorPointCached; // offset 0x94, size 0xC, align 4
    bool m_bFloorPointCachingEnabled; // offset 0xA0, size 0x1, align 1
    bool m_bAllowFlyingAnimMovement; // offset 0xA1, size 0x1, align 1
    char _pad_00A2[0x3E]; // offset 0xA2
    float32 m_flSpeed; // offset 0xE0, size 0x4, align 4
    bool m_bMovementActive; // offset 0xE4, size 0x1, align 1
    char _pad_00E5[0x3]; // offset 0xE5
    Vector m_vBoundaryDistCachedPos; // offset 0xE8, size 0xC, align 4 | MNotSaved
    float32 m_flBoundaryDistCached; // offset 0xF4, size 0x4, align 4 | MNotSaved
    char _pad_00F8[0x8]; // offset 0xF8
    CAI_MotorGroundAnimGraph m_motorGroundAnimgraph; // offset 0x100, size 0x720, align 255
    bool m_bIsExecutingMoveSolve; // offset 0x820, size 0x1, align 1 | MNotSaved
    char _pad_0821[0x567]; // offset 0x821
    CGlobalSymbol[3] m_pMovementGaitSetRequests; // offset 0xD88, size 0x18, align 8
    CGlobalSymbol[4] m_pMovementGaitRequests; // offset 0xDA0, size 0x20, align 8
    CGlobalSymbol m_sDesiredMovementGaitSetId; // offset 0xDC0, size 0x8, align 8
    CGlobalSymbol m_sDesiredMovementSettingsId; // offset 0xDC8, size 0x8, align 8
    MovementGaitId_t m_sDesiredMovementGaitId; // offset 0xDD0, size 0x8, align 8
    CGlobalSymbol m_sCurrentMovementGaitSetId; // offset 0xDD8, size 0x8, align 8
    CGlobalSymbol m_sCurrentMovementSettingsId; // offset 0xDE0, size 0x8, align 8
    MovementGaitId_t m_sCurrentMovementGaitId; // offset 0xDE8, size 0x8, align 8
    StanceType_t[3] m_pStanceRequests; // offset 0xDF0, size 0xC, align 4
    bool[3] m_bStanceCapabilities; // offset 0xDFC, size 0x3, align 1
    bool[3] m_bTemporaryDisabledStances; // offset 0xDFF, size 0x3, align 1
    char _pad_0E02[0x2]; // offset 0xE02
    StanceType_t m_nDesiredStance; // offset 0xE04, size 0x4, align 4
    StanceType_t m_nCurrentStance; // offset 0xE08, size 0x4, align 4 | MNetworkEnable
    char _pad_0E0C[0x134]; // offset 0xE0C
};
