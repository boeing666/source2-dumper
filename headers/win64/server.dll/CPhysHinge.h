#pragma once

class CPhysHinge : public CPhysConstraint /*0x0*/  // sizeof 0x668, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x500]; // offset 0x0
    ConstraintSoundInfo m_soundInfo; // offset 0x500, size 0x98, align 8 | MNotSaved
    CEntityIOOutput m_NotifyMinLimitReached; // offset 0x598, size 0x18, align 255
    CEntityIOOutput m_NotifyMaxLimitReached; // offset 0x5B0, size 0x18, align 255
    bool m_bAtMinLimit; // offset 0x5C8, size 0x1, align 1
    bool m_bAtMaxLimit; // offset 0x5C9, size 0x1, align 1
    char _pad_05CA[0x2]; // offset 0x5CA
    constraint_hingeparams_t m_hinge; // offset 0x5CC, size 0x40, align 4
    float32 m_hingeFriction; // offset 0x60C, size 0x4, align 4
    float32 m_systemLoadScale; // offset 0x610, size 0x4, align 4
    bool m_bIsAxisLocal; // offset 0x614, size 0x1, align 1 | MNotSaved
    char _pad_0615[0x3]; // offset 0x615
    float32 m_flMinRotation; // offset 0x618, size 0x4, align 4
    float32 m_flMaxRotation; // offset 0x61C, size 0x4, align 4
    float32 m_flInitialRotation; // offset 0x620, size 0x4, align 4
    float32 m_flMotorFrequency; // offset 0x624, size 0x4, align 4
    float32 m_flMotorDampingRatio; // offset 0x628, size 0x4, align 4
    float32 m_flAngleSpeed; // offset 0x62C, size 0x4, align 4
    float32 m_flAngleSpeedThreshold; // offset 0x630, size 0x4, align 4
    float32 m_flLimitsDebugVisRotation; // offset 0x634, size 0x4, align 4
    CEntityIOOutput m_OnStartMoving; // offset 0x638, size 0x18, align 255
    CEntityIOOutput m_OnStopMoving; // offset 0x650, size 0x18, align 255
};
