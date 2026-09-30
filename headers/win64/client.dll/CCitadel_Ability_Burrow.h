#pragma once

class CCitadel_Ability_Burrow : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1D40, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x1D08]; // offset 0x0
    bool m_bInGround; // offset 0x1D08, size 0x1, align 1
    char _pad_1D09[0x3]; // offset 0x1D09
    GameTime_t m_flLastDamageTime; // offset 0x1D0C, size 0x4, align 255
    GameTime_t m_SpinEndTime; // offset 0x1D10, size 0x4, align 255
    char _pad_1D14[0x2C]; // offset 0x1D14
};
