#pragma once

class CDOTA_RoshanSpawner : public CPointEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bIsRoshanAlive; // offset 0x778, size 0x1, align 1
    bool m_bSpawnRequested; // offset 0x779, size 0x1, align 1
    char _pad_077A[0x2]; // offset 0x77A
    GameTime_t m_fRoshanKillTime; // offset 0x77C, size 0x4, align 255
    int32 m_nSentRoshReclaim; // offset 0x780, size 0x4, align 4
    int32 m_nSentRoshRespawn; // offset 0x784, size 0x4, align 4
    float32 m_fRoshanRespawnDuration; // offset 0x788, size 0x4, align 4
    int32 m_iLastKillerTeam; // offset 0x78C, size 0x4, align 4
    int32 m_iKillCount; // offset 0x790, size 0x4, align 4
    CHandle< CBaseEntity > m_hRoshan; // offset 0x794, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x798, size 0x4, align 255
    ParticleIndex_t m_nFXIndex2; // offset 0x79C, size 0x4, align 255
};
