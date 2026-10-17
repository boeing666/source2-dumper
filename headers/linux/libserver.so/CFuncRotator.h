#pragma once

class CFuncRotator : public CBaseModelEntity /*0x0*/  // sizeof 0xCC0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB34]; // offset 0x0
    CFuncRotator::Rotate_t m_eRotateType; // offset 0xB34, size 0x4, align 4
    bool m_bIsRotating; // offset 0xB38, size 0x1, align 1
    SolidType_t m_eSolidType; // offset 0xB39, size 0x1, align 1
    char _pad_0B3A[0x2]; // offset 0xB3A
    float32 m_flSpeed; // offset 0xB3C, size 0x4, align 4
    float32 m_flRotationDistanceDegrees; // offset 0xB40, size 0x4, align 4
    float32 m_flTimeToCompleteRotation; // offset 0xB44, size 0x4, align 4
    CHandle< CBaseEntity > m_hRotatorTarget; // offset 0xB48, size 0x4, align 4
    char _pad_0B4C[0x4]; // offset 0xB4C
    CUtlSymbolLarge m_strRotatorTarget; // offset 0xB50, size 0x8, align 8
    CEntityIOOutput m_OnRotationStarted; // offset 0xB58, size 0x18, align 255
    CEntityIOOutput m_OnRotationCompleted; // offset 0xB70, size 0x18, align 255
    CEntityIOOutput m_OnOscillate; // offset 0xB88, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartArrive; // offset 0xBA0, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartDepart; // offset 0xBB8, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndArrive; // offset 0xBD0, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndDepart; // offset 0xBE8, size 0x18, align 255
    GameTick_t m_nTickRotateRan; // offset 0xC00, size 0x4, align 255
    bool m_bStartedRotating; // offset 0xC04, size 0x1, align 1
    char _pad_0C05[0x3]; // offset 0xC05
    FuncRotatorRotationSummary_t m_rotationSummary; // offset 0xC08, size 0x8, align 4
    float32 m_flTimeToReachMaxSpeed; // offset 0xC10, size 0x4, align 4
    float32 m_flTimeToReachZeroSpeed; // offset 0xC14, size 0x4, align 4
    GameTime_t m_flTimeRotationStart; // offset 0xC18, size 0x4, align 255
    GameTime_t m_flTimeRotationStop; // offset 0xC1C, size 0x4, align 255
    float32 m_flStartSpeed; // offset 0xC20, size 0x4, align 4
    char _pad_0C24[0xC]; // offset 0xC24
    Quaternion m_qLocalOrientation; // offset 0xC30, size 0x10, align 16
    QAngle m_angLastWrittenLocal; // offset 0xC40, size 0xC, align 4
    char _pad_0C4C[0x4]; // offset 0xC4C
    Quaternion m_qSpawnOrientation; // offset 0xC50, size 0x10, align 16
    bool m_bReturningToInitialRotation; // offset 0xC60, size 0x1, align 1
    char _pad_0C61[0x3]; // offset 0xC61
    float32 m_flMinYawRotation; // offset 0xC64, size 0x4, align 4
    float32 m_flMaxYawRotation; // offset 0xC68, size 0x4, align 4
    bool m_bOscillationFromStart; // offset 0xC6C, size 0x1, align 1
    char _pad_0C6D[0x3]; // offset 0xC6D
    CGameSoundEventName m_iszStartSound; // offset 0xC70, size 0x8, align 8
    CGameSoundEventName m_iszLoopSound; // offset 0xC78, size 0x8, align 8
    char _pad_0C80[0x18]; // offset 0xC80
    CGameSoundEventName m_iszStopSound; // offset 0xC98, size 0x8, align 8
    float32 m_flTargetAngle; // offset 0xCA0, size 0x4, align 4
    float32 m_flCurrentAngle; // offset 0xCA4, size 0x4, align 4
    CFuncRotator::RotationAxis_t m_eRotationAxis; // offset 0xCA8, size 0x4, align 4
    float32 m_flSpeedDriftFromOverRotate; // offset 0xCAC, size 0x4, align 4
    bool m_bQueueStop; // offset 0xCB0, size 0x1, align 1
    char _pad_0CB1[0xF]; // offset 0xCB1
};
