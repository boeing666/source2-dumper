#pragma once

class CCitadel_Ability_Nano_CatForm : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1D28, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    bool m_bIsInCatform; // offset 0x16E0, size 0x1, align 1
    char _pad_16E1[0x3]; // offset 0x16E1
    GameTime_t m_flLastDamageTime; // offset 0x16E4, size 0x4, align 255
    GameTime_t m_flTransformStartTime; // offset 0x16E8, size 0x4, align 255
    GameTime_t m_flTransformEndTime; // offset 0x16EC, size 0x4, align 255
    float32 m_flStoredDamageAmp; // offset 0x16F0, size 0x4, align 4
    char _pad_16F4[0x634]; // offset 0x16F4
};
