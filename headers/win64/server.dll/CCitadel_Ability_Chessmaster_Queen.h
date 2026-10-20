#pragma once

class CCitadel_Ability_Chessmaster_Queen : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1D60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    int32 m_iRemainingMoves; // offset 0x14A8, size 0x4, align 4
    char _pad_14AC[0x4]; // offset 0x14AC
    CUtlVector< CHandle< CBaseEntity > > m_vecHitUnits; // offset 0x14B0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecStunnedUnits; // offset 0x14C8, size 0x18, align 8
    CHandle< CBaseEntity > m_pDeployedQueen; // offset 0x14E0, size 0x4, align 4
    bool m_bActive; // offset 0x14E4, size 0x1, align 1
    char _pad_14E5[0x87B]; // offset 0x14E5
};
