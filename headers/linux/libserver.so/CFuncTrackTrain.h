#pragma once

class CFuncTrackTrain : public CBaseModelEntity /*0x0*/  // sizeof 0xC58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    CHandle< CPathTrack > m_ppath; // offset 0xB2C, size 0x4, align 4
    float32 m_length; // offset 0xB30, size 0x4, align 4
    Vector m_vPosPrev; // offset 0xB34, size 0xC, align 4
    QAngle m_angPrev; // offset 0xB40, size 0xC, align 4
    float32 m_flSpeed; // offset 0xB4C, size 0x4, align 4
    Vector m_controlMins; // offset 0xB50, size 0xC, align 4
    Vector m_controlMaxs; // offset 0xB5C, size 0xC, align 4
    VectorWS m_lastBlockPos; // offset 0xB68, size 0xC, align 4 | MNotSaved
    int32 m_lastBlockTick; // offset 0xB74, size 0x4, align 4 | MNotSaved
    float32 m_flVolume; // offset 0xB78, size 0x4, align 4
    float32 m_flBank; // offset 0xB7C, size 0x4, align 4
    float32 m_oldSpeed; // offset 0xB80, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0xB84, size 0x4, align 4
    float32 m_height; // offset 0xB88, size 0x4, align 4
    float32 m_maxSpeed; // offset 0xB8C, size 0x4, align 4
    float32 m_dir; // offset 0xB90, size 0x4, align 4
    char _pad_0B94[0x4]; // offset 0xB94
    CGameSoundEventName m_iszSoundMove; // offset 0xB98, size 0x8, align 8
    CGameSoundEventName m_iszSoundMovePing; // offset 0xBA0, size 0x8, align 8
    CGameSoundEventName m_iszSoundStart; // offset 0xBA8, size 0x8, align 8
    CGameSoundEventName m_iszSoundStop; // offset 0xBB0, size 0x8, align 8
    CGameSoundEventName m_strPathTarget; // offset 0xBB8, size 0x8, align 8
    float32 m_flMoveSoundMinDuration; // offset 0xBC0, size 0x4, align 4
    float32 m_flMoveSoundMaxDuration; // offset 0xBC4, size 0x4, align 4
    GameTime_t m_flNextMoveSoundTime; // offset 0xBC8, size 0x4, align 255
    float32 m_flMoveSoundMinPitch; // offset 0xBCC, size 0x4, align 4
    float32 m_flMoveSoundMaxPitch; // offset 0xBD0, size 0x4, align 4
    TrainOrientationType_t m_eOrientationType; // offset 0xBD4, size 0x4, align 4
    TrainVelocityType_t m_eVelocityType; // offset 0xBD8, size 0x4, align 4
    char _pad_0BDC[0x14]; // offset 0xBDC
    CEntityIOOutput m_OnStart; // offset 0xBF0, size 0x18, align 255
    CEntityIOOutput m_OnNext; // offset 0xC08, size 0x18, align 255
    CEntityIOOutput m_OnArrivedAtDestinationNode; // offset 0xC20, size 0x18, align 255
    bool m_bManualSpeedChanges; // offset 0xC38, size 0x1, align 1
    char _pad_0C39[0x3]; // offset 0xC39
    float32 m_flDesiredSpeed; // offset 0xC3C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flSpeedChangeTime; // offset 0xC40, size 0x4, align 255 | MNotSaved
    float32 m_flAccelSpeed; // offset 0xC44, size 0x4, align 4
    float32 m_flDecelSpeed; // offset 0xC48, size 0x4, align 4
    bool m_bAccelToSpeed; // offset 0xC4C, size 0x1, align 1 | MNotSaved
    char _pad_0C4D[0x3]; // offset 0xC4D
    GameTime_t m_flNextMPSoundTime; // offset 0xC50, size 0x4, align 255 | MNotSaved
    char _pad_0C54[0x4]; // offset 0xC54
};
