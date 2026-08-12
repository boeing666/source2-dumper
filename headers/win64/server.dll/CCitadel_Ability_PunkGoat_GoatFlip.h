#pragma once

class CCitadel_Ability_PunkGoat_GoatFlip : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1B00, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1AF0]; // offset 0x0
    PG_RisingRamState m_eState; // offset 0x1AF0, size 0x1, align 1 | MNetworkEnable
    char _pad_1AF1[0x3]; // offset 0x1AF1
    GameTime_t m_tStateStartTime; // offset 0x1AF4, size 0x4, align 255 | MNetworkEnable
    float32 m_flGoingUpTargetElevation; // offset 0x1AF8, size 0x4, align 4 | MNetworkEnable
    float32 m_flGoingUpStartElevation; // offset 0x1AFC, size 0x4, align 4 | MNetworkEnable
};
