#pragma once

class CFuncTrackTrain : public CBaseModelEntity /*0x0*/  // sizeof 0x978, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    CHandle< CPathTrack > m_ppath; // offset 0x850, size 0x4, align 4
    float32 m_length; // offset 0x854, size 0x4, align 4
    Vector m_vPosPrev; // offset 0x858, size 0xC, align 4
    QAngle m_angPrev; // offset 0x864, size 0xC, align 4
    float32 m_flSpeed; // offset 0x870, size 0x4, align 4
    Vector m_controlMins; // offset 0x874, size 0xC, align 4
    Vector m_controlMaxs; // offset 0x880, size 0xC, align 4
    VectorWS m_lastBlockPos; // offset 0x88C, size 0xC, align 4 | MNotSaved
    int32 m_lastBlockTick; // offset 0x898, size 0x4, align 4 | MNotSaved
    float32 m_flVolume; // offset 0x89C, size 0x4, align 4
    float32 m_flBank; // offset 0x8A0, size 0x4, align 4
    float32 m_oldSpeed; // offset 0x8A4, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0x8A8, size 0x4, align 4
    float32 m_height; // offset 0x8AC, size 0x4, align 4
    float32 m_maxSpeed; // offset 0x8B0, size 0x4, align 4
    float32 m_dir; // offset 0x8B4, size 0x4, align 4
    CGameSoundEventName m_iszSoundMove; // offset 0x8B8, size 0x8, align 8
    CGameSoundEventName m_iszSoundMovePing; // offset 0x8C0, size 0x8, align 8
    CGameSoundEventName m_iszSoundStart; // offset 0x8C8, size 0x8, align 8
    CGameSoundEventName m_iszSoundStop; // offset 0x8D0, size 0x8, align 8
    CGameSoundEventName m_strPathTarget; // offset 0x8D8, size 0x8, align 8
    float32 m_flMoveSoundMinDuration; // offset 0x8E0, size 0x4, align 4
    float32 m_flMoveSoundMaxDuration; // offset 0x8E4, size 0x4, align 4
    GameTime_t m_flNextMoveSoundTime; // offset 0x8E8, size 0x4, align 255
    float32 m_flMoveSoundMinPitch; // offset 0x8EC, size 0x4, align 4
    float32 m_flMoveSoundMaxPitch; // offset 0x8F0, size 0x4, align 4
    TrainOrientationType_t m_eOrientationType; // offset 0x8F4, size 0x4, align 4
    TrainVelocityType_t m_eVelocityType; // offset 0x8F8, size 0x4, align 4
    char _pad_08FC[0x14]; // offset 0x8FC
    CEntityIOOutput m_OnStart; // offset 0x910, size 0x18, align 255
    CEntityIOOutput m_OnNext; // offset 0x928, size 0x18, align 255
    CEntityIOOutput m_OnArrivedAtDestinationNode; // offset 0x940, size 0x18, align 255
    bool m_bManualSpeedChanges; // offset 0x958, size 0x1, align 1
    char _pad_0959[0x3]; // offset 0x959
    float32 m_flDesiredSpeed; // offset 0x95C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flSpeedChangeTime; // offset 0x960, size 0x4, align 255 | MNotSaved
    float32 m_flAccelSpeed; // offset 0x964, size 0x4, align 4
    float32 m_flDecelSpeed; // offset 0x968, size 0x4, align 4
    bool m_bAccelToSpeed; // offset 0x96C, size 0x1, align 1 | MNotSaved
    char _pad_096D[0x3]; // offset 0x96D
    GameTime_t m_flNextMPSoundTime; // offset 0x970, size 0x4, align 255 | MNotSaved
    char _pad_0974[0x4]; // offset 0x974
};
