#pragma once

class CFuncTrackTrain : public CBaseModelEntity /*0x0*/  // sizeof 0xB78, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA4C]; // offset 0x0
    CHandle< CPathTrack > m_ppath; // offset 0xA4C, size 0x4, align 4
    float32 m_length; // offset 0xA50, size 0x4, align 4
    Vector m_vPosPrev; // offset 0xA54, size 0xC, align 4
    QAngle m_angPrev; // offset 0xA60, size 0xC, align 4
    float32 m_flSpeed; // offset 0xA6C, size 0x4, align 4
    Vector m_controlMins; // offset 0xA70, size 0xC, align 4
    Vector m_controlMaxs; // offset 0xA7C, size 0xC, align 4
    VectorWS m_lastBlockPos; // offset 0xA88, size 0xC, align 4 | MNotSaved
    int32 m_lastBlockTick; // offset 0xA94, size 0x4, align 4 | MNotSaved
    float32 m_flVolume; // offset 0xA98, size 0x4, align 4
    float32 m_flBank; // offset 0xA9C, size 0x4, align 4
    float32 m_oldSpeed; // offset 0xAA0, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0xAA4, size 0x4, align 4
    float32 m_height; // offset 0xAA8, size 0x4, align 4
    float32 m_maxSpeed; // offset 0xAAC, size 0x4, align 4
    float32 m_dir; // offset 0xAB0, size 0x4, align 4
    char _pad_0AB4[0x4]; // offset 0xAB4
    CGameSoundEventName m_iszSoundMove; // offset 0xAB8, size 0x8, align 8
    CGameSoundEventName m_iszSoundMovePing; // offset 0xAC0, size 0x8, align 8
    CGameSoundEventName m_iszSoundStart; // offset 0xAC8, size 0x8, align 8
    CGameSoundEventName m_iszSoundStop; // offset 0xAD0, size 0x8, align 8
    CGameSoundEventName m_strPathTarget; // offset 0xAD8, size 0x8, align 8
    float32 m_flMoveSoundMinDuration; // offset 0xAE0, size 0x4, align 4
    float32 m_flMoveSoundMaxDuration; // offset 0xAE4, size 0x4, align 4
    GameTime_t m_flNextMoveSoundTime; // offset 0xAE8, size 0x4, align 255
    float32 m_flMoveSoundMinPitch; // offset 0xAEC, size 0x4, align 4
    float32 m_flMoveSoundMaxPitch; // offset 0xAF0, size 0x4, align 4
    TrainOrientationType_t m_eOrientationType; // offset 0xAF4, size 0x4, align 4
    TrainVelocityType_t m_eVelocityType; // offset 0xAF8, size 0x4, align 4
    char _pad_0AFC[0x14]; // offset 0xAFC
    CEntityIOOutput m_OnStart; // offset 0xB10, size 0x18, align 255
    CEntityIOOutput m_OnNext; // offset 0xB28, size 0x18, align 255
    CEntityIOOutput m_OnArrivedAtDestinationNode; // offset 0xB40, size 0x18, align 255
    bool m_bManualSpeedChanges; // offset 0xB58, size 0x1, align 1
    char _pad_0B59[0x3]; // offset 0xB59
    float32 m_flDesiredSpeed; // offset 0xB5C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flSpeedChangeTime; // offset 0xB60, size 0x4, align 255 | MNotSaved
    float32 m_flAccelSpeed; // offset 0xB64, size 0x4, align 4
    float32 m_flDecelSpeed; // offset 0xB68, size 0x4, align 4
    bool m_bAccelToSpeed; // offset 0xB6C, size 0x1, align 1 | MNotSaved
    char _pad_0B6D[0x3]; // offset 0xB6D
    GameTime_t m_flNextMPSoundTime; // offset 0xB70, size 0x4, align 255 | MNotSaved
    char _pad_0B74[0x4]; // offset 0xB74
};
