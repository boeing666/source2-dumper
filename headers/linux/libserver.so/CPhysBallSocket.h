#pragma once

class CPhysBallSocket : public CPhysConstraint /*0x0*/  // sizeof 0x800, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    float32 m_flJointFriction; // offset 0x7E8, size 0x4, align 4
    bool m_bEnableSwingLimit; // offset 0x7EC, size 0x1, align 1
    char _pad_07ED[0x3]; // offset 0x7ED
    float32 m_flSwingLimit; // offset 0x7F0, size 0x4, align 4
    bool m_bEnableTwistLimit; // offset 0x7F4, size 0x1, align 1
    char _pad_07F5[0x3]; // offset 0x7F5
    float32 m_flMinTwistAngle; // offset 0x7F8, size 0x4, align 4
    float32 m_flMaxTwistAngle; // offset 0x7FC, size 0x4, align 4
};
