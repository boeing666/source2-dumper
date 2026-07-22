#pragma once

class CFuncRotator : public CBaseModelEntity /*0x0*/  // sizeof 0xBD0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA54]; // offset 0x0
    CFuncRotator::Rotate_t m_eRotateType; // offset 0xA54, size 0x4, align 4
    bool m_bIsRotating; // offset 0xA58, size 0x1, align 1
    SolidType_t m_eSolidType; // offset 0xA59, size 0x1, align 1
    char _pad_0A5A[0x2]; // offset 0xA5A
    float32 m_flSpeed; // offset 0xA5C, size 0x4, align 4
    float32 m_flTimeToCompleteRotation; // offset 0xA60, size 0x4, align 4
    CHandle< CBaseEntity > m_hRotatorTarget; // offset 0xA64, size 0x4, align 4
    CUtlSymbolLarge m_strRotatorTarget; // offset 0xA68, size 0x8, align 8
    CUtlVector< Quaternion > m_vecLocalRotationHistory; // offset 0xA70, size 0x18, align 8
    CEntityIOOutput m_OnRotationStarted; // offset 0xA88, size 0x18, align 255
    CEntityIOOutput m_OnRotationCompleted; // offset 0xAA0, size 0x18, align 255
    CEntityIOOutput m_OnOscillate; // offset 0xAB8, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartArrive; // offset 0xAD0, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartDepart; // offset 0xAE8, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndArrive; // offset 0xB00, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndDepart; // offset 0xB18, size 0x18, align 255
    GameTick_t m_nTickRotateRan; // offset 0xB30, size 0x4, align 255
    bool m_bStartedRotating; // offset 0xB34, size 0x1, align 1
    char _pad_0B35[0x3]; // offset 0xB35
    FuncRotatorRotationSummary_t m_rotationSummary; // offset 0xB38, size 0x8, align 4
    float32 m_flTimeToReachMaxSpeed; // offset 0xB40, size 0x4, align 4
    float32 m_flTimeToReachZeroSpeed; // offset 0xB44, size 0x4, align 4
    GameTime_t m_flTimeRotationStart; // offset 0xB48, size 0x4, align 255
    GameTime_t m_flTimeRotationStop; // offset 0xB4C, size 0x4, align 255
    float32 m_flStartSpeed; // offset 0xB50, size 0x4, align 4
    char _pad_0B54[0xC]; // offset 0xB54
    Quaternion m_qSpawnOrientation; // offset 0xB60, size 0x10, align 16
    bool m_bRecordHistory; // offset 0xB70, size 0x1, align 1
    bool m_bReturningToPreviousRotation; // offset 0xB71, size 0x1, align 1
    bool m_bReturningToInitialRotation; // offset 0xB72, size 0x1, align 1
    char _pad_0B73[0x1]; // offset 0xB73
    float32 m_flMinYawRotation; // offset 0xB74, size 0x4, align 4
    float32 m_flMaxYawRotation; // offset 0xB78, size 0x4, align 4
    int32 m_nOscillationCount; // offset 0xB7C, size 0x4, align 4
    bool m_bOscillationFromStart; // offset 0xB80, size 0x1, align 1
    char _pad_0B81[0x7]; // offset 0xB81
    CGameSoundEventName m_iszStartSound; // offset 0xB88, size 0x8, align 8
    CGameSoundEventName m_iszLoopSound; // offset 0xB90, size 0x8, align 8
    char _pad_0B98[0x18]; // offset 0xB98
    CGameSoundEventName m_iszStopSound; // offset 0xBB0, size 0x8, align 8
    float32 m_flTargetAngle; // offset 0xBB8, size 0x4, align 4
    float32 m_flCurrentAngle; // offset 0xBBC, size 0x4, align 4
    CFuncRotator::RotationAxis_t m_eRotationAxis; // offset 0xBC0, size 0x4, align 4
    float32 m_flSpeedDriftFromOverRotate; // offset 0xBC4, size 0x4, align 4
    char _pad_0BC8[0x8]; // offset 0xBC8
};
