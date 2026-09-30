#pragma once

class CAI_MotorServices_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x1C8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraph2ParamOptionalRef< CGlobalSymbol > m_sNavLinkSelection; // offset 0xC0, size 0x18, align 8
    CAnimGraphParamRef< bool > m_bNavLinkIsOnPath; // offset 0xD8, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flPathDistanceToNavLink; // offset 0x100, size 0x28, align 8
    CAnimGraphParamRef< bool > m_bIsNonZUp; // offset 0x128, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flMovementTargetSpeed; // offset 0x150, size 0x28, align 8
    int32 m_nNavLinkExternalGraphSlot; // offset 0x178, size 0x4, align 4
    char _pad_017C[0x4]; // offset 0x17C
    CAnimGraphTagOptionalRef m_sAllowMovementOffPath; // offset 0x180, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sAllowMovementOffNavMesh; // offset 0x198, size 0x18, align 8
    CAnimGraphTagOptionalRef m_sRestrictMovementToNavMeshDuringCustomMove; // offset 0x1B0, size 0x18, align 8
};
