#pragma once

class CCitadel_Ability_HornetLeap : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1D00, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14AA]; // offset 0x0
    bool m_bLeaping; // offset 0x14AA, size 0x1, align 1
    char _pad_14AB[0x1]; // offset 0x14AB
    GameTime_t m_flLeapStartTime; // offset 0x14AC, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x14B0, size 0x4, align 255
    char _pad_14B4[0x844]; // offset 0x14B4
    ParticleIndex_t m_TrailFX; // offset 0x1CF8, size 0x4, align 255
    char _pad_1CFC[0x4]; // offset 0x1CFC
};
