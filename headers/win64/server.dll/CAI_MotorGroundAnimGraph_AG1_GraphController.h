#pragma once

class CAI_MotorGroundAnimGraph_AG1_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x5F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraphParamRef< Vector > m_vMovementCustomTargetPosition; // offset 0xC0, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementMantleTargetPosition; // offset 0xE8, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementStartFacePosition; // offset 0x110, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementStopFacePosition; // offset 0x138, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementHopFacePosition; // offset 0x160, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementIdleTurnFacePosition; // offset 0x188, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementPlantedTurnFacePosition; // offset 0x1B0, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementDirection; // offset 0x1D8, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementIdleTurnAngle; // offset 0x200, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementStopDesiredHeading; // offset 0x228, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementDesiredHeading; // offset 0x250, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementDesiredHeadingDelta; // offset 0x278, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementHeading; // offset 0x2A0, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flGaitSlowSpeedScale; // offset 0x2C8, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flGaitMediumSpeedScale; // offset 0x2F0, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flGaitFastSpeedScale; // offset 0x318, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flGaitVeryFastSpeedScale; // offset 0x340, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bMovementCodeDriven; // offset 0x368, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bMovementShouldMove; // offset 0x390, size 0x28, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementHeading; // offset 0x3B8, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementDesiredHeading; // offset 0x3E8, size 0x30, align 8
    CAnimGraphTagOptionalRef m_sMovementStateMachineActive; // offset 0x418, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementStopsEnabled; // offset 0x430, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementInstantStopsEnabled; // offset 0x448, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementStartsEnabled; // offset 0x460, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementIdleTurnsEnabled; // offset 0x478, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementHopsEnabled; // offset 0x490, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementPlantedTurnsEnabled; // offset 0x4A8, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementStrafeSupported; // offset 0x4C0, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionBlockAll; // offset 0x4D8, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdle; // offset 0x4F0, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionBlockLoop; // offset 0x508, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdleTurn; // offset 0x520, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionBlockStart; // offset 0x538, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionBlockStop; // offset 0x550, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionBlockHop; // offset 0x568, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionBlockPlantedTurn; // offset 0x580, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementRightFootDown; // offset 0x598, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementLeftFootDown; // offset 0x5B0, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementStumbleEnabled; // offset 0x5C8, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sMovementBashEnabled; // offset 0x5E0, size 0x18, align 8
};
