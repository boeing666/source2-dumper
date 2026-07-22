#pragma once

class CPhysBallSocket : public CPhysConstraint /*0x0*/  // sizeof 0x510, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4F8]; // offset 0x0
    float32 m_flJointFriction; // offset 0x4F8, size 0x4, align 4
    bool m_bEnableSwingLimit; // offset 0x4FC, size 0x1, align 1
    char _pad_04FD[0x3]; // offset 0x4FD
    float32 m_flSwingLimit; // offset 0x500, size 0x4, align 4
    bool m_bEnableTwistLimit; // offset 0x504, size 0x1, align 1
    char _pad_0505[0x3]; // offset 0x505
    float32 m_flMinTwistAngle; // offset 0x508, size 0x4, align 4
    float32 m_flMaxTwistAngle; // offset 0x50C, size 0x4, align 4
};
