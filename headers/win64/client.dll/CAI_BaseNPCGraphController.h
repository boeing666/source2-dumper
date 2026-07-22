#pragma once

class CAI_BaseNPCGraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x500, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x90]; // offset 0x0
    CAnimGraphParamRef< CGlobalSymbol > m_sCurrScheduleName; // offset 0x90, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sCurrTaskName; // offset 0xC0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementBodySection; // offset 0xF0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sActionBodySection; // offset 0x120, size 0x30, align 8
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_sNavLinkSelection; // offset 0x150, size 0x18, align 8
    CAnimGraphParamRef< Vector > m_vecNavLinkTarget; // offset 0x168, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vecNavLinkUp; // offset 0x190, size 0x28, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionForceFacingDisabled; // offset 0x1B8, size 0x20, align 8
    CAnimGraphParamRef< float32 > m_flEnemyDistance; // offset 0x1D8, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flEnemyDirection; // offset 0x200, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bCanSeeEnemy; // offset 0x228, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bEnemyFacingMe; // offset 0x250, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bHitTrigger; // offset 0x278, size 0x28, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_pszNPCState; // offset 0x2A0, size 0x30, align 8
    CAnimGraphParamRef< bool > m_bStunned; // offset 0x2D0, size 0x28, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sBodyIdle; // offset 0x2F8, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sFlashlightMode; // offset 0x328, size 0x30, align 8
    CAnimGraphParamRef< float32 > m_flFlightSpeedNormalized; // offset 0x358, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bMoveSolveNudgeActive; // offset 0x380, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMoveSolveNudgeYaw; // offset 0x3A8, size 0x28, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_pszDoorOpenAction; // offset 0x3D0, size 0x30, align 8
    CAnimGraphParamRef< float32 > m_flDistanceToDoor; // offset 0x400, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bDoorLeft; // offset 0x428, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bIsNonZUp; // offset 0x450, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bEnemyInVehicle; // offset 0x478, size 0x28, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_eVehicleMeleeSide; // offset 0x4A0, size 0x30, align 8
    CAnimGraphParamRef< bool > m_bEnableMLLocomotion; // offset 0x4D0, size 0x28, align 8
    int32 m_nNavLinkExternalGraphSlot; // offset 0x4F8, size 0x4, align 4
    char _pad_04FC[0x4]; // offset 0x4FC
};
