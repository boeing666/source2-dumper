#pragma once

class CCitadel_Ability_PunkGoat_GoatFlip : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2480, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2470]; // offset 0x0
    PG_RisingRamState m_eState; // offset 0x2470, size 0x1, align 1
    char _pad_2471[0x3]; // offset 0x2471
    GameTime_t m_tStateStartTime; // offset 0x2474, size 0x4, align 255
    float32 m_flGoingUpTargetElevation; // offset 0x2478, size 0x4, align 4
    float32 m_flGoingUpStartElevation; // offset 0x247C, size 0x4, align 4
};
