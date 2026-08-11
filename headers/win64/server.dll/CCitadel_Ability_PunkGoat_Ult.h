#pragma once

class CCitadel_Ability_PunkGoat_Ult : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1618, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    ParticleIndex_t m_nBatChargingFX; // offset 0xF70, size 0x4, align 255
    char _pad_0F74[0x14]; // offset 0xF74
    uint8 m_nSlamTravelType; // offset 0xF88, size 0x1, align 1 | MNetworkEnable
    char _pad_0F89[0x3]; // offset 0xF89
    float32 m_flDistanceToTravel; // offset 0xF8C, size 0x4, align 4 | MNetworkEnable
    bool m_bHoldingAbilityButton; // offset 0xF90, size 0x1, align 1 | MNetworkEnable
    bool m_bFirstFrameGoingDown; // offset 0xF91, size 0x1, align 1
    char _pad_0F92[0x686]; // offset 0xF92
};
