#pragma once

class CCitadel_Ability_Priest_WeaponSwap : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1400, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x13F8]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hOriginalGun; // offset 0x13F8, size 0x4, align 4
    char _pad_13FC[0x4]; // offset 0x13FC
};
