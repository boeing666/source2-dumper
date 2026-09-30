#pragma once

class CCitadel_Ability_HornetLeap : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1F28, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16DA]; // offset 0x0
    bool m_bLeaping; // offset 0x16DA, size 0x1, align 1
    char _pad_16DB[0x1]; // offset 0x16DB
    GameTime_t m_flLeapStartTime; // offset 0x16DC, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x16E0, size 0x4, align 255
    char _pad_16E4[0x844]; // offset 0x16E4
};
