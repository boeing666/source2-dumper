#pragma once

class CCitadel_Ability_PunkGoat_GoatFlip : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1A00, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x19F0]; // offset 0x0
    PG_RisingRamState m_eState; // offset 0x19F0, size 0x1, align 1 | MNetworkEnable
    char _pad_19F1[0x3]; // offset 0x19F1
    GameTime_t m_tStateStartTime; // offset 0x19F4, size 0x4, align 255 | MNetworkEnable
    float32 m_flGoingUpTargetElevation; // offset 0x19F8, size 0x4, align 4 | MNetworkEnable
    float32 m_flGoingUpStartElevation; // offset 0x19FC, size 0x4, align 4 | MNetworkEnable
};
