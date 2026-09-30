#pragma once

class CCitadel_Ability_Tengu_AirLift : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2320, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CHandle< C_BaseEntity > m_hGrabTarget; // offset 0x16D8, size 0x4, align 4
    ParticleIndex_t m_nHoldBombEffect; // offset 0x16DC, size 0x4, align 255
    char _pad_16E0[0xC28]; // offset 0x16E0
    EFlightState m_eFlightState; // offset 0x2308, size 0x1, align 1
    bool m_bIsGrabbing; // offset 0x2309, size 0x1, align 1
    bool m_bIsHoldingBomb; // offset 0x230A, size 0x1, align 1
    char _pad_230B[0x1]; // offset 0x230B
    float32 m_flCurrentSpeed; // offset 0x230C, size 0x4, align 4
    char _pad_2310[0x10]; // offset 0x2310
};
