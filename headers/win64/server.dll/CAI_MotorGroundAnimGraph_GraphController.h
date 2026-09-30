#pragma once

class CAI_MotorGroundAnimGraph_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x780, align 0x10 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CRelativeTransform m_stopTarget; // offset 0xC0, size 0x60, align 16
    CRelativeTransform m_idleTurnTarget; // offset 0x120, size 0x60, align 16
    float32 m_flSpeed; // offset 0x180, size 0x4, align 4
    char _pad_0184[0x4]; // offset 0x184
    CAnimGraph2ParamOptionalRef< CTransform > m_tStopTarget; // offset 0x188, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CTransform > m_tIdleTurnTarget; // offset 0x1A0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CTransform > m_tCustomTarget; // offset 0x1B8, size 0x18, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementStopType; // offset 0x1D0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementState; // offset 0x200, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementPoseTransition; // offset 0x230, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementStrafeDirection; // offset 0x260, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementStrafeDirectionCurrent; // offset 0x290, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementStrafeTransitionDirection; // offset 0x2C0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementCustom; // offset 0x2F0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementCustomShared; // offset 0x320, size 0x30, align 8
    CAnimGraphParamRef< Vector > m_vMovementDirection; // offset 0x350, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementDirectionCurrent; // offset 0x378, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementPlantedTurnDirection; // offset 0x3A0, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementCurrentSpeed; // offset 0x3C8, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementCurrentSpeedSlow; // offset 0x3F0, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementCurrentSpeedMedium; // offset 0x418, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementCurrentSpeedFast; // offset 0x440, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementCurrentSpeedVeryFast; // offset 0x468, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementLean; // offset 0x490, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementStrafeAngleForward; // offset 0x4B8, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementStrafeAngleBackward; // offset 0x4E0, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flDistanceToStop; // offset 0x508, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bMovementCustomFromMovement; // offset 0x530, size 0x28, align 8
    CAnimGraphParamAutoResetRef m_bMovementStateRestart; // offset 0x558, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementGaitSetNext; // offset 0x588, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sNextStance; // offset 0x5B8, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementGait; // offset 0x5E8, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementGaitSet; // offset 0x618, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementGaitPrevious; // offset 0x648, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementGaitSetPrevious; // offset 0x678, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sCurrentStance; // offset 0x6A8, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sPreviousStance; // offset 0x6D8, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sCustomMovementGait; // offset 0x708, size 0x30, align 8
    CAnimGraphParamRef< bool > m_bWalking; // offset 0x738, size 0x28, align 8
    CAnimGraphTagOptionalRef m_sMovementDisableStateTimeout; // offset 0x760, size 0x18, align 8
    char _pad_0778[0x8]; // offset 0x778
};
