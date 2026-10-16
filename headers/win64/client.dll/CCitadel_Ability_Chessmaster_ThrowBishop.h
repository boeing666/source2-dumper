#pragma once

class CCitadel_Ability_Chessmaster_ThrowBishop : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2100, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecDeployedPieces; // offset 0x16D8, size 0x18, align 8
    CHandle< CCitadel_Ability_Chessmaster_MoveChessPiece > m_hMoveAbility; // offset 0x16F0, size 0x4, align 4
    char _pad_16F4[0x2]; // offset 0x16F4
    bool m_bActive; // offset 0x16F6, size 0x1, align 1
    char _pad_16F7[0x1]; // offset 0x16F7
    int32 m_iBishopIndex; // offset 0x16F8, size 0x4, align 4
    GameTime_t m_tRecastEndTime; // offset 0x16FC, size 0x4, align 255
    char _pad_1700[0x8]; // offset 0x1700
    CUtlVector< CHandle< C_BaseEntity > > m_vecShotBishops; // offset 0x1708, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitTargets; // offset 0x1720, size 0x18, align 8
    VectorWS m_vecLaunchPosition; // offset 0x1738, size 0xC, align 4
    Vector m_vecLaunchVelocity; // offset 0x1744, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x1750, size 0xC, align 4
    char _pad_175C[0x9A4]; // offset 0x175C
};
