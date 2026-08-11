#pragma once

class CCitadel_Ability_Tengu_AirLift : public CCitadelBaseAbility /*0x0*/  // sizeof 0x16A0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF88]; // offset 0x0
    CHandle< CBaseEntity > m_hGrabTarget; // offset 0xF88, size 0x4, align 4 | MNetworkEnable
    ParticleIndex_t m_nHoldBombEffect; // offset 0xF8C, size 0x4, align 255
    char _pad_0F90[0x708]; // offset 0xF90
    EFlightState m_eFlightState; // offset 0x1698, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bIsGrabbing; // offset 0x1699, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bIsHoldingBomb; // offset 0x169A, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_169B[0x1]; // offset 0x169B
    float32 m_flCurrentSpeed; // offset 0x169C, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
};
