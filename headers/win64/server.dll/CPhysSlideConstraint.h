#pragma once

class CPhysSlideConstraint : public CPhysConstraint /*0x0*/  // sizeof 0x5C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x508]; // offset 0x0
    VectorWS m_axisEnd; // offset 0x508, size 0xC, align 4
    float32 m_slideFriction; // offset 0x514, size 0x4, align 4
    float32 m_systemLoadScale; // offset 0x518, size 0x4, align 4
    float32 m_initialOffset; // offset 0x51C, size 0x4, align 4
    bool m_bEnableLinearConstraint; // offset 0x520, size 0x1, align 1
    bool m_bEnableAngularConstraint; // offset 0x521, size 0x1, align 1
    char _pad_0522[0x2]; // offset 0x522
    float32 m_flMotorFrequency; // offset 0x524, size 0x4, align 4
    float32 m_flMotorDampingRatio; // offset 0x528, size 0x4, align 4
    bool m_bUseEntityPivot; // offset 0x52C, size 0x1, align 1
    char _pad_052D[0x3]; // offset 0x52D
    ConstraintSoundInfo m_soundInfo; // offset 0x530, size 0x98, align 255 | MNotSaved
};
