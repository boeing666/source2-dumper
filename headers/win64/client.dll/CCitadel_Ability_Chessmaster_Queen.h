#pragma once

class CCitadel_Ability_Chessmaster_Queen : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1F90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CHandle< CCitadel_Ability_Chessmaster_MoveChessPiece > m_hMoveAbility; // offset 0x16D8, size 0x4, align 4
    int32 m_iRemainingMoves; // offset 0x16DC, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitUnits; // offset 0x16E0, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecStunnedUnits; // offset 0x16F8, size 0x18, align 8
    CHandle< C_BaseEntity > m_pDeployedQueen; // offset 0x1710, size 0x4, align 4
    bool m_bActive; // offset 0x1714, size 0x1, align 1
    char _pad_1715[0x87B]; // offset 0x1715
};
