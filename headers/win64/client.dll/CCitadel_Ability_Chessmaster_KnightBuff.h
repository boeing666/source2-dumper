#pragma once

class CCitadel_Ability_Chessmaster_KnightBuff : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1E98, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    CHandle< CCitadel_Ability_Chessmaster_MoveChessPiece > m_hMoveAbility; // offset 0x16E0, size 0x4, align 4
    char _pad_16E4[0x4]; // offset 0x16E4
    CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vBuffs; // offset 0x16E8, size 0x18, align 8
    char _pad_1700[0x798]; // offset 0x1700
};
