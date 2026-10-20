#pragma once

class CCitadel_Ability_Artist_RollingProjectile : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2098, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    bool m_bActive; // offset 0x14A8, size 0x1, align 1
    char _pad_14A9[0xBBF]; // offset 0x14A9
    CHandle< CCitadelProjectile > m_hDeployedProjectile; // offset 0x2068, size 0x4, align 4
    char _pad_206C[0x2C]; // offset 0x206C
};
