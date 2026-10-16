#pragma once

class CCitadel_Ability_Chessmaster_MoveChessPiece : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1E88, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    SatVolumeIndex_t m_nSatVolumeIndex; // offset 0x16D8, size 0x4, align 255
    GameTime_t m_tCancelHoverTime; // offset 0x16DC, size 0x4, align 255
    CHandle< C_BaseEntity > m_pSelectedPiece; // offset 0x16E0, size 0x4, align 4
    float32 m_flCachedMoveDistance; // offset 0x16E4, size 0x4, align 4
    char _pad_16E8[0x7A0]; // offset 0x16E8
};
