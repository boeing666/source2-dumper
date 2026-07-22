#pragma once

class CFuncRotator : public CBaseModelEntity /*0x0*/  // sizeof 0xBC0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA4C]; // offset 0x0
    CFuncRotator::Rotate_t m_eRotateType; // offset 0xA4C, size 0x4, align 4
    bool m_bIsRotating; // offset 0xA50, size 0x1, align 1
    SolidType_t m_eSolidType; // offset 0xA51, size 0x1, align 1
    char _pad_0A52[0x2]; // offset 0xA52
    float32 m_flSpeed; // offset 0xA54, size 0x4, align 4
    float32 m_flTimeToCompleteRotation; // offset 0xA58, size 0x4, align 4
    CHandle< CBaseEntity > m_hRotatorTarget; // offset 0xA5C, size 0x4, align 4
    CUtlSymbolLarge m_strRotatorTarget; // offset 0xA60, size 0x8, align 8
    CUtlVector< Quaternion > m_vecLocalRotationHistory; // offset 0xA68, size 0x18, align 8
    CEntityIOOutput m_OnRotationStarted; // offset 0xA80, size 0x18, align 255
    CEntityIOOutput m_OnRotationCompleted; // offset 0xA98, size 0x18, align 255
    CEntityIOOutput m_OnOscillate; // offset 0xAB0, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartArrive; // offset 0xAC8, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartDepart; // offset 0xAE0, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndArrive; // offset 0xAF8, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndDepart; // offset 0xB10, size 0x18, align 255
    GameTick_t m_nTickRotateRan; // offset 0xB28, size 0x4, align 255
    bool m_bStartedRotating; // offset 0xB2C, size 0x1, align 1
    char _pad_0B2D[0x3]; // offset 0xB2D
    FuncRotatorRotationSummary_t m_rotationSummary; // offset 0xB30, size 0x8, align 4
    float32 m_flTimeToReachMaxSpeed; // offset 0xB38, size 0x4, align 4
    float32 m_flTimeToReachZeroSpeed; // offset 0xB3C, size 0x4, align 4
    GameTime_t m_flTimeRotationStart; // offset 0xB40, size 0x4, align 255
    GameTime_t m_flTimeRotationStop; // offset 0xB44, size 0x4, align 255
    float32 m_flStartSpeed; // offset 0xB48, size 0x4, align 4
    char _pad_0B4C[0x4]; // offset 0xB4C
    Quaternion m_qSpawnOrientation; // offset 0xB50, size 0x10, align 16
    bool m_bRecordHistory; // offset 0xB60, size 0x1, align 1
    bool m_bReturningToPreviousRotation; // offset 0xB61, size 0x1, align 1
    bool m_bReturningToInitialRotation; // offset 0xB62, size 0x1, align 1
    char _pad_0B63[0x1]; // offset 0xB63
    float32 m_flMinYawRotation; // offset 0xB64, size 0x4, align 4
    float32 m_flMaxYawRotation; // offset 0xB68, size 0x4, align 4
    int32 m_nOscillationCount; // offset 0xB6C, size 0x4, align 4
    bool m_bOscillationFromStart; // offset 0xB70, size 0x1, align 1
    char _pad_0B71[0x7]; // offset 0xB71
    CGameSoundEventName m_iszStartSound; // offset 0xB78, size 0x8, align 8
    CGameSoundEventName m_iszLoopSound; // offset 0xB80, size 0x8, align 8
    char _pad_0B88[0x18]; // offset 0xB88
    CGameSoundEventName m_iszStopSound; // offset 0xBA0, size 0x8, align 8
    float32 m_flTargetAngle; // offset 0xBA8, size 0x4, align 4
    float32 m_flCurrentAngle; // offset 0xBAC, size 0x4, align 4
    CFuncRotator::RotationAxis_t m_eRotationAxis; // offset 0xBB0, size 0x4, align 4
    float32 m_flSpeedDriftFromOverRotate; // offset 0xBB4, size 0x4, align 4
    char _pad_0BB8[0x8]; // offset 0xBB8
};
