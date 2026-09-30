#pragma once

class CCitadel_Ability_PunkGoat_Ult : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1DD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    ParticleIndex_t m_nBatChargingFX; // offset 0x14A0, size 0x4, align 255
    char _pad_14A4[0x30]; // offset 0x14A4
    uint8 m_nSlamTravelType; // offset 0x14D4, size 0x1, align 1
    char _pad_14D5[0x3]; // offset 0x14D5
    float32 m_flDistanceToTravel; // offset 0x14D8, size 0x4, align 4
    bool m_bHoldingAbilityButton; // offset 0x14DC, size 0x1, align 1
    bool m_bFirstFrameGoingDown; // offset 0x14DD, size 0x1, align 1
    char _pad_14DE[0x8F2]; // offset 0x14DE
};
