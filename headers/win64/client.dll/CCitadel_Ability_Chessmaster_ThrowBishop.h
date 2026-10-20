#pragma once

class CCitadel_Ability_Chessmaster_ThrowBishop : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2108, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecDeployedPieces; // offset 0x16E0, size 0x18, align 8
    CHandle< CCitadel_Ability_Chessmaster_MoveChessPiece > m_hMoveAbility; // offset 0x16F8, size 0x4, align 4
    char _pad_16FC[0x2]; // offset 0x16FC
    bool m_bActive; // offset 0x16FE, size 0x1, align 1
    char _pad_16FF[0x1]; // offset 0x16FF
    int32 m_iBishopIndex; // offset 0x1700, size 0x4, align 4
    GameTime_t m_tRecastEndTime; // offset 0x1704, size 0x4, align 255
    char _pad_1708[0x8]; // offset 0x1708
    CUtlVector< CHandle< C_BaseEntity > > m_vecShotBishops; // offset 0x1710, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitTargets; // offset 0x1728, size 0x18, align 8
    VectorWS m_vecLaunchPosition; // offset 0x1740, size 0xC, align 4
    Vector m_vecLaunchVelocity; // offset 0x174C, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x1758, size 0xC, align 4
    char _pad_1764[0x9A4]; // offset 0x1764
};
