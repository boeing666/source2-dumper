#pragma once

class CFuncTrackTrain : public CBaseModelEntity /*0x0*/  // sizeof 0xCC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB9C]; // offset 0x0
    CHandle< CPathTrack > m_ppath; // offset 0xB9C, size 0x4, align 4
    float32 m_length; // offset 0xBA0, size 0x4, align 4
    Vector m_vPosPrev; // offset 0xBA4, size 0xC, align 4
    QAngle m_angPrev; // offset 0xBB0, size 0xC, align 4
    float32 m_flSpeed; // offset 0xBBC, size 0x4, align 4
    Vector m_controlMins; // offset 0xBC0, size 0xC, align 4
    Vector m_controlMaxs; // offset 0xBCC, size 0xC, align 4
    VectorWS m_lastBlockPos; // offset 0xBD8, size 0xC, align 4 | MNotSaved
    int32 m_lastBlockTick; // offset 0xBE4, size 0x4, align 4 | MNotSaved
    float32 m_flVolume; // offset 0xBE8, size 0x4, align 4
    float32 m_flBank; // offset 0xBEC, size 0x4, align 4
    float32 m_oldSpeed; // offset 0xBF0, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0xBF4, size 0x4, align 4
    float32 m_height; // offset 0xBF8, size 0x4, align 4
    float32 m_maxSpeed; // offset 0xBFC, size 0x4, align 4
    float32 m_dir; // offset 0xC00, size 0x4, align 4
    char _pad_0C04[0x4]; // offset 0xC04
    CGameSoundEventName m_iszSoundMove; // offset 0xC08, size 0x8, align 8
    CGameSoundEventName m_iszSoundMovePing; // offset 0xC10, size 0x8, align 8
    CGameSoundEventName m_iszSoundStart; // offset 0xC18, size 0x8, align 8
    CGameSoundEventName m_iszSoundStop; // offset 0xC20, size 0x8, align 8
    CGameSoundEventName m_strPathTarget; // offset 0xC28, size 0x8, align 8
    float32 m_flMoveSoundMinDuration; // offset 0xC30, size 0x4, align 4
    float32 m_flMoveSoundMaxDuration; // offset 0xC34, size 0x4, align 4
    GameTime_t m_flNextMoveSoundTime; // offset 0xC38, size 0x4, align 255
    float32 m_flMoveSoundMinPitch; // offset 0xC3C, size 0x4, align 4
    float32 m_flMoveSoundMaxPitch; // offset 0xC40, size 0x4, align 4
    TrainOrientationType_t m_eOrientationType; // offset 0xC44, size 0x4, align 4
    TrainVelocityType_t m_eVelocityType; // offset 0xC48, size 0x4, align 4
    char _pad_0C4C[0x14]; // offset 0xC4C
    CEntityIOOutput m_OnStart; // offset 0xC60, size 0x18, align 255
    CEntityIOOutput m_OnNext; // offset 0xC78, size 0x18, align 255
    CEntityIOOutput m_OnArrivedAtDestinationNode; // offset 0xC90, size 0x18, align 255
    bool m_bManualSpeedChanges; // offset 0xCA8, size 0x1, align 1
    char _pad_0CA9[0x3]; // offset 0xCA9
    float32 m_flDesiredSpeed; // offset 0xCAC, size 0x4, align 4 | MNotSaved
    GameTime_t m_flSpeedChangeTime; // offset 0xCB0, size 0x4, align 255 | MNotSaved
    float32 m_flAccelSpeed; // offset 0xCB4, size 0x4, align 4
    float32 m_flDecelSpeed; // offset 0xCB8, size 0x4, align 4
    bool m_bAccelToSpeed; // offset 0xCBC, size 0x1, align 1 | MNotSaved
    char _pad_0CBD[0x3]; // offset 0xCBD
    GameTime_t m_flNextMPSoundTime; // offset 0xCC0, size 0x4, align 255 | MNotSaved
    char _pad_0CC4[0x4]; // offset 0xCC4
};
