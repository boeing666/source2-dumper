#pragma once

class CFuncRotator : public CBaseModelEntity /*0x0*/  // sizeof 0x960, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CHandle< CBaseEntity > m_hRotatorTarget; // offset 0x780, size 0x4, align 4
    bool m_bIsRotating; // offset 0x784, size 0x1, align 1
    bool m_bIsReversing; // offset 0x785, size 0x1, align 1
    char _pad_0786[0x2]; // offset 0x786
    float32 m_flTimeToReachMaxSpeed; // offset 0x788, size 0x4, align 4
    float32 m_flTimeToReachZeroSpeed; // offset 0x78C, size 0x4, align 4
    float32 m_flDistanceAlongArcTraveled; // offset 0x790, size 0x4, align 4
    float32 m_flTimeToWaitOscillate; // offset 0x794, size 0x4, align 4
    GameTime_t m_flTimeRotationStart; // offset 0x798, size 0x4, align 255
    char _pad_079C[0x4]; // offset 0x79C
    Quaternion m_qLSPrevChange; // offset 0x7A0, size 0x10, align 16
    Quaternion m_qWSPrev; // offset 0x7B0, size 0x10, align 16
    Quaternion m_qWSInit; // offset 0x7C0, size 0x10, align 16
    Quaternion m_qLSInit; // offset 0x7D0, size 0x10, align 16
    Quaternion m_qLSOrientation; // offset 0x7E0, size 0x10, align 16
    CEntityIOOutput m_OnRotationStarted; // offset 0x7F0, size 0x18, align 255
    CEntityIOOutput m_OnRotationCompleted; // offset 0x808, size 0x18, align 255
    CEntityIOOutput m_OnOscillate; // offset 0x820, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartArrive; // offset 0x838, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartDepart; // offset 0x850, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndArrive; // offset 0x868, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndDepart; // offset 0x880, size 0x18, align 255
    bool m_bOscillateDepart; // offset 0x898, size 0x1, align 1
    char _pad_0899[0x3]; // offset 0x899
    int32 m_nOscillateCount; // offset 0x89C, size 0x4, align 4
    CFuncRotator::Rotate_t m_eRotateType; // offset 0x8A0, size 0x4, align 4
    CFuncRotator::Rotate_t m_ePrevRotateType; // offset 0x8A4, size 0x4, align 4
    bool m_bHasTargetOverride; // offset 0x8A8, size 0x1, align 1
    char _pad_08A9[0x7]; // offset 0x8A9
    Quaternion m_qOrientationOverride; // offset 0x8B0, size 0x10, align 16
    RotatorTargetSpace_t m_eSpaceOverride; // offset 0x8C0, size 0x4, align 4
    QAngle m_qAngularVelocity; // offset 0x8C4, size 0xC, align 4
    Vector m_vLookAtForcedUp; // offset 0x8D0, size 0xC, align 4
    char _pad_08DC[0x4]; // offset 0x8DC
    CUtlSymbolLarge m_strRotatorTarget; // offset 0x8E0, size 0x8, align 8
    bool m_bRecordHistory; // offset 0x8E8, size 0x1, align 1
    char _pad_08E9[0x7]; // offset 0x8E9
    CUtlVector< RotatorHistoryEntry_t > m_vecRotatorHistory; // offset 0x8F0, size 0x18, align 8
    bool m_bReturningToPreviousOrientation; // offset 0x908, size 0x1, align 1
    char _pad_0909[0x7]; // offset 0x909
    CUtlVector< RotatorQueueEntry_t > m_vecRotatorQueue; // offset 0x910, size 0x18, align 8
    CUtlVector< RotatorHistoryEntry_t > m_vecRotatorQueueHistory; // offset 0x928, size 0x18, align 8
    SolidType_t m_eSolidType; // offset 0x940, size 0x1, align 1
    char _pad_0941[0x3]; // offset 0x941
    CHandle< CFuncMover > m_hSpeedFromMover; // offset 0x944, size 0x4, align 4
    CUtlSymbolLarge m_iszSpeedFromMover; // offset 0x948, size 0x8, align 8
    float32 m_flSpeedScale; // offset 0x950, size 0x4, align 4
    float32 m_flMinYawRotation; // offset 0x954, size 0x4, align 4
    float32 m_flMaxYawRotation; // offset 0x958, size 0x4, align 4
    char _pad_095C[0x4]; // offset 0x95C
};
