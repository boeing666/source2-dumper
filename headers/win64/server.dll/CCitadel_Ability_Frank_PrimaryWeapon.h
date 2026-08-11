#pragma once

class CCitadel_Ability_Frank_PrimaryWeapon : public CCitadel_Ability_PrimaryWeapon /*0x0*/  // sizeof 0x12B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x11A0]; // offset 0x0
    CCitadelPlayerPawn* m_pNextShooter; // offset 0x11A0, size 0x8, align 8
    char _pad_11A8[0x108]; // offset 0x11A8
};
