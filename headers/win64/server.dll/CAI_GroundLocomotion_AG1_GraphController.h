#pragma once

class CAI_GroundLocomotion_AG1_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x5C8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x90]; // offset 0x0
    CAnimGraphParamRef< Vector > m_vMovementCustomTargetPosition; // offset 0x90, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementMantleTargetPosition; // offset 0xB8, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementStartFacePosition; // offset 0xE0, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementStopFacePosition; // offset 0x108, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementHopFacePosition; // offset 0x130, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementStopPosition; // offset 0x158, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementIdleTurnFacePosition; // offset 0x180, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementPlantedTurnFacePosition; // offset 0x1A8, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementDirection; // offset 0x1D0, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementStopDesiredHeading; // offset 0x1F8, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementDesiredHeading; // offset 0x220, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementDesiredHeadingDelta; // offset 0x248, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementHeading; // offset 0x270, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bMovementCodeDriven; // offset 0x298, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bMovementShouldMove; // offset 0x2C0, size 0x28, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementHeading; // offset 0x2E8, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementDesiredHeading; // offset 0x318, size 0x30, align 8
    CAnimGraphTagOptionalRef m_sMovementStateMachineActive; // offset 0x348, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementStopsEnabled; // offset 0x368, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementInstantStopsEnabled; // offset 0x388, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementStartsEnabled; // offset 0x3A8, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementIdleTurnsEnabled; // offset 0x3C8, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementHopsEnabled; // offset 0x3E8, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementPlantedTurnsEnabled; // offset 0x408, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementStrafeSupported; // offset 0x428, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionBlockAll; // offset 0x448, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdle; // offset 0x468, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionBlockLoop; // offset 0x488, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdleTurn; // offset 0x4A8, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionBlockStart; // offset 0x4C8, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionBlockStop; // offset 0x4E8, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionBlockHop; // offset 0x508, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionBlockPlantedTurn; // offset 0x528, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementRightFootDown; // offset 0x548, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementLeftFootDown; // offset 0x568, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementStumbleEnabled; // offset 0x588, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementBashEnabled; // offset 0x5A8, size 0x20, align 8
};
