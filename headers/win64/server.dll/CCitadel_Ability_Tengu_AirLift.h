#pragma once

class CCitadel_Ability_Tengu_AirLift : public CCitadelBaseAbility /*0x0*/  // sizeof 0x20F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14B8]; // offset 0x0
    CHandle< CBaseEntity > m_hGrabTarget; // offset 0x14B8, size 0x4, align 4
    ParticleIndex_t m_nHoldBombEffect; // offset 0x14BC, size 0x4, align 255
    char _pad_14C0[0xC28]; // offset 0x14C0
    EFlightState m_eFlightState; // offset 0x20E8, size 0x1, align 1
    bool m_bIsGrabbing; // offset 0x20E9, size 0x1, align 1
    bool m_bIsHoldingBomb; // offset 0x20EA, size 0x1, align 1
    char _pad_20EB[0x1]; // offset 0x20EB
    float32 m_flCurrentSpeed; // offset 0x20EC, size 0x4, align 4
};
