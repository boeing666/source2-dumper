#pragma once

class CFuncRotator : public CBaseModelEntity /*0x0*/  // sizeof 0xD60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB9C]; // offset 0x0
    CFuncRotator::Rotate_t m_eRotateType; // offset 0xB9C, size 0x4, align 4
    bool m_bIsRotating; // offset 0xBA0, size 0x1, align 1
    SolidType_t m_eSolidType; // offset 0xBA1, size 0x1, align 1
    char _pad_0BA2[0x2]; // offset 0xBA2
    float32 m_flSpeed; // offset 0xBA4, size 0x4, align 4
    float32 m_flRotationDistanceDegrees; // offset 0xBA8, size 0x4, align 4
    float32 m_flTimeToCompleteRotation; // offset 0xBAC, size 0x4, align 4
    CHandle< CBaseEntity > m_hRotatorTarget; // offset 0xBB0, size 0x4, align 4
    char _pad_0BB4[0x4]; // offset 0xBB4
    CUtlSymbolLarge m_strRotatorTarget; // offset 0xBB8, size 0x8, align 8
    CEntityIOOutput m_OnRotationStarted; // offset 0xBC0, size 0x18, align 255
    CEntityIOOutput m_OnRotationCompleted; // offset 0xBD8, size 0x18, align 255
    CEntityIOOutput m_OnOscillate; // offset 0xBF0, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartArrive; // offset 0xC08, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartDepart; // offset 0xC20, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndArrive; // offset 0xC38, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndDepart; // offset 0xC50, size 0x18, align 255
    GameTick_t m_nTickRotateRan; // offset 0xC68, size 0x4, align 255
    GameTick_t m_nTickDependenciesResolved; // offset 0xC6C, size 0x4, align 255
    bool m_bStartedRotating; // offset 0xC70, size 0x1, align 1
    char _pad_0C71[0x3]; // offset 0xC71
    FuncRotatorRotationSummary_t m_rotationSummary; // offset 0xC74, size 0x8, align 4
    float32 m_flTimeToReachMaxSpeed; // offset 0xC7C, size 0x4, align 4
    float32 m_flTimeToReachZeroSpeed; // offset 0xC80, size 0x4, align 4
    GameTime_t m_flTimeRotationStart; // offset 0xC84, size 0x4, align 255
    GameTime_t m_flTimeRotationStop; // offset 0xC88, size 0x4, align 255
    float32 m_flStartSpeed; // offset 0xC8C, size 0x4, align 4
    Quaternion m_qLocalOrientation; // offset 0xC90, size 0x10, align 16
    QAngle m_angLastWrittenLocal; // offset 0xCA0, size 0xC, align 4
    char _pad_0CAC[0x4]; // offset 0xCAC
    Quaternion m_qSpawnOrientation; // offset 0xCB0, size 0x10, align 16
    bool m_bReturningToInitialRotation; // offset 0xCC0, size 0x1, align 1
    char _pad_0CC1[0x3]; // offset 0xCC1
    float32 m_flMinYawRotation; // offset 0xCC4, size 0x4, align 4
    float32 m_flMaxYawRotation; // offset 0xCC8, size 0x4, align 4
    bool m_bOscillationFromStart; // offset 0xCCC, size 0x1, align 1
    char _pad_0CCD[0x3]; // offset 0xCCD
    CGameSoundEventName m_iszStartSound; // offset 0xCD0, size 0x8, align 8
    CGameSoundEventName m_iszLoopSound; // offset 0xCD8, size 0x8, align 8
    char _pad_0CE0[0x18]; // offset 0xCE0
    CGameSoundEventName m_iszStopSound; // offset 0xCF8, size 0x8, align 8
    float32 m_flTargetAngle; // offset 0xD00, size 0x4, align 4
    float32 m_flCurrentAngle; // offset 0xD04, size 0x4, align 4
    CFuncRotator::RotationAxis_t m_eRotationAxis; // offset 0xD08, size 0x4, align 4
    float32 m_flSpeedDriftFromOverRotate; // offset 0xD0C, size 0x4, align 4
    char _pad_0D10[0x4]; // offset 0xD10
    bool m_bQueueStop; // offset 0xD14, size 0x1, align 1
    bool m_bIsImGuiLogging; // offset 0xD15, size 0x1, align 1
    bool m_bIsImGuiEntTextLogging; // offset 0xD16, size 0x1, align 1
    char _pad_0D17[0x49]; // offset 0xD17
};
