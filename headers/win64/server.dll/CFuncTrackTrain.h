#pragma once

class CFuncTrackTrain : public CBaseModelEntity /*0x0*/  // sizeof 0x9E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    CHandle< CPathTrack > m_ppath; // offset 0x8B8, size 0x4, align 4
    float32 m_length; // offset 0x8BC, size 0x4, align 4
    Vector m_vPosPrev; // offset 0x8C0, size 0xC, align 4
    QAngle m_angPrev; // offset 0x8CC, size 0xC, align 4
    float32 m_flSpeed; // offset 0x8D8, size 0x4, align 4
    Vector m_controlMins; // offset 0x8DC, size 0xC, align 4
    Vector m_controlMaxs; // offset 0x8E8, size 0xC, align 4
    VectorWS m_lastBlockPos; // offset 0x8F4, size 0xC, align 4 | MNotSaved
    int32 m_lastBlockTick; // offset 0x900, size 0x4, align 4 | MNotSaved
    float32 m_flVolume; // offset 0x904, size 0x4, align 4
    float32 m_flBank; // offset 0x908, size 0x4, align 4
    float32 m_oldSpeed; // offset 0x90C, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0x910, size 0x4, align 4
    float32 m_height; // offset 0x914, size 0x4, align 4
    float32 m_maxSpeed; // offset 0x918, size 0x4, align 4
    float32 m_dir; // offset 0x91C, size 0x4, align 4
    CGameSoundEventName m_iszSoundMove; // offset 0x920, size 0x8, align 8
    CGameSoundEventName m_iszSoundMovePing; // offset 0x928, size 0x8, align 8
    CGameSoundEventName m_iszSoundStart; // offset 0x930, size 0x8, align 8
    CGameSoundEventName m_iszSoundStop; // offset 0x938, size 0x8, align 8
    CGameSoundEventName m_strPathTarget; // offset 0x940, size 0x8, align 8
    float32 m_flMoveSoundMinDuration; // offset 0x948, size 0x4, align 4
    float32 m_flMoveSoundMaxDuration; // offset 0x94C, size 0x4, align 4
    GameTime_t m_flNextMoveSoundTime; // offset 0x950, size 0x4, align 255
    float32 m_flMoveSoundMinPitch; // offset 0x954, size 0x4, align 4
    float32 m_flMoveSoundMaxPitch; // offset 0x958, size 0x4, align 4
    TrainOrientationType_t m_eOrientationType; // offset 0x95C, size 0x4, align 4
    TrainVelocityType_t m_eVelocityType; // offset 0x960, size 0x4, align 4
    char _pad_0964[0x14]; // offset 0x964
    CEntityIOOutput m_OnStart; // offset 0x978, size 0x18, align 255
    CEntityIOOutput m_OnNext; // offset 0x990, size 0x18, align 255
    CEntityIOOutput m_OnArrivedAtDestinationNode; // offset 0x9A8, size 0x18, align 255
    bool m_bManualSpeedChanges; // offset 0x9C0, size 0x1, align 1
    char _pad_09C1[0x3]; // offset 0x9C1
    float32 m_flDesiredSpeed; // offset 0x9C4, size 0x4, align 4 | MNotSaved
    GameTime_t m_flSpeedChangeTime; // offset 0x9C8, size 0x4, align 255 | MNotSaved
    float32 m_flAccelSpeed; // offset 0x9CC, size 0x4, align 4
    float32 m_flDecelSpeed; // offset 0x9D0, size 0x4, align 4
    bool m_bAccelToSpeed; // offset 0x9D4, size 0x1, align 1 | MNotSaved
    char _pad_09D5[0x3]; // offset 0x9D5
    GameTime_t m_flNextMPSoundTime; // offset 0x9D8, size 0x4, align 255 | MNotSaved
    char _pad_09DC[0x4]; // offset 0x9DC
};
