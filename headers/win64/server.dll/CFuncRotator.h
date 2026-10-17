#pragma once

class CFuncRotator : public CBaseModelEntity /*0x0*/  // sizeof 0x9E0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x858]; // offset 0x0
    CFuncRotator::Rotate_t m_eRotateType; // offset 0x858, size 0x4, align 4
    bool m_bIsRotating; // offset 0x85C, size 0x1, align 1
    SolidType_t m_eSolidType; // offset 0x85D, size 0x1, align 1
    char _pad_085E[0x2]; // offset 0x85E
    float32 m_flSpeed; // offset 0x860, size 0x4, align 4
    float32 m_flRotationDistanceDegrees; // offset 0x864, size 0x4, align 4
    float32 m_flTimeToCompleteRotation; // offset 0x868, size 0x4, align 4
    CHandle< CBaseEntity > m_hRotatorTarget; // offset 0x86C, size 0x4, align 4
    CUtlSymbolLarge m_strRotatorTarget; // offset 0x870, size 0x8, align 8
    CEntityIOOutput m_OnRotationStarted; // offset 0x878, size 0x18, align 255
    CEntityIOOutput m_OnRotationCompleted; // offset 0x890, size 0x18, align 255
    CEntityIOOutput m_OnOscillate; // offset 0x8A8, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartArrive; // offset 0x8C0, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartDepart; // offset 0x8D8, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndArrive; // offset 0x8F0, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndDepart; // offset 0x908, size 0x18, align 255
    GameTick_t m_nTickRotateRan; // offset 0x920, size 0x4, align 255
    bool m_bStartedRotating; // offset 0x924, size 0x1, align 1
    char _pad_0925[0x3]; // offset 0x925
    FuncRotatorRotationSummary_t m_rotationSummary; // offset 0x928, size 0x8, align 4
    float32 m_flTimeToReachMaxSpeed; // offset 0x930, size 0x4, align 4
    float32 m_flTimeToReachZeroSpeed; // offset 0x934, size 0x4, align 4
    GameTime_t m_flTimeRotationStart; // offset 0x938, size 0x4, align 255
    GameTime_t m_flTimeRotationStop; // offset 0x93C, size 0x4, align 255
    float32 m_flStartSpeed; // offset 0x940, size 0x4, align 4
    char _pad_0944[0xC]; // offset 0x944
    Quaternion m_qLocalOrientation; // offset 0x950, size 0x10, align 16
    QAngle m_angLastWrittenLocal; // offset 0x960, size 0xC, align 4
    char _pad_096C[0x4]; // offset 0x96C
    Quaternion m_qSpawnOrientation; // offset 0x970, size 0x10, align 16
    bool m_bReturningToInitialRotation; // offset 0x980, size 0x1, align 1
    char _pad_0981[0x3]; // offset 0x981
    float32 m_flMinYawRotation; // offset 0x984, size 0x4, align 4
    float32 m_flMaxYawRotation; // offset 0x988, size 0x4, align 4
    bool m_bOscillationFromStart; // offset 0x98C, size 0x1, align 1
    char _pad_098D[0x3]; // offset 0x98D
    CGameSoundEventName m_iszStartSound; // offset 0x990, size 0x8, align 8
    CGameSoundEventName m_iszLoopSound; // offset 0x998, size 0x8, align 8
    char _pad_09A0[0x18]; // offset 0x9A0
    CGameSoundEventName m_iszStopSound; // offset 0x9B8, size 0x8, align 8
    float32 m_flTargetAngle; // offset 0x9C0, size 0x4, align 4
    float32 m_flCurrentAngle; // offset 0x9C4, size 0x4, align 4
    CFuncRotator::RotationAxis_t m_eRotationAxis; // offset 0x9C8, size 0x4, align 4
    float32 m_flSpeedDriftFromOverRotate; // offset 0x9CC, size 0x4, align 4
    bool m_bQueueStop; // offset 0x9D0, size 0x1, align 1
    char _pad_09D1[0xF]; // offset 0x9D1
};
