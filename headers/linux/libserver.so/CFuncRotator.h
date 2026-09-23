#pragma once

class CFuncRotator : public CBaseModelEntity /*0x0*/  // sizeof 0xC90, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    CFuncRotator::Rotate_t m_eRotateType; // offset 0xB2C, size 0x4, align 4
    bool m_bIsRotating; // offset 0xB30, size 0x1, align 1
    SolidType_t m_eSolidType; // offset 0xB31, size 0x1, align 1
    char _pad_0B32[0x2]; // offset 0xB32
    float32 m_flSpeed; // offset 0xB34, size 0x4, align 4
    float32 m_flRotationDistanceDegrees; // offset 0xB38, size 0x4, align 4
    float32 m_flTimeToCompleteRotation; // offset 0xB3C, size 0x4, align 4
    CHandle< CBaseEntity > m_hRotatorTarget; // offset 0xB40, size 0x4, align 4
    char _pad_0B44[0x4]; // offset 0xB44
    CUtlSymbolLarge m_strRotatorTarget; // offset 0xB48, size 0x8, align 8
    CEntityIOOutput m_OnRotationStarted; // offset 0xB50, size 0x18, align 255
    CEntityIOOutput m_OnRotationCompleted; // offset 0xB68, size 0x18, align 255
    CEntityIOOutput m_OnOscillate; // offset 0xB80, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartArrive; // offset 0xB98, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartDepart; // offset 0xBB0, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndArrive; // offset 0xBC8, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndDepart; // offset 0xBE0, size 0x18, align 255
    GameTick_t m_nTickRotateRan; // offset 0xBF8, size 0x4, align 255
    bool m_bStartedRotating; // offset 0xBFC, size 0x1, align 1
    char _pad_0BFD[0x3]; // offset 0xBFD
    FuncRotatorRotationSummary_t m_rotationSummary; // offset 0xC00, size 0x8, align 4
    float32 m_flTimeToReachMaxSpeed; // offset 0xC08, size 0x4, align 4
    float32 m_flTimeToReachZeroSpeed; // offset 0xC0C, size 0x4, align 4
    GameTime_t m_flTimeRotationStart; // offset 0xC10, size 0x4, align 255
    GameTime_t m_flTimeRotationStop; // offset 0xC14, size 0x4, align 255
    float32 m_flStartSpeed; // offset 0xC18, size 0x4, align 4
    char _pad_0C1C[0x4]; // offset 0xC1C
    Quaternion m_qSpawnOrientation; // offset 0xC20, size 0x10, align 16
    bool m_bReturningToInitialRotation; // offset 0xC30, size 0x1, align 1
    char _pad_0C31[0x3]; // offset 0xC31
    float32 m_flMinYawRotation; // offset 0xC34, size 0x4, align 4
    float32 m_flMaxYawRotation; // offset 0xC38, size 0x4, align 4
    bool m_bOscillationFromStart; // offset 0xC3C, size 0x1, align 1
    char _pad_0C3D[0x3]; // offset 0xC3D
    CGameSoundEventName m_iszStartSound; // offset 0xC40, size 0x8, align 8
    CGameSoundEventName m_iszLoopSound; // offset 0xC48, size 0x8, align 8
    char _pad_0C50[0x18]; // offset 0xC50
    CGameSoundEventName m_iszStopSound; // offset 0xC68, size 0x8, align 8
    float32 m_flTargetAngle; // offset 0xC70, size 0x4, align 4
    float32 m_flCurrentAngle; // offset 0xC74, size 0x4, align 4
    CFuncRotator::RotationAxis_t m_eRotationAxis; // offset 0xC78, size 0x4, align 4
    float32 m_flSpeedDriftFromOverRotate; // offset 0xC7C, size 0x4, align 4
    bool m_bQueueStop; // offset 0xC80, size 0x1, align 1
    char _pad_0C81[0xF]; // offset 0xC81
};
