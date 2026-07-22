#pragma once

class CFuncRotator : public CBaseModelEntity /*0x0*/  // sizeof 0x8F0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CFuncRotator::Rotate_t m_eRotateType; // offset 0x778, size 0x4, align 4
    bool m_bIsRotating; // offset 0x77C, size 0x1, align 1
    SolidType_t m_eSolidType; // offset 0x77D, size 0x1, align 1
    char _pad_077E[0x2]; // offset 0x77E
    float32 m_flSpeed; // offset 0x780, size 0x4, align 4
    float32 m_flTimeToCompleteRotation; // offset 0x784, size 0x4, align 4
    CHandle< CBaseEntity > m_hRotatorTarget; // offset 0x788, size 0x4, align 4
    char _pad_078C[0x4]; // offset 0x78C
    CUtlSymbolLarge m_strRotatorTarget; // offset 0x790, size 0x8, align 8
    CUtlVector< Quaternion > m_vecLocalRotationHistory; // offset 0x798, size 0x18, align 8
    CEntityIOOutput m_OnRotationStarted; // offset 0x7B0, size 0x18, align 255
    CEntityIOOutput m_OnRotationCompleted; // offset 0x7C8, size 0x18, align 255
    CEntityIOOutput m_OnOscillate; // offset 0x7E0, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartArrive; // offset 0x7F8, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartDepart; // offset 0x810, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndArrive; // offset 0x828, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndDepart; // offset 0x840, size 0x18, align 255
    GameTick_t m_nTickRotateRan; // offset 0x858, size 0x4, align 255
    bool m_bStartedRotating; // offset 0x85C, size 0x1, align 1
    char _pad_085D[0x3]; // offset 0x85D
    FuncRotatorRotationSummary_t m_rotationSummary; // offset 0x860, size 0x8, align 4
    float32 m_flTimeToReachMaxSpeed; // offset 0x868, size 0x4, align 4
    float32 m_flTimeToReachZeroSpeed; // offset 0x86C, size 0x4, align 4
    GameTime_t m_flTimeRotationStart; // offset 0x870, size 0x4, align 255
    GameTime_t m_flTimeRotationStop; // offset 0x874, size 0x4, align 255
    float32 m_flStartSpeed; // offset 0x878, size 0x4, align 4
    char _pad_087C[0x4]; // offset 0x87C
    Quaternion m_qSpawnOrientation; // offset 0x880, size 0x10, align 16
    bool m_bRecordHistory; // offset 0x890, size 0x1, align 1
    bool m_bReturningToPreviousRotation; // offset 0x891, size 0x1, align 1
    bool m_bReturningToInitialRotation; // offset 0x892, size 0x1, align 1
    char _pad_0893[0x1]; // offset 0x893
    float32 m_flMinYawRotation; // offset 0x894, size 0x4, align 4
    float32 m_flMaxYawRotation; // offset 0x898, size 0x4, align 4
    int32 m_nOscillationCount; // offset 0x89C, size 0x4, align 4
    bool m_bOscillationFromStart; // offset 0x8A0, size 0x1, align 1
    char _pad_08A1[0x7]; // offset 0x8A1
    CGameSoundEventName m_iszStartSound; // offset 0x8A8, size 0x8, align 8
    CGameSoundEventName m_iszLoopSound; // offset 0x8B0, size 0x8, align 8
    char _pad_08B8[0x18]; // offset 0x8B8
    CGameSoundEventName m_iszStopSound; // offset 0x8D0, size 0x8, align 8
    float32 m_flTargetAngle; // offset 0x8D8, size 0x4, align 4
    float32 m_flCurrentAngle; // offset 0x8DC, size 0x4, align 4
    CFuncRotator::RotationAxis_t m_eRotationAxis; // offset 0x8E0, size 0x4, align 4
    float32 m_flSpeedDriftFromOverRotate; // offset 0x8E4, size 0x4, align 4
    char _pad_08E8[0x8]; // offset 0x8E8
};
