#pragma once

class CFuncTrackTrain : public CBaseModelEntity /*0x0*/  // sizeof 0xB80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA54]; // offset 0x0
    CHandle< CPathTrack > m_ppath; // offset 0xA54, size 0x4, align 4
    float32 m_length; // offset 0xA58, size 0x4, align 4
    Vector m_vPosPrev; // offset 0xA5C, size 0xC, align 4
    QAngle m_angPrev; // offset 0xA68, size 0xC, align 4
    float32 m_flSpeed; // offset 0xA74, size 0x4, align 4
    Vector m_controlMins; // offset 0xA78, size 0xC, align 4
    Vector m_controlMaxs; // offset 0xA84, size 0xC, align 4
    VectorWS m_lastBlockPos; // offset 0xA90, size 0xC, align 4 | MNotSaved
    int32 m_lastBlockTick; // offset 0xA9C, size 0x4, align 4 | MNotSaved
    float32 m_flVolume; // offset 0xAA0, size 0x4, align 4
    float32 m_flBank; // offset 0xAA4, size 0x4, align 4
    float32 m_oldSpeed; // offset 0xAA8, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0xAAC, size 0x4, align 4
    float32 m_height; // offset 0xAB0, size 0x4, align 4
    float32 m_maxSpeed; // offset 0xAB4, size 0x4, align 4
    float32 m_dir; // offset 0xAB8, size 0x4, align 4
    char _pad_0ABC[0x4]; // offset 0xABC
    CGameSoundEventName m_iszSoundMove; // offset 0xAC0, size 0x8, align 8
    CGameSoundEventName m_iszSoundMovePing; // offset 0xAC8, size 0x8, align 8
    CGameSoundEventName m_iszSoundStart; // offset 0xAD0, size 0x8, align 8
    CGameSoundEventName m_iszSoundStop; // offset 0xAD8, size 0x8, align 8
    CGameSoundEventName m_strPathTarget; // offset 0xAE0, size 0x8, align 8
    float32 m_flMoveSoundMinDuration; // offset 0xAE8, size 0x4, align 4
    float32 m_flMoveSoundMaxDuration; // offset 0xAEC, size 0x4, align 4
    GameTime_t m_flNextMoveSoundTime; // offset 0xAF0, size 0x4, align 255
    float32 m_flMoveSoundMinPitch; // offset 0xAF4, size 0x4, align 4
    float32 m_flMoveSoundMaxPitch; // offset 0xAF8, size 0x4, align 4
    TrainOrientationType_t m_eOrientationType; // offset 0xAFC, size 0x4, align 4
    TrainVelocityType_t m_eVelocityType; // offset 0xB00, size 0x4, align 4
    char _pad_0B04[0x14]; // offset 0xB04
    CEntityIOOutput m_OnStart; // offset 0xB18, size 0x18, align 255
    CEntityIOOutput m_OnNext; // offset 0xB30, size 0x18, align 255
    CEntityIOOutput m_OnArrivedAtDestinationNode; // offset 0xB48, size 0x18, align 255
    bool m_bManualSpeedChanges; // offset 0xB60, size 0x1, align 1
    char _pad_0B61[0x3]; // offset 0xB61
    float32 m_flDesiredSpeed; // offset 0xB64, size 0x4, align 4 | MNotSaved
    GameTime_t m_flSpeedChangeTime; // offset 0xB68, size 0x4, align 255 | MNotSaved
    float32 m_flAccelSpeed; // offset 0xB6C, size 0x4, align 4
    float32 m_flDecelSpeed; // offset 0xB70, size 0x4, align 4
    bool m_bAccelToSpeed; // offset 0xB74, size 0x1, align 1 | MNotSaved
    char _pad_0B75[0x3]; // offset 0xB75
    GameTime_t m_flNextMPSoundTime; // offset 0xB78, size 0x4, align 255 | MNotSaved
    char _pad_0B7C[0x4]; // offset 0xB7C
};
