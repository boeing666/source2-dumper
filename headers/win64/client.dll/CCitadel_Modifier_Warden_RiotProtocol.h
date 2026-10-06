#pragma once

class CCitadel_Modifier_Warden_RiotProtocol : public CCitadelModifier /*0x0*/  // sizeof 0x648, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    CUtlOrderedMap< CHandle< C_BaseEntity >, GameTime_t > m_mapEntToTimeHit; // offset 0x138, size 0x28, align 8
    int32 m_nNumPlayersAffected; // offset 0x160, size 0x4, align 4
    int32 m_nNumPlayersKilled; // offset 0x164, size 0x4, align 4
    QAngle m_playerAngles; // offset 0x168, size 0xC, align 4
    ParticleIndex_t m_ConeParticle; // offset 0x174, size 0x4, align 255
    char _pad_0178[0x4D0]; // offset 0x178
};
