#pragma once

class CCitadel_Ability_PunkGoat_Ult : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1DD8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    ParticleIndex_t m_nBatChargingFX; // offset 0x14A8, size 0x4, align 255
    char _pad_14AC[0x30]; // offset 0x14AC
    uint8 m_nSlamTravelType; // offset 0x14DC, size 0x1, align 1
    char _pad_14DD[0x3]; // offset 0x14DD
    float32 m_flDistanceToTravel; // offset 0x14E0, size 0x4, align 4
    bool m_bHoldingAbilityButton; // offset 0x14E4, size 0x1, align 1
    bool m_bFirstFrameGoingDown; // offset 0x14E5, size 0x1, align 1
    char _pad_14E6[0x8F2]; // offset 0x14E6
};
