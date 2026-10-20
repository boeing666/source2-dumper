#pragma once

class CCitadel_Ability_Frank_PrimaryWeapon : public CCitadel_Ability_PrimaryWeapon /*0x0*/  // sizeof 0x1AF0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1980]; // offset 0x0
    C_CitadelPlayerPawn* m_pNextShooter; // offset 0x1980, size 0x8, align 8
    char _pad_1988[0x168]; // offset 0x1988
};
