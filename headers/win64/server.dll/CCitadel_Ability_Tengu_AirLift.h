#pragma once

class CCitadel_Ability_Tengu_AirLift : public CCitadelBaseAbility /*0x0*/  // sizeof 0x20F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14C0]; // offset 0x0
    CHandle< CBaseEntity > m_hGrabTarget; // offset 0x14C0, size 0x4, align 4
    ParticleIndex_t m_nHoldBombEffect; // offset 0x14C4, size 0x4, align 255
    char _pad_14C8[0xC28]; // offset 0x14C8
    EFlightState m_eFlightState; // offset 0x20F0, size 0x1, align 1
    bool m_bIsGrabbing; // offset 0x20F1, size 0x1, align 1
    bool m_bIsHoldingBomb; // offset 0x20F2, size 0x1, align 1
    char _pad_20F3[0x1]; // offset 0x20F3
    float32 m_flCurrentSpeed; // offset 0x20F4, size 0x4, align 4
};
