#pragma once

class CCitadel_Ability_Artist_RollingProjectile : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x22D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    bool m_bActive; // offset 0x16E0, size 0x1, align 1
    char _pad_16E1[0xBBF]; // offset 0x16E1
    CHandle< C_CitadelProjectile > m_hDeployedProjectile; // offset 0x22A0, size 0x4, align 4
    char _pad_22A4[0x2C]; // offset 0x22A4
};
