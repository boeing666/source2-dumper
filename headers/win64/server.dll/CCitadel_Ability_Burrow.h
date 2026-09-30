#pragma once

class CCitadel_Ability_Burrow : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1B08, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x1AD0]; // offset 0x0
    bool m_bInGround; // offset 0x1AD0, size 0x1, align 1
    char _pad_1AD1[0x3]; // offset 0x1AD1
    GameTime_t m_flLastDamageTime; // offset 0x1AD4, size 0x4, align 255
    GameTime_t m_SpinEndTime; // offset 0x1AD8, size 0x4, align 255
    char _pad_1ADC[0x2C]; // offset 0x1ADC
};
