#pragma once

class CAI_GroundLocomotion_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x460, align 0x10 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x90]; // offset 0x0
    CRelativeTransform m_stopTarget; // offset 0x90, size 0x30, align 16
    CRelativeTransform m_idleTurnTarget; // offset 0xC0, size 0x30, align 16
    CAnimGraph2ParamOptionalRef< CTransform > m_tStopTarget; // offset 0xF0, size 0x18, align 8
    CAnimGraph2ParamOptionalRef< CTransform > m_tIdleTurnTarget; // offset 0x108, size 0x18, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementStopType; // offset 0x120, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementState; // offset 0x150, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementStrafeDirection; // offset 0x180, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementCustom; // offset 0x1B0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementCustomShared; // offset 0x1E0, size 0x30, align 8
    CAnimGraphParamRef< Vector > m_vMovementDirection; // offset 0x210, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementDirectionCurrent; // offset 0x238, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vMovementPlantedTurnDirection; // offset 0x260, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementTargetSpeed; // offset 0x288, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementCurrentSpeed; // offset 0x2B0, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementLean; // offset 0x2D8, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementStrafeAngleForward; // offset 0x300, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementStrafeAngleBackward; // offset 0x328, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flDistanceToStop; // offset 0x350, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bMovementCustomFromMovement; // offset 0x378, size 0x28, align 8
    CAnimGraphParamAutoResetRef m_bMovementStateRestart; // offset 0x3A0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementDebugBadZoneState; // offset 0x3D0, size 0x30, align 8
    CAnimGraphTagOptionalRef m_sMovementRightBadZonePassAllowed; // offset 0x400, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementLeftBadZonePassAllowed; // offset 0x420, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sMovementDisableStateTimeout; // offset 0x440, size 0x20, align 8
};
