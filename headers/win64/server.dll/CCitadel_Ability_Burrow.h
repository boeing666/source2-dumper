#pragma once

class CCitadel_Ability_Burrow : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1B10, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x1AD8]; // offset 0x0
    bool m_bInGround; // offset 0x1AD8, size 0x1, align 1
    char _pad_1AD9[0x3]; // offset 0x1AD9
    GameTime_t m_flLastDamageTime; // offset 0x1ADC, size 0x4, align 255
    GameTime_t m_SpinEndTime; // offset 0x1AE0, size 0x4, align 255
    char _pad_1AE4[0x2C]; // offset 0x1AE4
};
