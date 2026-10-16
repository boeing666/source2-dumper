#pragma once

class CCitadel_Ability_Artist_RollingProjectile : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2090, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    bool m_bActive; // offset 0x14A0, size 0x1, align 1
    char _pad_14A1[0xBBF]; // offset 0x14A1
    CHandle< CCitadelProjectile > m_hDeployedProjectile; // offset 0x2060, size 0x4, align 4
    char _pad_2064[0x2C]; // offset 0x2064
};
