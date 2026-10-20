#pragma once

class CCitadel_Ability_Tengu_AirLift : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2328, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    CHandle< C_BaseEntity > m_hGrabTarget; // offset 0x16E0, size 0x4, align 4
    ParticleIndex_t m_nHoldBombEffect; // offset 0x16E4, size 0x4, align 255
    char _pad_16E8[0xC28]; // offset 0x16E8
    EFlightState m_eFlightState; // offset 0x2310, size 0x1, align 1
    bool m_bIsGrabbing; // offset 0x2311, size 0x1, align 1
    bool m_bIsHoldingBomb; // offset 0x2312, size 0x1, align 1
    char _pad_2313[0x1]; // offset 0x2313
    float32 m_flCurrentSpeed; // offset 0x2314, size 0x4, align 4
    char _pad_2318[0x10]; // offset 0x2318
};
