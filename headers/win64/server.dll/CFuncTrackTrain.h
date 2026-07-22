#pragma once

class CFuncTrackTrain : public CBaseModelEntity /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CHandle< CPathTrack > m_ppath; // offset 0x780, size 0x4, align 4
    float32 m_length; // offset 0x784, size 0x4, align 4
    Vector m_vPosPrev; // offset 0x788, size 0xC, align 4
    QAngle m_angPrev; // offset 0x794, size 0xC, align 4
    Vector m_controlMins; // offset 0x7A0, size 0xC, align 4
    Vector m_controlMaxs; // offset 0x7AC, size 0xC, align 4
    Vector m_lastBlockPos; // offset 0x7B8, size 0xC, align 4 | MNotSaved
    int32 m_lastBlockTick; // offset 0x7C4, size 0x4, align 4 | MNotSaved
    float32 m_flVolume; // offset 0x7C8, size 0x4, align 4
    float32 m_flBank; // offset 0x7CC, size 0x4, align 4
    float32 m_oldSpeed; // offset 0x7D0, size 0x4, align 4
    float32 m_flBlockDamage; // offset 0x7D4, size 0x4, align 4
    float32 m_height; // offset 0x7D8, size 0x4, align 4
    float32 m_maxSpeed; // offset 0x7DC, size 0x4, align 4
    float32 m_dir; // offset 0x7E0, size 0x4, align 4
    char _pad_07E4[0x4]; // offset 0x7E4
    CUtlSymbolLarge m_iszSoundMove; // offset 0x7E8, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundMovePing; // offset 0x7F0, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundStart; // offset 0x7F8, size 0x8, align 8
    CUtlSymbolLarge m_iszSoundStop; // offset 0x800, size 0x8, align 8
    CUtlSymbolLarge m_strPathTarget; // offset 0x808, size 0x8, align 8
    float32 m_flMoveSoundMinDuration; // offset 0x810, size 0x4, align 4
    float32 m_flMoveSoundMaxDuration; // offset 0x814, size 0x4, align 4
    GameTime_t m_flNextMoveSoundTime; // offset 0x818, size 0x4, align 255
    float32 m_flMoveSoundMinPitch; // offset 0x81C, size 0x4, align 4
    float32 m_flMoveSoundMaxPitch; // offset 0x820, size 0x4, align 4
    TrainOrientationType_t m_eOrientationType; // offset 0x824, size 0x4, align 4
    TrainVelocityType_t m_eVelocityType; // offset 0x828, size 0x4, align 4
    char _pad_082C[0x14]; // offset 0x82C
    CEntityIOOutput m_OnStart; // offset 0x840, size 0x18, align 255
    CEntityIOOutput m_OnNext; // offset 0x858, size 0x18, align 255
    CEntityIOOutput m_OnArrivedAtDestinationNode; // offset 0x870, size 0x18, align 255
    bool m_bManualSpeedChanges; // offset 0x888, size 0x1, align 1
    char _pad_0889[0x3]; // offset 0x889
    float32 m_flDesiredSpeed; // offset 0x88C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flSpeedChangeTime; // offset 0x890, size 0x4, align 255 | MNotSaved
    float32 m_flAccelSpeed; // offset 0x894, size 0x4, align 4
    float32 m_flDecelSpeed; // offset 0x898, size 0x4, align 4
    bool m_bAccelToSpeed; // offset 0x89C, size 0x1, align 1 | MNotSaved
    char _pad_089D[0x3]; // offset 0x89D
    GameTime_t m_flNextMPSoundTime; // offset 0x8A0, size 0x4, align 255 | MNotSaved
    char _pad_08A4[0x4]; // offset 0x8A4
};
