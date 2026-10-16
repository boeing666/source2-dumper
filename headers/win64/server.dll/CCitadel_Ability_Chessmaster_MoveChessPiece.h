#pragma once

class CCitadel_Ability_Chessmaster_MoveChessPiece : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1C48, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    GameTime_t m_tCancelHoverTime; // offset 0x14A0, size 0x4, align 255
    CHandle< CBaseEntity > m_pSelectedPiece; // offset 0x14A4, size 0x4, align 4
    float32 m_flCachedMoveDistance; // offset 0x14A8, size 0x4, align 4
    char _pad_14AC[0x79C]; // offset 0x14AC
};
