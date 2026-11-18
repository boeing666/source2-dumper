#pragma once

class CFuncRotator : public CBaseModelEntity /*0x0*/  // sizeof 0xA80, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    CFuncRotator::Rotate_t m_eRotateType; // offset 0x8B8, size 0x4, align 4
    bool m_bIsRotating; // offset 0x8BC, size 0x1, align 1
    SolidType_t m_eSolidType; // offset 0x8BD, size 0x1, align 1
    char _pad_08BE[0x2]; // offset 0x8BE
    float32 m_flSpeed; // offset 0x8C0, size 0x4, align 4
    float32 m_flRotationDistanceDegrees; // offset 0x8C4, size 0x4, align 4
    float32 m_flTimeToCompleteRotation; // offset 0x8C8, size 0x4, align 4
    CHandle< CBaseEntity > m_hRotatorTarget; // offset 0x8CC, size 0x4, align 4
    CUtlSymbolLarge m_strRotatorTarget; // offset 0x8D0, size 0x8, align 8
    CEntityIOOutput m_OnRotationStarted; // offset 0x8D8, size 0x18, align 255
    CEntityIOOutput m_OnRotationCompleted; // offset 0x8F0, size 0x18, align 255
    CEntityIOOutput m_OnOscillate; // offset 0x908, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartArrive; // offset 0x920, size 0x18, align 255
    CEntityIOOutput m_OnOscillateStartDepart; // offset 0x938, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndArrive; // offset 0x950, size 0x18, align 255
    CEntityIOOutput m_OnOscillateEndDepart; // offset 0x968, size 0x18, align 255
    GameTick_t m_nTickRotateRan; // offset 0x980, size 0x4, align 255
    GameTick_t m_nTickDependenciesResolved; // offset 0x984, size 0x4, align 255
    bool m_bStartedRotating; // offset 0x988, size 0x1, align 1
    char _pad_0989[0x3]; // offset 0x989
    FuncRotatorRotationSummary_t m_rotationSummary; // offset 0x98C, size 0x8, align 4
    float32 m_flTimeToReachMaxSpeed; // offset 0x994, size 0x4, align 4
    float32 m_flTimeToReachZeroSpeed; // offset 0x998, size 0x4, align 4
    GameTime_t m_flTimeRotationStart; // offset 0x99C, size 0x4, align 255
    GameTime_t m_flTimeRotationStop; // offset 0x9A0, size 0x4, align 255
    float32 m_flStartSpeed; // offset 0x9A4, size 0x4, align 4
    char _pad_09A8[0x8]; // offset 0x9A8
    Quaternion m_qLocalOrientation; // offset 0x9B0, size 0x10, align 16
    QAngle m_angLastWrittenLocal; // offset 0x9C0, size 0xC, align 4
    char _pad_09CC[0x4]; // offset 0x9CC
    Quaternion m_qSpawnOrientation; // offset 0x9D0, size 0x10, align 16
    bool m_bReturningToInitialRotation; // offset 0x9E0, size 0x1, align 1
    char _pad_09E1[0x3]; // offset 0x9E1
    float32 m_flMinYawRotation; // offset 0x9E4, size 0x4, align 4
    float32 m_flMaxYawRotation; // offset 0x9E8, size 0x4, align 4
    bool m_bOscillationFromStart; // offset 0x9EC, size 0x1, align 1
    char _pad_09ED[0x3]; // offset 0x9ED
    CGameSoundEventName m_iszStartSound; // offset 0x9F0, size 0x8, align 8
    CGameSoundEventName m_iszLoopSound; // offset 0x9F8, size 0x8, align 8
    char _pad_0A00[0x18]; // offset 0xA00
    CGameSoundEventName m_iszStopSound; // offset 0xA18, size 0x8, align 8
    float32 m_flTargetAngle; // offset 0xA20, size 0x4, align 4
    float32 m_flCurrentAngle; // offset 0xA24, size 0x4, align 4
    CFuncRotator::RotationAxis_t m_eRotationAxis; // offset 0xA28, size 0x4, align 4
    float32 m_flSpeedDriftFromOverRotate; // offset 0xA2C, size 0x4, align 4
    char _pad_0A30[0x4]; // offset 0xA30
    bool m_bQueueStop; // offset 0xA34, size 0x1, align 1
    bool m_bIsImGuiLogging; // offset 0xA35, size 0x1, align 1
    bool m_bIsImGuiEntTextLogging; // offset 0xA36, size 0x1, align 1
    char _pad_0A37[0x49]; // offset 0xA37
};
