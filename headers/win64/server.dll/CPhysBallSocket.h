#pragma once

class CPhysBallSocket : public CPhysConstraint /*0x0*/  // sizeof 0x520, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x508]; // offset 0x0
    float32 m_flJointFriction; // offset 0x508, size 0x4, align 4
    bool m_bEnableSwingLimit; // offset 0x50C, size 0x1, align 1
    char _pad_050D[0x3]; // offset 0x50D
    float32 m_flSwingLimit; // offset 0x510, size 0x4, align 4
    bool m_bEnableTwistLimit; // offset 0x514, size 0x1, align 1
    char _pad_0515[0x3]; // offset 0x515
    float32 m_flMinTwistAngle; // offset 0x518, size 0x4, align 4
    float32 m_flMaxTwistAngle; // offset 0x51C, size 0x4, align 4
};
