#pragma once

class CCitadel_Ability_Chrono_TimeWall : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1C80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    ParticleIndex_t m_hChargingParticle; // offset 0x16E0, size 0x4, align 255
    VectorWS m_vSpawnPos; // offset 0x16E4, size 0xC, align 4
    QAngle m_qAngles; // offset 0x16F0, size 0xC, align 4
    bool m_bAirCast; // offset 0x16FC, size 0x1, align 1
    char _pad_16FD[0x583]; // offset 0x16FD
};
