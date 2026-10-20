#pragma once

class CCitadel_Ability_PunkGoat_GoatFlip : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x26C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x26B0]; // offset 0x0
    PG_RisingRamState m_eState; // offset 0x26B0, size 0x1, align 1
    char _pad_26B1[0x3]; // offset 0x26B1
    GameTime_t m_tStateStartTime; // offset 0x26B4, size 0x4, align 255
    float32 m_flGoingUpTargetElevation; // offset 0x26B8, size 0x4, align 4
    float32 m_flGoingUpStartElevation; // offset 0x26BC, size 0x4, align 4
};
