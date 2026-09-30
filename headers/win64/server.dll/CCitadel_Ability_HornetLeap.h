#pragma once

class CCitadel_Ability_HornetLeap : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1CF8, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14A2]; // offset 0x0
    bool m_bLeaping; // offset 0x14A2, size 0x1, align 1
    char _pad_14A3[0x1]; // offset 0x14A3
    GameTime_t m_flLeapStartTime; // offset 0x14A4, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x14A8, size 0x4, align 255
    char _pad_14AC[0x844]; // offset 0x14AC
    ParticleIndex_t m_TrailFX; // offset 0x1CF0, size 0x4, align 255
    char _pad_1CF4[0x4]; // offset 0x1CF4
};
