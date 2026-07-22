#pragma once

class CAI_Motor_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x338, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x90]; // offset 0x0
    CAnimGraphParamRef< bool > m_bNavLinkIsOnPath; // offset 0x90, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flPathDistanceToNavLink; // offset 0xB8, size 0x28, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementGaitSetNext; // offset 0xE0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sNextStance; // offset 0x110, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementGait; // offset 0x140, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementGaitSet; // offset 0x170, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementGaitPrevious; // offset 0x1A0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementGaitSetPrevious; // offset 0x1D0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sCurrentStance; // offset 0x200, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sPreviousStance; // offset 0x230, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sCustomMovementGait; // offset 0x260, size 0x30, align 8
    CAnimGraphParamRef< bool > m_bWalking; // offset 0x290, size 0x28, align 8
    CAnimGraphTagOptionalRef m_sAllowMovementOffPath; // offset 0x2B8, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sAllowMovementOffNavMesh; // offset 0x2D8, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sRestrictMovementToNavMeshDuringCustomMove; // offset 0x2F8, size 0x20, align 8
    CAnimGraphTagOptionalRef m_sKeepPathActiveStop; // offset 0x318, size 0x20, align 8
};
