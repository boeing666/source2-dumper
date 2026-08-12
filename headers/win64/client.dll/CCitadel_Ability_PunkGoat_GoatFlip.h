#pragma once

class CCitadel_Ability_PunkGoat_GoatFlip : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1D68, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1D58]; // offset 0x0
    PG_RisingRamState m_eState; // offset 0x1D58, size 0x1, align 1 | MNetworkEnable
    char _pad_1D59[0x3]; // offset 0x1D59
    GameTime_t m_tStateStartTime; // offset 0x1D5C, size 0x4, align 255 | MNetworkEnable
    float32 m_flGoingUpTargetElevation; // offset 0x1D60, size 0x4, align 4 | MNetworkEnable
    float32 m_flGoingUpStartElevation; // offset 0x1D64, size 0x4, align 4 | MNetworkEnable
};
