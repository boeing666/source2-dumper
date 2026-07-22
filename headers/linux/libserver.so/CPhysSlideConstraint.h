#pragma once

class CPhysSlideConstraint : public CPhysConstraint /*0x0*/  // sizeof 0x8B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    VectorWS m_axisEnd; // offset 0x7F0, size 0xC, align 4
    float32 m_slideFriction; // offset 0x7FC, size 0x4, align 4
    float32 m_systemLoadScale; // offset 0x800, size 0x4, align 4
    float32 m_initialOffset; // offset 0x804, size 0x4, align 4
    bool m_bEnableLinearConstraint; // offset 0x808, size 0x1, align 1
    bool m_bEnableAngularConstraint; // offset 0x809, size 0x1, align 1
    char _pad_080A[0x2]; // offset 0x80A
    float32 m_flMotorFrequency; // offset 0x80C, size 0x4, align 4
    float32 m_flMotorDampingRatio; // offset 0x810, size 0x4, align 4
    bool m_bUseEntityPivot; // offset 0x814, size 0x1, align 1
    char _pad_0815[0x3]; // offset 0x815
    ConstraintSoundInfo m_soundInfo; // offset 0x818, size 0x98, align 8 | MNotSaved
};
