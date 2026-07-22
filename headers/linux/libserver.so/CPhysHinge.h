#pragma once

class CPhysHinge : public CPhysConstraint /*0x0*/  // sizeof 0x958, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    ConstraintSoundInfo m_soundInfo; // offset 0x7F0, size 0x98, align 8 | MNotSaved
    CEntityIOOutput m_NotifyMinLimitReached; // offset 0x888, size 0x18, align 255
    CEntityIOOutput m_NotifyMaxLimitReached; // offset 0x8A0, size 0x18, align 255
    bool m_bAtMinLimit; // offset 0x8B8, size 0x1, align 1
    bool m_bAtMaxLimit; // offset 0x8B9, size 0x1, align 1
    char _pad_08BA[0x2]; // offset 0x8BA
    constraint_hingeparams_t m_hinge; // offset 0x8BC, size 0x40, align 4
    float32 m_hingeFriction; // offset 0x8FC, size 0x4, align 4
    float32 m_systemLoadScale; // offset 0x900, size 0x4, align 4
    bool m_bIsAxisLocal; // offset 0x904, size 0x1, align 1 | MNotSaved
    char _pad_0905[0x3]; // offset 0x905
    float32 m_flMinRotation; // offset 0x908, size 0x4, align 4
    float32 m_flMaxRotation; // offset 0x90C, size 0x4, align 4
    float32 m_flInitialRotation; // offset 0x910, size 0x4, align 4
    float32 m_flMotorFrequency; // offset 0x914, size 0x4, align 4
    float32 m_flMotorDampingRatio; // offset 0x918, size 0x4, align 4
    float32 m_flAngleSpeed; // offset 0x91C, size 0x4, align 4
    float32 m_flAngleSpeedThreshold; // offset 0x920, size 0x4, align 4
    float32 m_flLimitsDebugVisRotation; // offset 0x924, size 0x4, align 4
    CEntityIOOutput m_OnStartMoving; // offset 0x928, size 0x18, align 255
    CEntityIOOutput m_OnStopMoving; // offset 0x940, size 0x18, align 255
};
