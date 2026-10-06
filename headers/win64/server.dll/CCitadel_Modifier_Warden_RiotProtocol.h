#pragma once

class CCitadel_Modifier_Warden_RiotProtocol : public CCitadelModifier /*0x0*/  // sizeof 0x658, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    CUtlOrderedMap< CHandle< CBaseEntity >, GameTime_t > m_mapEntToTimeHit; // offset 0x148, size 0x28, align 8
    int32 m_nNumPlayersAffected; // offset 0x170, size 0x4, align 4
    int32 m_nNumPlayersKilled; // offset 0x174, size 0x4, align 4
    QAngle m_playerAngles; // offset 0x178, size 0xC, align 4
    ParticleIndex_t m_ConeParticle; // offset 0x184, size 0x4, align 255
    char _pad_0188[0x4D0]; // offset 0x188
};
