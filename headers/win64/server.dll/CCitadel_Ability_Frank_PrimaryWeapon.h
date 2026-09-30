#pragma once

class CCitadel_Ability_Frank_PrimaryWeapon : public CCitadel_Ability_PrimaryWeapon /*0x0*/  // sizeof 0x1880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1710]; // offset 0x0
    CCitadelPlayerPawn* m_pNextShooter; // offset 0x1710, size 0x8, align 8
    char _pad_1718[0x168]; // offset 0x1718
};
