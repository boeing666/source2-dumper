#pragma once

class CCitadel_Ability_Chrono_TimeWall : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x15F8, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    ParticleIndex_t m_hChargingParticle; // offset 0x11D8, size 0x4, align 255
    VectorWS m_vSpawnPos; // offset 0x11DC, size 0xC, align 4
    QAngle m_qAngles; // offset 0x11E8, size 0xC, align 4
    bool m_bAirCast; // offset 0x11F4, size 0x1, align 1 | MNetworkEnable
    char _pad_11F5[0x403]; // offset 0x11F5
};
