#pragma once

class CDOTA_RoshanSpawner : public CPointEntity /*0x0*/  // sizeof 0x4C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    bool m_bIsRoshanAlive; // offset 0x498, size 0x1, align 1
    bool m_bSpawnRequested; // offset 0x499, size 0x1, align 1
    char _pad_049A[0x2]; // offset 0x49A
    GameTime_t m_fRoshanKillTime; // offset 0x49C, size 0x4, align 255
    int32 m_nSentRoshReclaim; // offset 0x4A0, size 0x4, align 4
    int32 m_nSentRoshRespawn; // offset 0x4A4, size 0x4, align 4
    float32 m_fRoshanRespawnDuration; // offset 0x4A8, size 0x4, align 4
    int32 m_iLastKillerTeam; // offset 0x4AC, size 0x4, align 4
    int32 m_iKillCount; // offset 0x4B0, size 0x4, align 4
    CHandle< CBaseEntity > m_hRoshan; // offset 0x4B4, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x4B8, size 0x4, align 255
    ParticleIndex_t m_nFXIndex2; // offset 0x4BC, size 0x4, align 255
};
