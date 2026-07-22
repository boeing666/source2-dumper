#pragma once

class CPhysBallSocket : public CPhysConstraint /*0x0*/  // sizeof 0x7F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7D8]; // offset 0x0
    float32 m_flJointFriction; // offset 0x7D8, size 0x4, align 4
    bool m_bEnableSwingLimit; // offset 0x7DC, size 0x1, align 1
    char _pad_07DD[0x3]; // offset 0x7DD
    float32 m_flSwingLimit; // offset 0x7E0, size 0x4, align 4
    bool m_bEnableTwistLimit; // offset 0x7E4, size 0x1, align 1
    char _pad_07E5[0x3]; // offset 0x7E5
    float32 m_flMinTwistAngle; // offset 0x7E8, size 0x4, align 4
    float32 m_flMaxTwistAngle; // offset 0x7EC, size 0x4, align 4
};
