#pragma once

class CCitadel_Ability_Nano_CatForm : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1D20, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    bool m_bIsInCatform; // offset 0x16D8, size 0x1, align 1
    char _pad_16D9[0x3]; // offset 0x16D9
    GameTime_t m_flLastDamageTime; // offset 0x16DC, size 0x4, align 255
    GameTime_t m_flTransformStartTime; // offset 0x16E0, size 0x4, align 255
    GameTime_t m_flTransformEndTime; // offset 0x16E4, size 0x4, align 255
    float32 m_flStoredDamageAmp; // offset 0x16E8, size 0x4, align 4
    char _pad_16EC[0x634]; // offset 0x16EC
};
