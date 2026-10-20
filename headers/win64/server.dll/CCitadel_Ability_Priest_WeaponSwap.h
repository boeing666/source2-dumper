#pragma once

class CCitadel_Ability_Priest_WeaponSwap : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1B18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1AFC]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hOriginalGun; // offset 0x1AFC, size 0x4, align 4
    char _pad_1B00[0x18]; // offset 0x1B00
};
