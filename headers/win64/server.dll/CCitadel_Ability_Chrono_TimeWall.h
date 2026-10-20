#pragma once

class CCitadel_Ability_Chrono_TimeWall : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1A58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CHandle< CCitadelBulletTimeWarp > m_hWall; // offset 0x14A8, size 0x4, align 4
    Vector vecDir; // offset 0x14AC, size 0xC, align 4
    ParticleIndex_t m_hChargingParticle; // offset 0x14B8, size 0x4, align 255
    VectorWS m_vSpawnPos; // offset 0x14BC, size 0xC, align 4
    QAngle m_qAngles; // offset 0x14C8, size 0xC, align 4
    bool m_bAirCast; // offset 0x14D4, size 0x1, align 1
    char _pad_14D5[0x583]; // offset 0x14D5
};
