#pragma once

class CPhysHinge : public CPhysConstraint /*0x0*/  // sizeof 0x678, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x510]; // offset 0x0
    ConstraintSoundInfo m_soundInfo; // offset 0x510, size 0x98, align 8 | MNotSaved
    CEntityIOOutput m_NotifyMinLimitReached; // offset 0x5A8, size 0x18, align 255
    CEntityIOOutput m_NotifyMaxLimitReached; // offset 0x5C0, size 0x18, align 255
    bool m_bAtMinLimit; // offset 0x5D8, size 0x1, align 1
    bool m_bAtMaxLimit; // offset 0x5D9, size 0x1, align 1
    char _pad_05DA[0x2]; // offset 0x5DA
    constraint_hingeparams_t m_hinge; // offset 0x5DC, size 0x40, align 4
    float32 m_hingeFriction; // offset 0x61C, size 0x4, align 4
    float32 m_systemLoadScale; // offset 0x620, size 0x4, align 4
    bool m_bIsAxisLocal; // offset 0x624, size 0x1, align 1 | MNotSaved
    char _pad_0625[0x3]; // offset 0x625
    float32 m_flMinRotation; // offset 0x628, size 0x4, align 4
    float32 m_flMaxRotation; // offset 0x62C, size 0x4, align 4
    float32 m_flInitialRotation; // offset 0x630, size 0x4, align 4
    float32 m_flMotorFrequency; // offset 0x634, size 0x4, align 4
    float32 m_flMotorDampingRatio; // offset 0x638, size 0x4, align 4
    float32 m_flAngleSpeed; // offset 0x63C, size 0x4, align 4
    float32 m_flAngleSpeedThreshold; // offset 0x640, size 0x4, align 4
    float32 m_flLimitsDebugVisRotation; // offset 0x644, size 0x4, align 4
    CEntityIOOutput m_OnStartMoving; // offset 0x648, size 0x18, align 255
    CEntityIOOutput m_OnStopMoving; // offset 0x660, size 0x18, align 255
};
