#pragma once

class CCitadel_Ability_Chessmaster_ForkPiece : public CCitadelBaseAbility /*0x0*/  // sizeof 0x21E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x21D4]; // offset 0x0
    CHandle< CBaseEntity > m_hCameraTarget; // offset 0x21D4, size 0x4, align 4
    CHandle< CCitadelProjectile > m_cProjectileLeft; // offset 0x21D8, size 0x4, align 4
    CHandle< CCitadelProjectile > m_cProjectileRight; // offset 0x21DC, size 0x4, align 4
    bool m_bActive; // offset 0x21E0, size 0x1, align 1
    char _pad_21E1[0x7]; // offset 0x21E1
};
