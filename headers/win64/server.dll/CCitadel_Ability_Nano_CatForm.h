#pragma once

class CCitadel_Ability_Nano_CatForm : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1B10, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14CC]; // offset 0x0
    bool m_bIsInCatform; // offset 0x14CC, size 0x1, align 1
    char _pad_14CD[0x3]; // offset 0x14CD
    GameTime_t m_flLastDamageTime; // offset 0x14D0, size 0x4, align 255
    GameTime_t m_flTransformStartTime; // offset 0x14D4, size 0x4, align 255
    GameTime_t m_flTransformEndTime; // offset 0x14D8, size 0x4, align 255
    float32 m_flStoredDamageAmp; // offset 0x14DC, size 0x4, align 4
    char _pad_14E0[0x630]; // offset 0x14E0
};
