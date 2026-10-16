#pragma once

class CCitadel_Ability_Artist_RollingProjectile : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x22C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    bool m_bActive; // offset 0x16D8, size 0x1, align 1
    char _pad_16D9[0xBBF]; // offset 0x16D9
    CHandle< C_CitadelProjectile > m_hDeployedProjectile; // offset 0x2298, size 0x4, align 4
    char _pad_229C[0x2C]; // offset 0x229C
};
