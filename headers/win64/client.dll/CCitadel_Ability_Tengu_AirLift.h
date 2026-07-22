#pragma once

class CCitadel_Ability_Tengu_AirLift : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1900, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    CHandle< C_BaseEntity > m_hGrabTarget; // offset 0x11D8, size 0x4, align 4 | MNetworkEnable
    ParticleIndex_t m_nHoldBombEffect; // offset 0x11DC, size 0x4, align 255
    char _pad_11E0[0x708]; // offset 0x11E0
    EFlightState m_eFlightState; // offset 0x18E8, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bIsGrabbing; // offset 0x18E9, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bIsHoldingBomb; // offset 0x18EA, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_18EB[0x1]; // offset 0x18EB
    float32 m_flCurrentSpeed; // offset 0x18EC, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_18F0[0x10]; // offset 0x18F0
};
