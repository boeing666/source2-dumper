#pragma once

class CCitadel_Ability_Priest_WeaponSwap : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1430, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1414]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hOriginalGun; // offset 0x1414, size 0x4, align 4
    char _pad_1418[0x18]; // offset 0x1418
};
