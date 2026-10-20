#pragma once

class CCitadel_Ability_Chessmaster_ForkPiece : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2420, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x240C]; // offset 0x0
    CHandle< C_BaseEntity > m_hCameraTarget; // offset 0x240C, size 0x4, align 4
    CHandle< C_CitadelProjectile > m_cProjectileLeft; // offset 0x2410, size 0x4, align 4
    CHandle< C_CitadelProjectile > m_cProjectileRight; // offset 0x2414, size 0x4, align 4
    bool m_bActive; // offset 0x2418, size 0x1, align 1
    char _pad_2419[0x7]; // offset 0x2419
};
