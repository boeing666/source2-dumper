#pragma once

class CCitadel_Ability_PunkGoat_Ult : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1878, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11EC]; // offset 0x0
    uint8 m_nSlamTravelType; // offset 0x11EC, size 0x1, align 1 | MNetworkEnable
    char _pad_11ED[0x3]; // offset 0x11ED
    float32 m_flDistanceToTravel; // offset 0x11F0, size 0x4, align 4 | MNetworkEnable
    bool m_bHoldingAbilityButton; // offset 0x11F4, size 0x1, align 1 | MNetworkEnable
    char _pad_11F5[0x683]; // offset 0x11F5
};
