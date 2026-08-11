#pragma once

class CCitadel_Ability_Chrono_TimeWall : public CCitadelBaseAbility /*0x0*/  // sizeof 0x13A0, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CHandle< CCitadelBulletTimeWarp > m_hWall; // offset 0xF70, size 0x4, align 4
    Vector vecDir; // offset 0xF74, size 0xC, align 4
    ParticleIndex_t m_hChargingParticle; // offset 0xF80, size 0x4, align 255
    VectorWS m_vSpawnPos; // offset 0xF84, size 0xC, align 4
    QAngle m_qAngles; // offset 0xF90, size 0xC, align 4
    bool m_bAirCast; // offset 0xF9C, size 0x1, align 1 | MNetworkEnable
    char _pad_0F9D[0x403]; // offset 0xF9D
};
