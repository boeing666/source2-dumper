#pragma once

class CCitadel_Ability_PunkGoat_GoatFlip : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x26B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x26A8]; // offset 0x0
    PG_RisingRamState m_eState; // offset 0x26A8, size 0x1, align 1
    char _pad_26A9[0x3]; // offset 0x26A9
    GameTime_t m_tStateStartTime; // offset 0x26AC, size 0x4, align 255
    float32 m_flGoingUpTargetElevation; // offset 0x26B0, size 0x4, align 4
    float32 m_flGoingUpStartElevation; // offset 0x26B4, size 0x4, align 4
};
