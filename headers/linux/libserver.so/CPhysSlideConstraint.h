#pragma once

class CPhysSlideConstraint : public CPhysConstraint /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7E0]; // offset 0x0
    VectorWS m_axisEnd; // offset 0x7E0, size 0xC, align 4
    float32 m_slideFriction; // offset 0x7EC, size 0x4, align 4
    float32 m_systemLoadScale; // offset 0x7F0, size 0x4, align 4
    float32 m_initialOffset; // offset 0x7F4, size 0x4, align 4
    bool m_bEnableLinearConstraint; // offset 0x7F8, size 0x1, align 1
    bool m_bEnableAngularConstraint; // offset 0x7F9, size 0x1, align 1
    char _pad_07FA[0x2]; // offset 0x7FA
    float32 m_flMotorFrequency; // offset 0x7FC, size 0x4, align 4
    float32 m_flMotorDampingRatio; // offset 0x800, size 0x4, align 4
    bool m_bUseEntityPivot; // offset 0x804, size 0x1, align 1
    char _pad_0805[0x3]; // offset 0x805
    ConstraintSoundInfo m_soundInfo; // offset 0x808, size 0x98, align 8 | MNotSaved
};
